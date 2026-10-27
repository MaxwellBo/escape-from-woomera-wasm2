
undefined4 __thiscall FUN_100a0170(int param_1,int param_2)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  int iVar4;
  byte *pbVar5;
  int *piVar6;
  bool bVar7;
  
  iVar4 = 0;
  if (0 < *(int *)(param_1 + 0xbc)) {
    piVar6 = (int *)(param_1 + 200);
    do {
      pbVar2 = (byte *)(*piVar6 + *(int *)(DAT_10122044 + 0x98));
      pbVar5 = (byte *)(param_2 + *(int *)(DAT_10122044 + 0x98));
      do {
        bVar1 = *pbVar5;
        bVar7 = bVar1 < *pbVar2;
        if (bVar1 != *pbVar2) {
LAB_100a01cc:
          iVar3 = (1 - (uint)bVar7) - (uint)(bVar7 != 0);
          goto LAB_100a01d1;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar5[1];
        bVar7 = bVar1 < pbVar2[1];
        if (bVar1 != pbVar2[1]) goto LAB_100a01cc;
        pbVar5 = pbVar5 + 2;
        pbVar2 = pbVar2 + 2;
      } while (bVar1 != 0);
      iVar3 = 0;
LAB_100a01d1:
      if (iVar3 == 0) {
        return 1;
      }
      iVar4 = iVar4 + 1;
      piVar6 = piVar6 + 1;
    } while (iVar4 < *(int *)(param_1 + 0xbc));
  }
  return 0;
}

