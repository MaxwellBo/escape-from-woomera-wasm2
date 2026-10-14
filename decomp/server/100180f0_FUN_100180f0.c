
void __thiscall FUN_100180f0(void *this,undefined4 param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = *(int *)(*(int *)((int)this + 4) + 0x1c8);
  if (iVar1 != 0) {
    for (piVar2 = (int *)FUN_100af030(0,(byte *)(*(int *)(DAT_10122044 + 0x98) + iVar1));
        piVar2 != (int *)0x0;
        piVar2 = (int *)FUN_100af030((int)piVar2,
                                     (byte *)(*(int *)(DAT_10122044 + 0x98) +
                                             *(int *)(*(int *)((int)this + 4) + 0x1c8)))) {
      (**(code **)(*piVar2 + 0xe4))(this,this,2,param_1);
    }
  }
  return;
}

