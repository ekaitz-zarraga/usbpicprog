# Microsoft Developer Studio Project File - Name="upp_wx" - Package Owner=<4>
# Microsoft Developer Studio Generated Build File, Format Version 6.00
# ** DO NOT EDIT **

# TARGTYPE "Win32 (x86) Application" 0x0101

CFG=upp_wx - Win32 Static Release Multilib
!MESSAGE This is not a valid makefile. To build this project using NMAKE,
!MESSAGE use the Export Makefile command and run
!MESSAGE 
!MESSAGE NMAKE /f "upp_wx.mak".
!MESSAGE 
!MESSAGE You can specify a configuration when running NMAKE
!MESSAGE by defining the macro CFG on the command line. For example:
!MESSAGE 
!MESSAGE NMAKE /f "upp_wx.mak" CFG="upp_wx - Win32 Static Release Multilib"
!MESSAGE 
!MESSAGE Possible choices for configuration are:
!MESSAGE 
!MESSAGE "upp_wx - Win32 DLL Debug Monolithic" (based on "Win32 (x86) Application")
!MESSAGE "upp_wx - Win32 DLL Debug Multilib" (based on "Win32 (x86) Application")
!MESSAGE "upp_wx - Win32 DLL Release Monolithic" (based on "Win32 (x86) Application")
!MESSAGE "upp_wx - Win32 DLL Release Multilib" (based on "Win32 (x86) Application")
!MESSAGE "upp_wx - Win32 Static Debug Monolithic" (based on "Win32 (x86) Application")
!MESSAGE "upp_wx - Win32 Static Debug Multilib" (based on "Win32 (x86) Application")
!MESSAGE "upp_wx - Win32 Static Release Monolithic" (based on "Win32 (x86) Application")
!MESSAGE "upp_wx - Win32 Static Release Multilib" (based on "Win32 (x86) Application")
!MESSAGE 

# Begin Project
# PROP AllowPerConfigDependencies 0
# PROP Scc_ProjName ""
# PROP Scc_LocalPath ""
CPP=cl.exe
MTL=midl.exe
RSC=rc.exe

!IF  "$(CFG)" == "upp_wx - Win32 DLL Debug Monolithic"

# PROP BASE Use_MFC 0
# PROP BASE Use_Debug_Libraries 1
# PROP BASE Output_Dir "vcmswud_dll"
# PROP BASE Intermediate_Dir "vcmswud_dll\upp_wx"
# PROP BASE Target_Dir ""
# PROP Use_MFC 0
# PROP Use_Debug_Libraries 1
# PROP Output_Dir "vcmswud_dll"
# PROP Intermediate_Dir "vcmswud_dll\upp_wx"
# PROP Target_Dir ""
# ADD BASE CPP /nologo /FD /MDd /W1 /GR /EHsc /I "$(WXWIN)\lib\vc_dll\mswud" /I "$(WXWIN)\include" /Od /Gm /Zi /Fdvcmswud_dll\usbpicprog.pdb /I "..\..\src" /I "$(LIBUSB)\include" /D "WIN32" /D "WXUSINGDLL" /D "_UNICODE" /D "__WXDEBUG__" /D "__WXMSW__" /D "_WINDOWS" /D "_DEBUG" /c
# ADD CPP /nologo /FD /MDd /W1 /GR /EHsc /I "$(WXWIN)\lib\vc_dll\mswud" /I "$(WXWIN)\include" /Od /Gm /Zi /Fdvcmswud_dll\usbpicprog.pdb /I "..\..\src" /I "$(LIBUSB)\include" /D "WIN32" /D "WXUSINGDLL" /D "_UNICODE" /D "__WXDEBUG__" /D "__WXMSW__" /D "_WINDOWS" /D "_DEBUG" /c
# ADD BASE MTL /nologo /D "WIN32" /D "WXUSINGDLL" /D "_UNICODE" /D "__WXDEBUG__" /D "__WXMSW__" /D "_WINDOWS" /D "_DEBUG" /mktyplib203 /win32
# ADD MTL /nologo /D "WIN32" /D "WXUSINGDLL" /D "_UNICODE" /D "__WXDEBUG__" /D "__WXMSW__" /D "_WINDOWS" /D "_DEBUG" /mktyplib203 /win32
# ADD BASE RSC /l 0x409 /d "WXUSINGDLL" /d "_UNICODE" /d "__WXDEBUG__" /d "__WXMSW__" /i "$(WXWIN)\lib\vc_dll\mswud" /i "$(WXWIN)\include" /d "_WINDOWS" /d "_DEBUG" /i "..\..\src" /i $(LIBUSB)\include
# ADD RSC /l 0x409 /d "WXUSINGDLL" /d "_UNICODE" /d "__WXDEBUG__" /d "__WXMSW__" /i "$(WXWIN)\lib\vc_dll\mswud" /i "$(WXWIN)\include" /d "_WINDOWS" /d "_DEBUG" /i "..\..\src" /i $(LIBUSB)\include
BSC32=bscmake.exe
# ADD BASE BSC32 /nologo
# ADD BSC32 /nologo
LINK32=link.exe
# ADD BASE LINK32 libusb.lib wxmsw29ud.lib wxtiffd.lib wxjpegd.lib wxpngd.lib wxzlibd.lib wxregexud.lib wxexpatd.lib kernel32.lib user32.lib gdi32.lib comdlg32.lib winspool.lib winmm.lib shell32.lib comctl32.lib ole32.lib oleaut32.lib uuid.lib rpcrt4.lib advapi32.lib wsock32.lib oleacc.lib /nologo /machine:i386 /out:"vcmswud_dll\usbpicprog.exe" /libpath:"$(WXWIN)\lib\vc_dll" /subsystem:windows /debug /pdb:"vcmswud_dll\usbpicprog.pdb" /libpath:"$(LIBUSB)\lib\msvc"
# ADD LINK32 libusb.lib wxmsw29ud.lib wxtiffd.lib wxjpegd.lib wxpngd.lib wxzlibd.lib wxregexud.lib wxexpatd.lib kernel32.lib user32.lib gdi32.lib comdlg32.lib winspool.lib winmm.lib shell32.lib comctl32.lib ole32.lib oleaut32.lib uuid.lib rpcrt4.lib advapi32.lib wsock32.lib oleacc.lib /nologo /machine:i386 /out:"vcmswud_dll\usbpicprog.exe" /libpath:"$(WXWIN)\lib\vc_dll" /subsystem:windows /debug /pdb:"vcmswud_dll\usbpicprog.pdb" /libpath:"$(LIBUSB)\lib\msvc"

