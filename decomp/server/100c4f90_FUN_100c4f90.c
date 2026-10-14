
void __thiscall FUN_100c4f90(int *param_1,int param_2)

{
  byte bVar1;
  byte *pbVar2;
  undefined4 uVar3;
  int iVar4;
  char *pcVar5;
  bool bVar6;
  
  iVar4 = *(int *)(*(int *)(param_2 + 4) + 0x208);
  if (iVar4 == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = iVar4 + 0x80;
  }
  pcVar5 = s_efw_kitchen_bin_1011cc24;
  pbVar2 = (byte *)(*(int *)(DAT_10122044 + 0x98) + *(int *)(iVar4 + 0x1cc));
  do {
    bVar1 = *pbVar2;
    bVar6 = bVar1 < (byte)*pcVar5;
    if (bVar1 != *pcVar5) {
LAB_100c4ff1:
      iVar4 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
      goto LAB_100c4ff6;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    bVar6 = bVar1 < (byte)pcVar5[1];
    if (bVar1 != pcVar5[1]) goto LAB_100c4ff1;
    pbVar2 = pbVar2 + 2;
    pcVar5 = pcVar5 + 2;
  } while (bVar1 != 0);
  iVar4 = 0;
LAB_100c4ff6:
  if (iVar4 == 0) {
    uVar3 = FUN_100c59c0(param_1[0x37]);
    if ((char)uVar3 != '\0') {
      DAT_10132c90 = DAT_10132c90 + 1;
      FUN_100b0fe0((byte *)s_Dammit__Electrician_saw_you__can_1011cbdc);
      FUN_100ba040((byte *)s_efw_electrician_101031bc,s_Oi__Put_that_back__1010546c,10);
      FUN_100c4d10(2.0);
      return;
    }
    FUN_100c81d0(param_1[0x37],0x3e);
    FUN_100c2e20((int *)param_1[0x37],param_1);
    FUN_100c3500(s_PliersInBin_101054e0,1);
    FUN_100c3500(s_PLIERS_GOT_PLIERS_1011cbb8,0);
    FUN_100c4d70(10.0);
    if (DAT_10132cc4 != (undefined4 *)0x0) {
      FUN_100c77c0(DAT_10132cc4);
    }
    FUN_100c3500(s_OFFICE_1011cbd4,1);
    FUN_100c6890(6,0);
  }
  return;
}

