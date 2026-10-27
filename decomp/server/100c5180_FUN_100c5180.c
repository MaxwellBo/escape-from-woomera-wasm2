
void __thiscall FUN_100c5180(int *param_1,int param_2)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  char *pcVar4;
  bool bVar5;
  
  iVar3 = *(int *)(*(int *)(param_2 + 4) + 0x208);
  if (iVar3 == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = iVar3 + 0x80;
  }
  pcVar4 = s_efw_cage_door_1011cc78;
  pbVar2 = (byte *)(*(int *)(DAT_10122044 + 0x98) + *(int *)(iVar3 + 0x1cc));
  do {
    bVar1 = *pbVar2;
    bVar5 = bVar1 < (byte)*pcVar4;
    if (bVar1 != *pcVar4) {
LAB_100c51e1:
      iVar3 = (1 - (uint)bVar5) - (uint)(bVar5 != 0);
      goto LAB_100c51e6;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    bVar5 = bVar1 < (byte)pcVar4[1];
    if (bVar1 != pcVar4[1]) goto LAB_100c51e1;
    pbVar2 = pbVar2 + 2;
    pcVar4 = pcVar4 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_100c51e6:
  if (iVar3 == 0) {
    FUN_100b0fe0((byte *)s_Oh__you_ve_broken_the_branch_att_1011cc88);
    FUN_100c2e20((int *)param_1[0x37],param_1);
    FUN_100c5220((void *)param_1[0x37],0x101054b8);
  }
  return;
}