!ELSEIF  "$(CFG)" == "upp_wx - Win32 DLL Debug Multilib"

# PROP BASE Use_MFC 0
# PROP BASE Use_Debug_Libraries 1
# PROP BASE Output_Dir "vcmswud_dll"
# PROP BASE Intermediate_Dir "vcmswud_dll\upp_wx"
# PROP BASE Target_Dir ""
# PROP Use_MFC 0
# PROP Use_Debug_Libraries 1
# PROP Output_Dir "vcmswud_dll"
# PROP Intermediate_Dir "vcmswud_dll\upp_wx"
# PROP Target_Dir ""
# ADD BASE CPP /nologo /FD /MDd /W1 /GR /EHsc /I "$(WXWIN)\lib\vc_dll\mswud" /I "$(WXWIN)\include" /Od /Gm /Zi /Fdvcmswud_dll\usbpicprog.pdb /I "..\..\src" /I "$(LIBUSB)\include" /D "WIN32" /D "WXUSINGDLL" /D "_UNICODE" /D "__WXDEBUG__" /D "__WXMSW__" /D "_WINDOWS" /D "_DEBUG" /c
# ADD CPP /nologo /FD /MDd /W1 /GR /EHsc /I "$(WXWIN)\lib\vc_dll\mswud" /I "$(WXWIN)\include" /Od /Gm /Zi /Fdvcmswud_dll\usbpicprog.pdb /I "..\..\src" /I "$(LIBUSB)\include" /D "WIN32" /D "WXUSINGDLL" /D "_UNICODE" /D "__WXDEBUG__" /D "__WXMSW__" /D "_WINDOWS" /D "_DEBUG" /c
# ADD BASE MTL /nologo /D "WIN32" /D "WXUSINGDLL" /D "_UNICODE" /D "__WXDEBUG__" /D "__WXMSW__" /D "_WINDOWS" /D "_DEBUG" /mktyplib203 /win32
# ADD MTL /nologo /D "WIN32" /D "WXUSINGDLL" /D "_UNICODE" /D "__WXDEBUG__" /D "__WXMSW__" /D "_WINDOWS" /D "_DEBUG" /mktyplib203 /win32
# ADD BASE RSC /l 0x409 /d "WXUSINGDLL" /d "_UNICODE" /d "__WXDEBUG__" /d "__WXMSW__" /i "$(WXWIN)\lib\vc_dll\mswud" /i "$(WXWIN)\include" /d "_WINDOWS" /d "_DEBUG" /i "..\..\src" /i $(LIBUSB)\include
# ADD RSC /l 0x409 /d "WXUSINGDLL" /d "_UNICODE" /d "__WXDEBUG__" /d "__WXMSW__" /i "$(WXWIN)\lib\vc_dll\mswud" /i "$(WXWIN)\include" /d "_WINDOWS" /d "_DEBUG" /i "..\..\src" /i $(LIBUSB)\include
BSC32=bscmake.exe
# ADD BASE BSC32 /nologo
# ADD BSC32 /nologo
LINK32=link.exe
# ADD BASE LINK32 libusb.lib wxmsw29ud_adv.lib wxbase29ud_xml.lib wxmsw29ud_core.lib wxbase29ud.lib wxtiffd.lib wxjpegd.lib wxpngd.lib wxzlibd.lib wxregexud.lib wxexpatd.lib kernel32.lib user32.lib gdi32.lib comdlg32.lib winspool.lib winmm.lib shell32.lib comctl32.lib ole32.lib oleaut32.lib uuid.lib rpcrt4.lib advapi32.lib wsock32.lib oleacc.lib /nologo /machine:i386 /out:"vcmswud_dll\usbpicprog.exe" /libpath:"$(WXWIN)\lib\vc_dll" /subsystem:windows /debug /pdb:"vcmswud_dll\usbpicprog.pdb" /libpath:"$(LIBUSB)\lib\msvc"
# ADD LINK32 libusb.lib wxmsw29ud_adv.lib wxbase29ud_xml.lib wxmsw29ud_core.lib wxbase29ud.lib wxtiffd.lib wxjpegd.lib wxpngd.lib wxzlibd.lib wxregexud.lib wxexpatd.lib kernel32.lib user32.lib gdi32.lib comdlg32.lib winspool.lib winmm.lib shell32.lib comctl32.lib ole32.lib oleaut32.lib uuid.lib rpcrt4.lib advapi32.lib wsock32.lib oleacc.lib /nologo /machine:i386 /out:"vcmswud_dll\usbpicprog.exe" /libpath:"$(WXWIN)\lib\vc_dll" /subsystem:windows /debug /pdb:"vcmswud_dll\usbpicprog.pdb" /libpath:"$(LIBUSB)\lib\msvc"

