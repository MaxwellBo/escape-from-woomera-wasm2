
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_10040b30(int *param_1)

{
  int iVar1;
  float fVar2;
  float fVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  float fStack_14;
  float fStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  fStack_34 = *DAT_10122044 - *(float *)(param_1[1] + 0x1e4);
  if ((float)_DAT_100dfb80 < fStack_34) {
    do {
      iVar1 = param_1[1];
      fStack_30 = *(float *)(iVar1 + 8);
      fStack_2c = *(float *)(iVar1 + 0xc);
      fVar2 = (float)_DAT_100dd628 / *(float *)(iVar1 + 0x1f8);
      fVar3 = *(float *)(iVar1 + 0x144) * *(float *)(iVar1 + 0x160) * fVar2;
      fStack_28 = *(float *)(iVar1 + 0x1e0) * *(float *)(iVar1 + 0x160) * fVar2 +
                  *(float *)(iVar1 + 0x10);
      *(float *)(iVar1 + 0x54) = *(float *)(iVar1 + 0x160) * _DAT_100e5588 * fVar2;
      FUN_100af200(param_1[1] + 0x50);
      fStack_14 = fVar3 * DAT_10122044[0xb];
      uStack_c = 0;
      fStack_10 = fVar3 * DAT_10122044[0xc];
      fStack_30 = fVar3 * DAT_10122044[10] + fStack_30;
      fStack_2c = fStack_2c + fStack_14;
      fStack_28 = fStack_10 + fStack_28;
      uVar7 = 400;
      uStack_8 = 0;
      uStack_4 = 0x3f800000;
      fStack_24 = fStack_30;
      fStack_20 = fStack_2c;
      fStack_1c = fStack_28;
      uVar4 = (*DAT_10121f70)(0x32,0x96);
      uVar6 = 0x14;
      uVar5 = (*DAT_10121f70)(8,0xb);
      FUN_1003e4a0(&fStack_30,&uStack_c,uVar5,uVar6,uVar4,uVar7);
      *(float *)(param_1[1] + 0x1e4) = *(float *)(param_1[1] + 0x1e4) + (float)_DAT_100dfb80;
      *(float *)(param_1[1] + 0x160) = *(float *)(param_1[1] + 0x160) + (float)_DAT_100dfb80;
      fStack_34 = fStack_34 - (float)_DAT_100dfb80;
    } while ((float)_DAT_100dfb80 < fStack_34);
  }
  (**(code **)(*param_1 + 8))(0);
  if (*(float *)(param_1[1] + 0x1f8) <= *(float *)(param_1[1] + 0x160)) {
    FUN_100b0ef0((int)param_1);
  }
  return;
}

