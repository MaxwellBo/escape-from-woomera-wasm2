
void __thiscall FUN_100b3ea0(void *this,undefined4 param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(*(int *)this + 0x19c))();
  *(undefined4 *)(*(int *)(*(int *)((int)this + 0xdc) + 4) + 0x218) = param_1;
  if ((iVar1 != 0) &&
     (iVar1 = (*DAT_10122014)(*(undefined4 *)(*(int *)(*(int *)((int)this + 0xdc) + 4) + 0x208)),
     iVar1 != 0)) {
    return;
  }
  (*DAT_10121ec0)(1,0x23,0,*(undefined4 *)(*(int *)(*(int *)((int)this + 0xdc) + 4) + 0x208));
  (*DAT_10121ec8)(param_1);
  (*DAT_10121ec8)(*(undefined4 *)(*(int *)((int)this + 4) + 0x114));
  (*DAT_10121ec4)();
  return;
}

