
undefined4 __thiscall FUN_100a4670(void *this,int param_1)

{
  int iVar1;
  
  iVar1 = FUN_10019410((uint *)((int)this + 0xc0));
  while( true ) {
    if (iVar1 == param_1) {
      return 1;
    }
    this = *(void **)((int)this + 0xbc);
    if (this == (void *)0x0) break;
    iVar1 = FUN_10019410((uint *)((int)this + 0xc0));
  }
  return 0;
}

