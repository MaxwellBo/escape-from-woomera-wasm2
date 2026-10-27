
void __fastcall FUN_10074db0(int *param_1)

{
  void *pvVar1;
  int iVar2;
  
  pvVar1 = *(void **)(param_1[1] + 0x1e8);
  if (pvVar1 != (void *)0x0) {
    FUN_10094b20(pvVar1,*(undefined4 *)(param_1[1] + 0x208),6,
                 (char *)(*(int *)(DAT_10122044 + 0x98) + (int)pvVar1),0,0,0x20,100);
  }
  pvVar1 = *(void **)(param_1[1] + 0x1ec);
  if (pvVar1 != (void *)0x0) {
    FUN_10094b20(pvVar1,*(undefined4 *)(param_1[1] + 0x208),1,
                 (char *)(*(int *)(DAT_10122044 + 0x98) + (int)pvVar1),param_1[0x58],0x3f4ccccd,0,
                 100);
  }
  param_1[0x37] = 0;
  iVar2 = (**(code **)(*param_1 + 0x11c))();
  if (iVar2 == 0) {
    param_1[0x1d] = (int)CFuncPlat::CallGoDown;
    (**(code **)(*param_1 + 8))(0x40400000);
  }
  return;
}