!ELSEIF  "$(CFG)" == "upp_wx - Win32 DLL Release Monolithic"

# PROP BASE Use_MFC 0
# PROP BASE Use_Debug_Libraries 0
# PROP BASE Output_Dir "vcmswu_dll"
# PROP BASE Intermediate_Dir "vcmswu_dll\upp_wx"
# PROP BASE Target_Dir ""
# PROP Use_MFC 0
# PROP Use_Debug_Libraries 0
# PROP Output_Dir "vcmswu_dll"
# PROP Intermediate_Dir "vcmswu_dll\upp_wx"
# PROP Target_Dir ""
# ADD BASE CPP /nologo /FD /MD /W1 /GR /EHsc /I "$(WXWIN)\lib\vc_dll\mswu" /I "$(WXWIN)\include" /O2 /Fdvcmswu_dll\usbpicprog.pdb /I "..\..\src" /I "$(LIBUSB)\include" /D "WIN32" /D "WXUSINGDLL" /D "_UNICODE" /D "__WXMSW__" /D "_WINDOWS" /c
# ADD CPP /nologo /FD /MD /W1 /GR /EHsc /I "$(WXWIN)\lib\vc_dll\mswu" /I "$(WXWIN)\include" /O2 /Fdvcmswu_dll\usbpicprog.pdb /I "..\..\src" /I "$(LIBUSB)\include" /D "WIN32" /D "WXUSINGDLL" /D "_UNICODE" /D "__WXMSW__" /D "_WINDOWS" /c
# ADD BASE MTL /nologo /D "WIN32" /D "WXUSINGDLL" /D "_UNICODE" /D "__WXMSW__" /D "_WINDOWS" /mktyplib203 /win32
# ADD MTL /nologo /D "WIN32" /D "WXUSINGDLL" /D "_UNICODE" /D "__WXMSW__" /D "_WINDOWS" /mktyplib203 /win32
# ADD BASE RSC /l 0x409 /d "WXUSINGDLL" /d "_UNICODE" /d "__WXMSW__" /i "$(WXWIN)\lib\vc_dll\mswu" /i "$(WXWIN)\include" /d "_WINDOWS" /i "..\..\src" /i $(LIBUSB)\include
# ADD RSC /l 0x409 /d "WXUSINGDLL" /d "_UNICODE" /d "__WXMSW__" /i "$(WXWIN)\lib\vc_dll\mswu" /i "$(WXWIN)\include" /d "_WINDOWS" /i "..\..\src" /i $(LIBUSB)\include
BSC32=bscmake.exe
# ADD BASE BSC32 /nologo
# ADD BSC32 /nologo
LINK32=link.exe
# ADD BASE LINK32 libusb.lib wxmsw29u.lib wxtiff.lib wxjpeg.lib wxpng.lib wxzlib.lib wxregexu.lib wxexpat.lib kernel32.lib user32.lib gdi32.lib comdlg32.lib winspool.lib winmm.lib shell32.lib comctl32.lib ole32.lib oleaut32.lib uuid.lib rpcrt4.lib advapi32.lib wsock32.lib oleacc.lib /nologo /machine:i386 /out:"vcmswu_dll\usbpicprog.exe" /libpath:"$(WXWIN)\lib\vc_dll" /subsystem:windows /pdb:"vcmswu_dll\usbpicprog.pdb" /libpath:"$(LIBUSB)\lib\msvc"
# ADD LINK32 libusb.lib wxmsw29u.lib wxtiff.lib wxjpeg.lib wxpng.lib wxzlib.lib wxregexu.lib wxexpat.lib kernel32.lib user32.lib gdi32.lib comdlg32.lib winspool.lib winmm.lib shell32.lib comctl32.lib ole32.lib oleaut32.lib uuid.lib rpcrt4.lib advapi32.lib wsock32.lib oleacc.lib /nologo /machine:i386 /out:"vcmswu_dll\usbpicprog.exe" /libpath:"$(WXWIN)\lib\vc_dll" /subsystem:windows /pdb:"vcmswu_dll\usbpicprog.pdb" /libpath:"$(LIBUSB)\lib\msvc"

