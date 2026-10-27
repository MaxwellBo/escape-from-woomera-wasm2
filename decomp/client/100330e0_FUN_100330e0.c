
void __fastcall FUN_100330e0(int *param_1)

{
  undefined4 *puVar1;
  
  param_1[0x3d] = 0;
  param_1[0x3f] = 0;
  param_1[0x3e] = 0;
  (**(code **)(*param_1 + 0x124))(3);
  (**(code **)(*param_1 + 0x21c))(3);
  if ((char)param_1[0x4a] == '\0') {
    puVar1 = operator_new(0xc);
    if (puVar1 != (undefined4 *)0x0) {
      puVar1[1] = param_1;
      *puVar1 = &PTR_FUN_10061284;
      puVar1[2] = param_1;
      (**(code **)(*param_1 + 0x70))(puVar1);
      *(undefined1 *)(param_1 + 0x48) = 0;
      return;
    }
    (**(code **)(*param_1 + 0x70))(0);
  }
  *(undefined1 *)(param_1 + 0x48) = 0;
  return;
}

