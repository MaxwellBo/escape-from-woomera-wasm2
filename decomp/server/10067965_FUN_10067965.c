
/* WARNING: Instruction at (ram,0x10067975) overlaps instruction at (ram,0x10067973)
    */

void __fastcall FUN_10067965(byte *param_1,char param_2,int param_3)

{
  char *pcVar1;
  byte bVar2;
  byte bVar3;
  undefined4 in_EAX;
  byte bVar4;
  byte bVar5;
  int unaff_EBX;
  byte in_CF;
  bool bVar6;
  char in_PF;
  char in_AF;
  bool in_ZF;
  char in_SF;
  
  bVar3 = (byte)in_EAX;
  if (!in_ZF) {
    bVar2 = *param_1;
    bVar5 = (byte)unaff_EBX;
    bVar4 = *param_1 + bVar5;
    bVar6 = CARRY1(bVar2,bVar5) || CARRY1(bVar4,in_CF);
    *param_1 = bVar4 + in_CF;
    if (*param_1 != 0) {
      if (!CARRY1(bVar2,bVar5) && !CARRY1(bVar4,in_CF)) {
        pcVar1 = (char *)(CONCAT22((short)((uint)in_EAX >> 0x10),
                                   CONCAT11(in_SF << 7 | in_ZF << 6 | in_AF << 4 | in_PF << 2 | 2U |
                                            in_CF,bVar3)) + -0x6f6f6f70);
        *pcVar1 = *pcVar1 + param_2 + bVar6;
      }
      goto CNihilanth_CrashTouch;
    }
    bVar4 = (byte)((uint)param_1 >> 8);
    bVar2 = bVar3 + bVar4;
    in_CF = CARRY1(bVar3,bVar4) || CARRY1(bVar2,bVar6);
    in_ZF = (byte)(bVar2 + bVar6) == '\0';
  }
  if (in_ZF) {
    *(char *)(unaff_EBX + -0x6feff98a) =
         *(char *)(unaff_EBX + -0x6feff98a) + (char)((uint)unaff_EBX >> 8) + in_CF;
  }
CNihilanth_CrashTouch:
  if (*(int *)(*(int *)(param_3 + 4) + 0x10c) == 4) {
    param_1[0x78] = 0;
    param_1[0x79] = 0;
    param_1[0x7a] = 0;
    param_1[0x7b] = 0;
    (**(code **)(*(int *)param_1 + 8))(0);
  }
  return;
}

