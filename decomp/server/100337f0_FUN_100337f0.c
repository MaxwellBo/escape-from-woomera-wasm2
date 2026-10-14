
uint __fastcall FUN_100337f0(int param_1)

{
  uint uVar1;
  
  uVar1 = *(uint *)(*(int *)(param_1 + 4) + 0x1a0);
  if ((uVar1 & 1) != 0) {
    return 2 - ((uVar1 & 0x8000) != 0);
  }
  return -(uint)((uVar1 & 0x8000) != 0) & 3;
}

