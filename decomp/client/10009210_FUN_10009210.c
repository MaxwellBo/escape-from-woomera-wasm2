
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10009210(void)

{
  int iVar1;
  int *piVar2;
  float10 fVar3;
  float fStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  float fStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  float afStack_80 [3];
  float afStack_74 [3];
  undefined1 auStack_68 [12];
  undefined1 auStack_5c [20];
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined1 auStack_18 [12];
  undefined1 auStack_c [12];
  
  piVar2 = (int *)(*DAT_100a50bc)();
  iVar1 = *piVar2;
  (*DAT_100a5078)(auStack_68);
  FUN_1000aa90(&fStack_8c);
  (*DAT_100a5050)(auStack_68,afStack_80,auStack_c,auStack_18);
  fStack_98 = fStack_8c;
  uStack_94 = uStack_88;
  uStack_90 = uStack_84;
  FUN_100312c0(&fStack_98,2048.0,afStack_80,afStack_74);
  (**(code **)(DAT_100a5140 + 0x28))(0,1);
  (**(code **)(DAT_100a5140 + 0x2c))();
  (**(code **)(DAT_100a5140 + 0x34))(iVar1 + -1);
  (**(code **)(DAT_100a5140 + 0x38))(2);
  (**(code **)(DAT_100a5140 + 0x3c))(&fStack_98,afStack_74,2,0xffffffff,auStack_5c);
  (**(code **)(DAT_100a5140 + 0x30))();
  iVar1 = DAT_1007ee28;
  if (DAT_1007ee28 != 0) {
    *(undefined4 *)(DAT_1007ee28 + 0x18) = uStack_48;
    *(undefined4 *)(iVar1 + 0x1c) = uStack_44;
    *(undefined4 *)(iVar1 + 0x20) = uStack_40;
    fVar3 = (float10)(*DAT_100a50c8)();
    *(float *)(DAT_1007ee28 + 0x38) = (float)(fVar3 + (float10)_DAT_10059ea8);
  }
  iVar1 = _DAT_1007ee24;
  if (_DAT_1007ee24 != 0) {
    *(undefined4 *)(_DAT_1007ee24 + 0x18) = uStack_48;
    *(undefined4 *)(iVar1 + 0x1c) = uStack_44;
    *(undefined4 *)(iVar1 + 0x20) = uStack_40;
    fVar3 = (float10)(*DAT_100a50c8)();
    *(float *)(_DAT_1007ee24 + 0x38) = (float)(fVar3 + (float10)_DAT_10059ea8);
  }
  return;
}

