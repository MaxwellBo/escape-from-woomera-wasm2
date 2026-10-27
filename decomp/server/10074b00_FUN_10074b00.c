
void __thiscall FUN_10074b00(int param_1,int *param_2)

{
  byte bVar1;
  int *piVar2;
  byte *pbVar3;
  int iVar4;
  char *pcVar5;
  bool bVar6;
  
  pcVar5 = s_player_10101c54;
  pbVar3 = (byte *)(*(int *)param_2[1] + *(int *)(DAT_10122044 + 0x98));
  do {
    bVar1 = *pbVar3;
    bVar6 = bVar1 < (byte)*pcVar5;
    if (bVar1 != *pcVar5) {
LAB_10074b4a:
      iVar4 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
      goto LAB_10074b4f;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar3[1];
    bVar6 = bVar1 < (byte)pcVar5[1];
    if (bVar1 != pcVar5[1]) goto LAB_10074b4a;
    pbVar3 = pbVar3 + 2;
    pcVar5 = pcVar5 + 2;
  } while (bVar1 != 0);
  iVar4 = 0;
LAB_10074b4f:
  if (iVar4 == 0) {
    iVar4 = (**(code **)(*param_2 + 0xb8))();
    if (iVar4 != 0) {
      piVar2 = *(int **)(param_1 + 0xb8);
      if (piVar2[0x37] == 1) {
        (**(code **)(*piVar2 + 0x120))();
        return;
      }
      if (piVar2[0x37] == 0) {
        (**(code **)(*piVar2 + 8))(0x3f800000);
      }
    }
  }
  return;
}

