
uint __fastcall FUN_1003d4f0(int param_1)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 0xaa0);
  if (((uVar1 != 0) && (DAT_100b6620 == 0)) &&
     ((uVar1 = *(uint *)(uVar1 + 0xc4), uVar1 == 2 ||
      (((uVar1 == 3 || (uVar1 == 5)) || (uVar1 == 6)))))) {
    return uVar1 & 0xffffff00;
  }
  return CONCAT31((int3)(uVar1 >> 8),1);
}