!ELSEIF  "$(CFG)" == "upp_wx - Win32 DLL Release Multilib"

# PROP BASE Use_MFC 0
# PROP BASE Use_Debug_Libraries 0
# PROP BASE Output_Dir "vcmswu_dll"
# PROP BASE Intermediate_Dir "vcmswu_dll\upp_wx"
# PROP BASE Target_Dir ""
# PROP Use_MFC 0
# PROP Use_Debug_Libraries 0
# PROP Output_Dir "vcmswu_dll"
# PROP Intermediate_Dir "vcmswu_dll\upp_wx"
# PROP Target_Dir ""
# ADD BASE CPP /nologo /FD /MD /W1 /GR /EHsc /I "$(WXWIN)\lib\vc_dll\mswu" /I "$(WXWIN)\include" /O2 /Fdvcmswu_dll\usbpicprog.pdb /I "..\..\src" /I "$(LIBUSB)\include" /D "WIN32" /D "WXUSINGDLL" /D "_UNICODE" /D "__WXMSW__" /D "_WINDOWS" /c
# ADD CPP /nologo /FD /MD /W1 /GR /EHsc /I "$(WXWIN)\lib\vc_dll\mswu" /I "$(WXWIN)\include" /O2 /Fdvcmswu_dll\usbpicprog.pdb /I "..\..\src" /I "$(LIBUSB)\include" /D "WIN32" /D "WXUSINGDLL" /D "_UNICODE" /D "__WXMSW__" /D "_WINDOWS" /c
# ADD BASE MTL /nologo /D "WIN32" /D "WXUSINGDLL" /D "_UNICODE" /D "__WXMSW__" /D "_WINDOWS" /mktyplib203 /win32
# ADD MTL /nologo /D "WIN32" /D "WXUSINGDLL" /D "_UNICODE" /D "__WXMSW__" /D "_WINDOWS" /mktyplib203 /win32
# ADD BASE RSC /l 0x409 /d "WXUSINGDLL" /d "_UNICODE" /d "__WXMSW__" /i "$(WXWIN)\lib\vc_dll\mswu" /i "$(WXWIN)\include" /d "_WINDOWS" /i "..\..\src" /i $(LIBUSB)\include
# ADD RSC /l 0x409 /d "WXUSINGDLL" /d "_UNICODE" /d "__WXMSW__" /i "$(WXWIN)\lib\vc_dll\mswu" /i "$(WXWIN)\include" /d "_WINDOWS" /i "..\..\src" /i $(LIBUSB)\include
BSC32=bscmake.exe
# ADD BASE BSC32 /nologo
# ADD BSC32 /nologo
LINK32=link.exe
# ADD BASE LINK32 libusb.lib wxmsw29u_adv.lib wxbase29u_xml.lib wxmsw29u_core.lib wxbase29u.lib wxtiff.lib wxjpeg.lib wxpng.lib wxzlib.lib wxregexu.lib wxexpat.lib kernel32.lib user32.lib gdi32.lib comdlg32.lib winspool.lib winmm.lib shell32.lib comctl32.lib ole32.lib oleaut32.lib uuid.lib rpcrt4.lib advapi32.lib wsock32.lib oleacc.lib /nologo /machine:i386 /out:"vcmswu_dll\usbpicprog.exe" /libpath:"$(WXWIN)\lib\vc_dll" /subsystem:windows /pdb:"vcmswu_dll\usbpicprog.pdb" /libpath:"$(LIBUSB)\lib\msvc"
# ADD LINK32 libusb.lib wxmsw29u_adv.lib wxbase29u_xml.lib wxmsw29u_core.lib wxbase29u.lib wxtiff.lib wxjpeg.lib wxpng.lib wxzlib.lib wxregexu.lib wxexpat.lib kernel32.lib user32.lib gdi32.lib comdlg32.lib winspool.lib winmm.lib shell32.lib comctl32.lib ole32.lib oleaut32.lib uuid.lib rpcrt4.lib advapi32.lib wsock32.lib oleacc.lib /nologo /machine:i386 /out:"vcmswu_dll\usbpicprog.exe" /libpath:"$(WXWIN)\lib\vc_dll" /subsystem:windows /pdb:"vcmswu_dll\usbpicprog.pdb" /libpath:"$(LIBUSB)\lib\msvc"

