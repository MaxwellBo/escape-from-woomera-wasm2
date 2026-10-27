
void __cdecl FUN_100632b0(int param_1,int param_2)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 0x5c);
  *(uint *)(param_1 + 0x5c) = uVar1 | 0x20;
  if (param_2 != 0) {
    *(uint *)(param_1 + 0x5c) = uVar1 | 0x60;
    FUN_10062ba0(param_1);
    return;
  }
  *(uint *)(param_1 + 0x5c) = uVar1 & 0xffffffbf | 0x20;
  FUN_10062ba0(param_1);
  return;
}

