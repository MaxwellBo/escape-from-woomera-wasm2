
void __fastcall FUN_100499d0(int *param_1)

{
  int iVar1;
  longlong lVar2;
  
  (**(code **)(*param_1 + 0x2c))();
  *(undefined4 *)(param_1[1] + 0x10c) = 4;
  *(undefined4 *)(param_1[1] + 0x108) = 7;
  FUN_100afe10((int)param_1,param_1[1] + 8);
  iVar1 = param_1[1];
  FUN_100afdc0(iVar1,iVar1 + 0xdc,iVar1 + 0xe8);
  (*DAT_10121e10)(*(undefined4 *)(param_1[1] + 0x208),
                  *(int *)(param_1[1] + 0xb8) + *(int *)(DAT_10122044 + 0x98));
  lVar2 = __ftol();
  param_1[0x59] = (int)lVar2;
  *(undefined4 *)(param_1[1] + 0x130) = 0;
  iVar1 = param_1[0x18];
  if (0x1f < iVar1) {
    (*DAT_10121eb4)(iVar1,&DAT_10103c18);
    return;
  }
  if (iVar1 < -0x1f) {
    (*DAT_10121eb4)(-iVar1,&DAT_10103c14);
  }
  return;
}

