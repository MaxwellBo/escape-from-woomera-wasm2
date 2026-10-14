
/* WARNING: Instruction at (ram,0x100a8295) overlaps instruction at (ram,0x100a8293)
    */

void __fastcall FUN_100a8281(byte param_1,undefined4 param_2,int param_3)

{
  byte bVar1;
  int iVar2;
  byte bVar5;
  byte *in_EAX;
  int iVar3;
  undefined4 *puVar4;
  byte bVar6;
  uint unaff_EBX;
  int unaff_ESI;
  byte in_CF;
  
  bVar6 = (byte)param_2;
  if ((int)unaff_EBX < -1) {
    bVar5 = (byte)((uint)in_EAX >> 8);
    bVar1 = bVar5 + param_1;
    in_EAX = (byte *)CONCAT22((short)((uint)in_EAX >> 0x10),CONCAT11(bVar1 + in_CF,(char)in_EAX));
    if ((SCARRY1(bVar5,param_1) != SCARRY1(bVar1,in_CF)) == (char)(bVar1 + in_CF) < '\0')
    goto motion_thread;
    *(char *)(unaff_ESI + 0x7e) =
         *(char *)(unaff_ESI + 0x7e) + (char)((uint)param_2 >> 8) +
         (CARRY1(bVar5,param_1) || CARRY1(bVar1,in_CF));
    in_CF = 0;
    bVar6 = bVar6 | *in_EAX;
  }
  else if (unaff_EBX < 0x80000000) goto motion_thread;
  in_EAX[-0x6f6f6f70] = in_EAX[-0x6f6f6f70] + bVar6 + in_CF;
motion_thread:
  if ((param_3 == 0) && (iVar3 = (*DAT_10121e5c)(), iVar3 != 0)) {
    param_3 = iVar3 + 0x80;
  }
  iVar3 = *(int *)(param_3 + 0x208);
  if (((iVar3 == 0) || (iVar2 = iRam00000004, *(int *)(iVar3 + 0x7c) == 0)) &&
     (puVar4 = (undefined4 *)(*DAT_10121f04)(iVar3,0xb8), iVar2 = param_3,
     puVar4 != (undefined4 *)0x0)) {
    *puVar4 = &PTR_FUN_100e46d8;
    puVar4[1] = param_3;
    return;
  }
  iRam00000004 = iVar2;
  return;
}

