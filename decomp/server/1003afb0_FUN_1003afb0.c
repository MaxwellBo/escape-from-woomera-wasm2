
void __fastcall FUN_1003afb0(int param_1)

{
  int iVar1;
  void *this;
  
  iVar1 = *(int *)(param_1 + 4);
  if ((*(uint *)(iVar1 + 0x1a0) & 0x8000) != 0) {
    this = (void *)(*(int *)(iVar1 + 0x1e8) + *(int *)(DAT_10122044 + 0x98));
    FUN_10094b20(this,*(undefined4 *)(iVar1 + 0x208),6,this,0,0,0x20,100);
  }
  *(uint *)(*(int *)(param_1 + 4) + 0x1a0) = *(uint *)(*(int *)(param_1 + 4) + 0x1a0) & 0xffff7fff;
  return;
}

