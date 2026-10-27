
/* WARNING: Removing unreachable block (ram,0x1007997b) */

void __fastcall FUN_10079930(int *param_1)

{
  int iVar1;
  void *extraout_ECX;
  void *extraout_ECX_00;
  void *this;
  
  if (param_1[0x37] == 0) {
    iVar1 = FUN_100792d0(param_1,param_1[0x5f]);
    param_1[0x65] = iVar1;
    this = extraout_ECX;
  }
  else {
    if (param_1[0x37] != 1) {
      return;
    }
    iVar1 = FUN_100792d0(param_1,param_1[0x60]);
    param_1[0x65] = iVar1;
    this = extraout_ECX_00;
  }
  if (param_1[0x65] != 1) {
    param_1[0x67] = 0;
    if (param_1[0x37] != 0) {
      (**(code **)(*param_1 + 0x120))();
      return;
    }
    (**(code **)(*param_1 + 0x124))();
    return;
  }
  FUN_10094b20(this,*(undefined4 *)(param_1[1] + 0x208),2,s_buttons_button11_wav_10104bf8,0x3f800000
               ,0x3f4ccccd,0,100);
  return;
}

