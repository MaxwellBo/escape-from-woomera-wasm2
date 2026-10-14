
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_10045fb0(int *param_1)

{
  int iVar1;
  float fVar2;
  
  FUN_10008390((int)param_1);
  *(undefined4 *)(param_1[1] + 0x10c) = 3;
  *(undefined4 *)(param_1[1] + 0x108) = 0;
  *(undefined4 *)(param_1[1] + 0x16c) = 0x3f800000;
  *(undefined4 *)(param_1[1] + 0x118) = 0;
  *(undefined4 *)(param_1[1] + 0x160) = 0x479c4000;
  *(undefined4 *)(param_1[1] + 0xb0) = 0x40a00000;
  *(undefined4 *)(param_1[1] + 0xac) = *(undefined4 *)(param_1[1] + 0x54);
  (**(code **)(*param_1 + 0x128))(0x168);
  fVar2 = (float)_DAT_100dd628;
  param_1[0x32] = 0x42960000;
  param_1[0x33] = 0;
  (**(code **)(*param_1 + 0x10))((float)param_1[0x15] + fVar2);
  FUN_10008190((int)param_1);
  iVar1 = param_1[1];
  if ((*(int *)(iVar1 + 0x128) == 0) && (*(float *)(iVar1 + 0x130) == _DAT_100dd5f8)) {
    param_1[0xc2] = 1;
    return;
  }
  param_1[0xc2] = 0;
  *(undefined4 *)(iVar1 + 0x138) = 0;
  return;
}

