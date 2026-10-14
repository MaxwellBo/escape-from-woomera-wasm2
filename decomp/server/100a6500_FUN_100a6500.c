
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_100a6500(int *param_1)

{
  int iVar1;
  float10 fVar2;
  
  iVar1 = param_1[1];
  if ((*(int *)(iVar1 + 0x1c8) == 0) && (*(int *)(iVar1 + 0x1e8) == 0)) {
    *(uint *)(iVar1 + 0x1a0) = *(uint *)(iVar1 + 0x1a0) | 0x10000;
  }
  else {
    (**(code **)(*param_1 + 8))(0x3f800000);
  }
  iVar1 = param_1[1];
  if (_DAT_100dd5f8 < *(float *)(iVar1 + 0x1b0)) {
    fVar2 = (float10)fcos((float10)*(float *)(iVar1 + 0x1b0) * (float10)_DAT_100dd614 *
                          (float10)_DAT_100de1f8);
    *(float *)(iVar1 + 0x160) = (float)fVar2;
  }
  return;
}

