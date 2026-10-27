
void __fastcall FUN_1003af50(int param_1)

{
  int iVar1;
  void *this;
  
  iVar1 = *(int *)(param_1 + 4);
  if ((*(int *)(iVar1 + 0x1e8) != 0) && ((*(uint *)(iVar1 + 0x1a0) & 0x8000) == 0)) {
    *(uint *)(iVar1 + 0x1a0) = *(uint *)(iVar1 + 0x1a0) | 0x8000;
    this = (void *)(*(int *)(*(int *)(param_1 + 4) + 0x1e8) + *(int *)(DAT_10122044 + 0x98));
    FUN_10094b20(this,*(undefined4 *)(*(int *)(param_1 + 4) + 0x208),6,this,0x3f59999a,0x3f4ccccd,0,
                 100);
  }
  return;
}

