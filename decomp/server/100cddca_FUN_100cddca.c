
undefined4 __cdecl FUN_100cddca(uint param_1)

{
  int iVar1;
  undefined **ppuVar2;
  uint uVar3;
  
  uVar3 = param_1;
  if (DAT_10136208 == 3) {
    if (param_1 < 0x3f9) {
      DAT_10136200 = param_1;
      return 1;
    }
  }
  else if (DAT_10136208 == 2) {
    uVar3 = param_1 + 0xf & 0xfffffff0;
    if (uVar3 < 0x781) {
      DAT_101204cc = uVar3;
      return 1;
    }
  }
  else if ((DAT_10136208 == 1) && (param_1 != 0)) {
    FUN_100cdb31(&param_1);
    if ((byte)param_1 < 6) {
      uVar3 = uVar3 + 0xf & 0xfffffff0;
      if ((uVar3 < 0x781) && (ppuVar2 = FUN_100cede6(), ppuVar2 != (undefined **)0x0)) {
        DAT_101204cc = uVar3;
        DAT_10136208 = 2;
        return 1;
      }
    }
    else if ((uVar3 < 0x3f9) && (iVar1 = FUN_100cde7d(uVar3), iVar1 != 0)) {
      DAT_10136200 = uVar3;
      DAT_10136208 = 3;
      return 1;
    }
  }
  return 0;
}

