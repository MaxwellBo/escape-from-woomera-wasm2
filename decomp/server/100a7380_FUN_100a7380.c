
void __thiscall FUN_100a7380(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  void *this;
  
  piVar1 = (int *)FUN_100af060(0,(byte *)(*(int *)(*(int *)(param_1 + 4) + 0x1c8) +
                                         *(int *)(DAT_10122044 + 0x98)),param_2);
  iVar2 = FUN_100af060(0,(byte *)(*(int *)(DAT_10122044 + 0x98) + *(int *)(param_1 + 200)),param_2);
  if ((piVar1 != (int *)0x0) && (iVar2 != 0)) {
    this = (void *)(**(code **)(*piVar1 + 0x74))();
    if (this != (void *)0x0) {
      FUN_1005f8e0(this,iVar2);
    }
  }
  return;
}

