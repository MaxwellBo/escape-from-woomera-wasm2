
void __thiscall FUN_10029b30(void *this,undefined4 *param_1,undefined4 *param_2)

{
  uint uVar1;
  
  uVar1 = *(uint *)(*(int *)((int)this + 4) + 0x1a0);
  if ((uVar1 & 0x30) != 0) {
    if ((uVar1 & 0x10) != 0) {
      FUN_100b06a0(param_1);
    }
    if ((*(byte *)(*(int *)((int)this + 4) + 0x1a0) & 0x20) != 0) {
      FUN_100b06a0(param_2);
    }
  }
  return;
}

