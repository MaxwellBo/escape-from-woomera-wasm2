
void __fastcall FUN_1002f9f0(int *param_1)

{
  int iVar1;
  int *unaff_retaddr;
  
  param_1[0x2e] = 1;
  (**(code **)(*param_1 + 8))(*(undefined4 *)(param_1[1] + 0x1d8));
  if ((*(uint *)(param_1[1] + 0x1a0) & 4) == 0) {
    __ftol();
    FUN_100af630();
  }
  else {
    iVar1 = (**(code **)(*unaff_retaddr + 0xd0))();
    if (iVar1 != 0) {
      __ftol();
      FUN_100af6a0(unaff_retaddr);
      FUN_10098bd0(param_1,param_1,3,0);
      return;
    }
  }
  FUN_10098bd0(param_1,param_1,3,0);
  return;
}

