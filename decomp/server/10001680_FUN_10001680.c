
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_10001680(int *param_1)

{
  int iVar1;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  for (iVar1 = param_1[0xc2]; iVar1 != 0; iVar1 = *(int *)(iVar1 + 0x30c)) {
    *(float *)(iVar1 + 0x340) = *DAT_10122044 + _DAT_100dd5d4;
  }
  if ((void *)param_1[0xc2] != (void *)0x0) {
    FUN_10002af0((void *)param_1[0xc2],(int)param_1);
  }
  uStack_18 = 0;
  uStack_14 = 0;
  uStack_10 = 0;
  *(undefined4 *)(param_1[1] + 0x170) = 2;
  uStack_c = 0;
  *(undefined4 *)(param_1[1] + 0x138) = 0;
  *(undefined4 *)(param_1[1] + 0x118) = 0x20;
  uStack_8 = 0;
  uStack_4 = 0;
  FUN_100afdc0(param_1[1],&uStack_c,&uStack_18);
  *(undefined4 *)(param_1[1] + 0x108) = 6;
  param_1[0x1d] = (int)CFlockingFlyer::FallHack;
  (**(code **)(*param_1 + 8))(0x3dcccccd);
  return;
}

