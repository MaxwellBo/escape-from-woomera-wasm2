
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_10086e90(void)

{
  float fVar1;
  float fVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  float10 fVar7;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  float fStack_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  undefined1 local_44 [68];
  
  iVar4 = (*(code *)DAT_10126a38[0x13d57])(DAT_10126a38 + 0xe,local_44);
  if (iVar4 == -1) {
    FUN_10086e70(*DAT_10126a38,DAT_10126a38[1]);
    return 0;
  }
  fStack_5c = (float)DAT_10126a38[0xe];
  fStack_58 = (float)DAT_10126a38[0xf];
  fStack_54 = (float)DAT_10126a38[0x10];
  if ((DAT_10126a38[1] == 0) && ((iVar4 == 0 || (DAT_10126a38[iVar4 * 0x38 + 0xa0] != 0)))) {
    iVar6 = 0;
    FUN_10086e70(*DAT_10126a38,0);
    FUN_10086e20(*DAT_10126a38,DAT_10126a38[1],&fStack_50);
    fStack_68 = fStack_50 + fStack_5c;
    fStack_64 = fStack_4c + fStack_58;
    fStack_60 = fStack_48 + fStack_54;
    iVar5 = (*(code *)DAT_10126a38[0x13d57])(&fStack_68,local_44);
    while( true ) {
      if (iVar5 == -1) {
        FUN_10086e70(*DAT_10126a38,DAT_10126a38[1]);
        DAT_10126a38[0xe] = (int)fStack_68;
        DAT_10126a38[0xf] = (int)fStack_64;
        DAT_10126a38[0x10] = (int)fStack_60;
        return 0;
      }
      iVar6 = iVar6 + 1;
      if (0x35 < iVar6) break;
      FUN_10086e20(*DAT_10126a38,DAT_10126a38[1],&fStack_50);
      fStack_68 = fStack_50 + fStack_5c;
      fStack_64 = fStack_4c + fStack_58;
      fStack_60 = fStack_48 + fStack_54;
      iVar5 = (*(code *)DAT_10126a38[0x13d57])(&fStack_68,local_44);
    }
  }
  iVar6 = DAT_10126a38[1];
  fVar7 = (float10)(*(code *)DAT_10126a38[0x13d5b])();
  piVar3 = DAT_10126a38;
  iVar6 = (uint)(iVar6 == 0) + *DAT_10126a38 * 2;
  if (fVar7 - (float10)_DAT_100de4f0 <= (float10)*(float *)(&DAT_10124c28 + iVar6 * 4)) {
    return 1;
  }
  *(float *)(&DAT_10124c28 + iVar6 * 4) = (float)fVar7;
  (*(code *)piVar3[0x13d5c])(iVar4,local_44);
  iVar4 = FUN_10086e20(*DAT_10126a38,DAT_10126a38[1],&fStack_50);
  fStack_68 = fStack_50 + fStack_5c;
  fStack_64 = fStack_4c + fStack_58;
  fStack_60 = fStack_48 + fStack_54;
  iVar6 = (*(code *)DAT_10126a38[0x13d57])(&fStack_68,0);
  if (iVar6 == -1) {
    FUN_10086e70(*DAT_10126a38,DAT_10126a38[1]);
    if (0x1a < iVar4) {
LAB_100870dd:
      DAT_10126a38[0xe] = (int)fStack_68;
      DAT_10126a38[0xf] = (int)fStack_64;
      DAT_10126a38[0x10] = (int)fStack_60;
    }
    return 0;
  }
  if (((*(byte *)((int)DAT_10126a38 + 0x45476) & 7) != 0) &&
     (DAT_10126a38[iVar6 * 0x38 + 0x9c] != 0)) {
    fStack_74 = 0.0;
    do {
      fVar1 = fStack_74 + fStack_54;
      fStack_78 = -8.0;
      do {
        fVar2 = fStack_78 + fStack_5c;
        fStack_7c = -8.0;
        do {
          fStack_64 = fStack_7c + fStack_58;
          fStack_68 = fVar2;
          fStack_60 = fVar1;
          iVar4 = (*(code *)DAT_10126a38[0x13d57])(&fStack_68,0);
          if (iVar4 == -1) goto LAB_100870dd;
          fStack_7c = fStack_7c + _DAT_100de45c;
        } while (fStack_7c <= _DAT_100de45c);
        fStack_78 = fStack_78 + _DAT_100de45c;
      } while (fStack_78 <= _DAT_100de45c);
      fStack_74 = fStack_74 + _DAT_100e0b48;
    } while (fStack_74 <= _DAT_100ee01c);
  }
  return 1;
}

