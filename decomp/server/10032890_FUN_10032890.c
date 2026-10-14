
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_10032890(int *param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = param_1[1];
  if (*(float *)(iVar1 + 0x160) == _DAT_100dd5f8) {
    (**(code **)(*param_1 + 8))(0x3f800000);
    (**(code **)(*param_1 + 0x118))(10);
    return;
  }
  *(float *)(iVar1 + 0x16c) = *(float *)(iVar1 + 0x16c) + _DAT_100e0eec;
  iVar1 = param_1[1];
  if (*(float *)(iVar1 + 0x16c) < *(float *)(iVar1 + 0x160)) {
    (**(code **)(*param_1 + 8))(0x41c80000);
    (**(code **)(*param_1 + 0x118))(0x19);
    return;
  }
  lVar2 = __ftol();
  *(undefined4 *)(iVar1 + 0x16c) = 0;
  (**(code **)(*param_1 + 0x118))((int)lVar2);
  return;
}

