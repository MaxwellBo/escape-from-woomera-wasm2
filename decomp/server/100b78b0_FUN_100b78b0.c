
void __fastcall FUN_100b78b0(int *param_1)

{
  float fVar1;
  float fVar2;
  float *pfVar3;
  float fStack_54;
  float fStack_50;
  undefined4 uStack_4c;
  float fStack_48;
  float fStack_44;
  undefined4 uStack_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  *(undefined4 *)(param_1[1] + 0x110) = 2;
  FUN_100b79e0(param_1);
  fStack_54 = 48.0;
  fStack_50 = 48.0;
  uStack_4c = 0x43700000;
  fStack_48 = -48.0;
  fStack_44 = -48.0;
  uStack_40 = 0x42dc0000;
  FUN_100afdc0(param_1[1],&fStack_48,&fStack_54);
  (*DAT_10121e58)(param_1[1] + 0x50,&fStack_30,&fStack_3c,0);
  pfVar3 = (float *)&DAT_101323b8;
  do {
    fVar1 = pfVar3[1];
    fStack_54 = fStack_3c * fVar1;
    fStack_50 = fStack_38 * fVar1;
    uStack_18 = 0x41400000;
    uStack_14 = 0x41400000;
    uStack_10 = 0x42f00000;
    fVar2 = *pfVar3;
    fStack_48 = fStack_30 * fVar2;
    uStack_c = 0xc1400000;
    uStack_8 = 0xc1400000;
    uStack_4 = 0;
    fStack_44 = fStack_2c * fVar2;
    fStack_24 = fStack_48 + fStack_54;
    fStack_20 = fStack_44 + fStack_50;
    fStack_1c = fVar2 * fStack_28 + fVar1 * fStack_34;
    FUN_100b7490((int)param_1,&uStack_c,&uStack_18,&fStack_24);
    pfVar3 = pfVar3 + 3;
  } while (pfVar3 < &DAT_101323f4);
  return;
}

