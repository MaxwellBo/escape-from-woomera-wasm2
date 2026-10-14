
void __fastcall FUN_10034d30(int param_1)

{
  void *this;
  
  if (*(int *)(param_1 + 0x124) != 0) {
    FUN_100b0ef0(*(int *)(param_1 + 0x124));
    *(undefined4 *)(param_1 + 0x124) = 0;
  }
  if (*(int *)(param_1 + 0x128) != 0) {
    FUN_100b0ef0(*(int *)(param_1 + 0x128));
    *(undefined4 *)(param_1 + 0x128) = 0;
  }
  this = *(void **)(param_1 + 300);
  if (this != (void *)0x0) {
    if (*(int *)(param_1 + 0x138) == 1) {
      FUN_1002cba0(this,0x41200000,0x43fa0000);
      *(undefined4 *)(param_1 + 300) = 0;
      return;
    }
    FUN_100b0ef0((int)this);
    *(undefined4 *)(param_1 + 300) = 0;
  }
  return;
}

