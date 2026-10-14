
undefined4 __thiscall FUN_10080a00(void *param_1,int *param_2)

{
  byte bVar1;
  int iVar2;
  byte *pbVar3;
  int *piVar4;
  byte *pbVar5;
  bool bVar6;
  
  iVar2 = (**(code **)(*param_2 + 0x160))();
  piVar4 = *(int **)((int)param_1 + iVar2 * 4 + 0x510);
  if (piVar4 != (int *)0x0) {
    do {
      pbVar3 = (byte *)(*(int *)piVar4[1] + *(int *)(DAT_10122044 + 0x98));
      pbVar5 = (byte *)(*(int *)param_2[1] + *(int *)(DAT_10122044 + 0x98));
      do {
        bVar1 = *pbVar3;
        bVar6 = bVar1 < *pbVar5;
        if (bVar1 != *pbVar5) {
LAB_10080a70:
          iVar2 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
          goto LAB_10080a75;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar3[1];
        bVar6 = bVar1 < pbVar5[1];
        if (bVar1 != pbVar5[1]) goto LAB_10080a70;
        pbVar3 = pbVar3 + 2;
        pbVar5 = pbVar5 + 2;
      } while (bVar1 != 0);
      iVar2 = 0;
LAB_10080a75:
      if (iVar2 == 0) {
        iVar2 = (**(code **)(*param_2 + 0x120))(piVar4);
        if (iVar2 != 0) {
          (**(code **)(*DAT_10121db8 + 0x78))(param_1,param_2);
          FUN_100b3620(param_2);
          (**(code **)(*piVar4 + 0x138))();
          if (*(int **)((int)param_1 + 0x528) != (int *)0x0) {
            (**(code **)(**(int **)((int)param_1 + 0x528) + 0x138))();
          }
          (**(code **)(*param_2 + 0x148))();
          return 0;
        }
        if (DAT_10124850 == 0) {
          return 0;
        }
        (**(code **)(*param_2 + 0x148))();
        return 0;
      }
      piVar4 = (int *)piVar4[0x38];
    } while (piVar4 != (int *)0x0);
  }
  iVar2 = (**(code **)(*param_2 + 0x11c))(param_1);
  if (iVar2 == 0) {
    if (DAT_10124850 != 0) {
      (**(code **)(*param_2 + 0x148))();
    }
    return 0;
  }
  (**(code **)(*DAT_10121db8 + 0x78))(param_1,param_2);
  FUN_100b3620(param_2);
  iVar2 = (**(code **)(*param_2 + 0x160))();
  param_2[0x38] = *(int *)((int)param_1 + iVar2 * 4 + 0x510);
  iVar2 = (**(code **)(*param_2 + 0x160))();
  *(int **)((int)param_1 + iVar2 * 4 + 0x510) = param_2;
  iVar2 = (**(code **)(*DAT_10121db8 + 0x10))(param_1,param_2);
  if (iVar2 != 0) {
    FUN_10082370(param_1,param_2);
  }
  return 1;
}