!ELSEIF  "$(CFG)" == "upp_wx - Win32 Static Debug Monolithic"

# PROP BASE Use_MFC 0
# PROP BASE Use_Debug_Libraries 1
# PROP BASE Output_Dir "vcmswud"
# PROP BASE Intermediate_Dir "vcmswud\upp_wx"
# PROP BASE Target_Dir ""
# PROP Use_MFC 0
# PROP Use_Debug_Libraries 1
# PROP Output_Dir "vcmswud"
# PROP Intermediate_Dir "vcmswud\upp_wx"
# PROP Target_Dir ""
# ADD BASE CPP /nologo /FD /MDd /W1 /GR /EHsc /I "$(WXWIN)\lib\vc_lib\mswud" /I "$(WXWIN)\include" /Od /Gm /Zi /Fdvcmswud\usbpicprog.pdb /I "..\..\src" /I "$(LIBUSB)\include" /D "WIN32" /D "_UNICODE" /D "__WXDEBUG__" /D "__WXMSW__" /D "_WINDOWS" /D "_DEBUG" /c
# ADD CPP /nologo /FD /MDd /W1 /GR /EHsc /I "$(WXWIN)\lib\vc_lib\mswud" /I "$(WXWIN)\include" /Od /Gm /Zi /Fdvcmswud\usbpicprog.pdb /I "..\..\src" /I "$(LIBUSB)\include" /D "WIN32" /D "_UNICODE" /D "__WXDEBUG__" /D "__WXMSW__" /D "_WINDOWS" /D "_DEBUG" /c
# ADD BASE MTL /nologo /D "WIN32" /D "_UNICODE" /D "__WXDEBUG__" /D "__WXMSW__" /D "_WINDOWS" /D "_DEBUG" /mktyplib203 /win32
# ADD MTL /nologo /D "WIN32" /D "_UNICODE" /D "__WXDEBUG__" /D "__WXMSW__" /D "_WINDOWS" /D "_DEBUG" /mktyplib203 /win32
# ADD BASE RSC /l 0x409 /d "_UNICODE" /d "__WXDEBUG__" /d "__WXMSW__" /i "$(WXWIN)\lib\vc_lib\mswud" /i "$(WXWIN)\include" /d "_WINDOWS" /d "_DEBUG" /i "..\..\src" /i $(LIBUSB)\include
# ADD RSC /l 0x409 /d "_UNICODE" /d "__WXDEBUG__" /d "__WXMSW__" /i "$(WXWIN)\lib\vc_lib\mswud" /i "$(WXWIN)\include" /d "_WINDOWS" /d "_DEBUG" /i "..\..\src" /i $(LIBUSB)\include
BSC32=bscmake.exe
# ADD BASE BSC32 /nologo
# ADD BSC32 /nologo
LINK32=link.exe
# ADD BASE LINK32 libusb.lib wxmsw29ud.lib wxtiffd.lib wxjpegd.lib wxpngd.lib wxzlibd.lib wxregexud.lib wxexpatd.lib kernel32.lib user32.lib gdi32.lib comdlg32.lib winspool.lib winmm.lib shell32.lib comctl32.lib ole32.lib oleaut32.lib uuid.lib rpcrt4.lib advapi32.lib wsock32.lib oleacc.lib /nologo /machine:i386 /out:"vcmswud\usbpicprog.exe" /libpath:"$(WXWIN)\lib\vc_lib" /subsystem:windows /debug /pdb:"vcmswud\usbpicprog.pdb" /libpath:"$(LIBUSB)\lib\msvc"
# ADD LINK32 libusb.lib wxmsw29ud.lib wxtiffd.lib wxjpegd.lib wxpngd.lib wxzlibd.lib wxregexud.lib wxexpatd.lib kernel32.lib user32.lib gdi32.lib comdlg32.lib winspool.lib winmm.lib shell32.lib comctl32.lib ole32.lib oleaut32.lib uuid.lib rpcrt4.lib advapi32.lib wsock32.lib oleacc.lib /nologo /machine:i386 /out:"vcmswud\usbpicprog.exe" /libpath:"$(WXWIN)\lib\vc_lib" /subsystem:windows /debug /pdb:"vcmswud\usbpicprog.pdb" /libpath:"$(LIBUSB)\lib\msvc"

!ELSEIF  "$(CFG)" == "upp_wx - Win32 Static Debug Multilib"

