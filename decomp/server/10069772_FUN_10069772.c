
void __fastcall FUN_10069772(int param_1,byte param_2)

{
  byte *pbVar1;
  byte bVar2;
  int iVar3;
  byte bVar4;
  int *piVar5;
  undefined3 extraout_var;
  undefined4 uVar6;
  int unaff_EBX;
  int unaff_ESI;
  byte in_CF;
  bool bVar7;
  int unaff_retaddr;
  
  pbVar1 = (byte *)(unaff_EBX + -0x6a);
  bVar4 = *pbVar1 + (byte)unaff_EBX;
  bVar7 = CARRY1(*pbVar1,(byte)unaff_EBX) || CARRY1(bVar4,in_CF);
  *pbVar1 = bVar4 + in_CF;
  pbVar1 = (byte *)(param_1 + -0x30eff96a);
  bVar4 = *pbVar1;
  bVar2 = *pbVar1;
  *pbVar1 = bVar2 + param_2 + bVar7;
  *(char *)(unaff_ESI + -0x6f6f6f70) =
       *(char *)(unaff_ESI + -0x6f6f6f70) + param_2 +
       (CARRY1(bVar4,param_2) || CARRY1(bVar2 + param_2,bVar7));
  if (unaff_retaddr == 0) {
    piVar5 = (int *)FUN_100af030(0,(byte *)(param_1 + 0x574));
    if (piVar5 != (int *)0x0) {
      bVar7 = FUN_10019450((uint *)(param_1 + 0x160));
      if (CONCAT31(extraout_var,bVar7) != 0) {
        iVar3 = *piVar5;
        uVar6 = FUN_10019410((uint *)(param_1 + 0x160));
        (**(code **)(iVar3 + 0xe0))(uVar6);
      }
    }
  }
  else if ((unaff_retaddr == 1) && (*(int *)(param_1 + 0x374) == 0)) {
    *(undefined4 *)(param_1 + 0x374) = 1;
    return;
  }
  return;
}

