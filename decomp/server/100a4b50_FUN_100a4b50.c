
void __thiscall FUN_100a4b50(void *this,int *param_1)

{
  bool bVar1;
  undefined3 extraout_var;
  
  bVar1 = FUN_100b0030(*(int *)((int)this + 0x158),param_1);
  if (CONCAT31(extraout_var,bVar1) != 0) {
    FUN_10098c10((uint *)(*(int *)(DAT_10122044 + 0x98) + *(int *)((int)this + 0x160)),param_1,this,
                 1,0);
    FUN_10098c10((uint *)(*(int *)(*(int *)((int)this + 4) + 0x1c8) + *(int *)(DAT_10122044 + 0x98))
                 ,param_1,this,3,0);
  }
  return;
}

