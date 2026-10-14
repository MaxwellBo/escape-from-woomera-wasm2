
float10 __thiscall FUN_1005e440(undefined4 param_1,int param_2)

{
  byte bVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  byte *pbVar5;
  byte *pbVar6;
  bool bVar7;
  float local_4;
  
  iVar3 = *(int *)(param_2 + 0x208);
  local_4 = 0.0;
  if (((iVar3 != 0) || (iVar3 = (*DAT_10121f1c)(0), iVar3 != 0)) &&
     (piVar2 = *(int **)(iVar3 + 0x7c), piVar2 != (int *)0x0)) {
    (**(code **)(*piVar2 + 0xe4))(param_1,param_1,1,0);
    local_4 = (float)piVar2[0x15] - *(float *)(param_2 + 0x100);
    if (*(int *)(piVar2[1] + 0x1cc) != 0) {
      for (piVar4 = (int *)FUN_100af030(0,(byte *)((int)DAT_10122044[0x26] +
                                                  *(int *)(piVar2[1] + 0x1cc)));
          piVar4 != (int *)0x0;
          piVar4 = (int *)FUN_100af030((int)piVar4,
                                       (byte *)(*(int *)(piVar2[1] + 0x1cc) +
                                               (int)DAT_10122044[0x26]))) {
        if ((int *)piVar4[1] != (int *)piVar2[1]) {
          pbVar6 = (byte *)((int)DAT_10122044[0x26] + *(int *)piVar2[1]);
          pbVar5 = (byte *)(*(int *)piVar4[1] + (int)DAT_10122044[0x26]);
          do {
            bVar1 = *pbVar5;
            bVar7 = bVar1 < *pbVar6;
            if (bVar1 != *pbVar6) {
LAB_1005e50e:
              iVar3 = (1 - (uint)bVar7) - (uint)(bVar7 != 0);
              goto LAB_1005e513;
            }
            if (bVar1 == 0) break;
            bVar1 = pbVar5[1];
            bVar7 = bVar1 < pbVar6[1];
            if (bVar1 != pbVar6[1]) goto LAB_1005e50e;
            pbVar5 = pbVar5 + 2;
            pbVar6 = pbVar6 + 2;
          } while (bVar1 != 0);
          iVar3 = 0;
LAB_1005e513:
          if (iVar3 == 0) {
            (**(code **)(*piVar4 + 0xe4))(param_1,param_1,1,0);
          }
        }
      }
    }
  }
  return (float10)local_4 + (float10)*DAT_10122044;
}

