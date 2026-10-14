
void __thiscall FUN_1002fe50(void *this,int *param_1)

{
  void *this_00;
  int iVar1;
  
  if ((*(byte *)(*(int *)((int)this + 4) + 0x1a0) & 2) == 0) {
    if ((param_1 == (int *)0x0) || (iVar1 = (**(code **)(*param_1 + 0xcc))(), iVar1 == 0)) {
      iVar1 = (*DAT_10121f28)(1);
      if ((iVar1 == 0) && (iVar1 = (*DAT_10121f1c)(0), iVar1 == 0)) {
        param_1 = (int *)0x0;
      }
      else {
        param_1 = *(int **)(iVar1 + 0x7c);
      }
    }
    if (param_1 != (int *)0x0) {
      FUN_100afb80(*(int *)(DAT_10122044 + 0x98) + *(int *)(*(int *)((int)this + 4) + 0x1d4),param_1
                  );
    }
  }
  else {
    FUN_100afbd0(*(int *)(*(int *)((int)this + 4) + 0x1d4) + *(int *)(DAT_10122044 + 0x98));
  }
  iVar1 = *(int *)((int)this + 4);
  this_00 = *(void **)(iVar1 + 0x1e8);
  if (this_00 != (void *)0x0) {
    FUN_10094b20(this_00,*(undefined4 *)(iVar1 + 0x208),4,
                 (char *)(*(int *)(DAT_10122044 + 0x98) + (int)this_00),
                 *(undefined4 *)(iVar1 + 0x144),*(undefined4 *)(iVar1 + 0x1f8),0,100);
  }
  if ((*(byte *)(*(int *)((int)this + 4) + 0x1a0) & 1) != 0) {
    FUN_100b0ef0((int)this);
  }
  FUN_10098bd0(this,this,3,0);
  return;
}