# PROP BASE Use_MFC 0
# PROP BASE Use_Debug_Libraries 1
# PROP BASE Output_Dir "vcmswud"
# PROP BASE Intermediate_Dir "vcmswud\upp_wx"
# PROP BASE Target_Dir ""
# PROP Use_MFC 0
# PROP Use_Debug_Libraries 1
# PROP Output_Dir "vcmswud"
# PROP Intermediate_Dir "vcmswud\upp_wx"
# PROP Target_Dir ""
# ADD BASE CPP /nologo /FD /MDd /W1 /GR /EHsc /I "$(WXWIN)\lib\vc_lib\mswud" /I "$(WXWIN)\include" /Od /Gm /Zi /Fdvcmswud\usbpicprog.pdb /I "..\..\src" /I "$(LIBUSB)\include" /D "WIN32" /D "_UNICODE" /D "__WXDEBUG__" /D "__WXMSW__" /D "_WINDOWS" /D "_DEBUG" /c
# ADD CPP /nologo /FD /MDd /W1 /GR /EHsc /I "$(WXWIN)\lib\vc_lib\mswud" /I "$(WXWIN)\include" /Od /Gm /Zi /Fdvcmswud\usbpicprog.pdb /I "..\..\src" /I "$(LIBUSB)\include" /D "WIN32" /D "_UNICODE" /D "__WXDEBUG__" /D "__WXMSW__" /D "_WINDOWS" /D "_DEBUG" /c
# ADD BASE MTL /nologo /D "WIN32" /D "_UNICODE" /D "__WXDEBUG__" /D "__WXMSW__" /D "_WINDOWS" /D "_DEBUG" /mktyplib203 /win32
# ADD MTL /nologo /D "WIN32" /D "_UNICODE" /D "__WXDEBUG__" /D "__WXMSW__" /D "_WINDOWS" /D "_DEBUG" /mktyplib203 /win32
# ADD BASE RSC /l 0x409 /d "_UNICODE" /d "__WXDEBUG__" /d "__WXMSW__" /i "$(WXWIN)\lib\vc_lib\mswud" /i "$(WXWIN)\include" /d "_WINDOWS" /d "_DEBUG" /i "..\..\src" /i $(LIBUSB)\include
# ADD RSC /l 0x409 /d "_UNICODE" /d "__WXDEBUG__" /d "__WXMSW__" /i "$(WXWIN)\lib\vc_lib\mswud" /i "$(WXWIN)\include" /d "_WINDOWS" /d "_DEBUG" /i "..\..\src" /i $(LIBUSB)\include
BSC32=bscmake.exe
# ADD BASE BSC32 /nologo
# ADD BSC32 /nologo
LINK32=link.exe
# ADD BASE LINK32 libusb.lib wxmsw29ud_adv.lib wxbase29ud_xml.lib wxmsw29ud_core.lib wxbase29ud.lib wxtiffd.lib wxjpegd.lib wxpngd.lib wxzlibd.lib wxregexud.lib wxexpatd.lib kernel32.lib user32.lib gdi32.lib comdlg32.lib winspool.lib winmm.lib shell32.lib comctl32.lib ole32.lib oleaut32.lib uuid.lib rpcrt4.lib advapi32.lib wsock32.lib oleacc.lib /nologo /machine:i386 /out:"vcmswud\usbpicprog.exe" /libpath:"$(WXWIN)\lib\vc_lib" /subsystem:windows /debug /pdb:"vcmswud\usbpicprog.pdb" /libpath:"$(LIBUSB)\lib\msvc"
# ADD LINK32 libusb.lib wxmsw29ud_adv.lib wxbase29ud_xml.lib wxmsw29ud_core.lib wxbase29ud.lib wxtiffd.lib wxjpegd.lib wxpngd.lib wxzlibd.lib wxregexud.lib wxexpatd.lib kernel32.lib user32.lib gdi32.lib comdlg32.lib winspool.lib winmm.lib shell32.lib comctl32.lib ole32.lib oleaut32.lib uuid.lib rpcrt4.lib advapi32.lib wsock32.lib oleacc.lib /nologo /machine:i386 /out:"vcmswud\usbpicprog.exe" /libpath:"$(WXWIN)\lib\vc_lib" /subsystem:windows /debug /pdb:"vcmswud\usbpicprog.pdb" /libpath:"$(LIBUSB)\lib\msvc"

!ELSEIF  "$(CFG)" == "upp_wx - Win32 Static Release Monolithic"

