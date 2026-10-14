
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_100b6b30(void *this,int *param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(*param_1 + 0xcc))();
  if (iVar1 != 0) {
    *(float *)(*(int *)((int)this + 4) + 0x1e4) = *DAT_10122044 + _DAT_100dd5d8;
    if ((*(int *)((int)this + 0xdc) == 1) || (*(int *)((int)this + 0xdc) == 0x13)) {
      FUN_100b6750(this,0x11);
    }
  }
  return;
}

