/***************************************************************************
 * Copyright (C) 2005 Lorenz M�senlechner & Matthias Kranz                 *
 *                    <icd2linux@hcilab.org>                               *
 * Copyright (C) 2005 Nicolas Hadacek <hadacek@kde.org>                    *
 *                                                                         *
 *   This program is free software; you can redistribute it and/or modify  *
 *   it under the terms of the GNU General Public License as published by  *
 *   the Free Software Foundation; either version 2 of the License, or     *
 *   (at your option) any later version.                                   *
 ***************************************************************************/
#include "icd2_usb.h"

const Port::USB::ControlMessageData Icd2::USBHardware::CONTROL_MESSAGE_DATA[] = {
{ 0x40, 0xA0, 0x7F92, "01" },
{ 0x40, 0xA0, 0x146C, "C200907FA5E05418FF131313541F4450" },
{ 0x40, 0xA0, 0x147C, "F51C139201D2E8907FAB74FFF0907FA9" },
{ 0x40, 0xA0, 0x148C, "F0907FAAF05391EF907F95E044C0F090" },
{ 0x40, 0xA0, 0x149C, "7FAFE04401F0907FAEE04405F0D2AF12" },
{ 0x40, 0xA0, 0x14AC, "175F3000FD121100C20080F622" },
{ 0x40, 0xA0, 0x1100, "907FE9E0245D600D1470030212442402" },
{ 0x40, 0xA0, 0x1110, "600302124A907FEAE0750800F509A3E0" },
{ 0x40, 0xA0, 0x1120, "FEE42509F509EE3508F508907FEEE075" },
{ 0x40, 0xA0, 0x1130, "0A00F50BA3E0FEE4250BF50BEE350AF5" },
{ 0x40, 0xA0, 0x1140, "0A907FE8E064C060030211D4E50B450A" },
{ 0x40, 0xA0, 0x1150, "700302124AC3E50B9440E50A94005008" },
{ 0x40, 0xA0, 0x1160, "850A0C850B0D8006750C00750D40907F" },
{ 0x40, 0xA0, 0x1170, "E9E0B4A325AE0CAF0DAA08A9097B01C0" },
{ 0x40, 0xA0, 0x1180, "03C002C0017A7F790078007C7FAD03D0" },
{ 0x40, 0xA0, 0x1190, "01D002D003121356800FAF09AE08AD0D" },
{ 0x40, 0xA0, 0x11A0, "7A7F79007B001215A4907FB5E50DF0E5" },
{ 0x40, 0xA0, 0x11B0, "0D2509F509E50C3508F508C3E50B950D" },
{ 0x40, 0xA0, 0x11C0, "F50BE50A950CF50A907FB4E020E20302" },
{ 0x40, 0xA0, 0x11D0, "114C80F4907FE8E06440706EE50B450A" },
{ 0x40, 0xA0, 0x11E0, "6068E4907FC5F0907FB4E020E3F9907F" },
{ 0x40, 0xA0, 0x11F0, "C5E0750C00F50D907FE9E0B4A315AE0C" },
{ 0x40, 0xA0, 0x1200, "AF0DA809AC087D017B017A7E79C01213" },
{ 0x40, 0xA0, 0x1210, "56800FAF09AE08AD0D7A7F79007B0012" },
{ 0x40, 0xA0, 0x1220, "14B9E50D2509F509E50C3508F508C3E5" },
{ 0x40, 0xA0, 0x1230, "0B950DF50BE50A950CF50A907FB4E044" },
{ 0x40, 0xA0, 0x1240, "02F08098907FEAE0F51C" },
{ 0x40, 0xA0, 0x124A, "22" },
{ 0x40, 0xA0, 0x1558, "AB07AA06AC05" },
{ 0x40, 0xA0, 0x155E, "E4FD300111EAFFAE050DEE2400F582E4" },
{ 0x40, 0xA0, 0x156E, "34E0F583EFF0EBAE050D74002EF582E4" },
{ 0x40, 0xA0, 0x157E, "34E0F583EBF0AF050D74002FF582E434" },
{ 0x40, 0xA0, 0x158E, "E0F583ECF0AF1C7AE07B001217207F0A" },
{ 0x40, 0xA0, 0x159E, "7E0012173C" },
{ 0x40, 0xA0, 0x15A3, "22" },
{ 0x40, 0xA0, 0x14B9, "8E0E8F0F8D108A118B12" },
{ 0x40, 0xA0, 0x14C3, "E4F513E513C395105020050FE50FAE0E" },
{ 0x40, 0xA0, 0x14D3, "7002050E14FFE5122513F582E43511F5" },
{ 0x40, 0xA0, 0x14E3, "83E0FD121558051380D9" },
{ 0x40, 0xA0, 0x14ED, "22" },
{ 0x40, 0xA0, 0x15A4, "8E0E8F0F8D108A118B12" },
{ 0x40, 0xA0, 0x15AE, "E4FD300112E50EFFAE050DEE2403F582" },
{ 0x40, 0xA0, 0x15BE, "E434E0F583EFF0E50FAE050D74032EF5" },
{ 0x40, 0xA0, 0x15CE, "82E434E0F583E50FF0AF1C7AE07B0312" },
{ 0x40, 0xA0, 0x15DE, "1720AF1CAD10AB12AA11121704" },
{ 0x40, 0xA0, 0x15EB, "22" },
{ 0x40, 0xA0, 0x166E, "C0E0C083C082C085C084C086758600D2" },
{ 0x40, 0xA0, 0x167E, "005391EF907FAB7401F0D086D084D085" },
{ 0x40, 0xA0, 0x168E, "D082D083D0E032" },
{ 0x40, 0xA0, 0x1644, "C0E0C083C082C085C084C08675860090" },
{ 0x40, 0xA0, 0x1654, "7FC4E4F05391EF907FAB7404F0D086D0" },
{ 0x40, 0xA0, 0x1664, "84D085D082D083D0E032" },
{ 0x40, 0xA0, 0x1695, "C0E0C083C082C085C084C08675860053" },
{ 0x40, 0xA0, 0x16A5, "91EF907FAB7402F0D086D084D085D082" },
{ 0x40, 0xA0, 0x16B5, "D083D0E032" },
{ 0x40, 0xA0, 0x16BA, "C0E0C083C082C085C084C08675860053" },
{ 0x40, 0xA0, 0x16CA, "91EF907FAB7410F0D086D084D085D082" },
{ 0x40, 0xA0, 0x16DA, "D083D0E032" },
{ 0x40, 0xA0, 0x14FF, "32" },
{ 0x40, 0xA0, 0x16DF, "C0E0C083C082C085C084C08675860053" },
{ 0x40, 0xA0, 0x16EF, "91EF907FAB7408F0D086D084D085D082" },
{ 0x40, 0xA0, 0x16FF, "D083D0E032" },
{ 0x40, 0xA0, 0x1767, "32" },
{ 0x40, 0xA0, 0x1768, "32" },
{ 0x40, 0xA0, 0x1769, "32" },
{ 0x40, 0xA0, 0x176A, "32" },
{ 0x40, 0xA0, 0x176B, "32" },
{ 0x40, 0xA0, 0x176C, "32" },
{ 0x40, 0xA0, 0x176D, "32" },
{ 0x40, 0xA0, 0x176E, "32" },
{ 0x40, 0xA0, 0x176F, "32" },
{ 0x40, 0xA0, 0x1770, "32" },
{ 0x40, 0xA0, 0x1771, "32" },
{ 0x40, 0xA0, 0x1772, "32" },
{ 0x40, 0xA0, 0x1773, "32" },
{ 0x40, 0xA0, 0x1774, "32" },
{ 0x40, 0xA0, 0x1775, "32" },
{ 0x40, 0xA0, 0x1776, "32" },
{ 0x40, 0xA0, 0x0043, "021500" },
{ 0x40, 0xA0, 0x1500, "02166E0002169500021644000216DF00" },
{ 0x40, 0xA0, 0x1510, "0216BA000214FF000217670002176800" },
{ 0x40, 0xA0, 0x1520, "0217690002176A0002176B0002176C00" },
{ 0x40, 0xA0, 0x1530, "02176D0002176E0002176F0002177000" },
{ 0x40, 0xA0, 0x1540, "02177100021772000217730002177400" },
{ 0x40, 0xA0, 0x1550, "0217750002177600" },
{ 0x40, 0xA0, 0x173C, "8E148F15E5151515AE14700215144E60" },
{ 0x40, 0xA0, 0x174C, "051214EE80EE22" },
{ 0x40, 0xA0, 0x175F, "E4F51BD2E9D2AF22" },
{ 0x40, 0xA0, 0x1619, "A907E51B7023907FA5E04480F0E925E0" },
{ 0x40, 0xA0, 0x1629, "907FA6F08D16AF03A9077517018A1889" },
{ 0x40, 0xA0, 0x1639, "19E4F51A751B01D322C322" },
{ 0x40, 0xA0, 0x15EC, "A907E51B7025907FA5E04480F0E925E0" },
{ 0x40, 0xA0, 0x15FC, "4401907FA6F08D16AF03A9077517018A" },
{ 0x40, 0xA0, 0x160C, "188919E4F51A751B03D322C322" },
{ 0x40, 0xA0, 0x004B, "02137F" },
{ 0x40, 0xA0, 0x137F, "C0E0C083C082C085C084C086758600C0" },
{ 0x40, 0xA0, 0x138F, "D075D000C000C001C002C003C006C007" },
{ 0x40, 0xA0, 0x139F, "907FA5E030E206751B0602144E907FA5" },
{ 0x40, 0xA0, 0x13AF, "E020E10CE51B64026006751B0702144E" },
{ 0x40, 0xA0, 0x13BF, "AF1BEF24FE604814602C24FE60772404" },
{ 0x40, 0xA0, 0x13CF, "600302144EAB17AA18A919AF1A051A8F" },
{ 0x40, 0xA0, 0x13DF, "8275830012124B907FA6F0E51A651670" },
{ 0x40, 0xA0, 0x13EF, "5E751B058059907FA6E0AB17AA18A919" },
{ 0x40, 0xA0, 0x13FF, "AE1A8E82758300121278751B028040E5" },
{ 0x40, 0xA0, 0x140F, "1624FEB51A07907FA5E04420F0E51614" },
{ 0x40, 0xA0, 0x141F, "B51A0A907FA5E04440F0751B00907FA6" },
{ 0x40, 0xA0, 0x142F, "E0AB17AA18A919AE1A8E827583001212" },
{ 0x40, 0xA0, 0x143F, "78051A800A907FA5E04440F0751B0053" },
{ 0x40, 0xA0, 0x144F, "91DFD007D006D003D002D001D000D0D0" },
{ 0x40, 0xA0, 0x145F, "D086D084D085D082D083D0E032" },
{ 0x40, 0xA0, 0x1704, "1215ECE51B24FA600E146006240770F3" },
{ 0x40, 0xA0, 0x1714, "D322E4F51BD322E4F51BD322" },
{ 0x40, 0xA0, 0x1720, "121619E51B24FA600E146006240770F3" },
{ 0x40, 0xA0, 0x1730, "D322E4F51BD322E4F51BD322" },
{ 0x40, 0xA0, 0x14EE, "7400F58690FDA57C05A3E582458370F9" },
{ 0x40, 0xA0, 0x14FE, "22" },
{ 0x40, 0xA0, 0x0000, "021753" },
{ 0x40, 0xA0, 0x1753, "787FE4F6D8FD75812002146C" },
{ 0x40, 0xA0, 0x124B, "BB010CE58229F582E5833AF583E02250" },
{ 0x40, 0xA0, 0x125B, "06E92582F8E622BBFE06E92582F8E222" },
{ 0x40, 0xA0, 0x126B, "E58229F582E5833AF583E49322" },
{ 0x40, 0xA0, 0x1278, "F8BB010DE58229F582E5833AF583E8F0" },
{ 0x40, 0xA0, 0x1288, "225006E92582C8F622BBFE05E92582C8" },
{ 0x40, 0xA0, 0x1298, "F222" },
{ 0x40, 0xA0, 0x129A, "E709F608DFFA8046E709F208DFFA803E" },
{ 0x40, 0xA0, 0x12AA, "88828C83E709F0A3DFFA8032E309F608" },
{ 0x40, 0xA0, 0x12BA, "DFFA806EE309F208DFFA806688828C83" },
{ 0x40, 0xA0, 0x12CA, "E309F0A3DFFA805A89828A83E0A3F608" },
{ 0x40, 0xA0, 0x12DA, "DFFA804E89828A83E0A3F208DFFA8042" },
{ 0x40, 0xA0, 0x12EA, "80D280FA80C680D4805580F280298010" },
{ 0x40, 0xA0, 0x12FA, "80A680EA809A80A880DA80E280CA8029" },
{ 0x40, 0xA0, 0x130A, "88848C8589828A83E493A30586F0A305" },
{ 0x40, 0xA0, 0x131A, "86DFF5DEF3800B89828A83E493A3F608" },
{ 0x40, 0xA0, 0x132A, "DFF9ECFAA9F0EDFB2288848C8589828A" },
{ 0x40, 0xA0, 0x133A, "83E0A30586F0A30586DFF6DEF480E389" },
{ 0x40, 0xA0, 0x134A, "828A83E493A3F208DFF980D688F0ED24" },
{ 0x40, 0xA0, 0x135A, "02B4040050CCF582EB2402B4040050C2" },
{ 0x40, 0xA0, 0x136A, "23234582F582EF4E60B8EF60010EE582" },
{ 0x40, 0xA0, 0x137A, "239012EA73" },
{ 0x40, 0xA0, 0x7F92, "00" },
{ 0x40, 0xA0, 0x7F92, "01" },
{ 0x40, 0xA0, 0x0100, "907FE9E0700302029B14700302031724" },
{ 0x40, 0xA0, 0x0110, "FE700302038E24FB7003020295147003" },
{ 0x40, 0xA0, 0x0120, "02028F14700302028314700302028924" },
{ 0x40, 0xA0, 0x0130, "0560030203E2120F7A40030203EE907F" },
{ 0x40, 0xA0, 0x0140, "EBE024FE601914604724026003020279" },
{ 0x40, 0xA0, 0x0150, "E50C907FD4F0E50D907FD5F00203EE90" },
{ 0x40, 0xA0, 0x0160, "7FEAE0FF121710AA06A9077B018B498A" },
{ 0x40, 0xA0, 0x0170, "4A894BEA49600FEE907FD4F0AF01EF90" },
{ 0x40, 0xA0, 0x0180, "7FD5F00203EE907FB4E04401F00203EE" },
{ 0x40, 0xA0, 0x0190, "907FEAE0FF1216E4AA06A9077B018B49" },
{ 0x40, 0xA0, 0x01A0, "8A4A894BEA49700302026F" },
{ 0x40, 0xA0, 0x01AB, "AB498B508A5189521217F4F553907FEE" },
{ 0x40, 0xA0, 0x01BB, "E0FFE553D39F4003E0F553E553700302" },
{ 0x40, 0xA0, 0x01CB, "0261754F00754E00754D00754C00E553" },
{ 0x40, 0xA0, 0x01DB, "C394405004AF5380027F40E4FCFDFEAB" },
{ 0x40, 0xA0, 0x01EB, "4FAA4EA94DA84CC31218625038E55225" },
{ 0x40, 0xA0, 0x01FB, "4FF582E54E3551F583E0FF7400254FF5" },
{ 0x40, 0xA0, 0x020B, "82E4347FF583EFF07A0079007800E54F" },
{ 0x40, 0xA0, 0x021B, "2401F54FEA354EF54EE9354DF54DE835" },
{ 0x40, 0xA0, 0x022B, "4CF54C80A9E553C394405004AF538002" },
{ 0x40, 0xA0, 0x023B, "7F40907FB5EFF0E553C394405004AF53" },
{ 0x40, 0xA0, 0x024B, "80027F40C3E5539FF553907FB4E020E2" },
{ 0x40, 0xA0, 0x025B, "030201C680F4E4907FB5F0907FB47402" },
{ 0x40, 0xA0, 0x026B, "F0" },
{ 0x40, 0xA0, 0x026C, "0203EE907FB4E04401F00203EE907FB4" },
{ 0x40, 0xA0, 0x027C, "E04401F00203EE120FA60203EE120F9A" },
{ 0x40, 0xA0, 0x028C, "0203EE120F7C0203EE120F880203EE12" },
{ 0x40, 0xA0, 0x029C, "0FB840030203EE907FE8E0247F602414" },
{ 0x40, 0xA0, 0x02AC, "60312402705BA200E433FF25E0FFA202" },
{ 0x40, 0xA0, 0x02BC, "E4334F907F00F0E4A3F0907FB57402F0" },
{ 0x40, 0xA0, 0x02CC, "0203EEE4907F00F0A3F0907FB57402F0" },
{ 0x40, 0xA0, 0x02DC, "0203EE907FECE0F45480FFC4540FFFE0" },
{ 0x40, 0xA0, 0x02EC, "54072F25E024B4F582E4347FF583E054" },
{ 0x40, 0xA0, 0x02FC, "01907F00F0E4A3F0907FB57402F00203" },
{ 0x40, 0xA0, 0x030C, "EE907FB4E04401F00203EE120FBA4003" },
{ 0x40, 0xA0, 0x031C, "0203EE907FE8E024FE601D2402600302" },
{ 0x40, 0xA0, 0x032C, "03EE907FEAE0B40105C2000203EE907F" },
{ 0x40, 0xA0, 0x033C, "B4E04401F00203EE907FEAE0703B907F" },
{ 0x40, 0xA0, 0x034C, "ECE0F45480FFC4540FFFE054072F25E0" },
{ 0x40, 0xA0, 0x035C, "24B4F582E4347FF583E4F0907FECE054" },
{ 0x40, 0xA0, 0x036C, "80FF131313541FFFE054072F907FD7F0" },
{ 0x40, 0xA0, 0x037C, "E4F550" },
{ 0x40, 0xA0, 0x037F, "E04420F08069907FB4E04401F0806012" },
{ 0x40, 0xA0, 0x038F, "0FBC505B907FE8E024FE60182402704F" },
{ 0x40, 0xA0, 0x039F, "907FEAE0B40104D2008044907FB4E044" },
{ 0x40, 0xA0, 0x03AF, "01F0803B907FEAE07020907FECE0F454" },
{ 0x40, 0xA0, 0x03BF, "80FFC4540FFFE054072F25E024B4F582" },
{ 0x40, 0xA0, 0x03CF, "E4347FF5837401F08015907FB4E04401" },
{ 0x40, 0xA0, 0x03DF, "F0800C120FBE5007907FB4E04401F090" },
{ 0x40, 0xA0, 0x03EF, "7FB4E04402F0" },
{ 0x40, 0xA0, 0x03F5, "22" },
{ 0x40, 0xA0, 0x0033, "0203F6" },
{ 0x40, 0xA0, 0x03F6, "53D8EF32" },
{ 0x40, 0xA0, 0x000B, "0203FA" },
{ 0x40, 0xA0, 0x03FA, "C0E0C0D0C000C001C002C004C005C006" },
{ 0x40, 0xA0, 0x040A, "C007C28C758AD1758C63D28CAF0BAE0A" },
{ 0x40, 0xA0, 0x041A, "AD09AC087A0079007800EF2401F50BEA" },
{ 0x40, 0xA0, 0x042A, "3EF50AE93DF509E83CF508D007D006D0" },
{ 0x40, 0xA0, 0x043A, "05D004D002D001D000D0D0D0E032" },
{ 0x40, 0xA0, 0x0448, "750B00750A00750900750800C28C5389" },
{ 0x40, 0xA0, 0x0458, "F0438901758AD1758C63C2B9D2A9D28C" },
{ 0x40, 0xA0, 0x0468, "22" },
{ 0x40, 0xA0, 0x0469, "754400754300754200754100C203C200" },
{ 0x40, 0xA0, 0x0479, "C202C201120F037E067F228E0C8F0D75" },
{ 0x40, 0xA0, 0x0489, "0E06750F347510067511A8EE54E07003" },
{ 0x40, 0xA0, 0x0499, "0205897545007546808E478F48C374F6" },
{ 0x40, 0xA0, 0x04A9, "9FFF74069ECF2402CF3400FEE48F408E" },
{ 0x40, 0xA0, 0x04B9, "3FF53EF53DF53CF53BF53AF539AF40AE" },
{ 0x40, 0xA0, 0x04C9, "3FAD3EAC3DAB3CAA3BA93AA839C31218" },
{ 0x40, 0xA0, 0x04D9, "62502CE546253CF582E53B3545F58374" },
{ 0x40, 0xA0, 0x04E9, "CDF07A0079007800E53C2401F53CEA35" },
{ 0x40, 0xA0, 0x04F9, "3BF53BE9353AF53AE83539F53980BE75" },
{ 0x40, 0xA0, 0x0509, "3C00753B00753A00753900AF40AE3FAD" },
{ 0x40, 0xA0, 0x0519, "3EAC3DAB3CAA3BA93AA839C312186250" },
{ 0x40, 0xA0, 0x0529, "39AE3BAF3CE5482FF582EE3547F583E0" },
{ 0x40, 0xA0, 0x0539, "FDE5462FF582EE3545F583EDF07A0079" },
{ 0x40, 0xA0, 0x0549, "007800E53C2401F53CEA353BF53BE935" },
{ 0x40, 0xA0, 0x0559, "3AF53AE83539F53980B185450C85460D" },
{ 0x40, 0xA0, 0x0569, "74222480FF740634FFFEC3E50F9FF50F" },
{ 0x40, 0xA0, 0x0579, "E50E9EF50EC3E5119FF511E5109EF510" },
{ 0x40, 0xA0, 0x0589, "C2AFD2E843D820120448907FAFE04401" },
{ 0x40, 0xA0, 0x0599, "F0907FAEE0441DF0D2AFC2AAC2A82001" },
{ 0x40, 0xA0, 0x05A9, "4A200105D20B12169375440075430075" },
{ 0x40, 0xA0, 0x05B9, "42007541007F407E927D047C00AB44AA" },
{ 0x40, 0xA0, 0x05C9, "43A942A841C312186250D32001D07A00" },
{ 0x40, 0xA0, 0x05D9, "79007800E5442401F544EA3543F543E9" },
{ 0x40, 0xA0, 0x05E9, "3542F542E83541F54180CA538EF83001" },
{ 0x40, 0xA0, 0x05F9, "05120100C20130031A120F705015C203" },
{ 0x40, 0xA0, 0x0609, "121672200007907FD6E020E7F3121658" },
{ 0x40, 0xA0, 0x0619, "120F75120F4C80D6" },
{ 0x40, 0xA0, 0x0621, "22" },
{ 0x40, 0xA0, 0x0622, "12010001FFFFFF40D804018003000000" },
{ 0x40, 0xA0, 0x0632, "000109027400010100804B090400000E" },
{ 0x40, 0xA0, 0x0642, "FFFFFF00070501024000010705020240" },
{ 0x40, 0xA0, 0x0652, "00010705030240000107050402400001" },
{ 0x40, 0xA0, 0x0662, "07050502400001070506024000010705" },
{ 0x40, 0xA0, 0x0672, "07024000010705810240000107058202" },
{ 0x40, 0xA0, 0x0682, "40000107058302400001070584024000" },
{ 0x40, 0xA0, 0x0692, "01070585024000010705860240000107" },
{ 0x40, 0xA0, 0x06A2, "058702400001040309042A034D006900" },
{ 0x40, 0xA0, 0x06B2, "630072006F0063006800690070002000" },
{ 0x40, 0xA0, 0x06C2, "54006500630068006E006F006C006F00" },
{ 0x40, 0xA0, 0x06D2, "67007900200349004300440032002000" },
{ 0x40, 0xA0, 0x06E2, "55005300420020004400650076006900" },
{ 0x40, 0xA0, 0x06F2, "630065000000" },
{ 0x40, 0xA0, 0x1289, "436F7079726967687420284329203230" },
{ 0x40, 0xA0, 0x1299, "3032204D6963726F6368697020546563" },
{ 0x40, 0xA0, 0x12A9, "686E6F6C6F67792C20496E632E000000" },
{ 0x40, 0xA0, 0x12B9, "00004672616D65776F726B7320636F70" },
{ 0x40, 0xA0, 0x12C9, "79726967687420284329203139393820" },
{ 0x40, 0xA0, 0x12D9, "416E63686F722043686970732C20496E" },
{ 0x40, 0xA0, 0x12E9, "632E0000" },
{ 0x40, 0xA0, 0x11B5, "60C01A50FF13CBFF1507FF15DD000000" },
{ 0x40, 0xA0, 0x11C5, "00000000000000000000000000000000" },
{ 0x40, 0xA0, 0x11D5, "00000000000000000000000000000000" },
{ 0x40, 0xA0, 0x11E5, "00000000000000000000000000000000" },
{ 0x40, 0xA0, 0x11F5, "00000000000000000000000000000000" },
{ 0x40, 0xA0, 0x1205, "00000000000000000000000000000000" },
{ 0x40, 0xA0, 0x1215, "00000000000000000000000000000000" },
{ 0x40, 0xA0, 0x1225, "00000000000000000000000000000000" },
{ 0x40, 0xA0, 0x1235, "00000000000000000000000000000000" },
{ 0x40, 0xA0, 0x1245, "00000000000000000000000000000000" },
{ 0x40, 0xA0, 0x1255, "00000000000000000000000000000000" },
{ 0x40, 0xA0, 0x1265, "00000000000000000000000000000000" },
{ 0x40, 0xA0, 0x1275, "00000000421B120000421B150000421B" },
{ 0x40, 0xA0, 0x1285, "100000" },
{ 0x40, 0xA0, 0x06F8, "8B128A138914751700751800AB12AA13" },
{ 0x40, 0xA0, 0x0708, "A9141217F4FF7E008E158F16C3E51694" },
{ 0x40, 0xA0, 0x0718, "40E515648094805063AE15AF16901A50" },
{ 0x40, 0xA0, 0x0728, "75F003EF1218C3EE75F003A42583F583" },
{ 0x40, 0xA0, 0x0738, "E0FBA3E0FAA3E0F9EA496040AB12AA13" },
{ 0x40, 0xA0, 0x0748, "A914C003C002C001AE15AF16901A5075" },
{ 0x40, 0xA0, 0x0758, "F003EF1218C3EE75F003A42583F583E0" },
{ 0x40, 0xA0, 0x0768, "FBA3E0FAA3E0F989828A83D001D002D0" },
{ 0x40, 0xA0, 0x0778, "0312077E8002E4738E178F18AE17AF18" },
{ 0x40, 0xA0, 0x0788, "22" },
{ 0x40, 0xA0, 0x0789, "C2AFAF0BAE0AAD09AC088F1C8E1B8D1A" },
{ 0x40, 0xA0, 0x0799, "8C19D2AFAF1CAE1BAD1AAC1922" },
{ 0x40, 0xA0, 0x07A6, "907FC7E4F022" },
{ 0x40, 0xA0, 0x07AC, "8E228F23901B10E0FEA3E0FF8E248F25" },
{ 0x40, 0xA0, 0x07BC, "901B10E522F0A3E523F0AE24AF2522" },
{ 0x40, 0xA0, 0x07CB, "901B10E0FEA3E0FF22" },
{ 0x40, 0xA0, 0x07D4, "901A00EBF0A3EAF0A3E9F0901A031218" },
{ 0x40, 0xA0, 0x07E4, "86901B12E4F0A37402F0901A09E0FEA3" },
{ 0x40, 0xA0, 0x07F4, "E0FFEF30E018901A00E0FBA3E0FAA3E0" },
{ 0x40, 0xA0, 0x0804, "F9901A1AEBF0A3EAF0A3E9F08016901A" },
{ 0x40, 0xA0, 0x0814, "00E0FBA3E0FAA3E0F9901A13EBF0A3EA" },
{ 0x40, 0xA0, 0x0824, "F0A3E9F0901A1DE4F0A37401F0901A09" },
{ 0x40, 0xA0, 0x0834, "E0FEA3E0FFEEFF7E00901A17EFF0901A" },
{ 0x40, 0xA0, 0x0844, "03E0FCA3E0FDA3E0FEA3E0FF901A0F12" },
{ 0x40, 0xA0, 0x0854, "18867F007E007D007C00901A0FE0F8A3" },
{ 0x40, 0xA0, 0x0864, "E0F9A3E0FAA3E0FBD31218625003020A" },
{ 0x40, 0xA0, 0x0874, "72120D3C901A18EEF0FEA3EFF0FFEF4E" },
{ 0x40, 0xA0, 0x0884, "7040901B10E0FEA3E0FFEF4E60E3901A" },
{ 0x40, 0xA0, 0x0894, "03E0FCA3E0FDA3E0FEA3E0FF901A0FE0" },
{ 0x40, 0xA0, 0x08A4, "F8A3E0F9A3E0FAA3E0FBC3EF9BFFEE9A" },
{ 0x40, 0xA0, 0x08B4, "FEED99FDEC98FC901A03121886020A72" },
{ 0x40, 0xA0, 0x08C4, "80AF901A18E0FE" },
{ 0x40, 0xA0, 0x08CB, "A3E0FFE4FCFD901A0B121886907FE374" },
{ 0x40, 0xA0, 0x08DB, "7EF0907FE47440F0901A09E0FEA3E0FF" },
{ 0x40, 0xA0, 0x08EB, "EF20E0030209E2907FE5E0FF901A16EF" },
{ 0x40, 0xA0, 0x08FB, "F0901A1DE0FEA3E0FFEF64014E600302" },
{ 0x40, 0xA0, 0x090B, "09BE7B017A1A7916C003C002C001901A" },
{ 0x40, 0xA0, 0x091B, "1AE0FBA3E0FAA3E0F989828A83D001D0" },
{ 0x40, 0xA0, 0x092B, "02D0031209338002E473EF4E70030209" },
{ 0x40, 0xA0, 0x093B, "BE901A03E0FCA3E0FDA3E0FEA3E0FFC0" },
{ 0x40, 0xA0, 0x094B, "04C005C006C007901A18E0FEA3E0FFE4" },
{ 0x40, 0xA0, 0x095B, "FCFDA804A905AA06AB07901A0BE0FCA3" },
{ 0x40, 0xA0, 0x096B, "E0FDA3E0FEA3E0FFC3EF9BFBEE9AFAED" },
{ 0x40, 0xA0, 0x097B, "99F9EC98F8901A0FE0FCA3E0FDA3E0FE" },
{ 0x40, 0xA0, 0x098B, "A3E0FFC3EF9BFBEE9AFAED99F9EC98F8" },
{ 0x40, 0xA0, 0x099B, "D007D006D005D004C3EF9BFFEE9AFEED" },
{ 0x40, 0xA0, 0x09AB, "99FDEC98FC901A03121886901A1DE4F0" },
{ 0x40, 0xA0, 0x09BB, "A3E4F0901A19E024FFF0901A18E034FF" },
{ 0x40, 0xA0, 0x09CB, "F0" },
{ 0x40, 0xA0, 0x09CC, "901A18E0FEA3E0FFD3EF9400EE940040" },
{ 0x40, 0xA0, 0x09DC, "030208F28044907FE5E0FF901A13E0FB" },
{ 0x40, 0xA0, 0x09EC, "A3E0FAA3E0F9EF12183A901A07E0FEA3" },
{ 0x40, 0xA0, 0x09FC, "E0FF901A14EE8FF012184C901A19E024" },
{ 0x40, 0xA0, 0x0A0C, "FFF0901A18E034FFF0901A18E0FEA3E0" },
{ 0x40, 0xA0, 0x0A1C, "FFD3EF9400EE940050BC901A0FE0FCA3" },
{ 0x40, 0xA0, 0x0A2C, "E0FDA3E0FEA3E0FF901A0BE0F8A3E0F9" },
{ 0x40, 0xA0, 0x0A3C, "A3E0FAA3E0FBC3EF9BFFEE9AFEED99FD" },
{ 0x40, 0xA0, 0x0A4C, "EC98FC901A0F121886901A0FE0FCA3E0" },
{ 0x40, 0xA0, 0x0A5C, "FDA3E0FEA3E0FFEC4D4E4F7003020856" },
{ 0x40, 0xA0, 0x0A6C, "1207A6020856901A03E0FCA3E0FDA3E0" },
{ 0x40, 0xA0, 0x0A7C, "FEA3E0FF22" },
{ 0x40, 0xA0, 0x0A81, "901A1FEBF0A3EAF0A3E9F0901A221218" },
{ 0x40, 0xA0, 0x0A91, "86901B12E4F0A37401F0901A28E0FEA3" },
{ 0x40, 0xA0, 0x0AA1, "E0FFEF30E018901A1FE0FBA3E0FAA3E0" },
{ 0x40, 0xA0, 0x0AB1, "F9901A38EBF0A3EAF0A3E9F08016901A" },
{ 0x40, 0xA0, 0x0AC1, "1FE0FBA3E0FAA3E0F9901A35EBF0A3EA" },
{ 0x40, 0xA0, 0x0AD1, "F0A3E9F0901A28E0FEA3E0FFEEFF7E00" },
{ 0x40, 0xA0, 0x0AE1, "901A34EFF0901A22E0FCA3E0FDA3E0FE" },
{ 0x40, 0xA0, 0x0AF1, "A3E0FF901A2E1218867F007E007D007C" },
{ 0x40, 0xA0, 0x0B01, "00901A2EE0F8A3E0F9A3E0FAA3E0FBD3" },
{ 0x40, 0xA0, 0x0B11, "1218625003020D2D7F407E007D007C00" },
{ 0x40, 0xA0, 0x0B21, "901A2EE0F8A3E0F9A3E0FAA3E0FBD312" },
{ 0x40, 0xA0, 0x0B31, "1862400C901A2A121892000000408014" },
{ 0x40, 0xA0, 0x0B41, "901A2EE0FCA3E0FDA3E0FEA3E0FF901A" },
{ 0x40, 0xA0, 0x0B51, "2A121886901A2DE0FF901A32EFF0907F" },
{ 0x40, 0xA0, 0x0B61, "B8E0FFEF30E140901B10E0FEA3E0FFEF" },
{ 0x40, 0xA0, 0x0B71, "4E60EB901A22E0FCA3E0FDA3E0FEA3E0" },
{ 0x40, 0xA0, 0x0B81, "FF901A2EE0F8" },
{ 0x40, 0xA0, 0x0B87, "A3E0F9A3E0FAA3E0FBC3EF9BFFEE9AFE" },
{ 0x40, 0xA0, 0x0B97, "ED99FDEC98FC901A22121886020D2D80" },
{ 0x40, 0xA0, 0x0BA7, "B7907FE3747EF0907FE4E4F0901A28E0" },
{ 0x40, 0xA0, 0x0BB7, "FEA3E0FFEF20E003020CBB7B017A1A79" },
{ 0x40, 0xA0, 0x0BC7, "33C003C002C001901A38E0FBA3E0FAA3" },
{ 0x40, 0xA0, 0x0BD7, "E0F989828A83D001D002D003120BE880" },
{ 0x40, 0xA0, 0x0BE7, "02E473901A3BEEF0FEA3EFF0FFEF4E70" },
{ 0x40, 0xA0, 0x0BF7, "03020C9B901A3BE0FEA3E0FFEF64024E" },
{ 0x40, 0xA0, 0x0C07, "7017901A32E0FFE4FCFDFE901A2DE0FE" },
{ 0x40, 0xA0, 0x0C17, "C3EE9FFF907FB9EFF0901A22E0FCA3E0" },
{ 0x40, 0xA0, 0x0C27, "FDA3E0FEA3E0FFC004C005C006C00790" },
{ 0x40, 0xA0, 0x0C37, "1A32E0FFE4FCFDFEA804A905AA06AB07" },
{ 0x40, 0xA0, 0x0C47, "901A2AE0FCA3E0FDA3E0FEA3E0FFC3EF" },
{ 0x40, 0xA0, 0x0C57, "9BFBEE9AFAED99F9EC98F8901A2EE0FC" },
{ 0x40, 0xA0, 0x0C67, "A3E0FDA3E0FEA3E0FFC3EF9BFBEE9AFA" },
{ 0x40, 0xA0, 0x0C77, "ED99F9EC98" },
{ 0x40, 0xA0, 0x0C7C, "F8D007D006D005D004C3EF9BFFEE9AFE" },
{ 0x40, 0xA0, 0x0C8C, "ED99FDEC98FC901A22121886020D2D90" },
{ 0x40, 0xA0, 0x0C9C, "1A33E0FF907FE5EFF0901A32E014F090" },
{ 0x40, 0xA0, 0x0CAC, "1A32E0FFEFD394004003020BC2803690" },
{ 0x40, 0xA0, 0x0CBC, "1A35E0FBA3E0FAA3E0F91217F4FF907F" },
{ 0x40, 0xA0, 0x0CCC, "E5EFF0901A26E0FEA3E0FF901A36EE8F" },
{ 0x40, 0xA0, 0x0CDC, "F012184C901A32E014F0901A32E0FFEF" },
{ 0x40, 0xA0, 0x0CEC, "D3940050CA901A2DE0FF907FB9EFF090" },
{ 0x40, 0xA0, 0x0CFC, "1A2EE0FCA3E0FDA3E0FEA3E0FF901A2A" },
{ 0x40, 0xA0, 0x0D0C, "E0F8A3E0F9A3E0FAA3E0FBC3EF9BFFEE" },
{ 0x40, 0xA0, 0x0D1C, "9AFEED99FDEC98FC901A2E121886020A" },
{ 0x40, 0xA0, 0x0D2C, "FA901A22E0FCA3E0FDA3E0FEA3E0FF22" },
{ 0x40, 0xA0, 0x0D3C, "C2AF901B15E0FEA3E0FF8E1D8F1E901B" },
{ 0x40, 0xA0, 0x0D4C, "15E4F0A3E4F0D2AFAE1DAF1E22" },
{ 0x40, 0xA0, 0x0D59, "8B268A278928901B12E4F0A37404F0C2" },
{ 0x40, 0xA0, 0x0D69, "04907FB6E0FFEF30E111901B10E0FEA3" },
{ 0x40, 0xA0, 0x0D79, "E0FFEF4E60EB020E5680E6901A3EE0FF" },
{ 0x40, 0xA0, 0x0D89, "907E80EFF0907E81E4F0AB26AA27A928" },
{ 0x40, 0xA0, 0x0D99, "EA49607AAB26AA27A9281217F4FF907E" },
{ 0x40, 0xA0, 0x0DA9, "82EFF0AB26AA27A92875820175830012" },
{ 0x40, 0xA0, 0x0DB9, "180DFF907E83EFF0AB26AA27A9287582" },
{ 0x40, 0xA0, 0x0DC9, "0275830012180DFF907E84EFF0AB26AA" },
{ 0x40, 0xA0, 0x0DD9, "27A92875820375830012180DFF907E85" },
{ 0x40, 0xA0, 0x0DE9, "EFF0AB26AA27A9287582047583001218" },
{ 0x40, 0xA0, 0x0DF9, "0DFF907E86EFF0AB26AA27A928758205" },
{ 0x40, 0xA0, 0x0E09, "75830012180DFF907E87EFF0801E907E" },
{ 0x40, 0xA0, 0x0E19, "82E4F0907E83E4F0907E84E4F0907E85" },
{ 0x40, 0xA0, 0x0E29, "E4F0907E86E4F0907E87E4F0907FB774" },
{ 0x40, 0xA0, 0x0E39, "08F0907FB6E0FFEF30E110901B10E0FE" },
{ 0x40, 0xA0, 0x0E49, "A3E0FFEF4E60EB800480E7D204901B12" },
{ 0x40, 0xA0, 0x0E59, "E4F0A3E4F0A20422" },
{ 0x40, 0xA0, 0x0E61, "A2009206A2059200A20622" },
{ 0x40, 0xA0, 0x0E6C, "A2029208A2079202A20822" },
{ 0x40, 0xA0, 0x0E77, "A203920AA2099203A20A22" },
{ 0x40, 0xA0, 0x0E82, "901B12E0FEA3E0FF8E298F2A901B12E4" },
{ 0x40, 0xA0, 0x0E92, "F0A3E4F0AE29AF2A22" },
{ 0x40, 0xA0, 0x0E9B, "901B12E0FEA3E0FF8E2B8F2C901B12E4" },
{ 0x40, 0xA0, 0x0EAB, "F0A37401F0AE2BAF2C22" },
{ 0x40, 0xA0, 0x0EB5, "901B12E0FEA3E0FF8E2D8F2E901B12E4" },
{ 0x40, 0xA0, 0x0EC5, "F0A37402F0AE2DAF2E22" },
{ 0x40, 0xA0, 0x0ECF, "901B12E0FEA3E0FF8E2F8F30901B12E4" },
{ 0x40, 0xA0, 0x0EDF, "F0A37403F0AE2FAF3022" },
{ 0x40, 0xA0, 0x0EE9, "901B12E0FEA3E0FF8E318F32901B12E4" },
{ 0x40, 0xA0, 0x0EF9, "F0A37404F0AE31AF3222" },
{ 0x40, 0xA0, 0x0F03, "907FDFE0FFEF4402FF907FDFEFF0907F" },
{ 0x40, 0xA0, 0x0F13, "DEE0FFEF4406FF907FDEEFF0907FAD74" },
{ 0x40, 0xA0, 0x0F23, "02F0901B147401F0901A4FE4F0C203C2" },
{ 0x40, 0xA0, 0x0F33, "00C2029078497401F0907FDD7401F090" },
{ 0x40, 0xA0, 0x0F43, "7FE27440F01212ED22" },
{ 0x40, 0xA0, 0x0F4C, "901B12E0FEA3E0FFEF64034E70157B01" },
{ 0x40, 0xA0, 0x0F5C, "7A1A793D1206F8EF4E7008901B12E4F0" },
{ 0x40, 0xA0, 0x0F6C, "A3E4F022" },
{ 0x40, 0xA0, 0x0F70, "121339D322" },
{ 0x40, 0xA0, 0x0F75, "12133BD322" },
{ 0x40, 0xA0, 0x0F7A, "D322" },
{ 0x40, 0xA0, 0x0F7C, "907FEAE0FF901B14EFF0D322" },
{ 0x40, 0xA0, 0x0F88, "901B14E0FF907F00EFF0907FB57401F0" },
{ 0x40, 0xA0, 0x0F98, "D322" },
{ 0x40, 0xA0, 0x0F9A, "907FEAE0FF901A4FEFF0D322" },
{ 0x40, 0xA0, 0x0FA6, "901A4FE0FF907F00EFF0907FB57401F0" },
{ 0x40, 0xA0, 0x0FB6, "D322" },
{ 0x40, 0xA0, 0x0FB8, "D322" },
{ 0x40, 0xA0, 0x0FBA, "D322" },
{ 0x40, 0xA0, 0x0FBC, "D322" },
{ 0x40, 0xA0, 0x0FBE, "D322" },
{ 0x40, 0xA0, 0x0FC0, "C0E0C083C082C085C084C086758600D2" },
{ 0x40, 0xA0, 0x0FD0, "015391EF907FAB7401F0D086D084D085" },
{ 0x40, 0xA0, 0x0FE0, "D082D083D0E032" },
{ 0x40, 0xA0, 0x0FE7, "C0E0C083C082C085C084C08675860053" },
{ 0x40, 0xA0, 0x0FF7, "91EF907FAB7404F0D086D084D085D082" },
{ 0x40, 0xA0, 0x1007, "D083D0E032" },
{ 0x40, 0xA0, 0x100C, "C0E0C083C082C085C084C08675860053" },
{ 0x40, 0xA0, 0x101C, "91EF907FAB7402F0D086D084D085D082" },
{ 0x40, 0xA0, 0x102C, "D083D0E032" },
{ 0x40, 0xA0, 0x1031, "C0E0C083C082C085C084C08675860090" },
{ 0x40, 0xA0, 0x1041, "7FC7E4F0907FC9E4F0907FCBE4F0907F" },
{ 0x40, 0xA0, 0x1051, "CDE4F0907FCFE4F0907FD1E4F0907FD3" },
{ 0x40, 0xA0, 0x1061, "E4F05391EF907FAB7410F0D086D084D0" },
{ 0x40, 0xA0, 0x1071, "85D082D083D0E032" },
{ 0x40, 0xA0, 0x1079, "C0E0C083C082C085C084C08675860053" },
{ 0x40, 0xA0, 0x1089, "91EF907FAB7420F0D086D084D085D082" },
{ 0x40, 0xA0, 0x1099, "D083D0E032" },
{ 0x40, 0xA0, 0x109E, "C0E0C083C082C085C084C086758600D2" },
{ 0x40, 0xA0, 0x10AE, "035391EF907FAB7408F0D086D084D085" },
{ 0x40, 0xA0, 0x10BE, "D082D083D0E032" },
{ 0x40, 0xA0, 0x10C5, "32" },
{ 0x40, 0xA0, 0x10C6, "32" },
{ 0x40, 0xA0, 0x10C7, "32" },
{ 0x40, 0xA0, 0x10C8, "C0E0C0F0C083C082C085C084C0867586" },
{ 0x40, 0xA0, 0x10D8, "00C0D0C000C001C002C003C004C005C0" },
{ 0x40, 0xA0, 0x10E8, "06C007901B12E0FEA3E0FFEF8EF01218" },
{ 0x40, 0xA0, 0x10F8, "CF11240000117C000111110002117C00" },
{ 0x40, 0xA0, 0x1108, "03117C00040000117C907FC7E0FF7E00" },
{ 0x40, 0xA0, 0x1118, "901B15EEF0A3EFF0805D8058907E40E0" },
{ 0x40, 0xA0, 0x1128, "FFEFB44011907E42E0FF7E00901B10EE" },
{ 0x40, 0xA0, 0x1138, "F0A3EFF0803E753300753400C3E53494" },
{ 0x40, 0xA0, 0x1148, "12E533648094805026AF3474402FF582" },
{ 0x40, 0xA0, 0x1158, "E4347EF583E0FFAE34743D2EF582E434" },
{ 0x40, 0xA0, 0x1168, "1AF583EFF00534E5347002053380CD12" },
{ 0x40, 0xA0, 0x1178, "0ECF80031207A65391EF907FAA7402F0" },
{ 0x40, 0xA0, 0x1188, "D007D006D005D004D003D002D001D000" },
{ 0x40, 0xA0, 0x1198, "D0D0D086D084D085D082D083D0F0D0E0" },
{ 0x40, 0xA0, 0x11A8, "32" },
{ 0x40, 0xA0, 0x11A9, "32" },
{ 0x40, 0xA0, 0x11AA, "32" },
{ 0x40, 0xA0, 0x11AB, "32" },
{ 0x40, 0xA0, 0x11AC, "32" },
{ 0x40, 0xA0, 0x11AD, "32" },
{ 0x40, 0xA0, 0x11AE, "32" },
{ 0x40, 0xA0, 0x11AF, "32" },
{ 0x40, 0xA0, 0x11B0, "32" },
{ 0x40, 0xA0, 0x11B1, "32" },
{ 0x40, 0xA0, 0x11B2, "32" },
{ 0x40, 0xA0, 0x11B3, "32" },
{ 0x40, 0xA0, 0x11B4, "32" },
{ 0x40, 0xA0, 0x12ED, "90784A7480F0C207120E6CC205120E61" },
{ 0x40, 0xA0, 0x12FD, "907F9D74FFF0907F977447F0E4907F95" },
{ 0x40, 0xA0, 0x130D, "F0907F9E74FBF0E4907F93F0907F9C74" },
{ 0x40, 0xA0, 0x131D, "FFF0D2A0E4FFFE0FBF00010EBE92F8BF" },
{ 0x40, 0xA0, 0x132D, "48F5C2A0D2A5D2A6D2A7D322" },
{ 0x40, 0xA0, 0x1339, "D322" },
{ 0x40, 0xA0, 0x133B, "D322" },
{ 0x40, 0xA0, 0x133D, "8B498A4A894BE4F54CF54D1207898F51" },
{ 0x40, 0xA0, 0x134D, "8E508D4F8C4E120789C3EF9551FFEE95" },
{ 0x40, 0xA0, 0x135D, "50FEED954FFDEC954EFCAB38AA37A936" },
{ 0x40, 0xA0, 0x136D, "A835C31218625008754C00754D028049" },
{ 0x40, 0xA0, 0x137D, "30A2D3E4907F9DF0C2A5C2A7D2A7AB49" },
{ 0x40, 0xA0, 0x138D, "AA4AA94B90000112180D30E717907F9A" },
{ 0x40, 0xA0, 0x139D, "E0F552E92401F9E43AFA1217F4547F12" },
{ 0x40, 0xA0, 0x13AD, "183A8097907F9AE0AB49AA4AA94B1218" },
{ 0x40, 0xA0, 0x13BD, "3AD2A5907F9D74FFF0AE4CAF4D22" },
{ 0x40, 0xA0, 0x13CB, "E4F54390000D12180DF53990000C1218" },
{ 0x40, 0xA0, 0x13DB, "0DF53A90000B12180DF53B90000A1218" },
{ 0x40, 0xA0, 0x13EB, "0DF53CAF3CAE3BAD3AAC398F388E378D" },
{ 0x40, 0xA0, 0x13FB, "368C3590000512180DF5399000041218" },
{ 0x40, 0xA0, 0x140B, "0DF53A90000312180DF53B9000021218" },
{ 0x40, 0xA0, 0x141B, "0DF53C120E9B1207A6753D00753E017B" },
{ 0x40, 0xA0, 0x142B, "FF7A13793DAF3CAE3BAD3AAC39E4901A" },
{ 0x40, 0xA0, 0x143B, "26F0A3F0A3E53DF0A3E53EF0120A818F" },
{ 0x40, 0xA0, 0x144B, "428E418D408C3FAB3CAA3BA93AA839C3" },
{ 0x40, 0xA0, 0x145B, "1218626036754302854244AF42AE41AD" },
{ 0x40, 0xA0, 0x146B, "40AC3F78081218738F45AF42AE41AD40" },
{ 0x40, 0xA0, 0x147B, "AC3F78101218738F46AF42AE41AD40AC" },
{ 0x40, 0xA0, 0x148B, "3F78181218738F47E4F5487B007A0079" },
{ 0x40, 0xA0, 0x149B, "43120D59120E821207A67E007F0122" },
{ 0x40, 0xA0, 0x14AA, "8B478A488949E4F54AF54B1207898F4F" },
{ 0x40, 0xA0, 0x14BA, "8E4E8D4D8C4C120789C3EF954FFFEE95" },
{ 0x40, 0xA0, 0x14CA, "4EFEED954DFDEC954CFCAB38AA37A936" },
{ 0x40, 0xA0, 0x14DA, "A835C31218625008754A00754B018018" },
{ 0x40, 0xA0, 0x14EA, "30A2D3C2A5C2A6AB47AA48A9491217F4" },
{ 0x40, 0xA0, 0x14FA, "907F97F0D2A6D2A5AE4AAF4B22" },
{ 0x40, 0xA0, 0x1507, "E4F53D90000D12180DF53990000C1218" },
{ 0x40, 0xA0, 0x1517, "0DF53A90000B12180DF53B90000A1218" },
{ 0x40, 0xA0, 0x1527, "0DF53CAF3CAE3BAD3AAC398F388E378D" },
{ 0x40, 0xA0, 0x1537, "368C3590000512180DF5399000041218" },
{ 0x40, 0xA0, 0x1547, "0DF53A90000312180DF53B9000021218" },
{ 0x40, 0xA0, 0x1557, "0DF53C120EB51207A67BFF7A1479AAAF" },
{ 0x40, 0xA0, 0x1567, "3CAE3BAD3AAC39E4901A07F0A3F0A3F0" },
{ 0x40, 0xA0, 0x1577, "A304F01207D48F468E458D448C43AB3C" },
{ 0x40, 0xA0, 0x1587, "AA3BA93AA839C31218626036753D0185" },
{ 0x40, 0xA0, 0x1597, "463EAF46AE45AD44AC4378081218738F" },
{ 0x40, 0xA0, 0x15A7, "3FAF46AE45AD44AC4378101218738F40" },
{ 0x40, 0xA0, 0x15B7, "AF46AE45AD44AC4378181218738F41E4" },
{ 0x40, 0xA0, 0x15C7, "F5427B007A00793D120D59120E821207" },
{ 0x40, 0xA0, 0x15D7, "A67E007F0122" },
{ 0x40, 0xA0, 0x15DD, "8B398A3A893B1212EDE4F53CFB7A0079" },
{ 0x40, 0xA0, 0x15ED, "3C120D59120E821207A67E007F0122" },
{ 0x40, 0xA0, 0x0043, "021600" },
{ 0x40, 0xA0, 0x1600, "020FC00002100C00020FE70002109E00" },
{ 0x40, 0xA0, 0x1610, "02103100021079000210C5000210C600" },
{ 0x40, 0xA0, 0x1620, "0210C7000210C8000211A9000211AA00" },
{ 0x40, 0xA0, 0x1630, "0211AB000211AC000211AD000211AE00" },
{ 0x40, 0xA0, 0x1640, "0211AF000211B0000211B1000211B200" },
{ 0x40, 0xA0, 0x1650, "0211B3000211B400" },
{ 0x40, 0xA0, 0x1658, "907FD6E030E712E04401F07F147E0012" },
{ 0x40, 0xA0, 0x1668, "1751907FD6E054FEF022" },
{ 0x40, 0xA0, 0x1672, "907FD6E04480F0438701000000000022" },
{ 0x40, 0xA0, 0x1693, "907FD6E04408F0" },
{ 0x40, 0xA0, 0x169A, "E4F549" },
{ 0x40, 0xA0, 0x169D, "E054FBF0" },
{ 0x40, 0xA0, 0x16A1, "E4F549" },
{ 0x40, 0xA0, 0x16A4, "E04408F0300B04E04402F07FDC7E0512" },
{ 0x40, 0xA0, 0x16B4, "1751907F92E030E3077FDC7E05121751" },
{ 0x40, 0xA0, 0x16C4, "907FAB74FFF0907FA9F0907FAAF05391" },
{ 0x40, 0xA0, 0x16D4, "EF907FD6E054F7F0" },
{ 0x40, 0xA0, 0x16DC, "E4F549" },
{ 0x40, 0xA0, 0x16DF, "E04404F022" },
{ 0x40, 0xA0, 0x16E4, "A907" },
{ 0x40, 0xA0, 0x16E6, "AE10AF118F828E83A3E064037017AD01" },
{ 0x40, 0xA0, 0x16F6, "19ED7001228F828E83E07C002FFDEC3E" },
{ 0x40, 0xA0, 0x1706, "FEAF0580DF7E007F00" },
{ 0x40, 0xA0, 0x170F, "22" },
{ 0x40, 0xA0, 0x1710, "AD07" },
{ 0x40, 0xA0, 0x1712, "E4FCAE0EAF0F8F828E83A3E06402702A" },
{ 0x40, 0xA0, 0x1722, "AB040CEBB50501228F828E83A3A3E0FA" },
{ 0x40, 0xA0, 0x1732, "A3E08A54F5556254E5546255E5556254" },
{ 0x40, 0xA0, 0x1742, "2FFBE5543EFEAF0380CC7E007F00" },
{ 0x40, 0xA0, 0x1750, "22" },
{ 0x40, 0xA0, 0x1751, "8E4A8F4BE54B154BAE4A7002154A4E60" },
{ 0x40, 0xA0, 0x1761, "0512168280EE22" },
{ 0x40, 0xA0, 0x1682, "7400F58690FDA57C05A3E582458370F9" },
{ 0x40, 0xA0, 0x1692, "22" },
{ 0x40, 0xA0, 0x0000, "021768" },
{ 0x40, 0xA0, 0x1768, "787FE4F6D8FD7581550217AF" },
{ 0x40, 0xA0, 0x17F4, "BB010689828A83E0225002E722BBFE02" },
{ 0x40, 0xA0, 0x1804, "E32289828A83E49322" },
{ 0x40, 0xA0, 0x180D, "BB010CE58229F582E5833AF583E02250" },
{ 0x40, 0xA0, 0x181D, "06E92582F8E622BBFE06E92582F8E222" },
{ 0x40, 0xA0, 0x182D, "E58229F582E5833AF583E49322" },
{ 0x40, 0xA0, 0x183A, "BB010689828A83F0225002F722BBFE01" },
{ 0x40, 0xA0, 0x184A, "F322" },
{ 0x40, 0xA0, 0x184C, "C5F0F8A3E028F0C5F0F8E58215827002" },
{ 0x40, 0xA0, 0x185C, "1583E038F022" },
{ 0x40, 0xA0, 0x1862, "EB9FF5F0EA9E42F0E99D42F0E89C45F0" },
{ 0x40, 0xA0, 0x1872, "22" },
{ 0x40, 0xA0, 0x1873, "E8600FECC313FCED13FDEE13FEEF13FF" },
{ 0x40, 0xA0, 0x1883, "D8F122" },
{ 0x40, 0xA0, 0x1886, "ECF0A3EDF0A3EEF0A3EFF022" },
{ 0x40, 0xA0, 0x1892, "A8828583F0D083D0821218A91218A912" },
{ 0x40, 0xA0, 0x18A2, "18A91218A9E473E493A3C583C5F0C583" },
{ 0x40, 0xA0, 0x18B2, "C8C582C8F0A3C583C5F0C583C8C582C8" },
{ 0x40, 0xA0, 0x18C2, "22" },
{ 0x40, 0xA0, 0x18C3, "A42582F582E5F03583F58322" },
{ 0x40, 0xA0, 0x18CF, "D083D082F8E4937012740193700DA3A3" },
{ 0x40, 0xA0, 0x18DF, "93F8740193F5828883E473740293B5F0" },
{ 0x40, 0xA0, 0x18EF, "067403936860E9A3A3A3A380D8" },
{ 0x40, 0xA0, 0x1774, "020469E493A3F8E493A34003F68001F2" },
{ 0x40, 0xA0, 0x1784, "08DFF48029E493A3F85407240CC8C333" },
{ 0x40, 0xA0, 0x1794, "C4540F4420C8834004F456800146F6DF" },
{ 0x40, 0xA0, 0x17A4, "E4800B01020408102040809011B5E47E" },
{ 0x40, 0xA0, 0x17B4, "019360BCA3FF543F30E509541FFEE493" },
{ 0x40, 0xA0, 0x17C4, "A360010ECF54C025E060A840B8E493A3" },
{ 0x40, 0xA0, 0x17D4, "FAE493A3F8E493A3C8C582C8CAC583CA" },
{ 0x40, 0xA0, 0x17E4, "F0A3C8C582C8CAC583CADFE9DEE780BE" },
{ 0x40, 0xA0, 0x1288, "00" },
{ 0x40, 0xA0, 0x7F92, "01" },
{ 0x40, 0xA0, 0x7F92, "00" },
{ 0, 0, 0, 0 }
};