# PROP BASE Use_MFC 0
# PROP BASE Use_Debug_Libraries 0
# PROP BASE Output_Dir "vcmswu"
# PROP BASE Intermediate_Dir "vcmswu\upp_wx"
# PROP BASE Target_Dir ""
# PROP Use_MFC 0
# PROP Use_Debug_Libraries 0
# PROP Output_Dir "vcmswu"
# PROP Intermediate_Dir "vcmswu\upp_wx"
# PROP Target_Dir ""
# ADD BASE CPP /nologo /FD /MD /W1 /GR /EHsc /I "$(WXWIN)\lib\vc_lib\mswu" /I "$(WXWIN)\include" /O2 /Fdvcmswu\usbpicprog.pdb /I "..\..\src" /I "$(LIBUSB)\include" /D "WIN32" /D "_UNICODE" /D "__WXMSW__" /D "_WINDOWS" /c
# ADD CPP /nologo /FD /MD /W1 /GR /EHsc /I "$(WXWIN)\lib\vc_lib\mswu" /I "$(WXWIN)\include" /O2 /Fdvcmswu\usbpicprog.pdb /I "..\..\src" /I "$(LIBUSB)\include" /D "WIN32" /D "_UNICODE" /D "__WXMSW__" /D "_WINDOWS" /c
# ADD BASE MTL /nologo /D "WIN32" /D "_UNICODE" /D "__WXMSW__" /D "_WINDOWS" /mktyplib203 /win32
# ADD MTL /nologo /D "WIN32" /D "_UNICODE" /D "__WXMSW__" /D "_WINDOWS" /mktyplib203 /win32
# ADD BASE RSC /l 0x409 /d "_UNICODE" /d "__WXMSW__" /i "$(WXWIN)\lib\vc_lib\mswu" /i "$(WXWIN)\include" /d "_WINDOWS" /i "..\..\src" /i $(LIBUSB)\include
# ADD RSC /l 0x409 /d "_UNICODE" /d "__WXMSW__" /i "$(WXWIN)\lib\vc_lib\mswu" /i "$(WXWIN)\include" /d "_WINDOWS" /i "..\..\src" /i $(LIBUSB)\include
BSC32=bscmake.exe
# ADD BASE BSC32 /nologo
# ADD BSC32 /nologo
LINK32=link.exe
# ADD BASE LINK32 libusb.lib wxmsw29u.lib wxtiff.lib wxjpeg.lib wxpng.lib wxzlib.lib wxregexu.lib wxexpat.lib kernel32.lib user32.lib gdi32.lib comdlg32.lib winspool.lib winmm.lib shell32.lib comctl32.lib ole32.lib oleaut32.lib uuid.lib rpcrt4.lib advapi32.lib wsock32.lib oleacc.lib /nologo /machine:i386 /out:"vcmswu\usbpicprog.exe" /libpath:"$(WXWIN)\lib\vc_lib" /subsystem:windows /pdb:"vcmswu\usbpicprog.pdb" /libpath:"$(LIBUSB)\lib\msvc"
# ADD LINK32 libusb.lib wxmsw29u.lib wxtiff.lib wxjpeg.lib wxpng.lib wxzlib.lib wxregexu.lib wxexpat.lib kernel32.lib user32.lib gdi32.lib comdlg32.lib winspool.lib winmm.lib shell32.lib comctl32.lib ole32.lib oleaut32.lib uuid.lib rpcrt4.lib advapi32.lib wsock32.lib oleacc.lib /nologo /machine:i386 /out:"vcmswu\usbpicprog.exe" /libpath:"$(WXWIN)\lib\vc_lib" /subsystem:windows /pdb:"vcmswu\usbpicprog.pdb" /libpath:"$(LIBUSB)\lib\msvc"

!ELSEIF  "$(CFG)" == "upp_wx - Win32 Static Release Multilib"

