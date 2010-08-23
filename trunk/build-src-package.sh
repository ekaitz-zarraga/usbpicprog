#!/bin/bash


if [ $# -ne 0 ]
then
  RELEASE=$1
  if [ $# -ne 1 ]
  then
    DISTS=$2
  else
    DISTS="karmic lucid maverick"
  fi
else
  DISTS="karmic lucid maverick"
  RELEASE=$(svnversion -n)
  RELEASE=${RELEASE:0:3}
#-$(date +%Y%m%d)
fi

echo Building release: $RELEASE

LASTLOGMESSAGE=$(svn log -r $RELEASE | sed '$d' |sed '$d'| sed '1d' | sed '1d')
echo $LASTLOGMESSAGE

if [ -d release ]
then
	echo Directory release exists, removing ...
	rm -rf release
fi
echo making release directory
mkdir release
#mkdir release/usbpicprog
#mkdir release/firmware

echo exporting svn tree...
#svn export uc_code release/firmware/firmware-$RELEASE
#svn export boot release/firmware/boot1.0
svn export upp_wx release/usbpicprog-$RELEASE

#echo copy hexfiles...
#cp release/firmware/firmware-$RELEASE/uc_code.hex release/firmware/firmware-$RELEASE.hex
#cp release/firmware/boot1.0/Boot.hex release/firmware/boot1.0.hex

#echo making firmware tar.gz archive...
#cd release/firmware
#tar -zcvhf firmware-$RELEASE.tar.gz *
#mv firmware-$RELEASE.tar.gz ..
#cd ..

echo creating autogen files
cd release/usbpicprog-$RELEASE
./autogen.sh
make distclean
rm -rf m4
rm -rf autom4te.cache
if [ ${RELEASE:0:2} = "0." ]; then
( echo '// generated file';
    echo '#define UPP_VERSION "usbpicprog '$RELEASE'"'; )> svn_revision.h;
else
( echo '// generated file';
    echo '#define SVN_REVISION "usbpicprog '$RELEASE'"'; )> svn_revision.h;
fi

cd ..
echo creating source archive...
tar -zcvhf usbpicprog_$RELEASE.orig.tar.gz usbpicprog-$RELEASE
rm -rf usbpicprog-$RELEASE
tar -zxvf usbpicprog_$RELEASE.orig.tar.gz
cd usbpicprog-$RELEASE
#dh_make -e fransschreuder@gmail.com -s

#cp debian-src/* debian
for DIST in ${DISTS} ; do
	COUNT=$(($COUNT-1))
	cp ../../upp_wx/debian/changelog debian/changelog
	dch -D $DIST -m -v $RELEASE$COUNT $LASTLOGMESSAGE -b
	cp debian/changelog ../../upp_wx/debian
	debuild -S -k8AD5905E
	
done

