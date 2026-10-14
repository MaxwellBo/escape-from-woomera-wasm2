
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_10056f90(int *param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1[1] + 0x198);
  if (iVar1 == 0) {
    iVar1 = (*DAT_10121f1c)(0);
    if (iVar1 == 0) goto LAB_10056fc1;
  }
  if (*(int **)(iVar1 + 0x7c) != (int *)0x0) {
    (**(code **)(**(int **)(iVar1 + 0x7c) + 0x50))(param_1[1]);
  }
LAB_10056fc1:
  iVar1 = param_1[1];
  if ((*(int *)(iVar1 + 0x1c0) == 0) || (*(int *)(iVar1 + 0x1c4) == -0x13)) {
    (**(code **)(*param_1 + 0x1a8))(0x26);
  }
  else {
    *(undefined4 *)(iVar1 + 0x58) = 0;
    *(undefined4 *)(param_1[1] + 0x50) = 0;
    *(float *)(param_1[1] + 0x10) = *(float *)(param_1[1] + 0x10) + _DAT_100dd618;
    iVar1 = param_1[1];
    *(undefined4 *)(iVar1 + 0x5c) = DAT_10121dd8;
    *(undefined4 *)(iVar1 + 0x60) = DAT_10121ddc;
    *(undefined4 *)(iVar1 + 100) = DAT_10121de0;
    iVar1 = (*DAT_10121f70)(0,99);
    if (iVar1 < 0x46) {
      iVar1 = (*DAT_10121f70)(0xfffffd30,0x2d0);
      *(float *)(param_1[1] + 0x60) = (float)iVar1;
    }
    *(undefined4 *)(param_1[1] + 0x11c) = 0x3ca3d70a;
    *(uint *)(param_1[1] + 0x1a4) = *(uint *)(param_1[1] + 0x1a4) & 0xfffffdff;
    (**(code **)(*param_1 + 0x1a8))(0x24);
  }
  *(undefined4 *)(param_1[1] + 0x108) = 6;
  *(undefined4 *)(param_1[1] + 0x16c) = 0;
  param_1[0x1d] = (int)CLeech::DeadThink;
  return;
}

