
void __fastcall FUN_1008f720(int *param_1)

{
  byte bVar1;
  int *piVar2;
  byte *pbVar3;
  int iVar4;
  char *pcVar5;
  bool bVar6;
  
  *(undefined4 *)(param_1[1] + 0x10c) = 0;
  param_1[0xc2] = 0;
  if (param_1[0xc3] == 0) {
    if (*(int *)(param_1[1] + 0x1cc) == 0) {
      param_1[0x1d] = (int)CCineMonster::CineThink;
      (**(code **)(*param_1 + 8))(0x3f800000);
    }
  }
  else {
    param_1[0x1d] = (int)CCineMonster::InitIdleThink;
    (**(code **)(*param_1 + 8))(0x3f800000);
  }
  piVar2 = (int *)param_1[1];
  if ((*(byte *)(piVar2 + 0x68) & 0x20) == 0) {
    param_1[0xd7] = 1;
  }
  else {
    param_1[0xd7] = 0;
  }
  pcVar5 = s_aiscripted_sequence_10115ffc;
  pbVar3 = (byte *)(*(int *)(DAT_10122044 + 0x98) + *piVar2);
  do {
    bVar1 = *pbVar3;
    bVar6 = bVar1 < (byte)*pcVar5;
    if (bVar1 != *pcVar5) {
LAB_1008f7db:
      iVar4 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
      goto LAB_1008f7e0;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar3[1];
    bVar6 = bVar1 < (byte)pcVar5[1];
    if (bVar1 != pcVar5[1]) goto LAB_1008f7db;
    pbVar3 = pbVar3 + 2;
    pcVar5 = pcVar5 + 2;
  } while (bVar1 != 0);
  iVar4 = 0;
LAB_1008f7e0:
  if ((iVar4 == 0) || ((*(byte *)(piVar2 + 0x68) & 0x40) != 0)) {
    param_1[0xd1] = param_1[0xd1] | 2;
  }
  return;
}

