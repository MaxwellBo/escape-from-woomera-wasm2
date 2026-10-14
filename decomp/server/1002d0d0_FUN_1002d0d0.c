
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_1002d0d0(int *param_1)

{
  int iVar1;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  (**(code **)(*param_1 + 0x2c))();
  (*DAT_10121e10)(*(undefined4 *)(param_1[1] + 0x208),
                  *(int *)(param_1[1] + 0xb8) + *(int *)(DAT_10122044 + 0x98));
  FUN_100afe10((int)param_1,param_1[1] + 8);
  if ((*(byte *)(param_1[1] + 0x1a0) & 4) != 0) {
    *(undefined4 *)(param_1[1] + 0x10c) = 3;
    uStack_18 = 0x41200000;
    uStack_14 = 0x41200000;
    uStack_10 = 0x41200000;
    uStack_c = 0xc1200000;
    uStack_8 = 0xc1200000;
    uStack_4 = 0xc1200000;
    FUN_100afdc0(param_1[1],&uStack_c,&uStack_18);
  }
  iVar1 = param_1[1];
  if ((*(byte *)(iVar1 + 0x1a0) & 2) != 0) {
    *(float *)(iVar1 + 0x10) = *(float *)(iVar1 + 0x10) + _DAT_100dd618;
    (*DAT_10121e70)(*(undefined4 *)(param_1[1] + 0x208));
  }
  FUN_10008360(param_1,0,0.0);
  FUN_10008360(param_1,1,0.0);
  FUN_1002d2e0(param_1);
  (**(code **)(*param_1 + 8))(0x3dcccccd);
  return;
}

