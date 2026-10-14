
uint __fastcall FUN_100193d0(uint *param_1)

{
  uint uVar1;
  
  uVar1 = *param_1;
  if (uVar1 != 0) {
    return ~-(uint)(*(uint *)(uVar1 + 4) != param_1[1]) & uVar1;
  }
  return 0;
}

