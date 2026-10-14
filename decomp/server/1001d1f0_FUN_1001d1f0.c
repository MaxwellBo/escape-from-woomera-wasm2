
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_1001d1f0(int param_1,undefined4 *param_2)

{
  int *piVar1;
  float fVar2;
  int *piVar3;
  undefined4 *puVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  int *piVar8;
  undefined4 *puVar9;
  undefined4 auStack_2c [8];
  int iStack_c;
  
  puVar4 = param_2;
  iVar5 = *(int *)(param_1 + 0x288);
  if ((iVar5 == 0) && (iVar5 = (*DAT_10121f1c)(0), iVar5 == 0)) {
    iVar5 = 0;
  }
  else {
    iVar5 = *(int *)(iVar5 + 0x7c);
  }
  for (iVar7 = 0x2c0; iVar7 != 0; iVar7 = iVar7 + -1) {
    *param_2 = 0;
    param_2 = param_2 + 1;
  }
  if (iVar5 == 0) {
    return 1;
  }
  piVar8 = (int *)(iVar5 + 0x510);
  param_2 = (undefined4 *)0x6;
  do {
    piVar3 = (int *)*piVar8;
    if (piVar3 != (int *)0x0) {
      for (; piVar3 != (int *)0x0; piVar3 = (int *)piVar3[0x38]) {
        piVar6 = (int *)(**(code **)(*piVar3 + 0x15c))();
        if ((piVar6 != (int *)0x0) && (iVar5 = (**(code **)(*piVar6 + 0x19c))(), iVar5 != 0)) {
          puVar9 = auStack_2c;
          for (iVar5 = 0xb; iVar5 != 0; iVar5 = iVar5 + -1) {
            *puVar9 = 0;
            puVar9 = puVar9 + 1;
          }
          (**(code **)(*piVar6 + 0x124))(auStack_2c);
          if ((-1 < iStack_c) && (iStack_c < 0x20)) {
            piVar1 = puVar4 + iStack_c * 0x16;
            *piVar1 = iStack_c;
            piVar1[1] = piVar6[0x43];
            if ((float)piVar6[0x40] <= (float)_DAT_100e0b50) {
              fVar2 = (float)_DAT_100e0b50;
            }
            else {
              fVar2 = (float)piVar6[0x40];
            }
            piVar1[4] = (int)fVar2;
            if ((float)piVar6[0x3e] <= (float)_DAT_100e0b50) {
              fVar2 = (float)_DAT_100e0b50;
            }
            else {
              fVar2 = (float)piVar6[0x3e];
            }
            piVar1[2] = (int)fVar2;
            if ((float)piVar6[0x3f] <= (float)_DAT_100e0b50) {
              fVar2 = (float)_DAT_100e0b50;
            }
            else {
              fVar2 = (float)piVar6[0x3f];
            }
            piVar1[3] = (int)fVar2;
            piVar1[5] = piVar6[0x46];
            piVar1[6] = piVar6[0x3d];
            if (*(float *)(piVar6[1] + 0x254) <= (float)_DAT_100e0b50) {
              fVar2 = (float)_DAT_100e0b50;
            }
            else {
              fVar2 = *(float *)(piVar6[1] + 0x254);
            }
            piVar1[0x12] = (int)fVar2;
            piVar1[0x13] = piVar6[0x29];
            piVar1[0x14] = piVar6[0x2a];
            piVar1[0xe] = piVar6[0x2b];
            piVar1[0xf] = piVar6[0x2c];
            piVar1[0x10] = piVar6[0x2d];
          }
        }
      }
    }
    piVar8 = piVar8 + 1;
    param_2 = (undefined4 *)((int)param_2 + -1);
  } while (param_2 != (undefined4 *)0x0);
  return 1;
}

