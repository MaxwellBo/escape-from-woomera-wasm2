
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_100247e0(void)

{
  MMRESULT MVar1;
  int iVar2;
  undefined4 *puVar3;
  
  puVar3 = &DAT_100a9a70;
  for (iVar2 = 0xd; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  DAT_100a9a70 = 0x34;
  DAT_100a9a74 = DAT_100a9ab8;
  MVar1 = joyGetPosEx(DAT_100a9aa8,(LPJOYINFOEX)&DAT_100a9a70);
  if (MVar1 == 0) {
    if (*(float *)(DAT_100a9a28 + 0xc) != (float)_DAT_1005d2a8) {
      _DAT_100a9a88 = _DAT_100a9a88 + 100;
    }
    return 1;
  }
  return 0;
}

