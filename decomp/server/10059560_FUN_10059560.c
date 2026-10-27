
void __fastcall FUN_10059560(int *param_1)

{
  int iVar1;
  
  (**(code **)(*param_1 + 0x2c))();
  iVar1 = param_1[1];
  param_1[0x39] = 0;
  if ((*(byte *)(iVar1 + 0x1a0) & 0x80) != 0) {
    param_1[0x39] = 0x40;
  }
  if ((*(uint *)(iVar1 + 0x1a0) & 0x100) != 0) {
    param_1[0x39] = param_1[0x39] | 0x80;
  }
  if ((*(uint *)(iVar1 + 0x1a0) & 0x400) != 0) {
    param_1[0x39] = param_1[0x39] | 0x10;
  }
  if ((*(uint *)(iVar1 + 0x1a0) & 0x200) != 0) {
    param_1[0x39] = param_1[0x39] | 0x20;
  }
  return;
}