# PROP BASE Use_MFC 0
# PROP BASE Use_Debug_Libraries 0
# PROP BASE Output_Dir "vcmswu"
# PROP BASE Intermediate_Dir "vcmswu\upp_wx"
# PROP BASE Target_Dir ""
# PROP Use_MFC 0
# PROP Use_Debug_Libraries 0
# PROP Output_Dir "vcmswu"
# PROP Intermediate_Dir "vcmswu\upp_wx"
# PROP Target_Dir ""
# ADD BASE CPP /nologo /FD /MD /W1 /GR /EHsc /I "$(WXWIN)\lib\vc_lib\mswu" /I "$(WXWIN)\include" /O2 /Fdvcmswu\usbpicprog.pdb /I "..\..\src" /I "$(LIBUSB)\include" /D "WIN32" /D "_UNICODE" /D "__WXMSW__" /D "_WINDOWS" /c
# ADD CPP /nologo /FD /MD /W1 /GR /EHsc /I "$(WXWIN)\lib\vc_lib\mswu" /I "$(WXWIN)\include" /O2 /Fdvcmswu\usbpicprog.pdb /I "..\..\src" /I "$(LIBUSB)\include" /D "WIN32" /D "_UNICODE" /D "__WXMSW__" /D "_WINDOWS" /c
# ADD BASE MTL /nologo /D "WIN32" /D "_UNICODE" /D "__WXMSW__" /D "_WINDOWS" /mktyplib203 /win32
# ADD MTL /nologo /D "WIN32" /D "_UNICODE" /D "__WXMSW__" /D "_WINDOWS" /mktyplib203 /win32
# ADD BASE RSC /l 0x409 /d "_UNICODE" /d "__WXMSW__" /i "$(WXWIN)\lib\vc_lib\mswu" /i "$(WXWIN)\include" /d "_WINDOWS" /i "..\..\src" /i $(LIBUSB)\include
# ADD RSC /l 0x409 /d "_UNICODE" /d "__WXMSW__" /i "$(WXWIN)\lib\vc_lib\mswu" /i "$(WXWIN)\include" /d "_WINDOWS" /i "..\..\src" /i $(LIBUSB)\include
BSC32=bscmake.exe
# ADD BASE BSC32 /nologo
# ADD BSC32 /nologo
LINK32=link.exe
# ADD BASE LINK32 libusb.lib wxmsw29u_adv.lib wxbase29u_xml.lib wxmsw29u_core.lib wxbase29u.lib wxtiff.lib wxjpeg.lib wxpng.lib wxzlib.lib wxregexu.lib wxexpat.lib kernel32.lib user32.lib gdi32.lib comdlg32.lib winspool.lib winmm.lib shell32.lib comctl32.lib ole32.lib oleaut32.lib uuid.lib rpcrt4.lib advapi32.lib wsock32.lib oleacc.lib /nologo /machine:i386 /out:"vcmswu\usbpicprog.exe" /libpath:"$(WXWIN)\lib\vc_lib" /subsystem:windows /pdb:"vcmswu\usbpicprog.pdb" /libpath:"$(LIBUSB)\lib\msvc"
# ADD LINK32 libusb.lib wxmsw29u_adv.lib wxbase29u_xml.lib wxmsw29u_core.lib wxbase29u.lib wxtiff.lib wxjpeg.lib wxpng.lib wxzlib.lib wxregexu.lib wxexpat.lib kernel32.lib user32.lib gdi32.lib comdlg32.lib winspool.lib winmm.lib shell32.lib comctl32.lib ole32.lib oleaut32.lib uuid.lib rpcrt4.lib advapi32.lib wsock32.lib oleacc.lib /nologo /machine:i386 /out:"vcmswu\usbpicprog.exe" /libpath:"$(WXWIN)\lib\vc_lib" /subsystem:windows /pdb:"vcmswu\usbpicprog.pdb" /libpath:"$(LIBUSB)\lib\msvc"

!ENDIF

# Begin Target

# Name "upp_wx - Win32 DLL Debug Monolithic"
# Name "upp_wx - Win32 DLL Debug Multilib"
# Name "upp_wx - Win32 DLL Release Monolithic"
# Name "upp_wx - Win32 DLL Release Multilib"
# Name "upp_wx - Win32 Static Debug Monolithic"
# Name "upp_wx - Win32 Static Debug Multilib"
# Name "upp_wx - Win32 Static Release Monolithic"
# Name "upp_wx - Win32 Static Release Multilib"
# Begin Group "Source Files"

# PROP Default_Filter ""
# Begin Source File

SOURCE=..\..\src\configview.cpp
# End Source File
# Begin Source File

SOURCE=..\..\src\hardware.cpp
# End Source File
# Begin Source File

SOURCE=..\..\src\hexfile.cpp
# End Source File
# Begin Source File

SOURCE=..\..\src\hexview.cpp
# End Source File
# Begin Source File

SOURCE=..\..\src\main.cpp
# End Source File
# Begin Source File

SOURCE=..\..\src\packageview.cpp
# End Source File
# Begin Source File

SOURCE=..\..\src\pictype.cpp
# End Source File
# Begin Source File

SOURCE=..\..\src\preferences.cpp
# End Source File
# Begin Source File

SOURCE=..\..\src\preferences_base.cpp
# End Source File
# Begin Source File

SOURCE=..\..\icons\win\upp_wx.rc
# End Source File
# Begin Source File

SOURCE=..\..\src\uppmainwindow.cpp
# End Source File
# Begin Source File

SOURCE=..\..\src\uppmainwindow_base.cpp
# End Source File
# End Group
# Begin Group "Header Files"

# PROP Default_Filter ""
# Begin Source File

SOURCE=..\..\src\configview.h
# End Source File
# Begin Source File

SOURCE=..\..\src\formbuilder_includes.h
# End Source File
# Begin Source File

SOURCE=..\..\src\hardware.h
# End Source File
# Begin Source File

SOURCE=..\..\src\hexfile.h
# End Source File
# Begin Source File

SOURCE=..\..\src\hexview.h
# End Source File
# Begin Source File

SOURCE=..\..\src\main.h
# End Source File
# Begin Source File

SOURCE=..\..\src\packageview.h
# End Source File
# Begin Source File

SOURCE=..\..\src\pictype.h
# End Source File
# Begin Source File

SOURCE=..\..\src\preferences.h
# End Source File
# Begin Source File

SOURCE=..\..\src\preferences_base.h
# End Source File
# Begin Source File

SOURCE=..\..\src\uppmainwindow.h
# End Source File
# Begin Source File

SOURCE=..\..\src\uppmainwindow_base.h
# End Source File
# End Group
# End Target
# End Project

