
undefined4 __thiscall FUN_100b3da0(void *this,int param_1)

{
  void *pvVar1;
  int iVar2;
  bool bVar3;
  
  pvVar1 = *(void **)(param_1 + 0x528);
  iVar2 = 0;
  if (pvVar1 == this) {
    iVar2 = (-(uint)(*(int *)(param_1 + 0x640) != 0) & 0x3f) + 1;
  }
  bVar3 = *(int *)(param_1 + 0x4d8) == 0;
  if (((this == pvVar1) || (this == *(void **)(param_1 + 0x52c))) &&
     (pvVar1 != *(void **)(param_1 + 0x52c))) {
    bVar3 = true;
  }
  if (((*(int *)((int)this + 0x10c) != *(int *)((int)this + 0x110)) ||
      (iVar2 != *(int *)((int)this + 0x114))) ||
     ((*(int *)(param_1 + 0x508) != *(int *)(param_1 + 0x50c) || (bVar3)))) {
    (*DAT_10121ec0)(1,DAT_10124884,0,*(undefined4 *)(*(int *)(param_1 + 4) + 0x208));
    (*DAT_10121ec8)(iVar2);
    (*DAT_10121ec8)(*(undefined4 *)((int)this + 0xe4));
    (*DAT_10121ec8)(*(undefined4 *)((int)this + 0x10c));
    (*DAT_10121ec4)();
    *(int *)((int)this + 0x114) = iVar2;
    *(undefined4 *)((int)this + 0x110) = *(undefined4 *)((int)this + 0x10c);
    *(undefined4 *)(param_1 + 0x4d8) = 1;
  }
  if (*(int **)((int)this + 0xe0) != (int *)0x0) {
    (**(code **)(**(int **)((int)this + 0xe0) + 0x158))(param_1);
  }
  return 1;
}

