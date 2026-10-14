
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_10029fc0(int param_1)

{
  ushort uVar1;
  float fVar2;
  int iVar3;
  float fStack_c4;
  float fStack_c0;
  float fStack_bc;
  float fStack_b8;
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  float fStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  float fStack_9c;
  float afStack_98 [4];
  float fStack_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  float fStack_78;
  float local_74;
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  float fStack_60;
  float afStack_5c [3];
  undefined1 auStack_50 [16];
  float fStack_40;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  float afStack_18 [3];
  float afStack_c [3];
  
  if (*(int *)(DAT_100acc38 + 0xdc) != 8) {
    (**(code **)(DAT_100acc38 + 0x4f594))(*(undefined4 *)(param_1 + 0x30),&local_74,afStack_98 + 3);
    fStack_bc = afStack_98[3] + local_74;
    fStack_b8 = fStack_88 + fStack_70;
    fStack_b4 = fStack_84 + fStack_6c;
    FUN_10031290(&fStack_bc,0.5,&fStack_bc);
    fStack_bc = fStack_bc + *(float *)(param_1 + 0x24);
    fStack_b8 = fStack_b8 + *(float *)(param_1 + 0x28);
    fStack_b4 = fStack_b4 + *(float *)(param_1 + 0x2c);
    *(undefined4 *)(DAT_100acc38 + 0xdc) = 5;
    uStack_a4 = *(undefined4 *)(DAT_100acc38 + 0x38);
    uStack_a0 = *(undefined4 *)(DAT_100acc38 + 0x3c);
    fStack_9c = (*(float *)(DAT_100acc38 + 0x4f4fc + *(int *)(DAT_100acc38 + 0xbc) * 0xc) -
                _DAT_10059eb0) + *(float *)(DAT_100acc38 + 0x40);
    iVar3 = (**(code **)(DAT_100acc38 + 0x4f574))(&uStack_a4,0);
    *(undefined4 *)(DAT_100acc38 + 0xc0) = 0;
    (**(code **)(DAT_100acc38 + 0x4f59c))(param_1,DAT_100acc38 + 0x38,&fStack_bc,auStack_50);
    if (fStack_40 != (float)_DAT_10059a10) {
      fStack_c0 = 0.0;
      fStack_c4 = 0.0;
      FUN_10026230((float *)(DAT_100acc38 + 0x44),afStack_c,afStack_18,(float *)0x0);
      uVar1 = *(ushort *)(DAT_100acc38 + 0x45476);
      if ((uVar1 & 0x10) != 0) {
        fStack_c0 = -200.0;
      }
      if ((uVar1 & 8) != 0) {
        fStack_c0 = fStack_c0 + _DAT_1005ace8;
      }
      if ((uVar1 & 0x200) != 0) {
        fStack_c4 = -200.0;
      }
      if ((uVar1 & 0x400) != 0) {
        fStack_c4 = fStack_c4 + _DAT_1005ace8;
      }
      if ((uVar1 & 2) != 0) {
        *(undefined4 *)(DAT_100acc38 + 0xdc) = 3;
        FUN_10031290(&fStack_30,270.0,(float *)(DAT_100acc38 + 0x5c));
        return;
      }
      if ((fStack_c0 == _DAT_10059a18) && (fStack_c4 == _DAT_10059a18)) {
        *(undefined4 *)(DAT_100acc38 + 0x5c) = 0;
        *(undefined4 *)(DAT_100acc38 + 0x60) = 0;
        *(undefined4 *)(DAT_100acc38 + 100) = 0;
        return;
      }
      FUN_10031290(afStack_c,fStack_c0,&fStack_b0);
      FUN_100312c0(&fStack_b0,fStack_c4,afStack_18,&fStack_b0);
      afStack_98[0] = 0.0;
      afStack_98[1] = 0.0;
      afStack_98[2] = 1.0;
      FUN_10026480(afStack_98,&fStack_30,afStack_5c);
      FUN_100264f0(afStack_5c);
      fVar2 = fStack_30 * fStack_b0 + fStack_2c * fStack_ac + fStack_28 * fStack_a8;
      FUN_10031290(&fStack_30,fVar2,&fStack_80);
      fStack_68 = fStack_b0 - fStack_80;
      fStack_64 = fStack_ac - fStack_7c;
      fStack_60 = fStack_a8 - fStack_78;
      FUN_10026480(&fStack_30,afStack_5c,afStack_98);
      FUN_100312c0(&fStack_68,-fVar2,afStack_98,(float *)(DAT_100acc38 + 0x5c));
      if ((iVar3 == -2) && (_DAT_10059a18 < fVar2)) {
        FUN_100312c0((float *)(DAT_100acc38 + 0x5c),200.0,&fStack_30,(float *)(DAT_100acc38 + 0x5c))
        ;
      }
    }
  }
  return;
}

