
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_10078dc0(int *param_1)

{
  int iVar1;
  
  FUN_100745f0((int)param_1);
  if ((*(byte *)(param_1[1] + 0x1a0) & 0x10) != 0) {
    param_1[0x43] = *(int *)(param_1[1] + 0x10);
  }
  FUN_100750a0((int)param_1);
  if ((*(byte *)(param_1[1] + 0x1a0) & 8) == 0) {
    FUN_100afe10((int)param_1,param_1 + 0x3e);
    iVar1 = param_1[1];
    param_1[0x37] = 0;
    *(int *)(iVar1 + 0x50) = param_1[0x59];
    *(int *)(iVar1 + 0x54) = param_1[0x5a];
    *(int *)(iVar1 + 0x58) = param_1[0x5b];
    param_1[0x66] = 1;
  }
  else {
    FUN_100afe10((int)param_1,param_1 + 0x41);
    iVar1 = param_1[1];
    param_1[0x37] = 1;
    *(int *)(iVar1 + 0x50) = param_1[0x5c];
    *(int *)(iVar1 + 0x54) = param_1[0x5d];
    *(int *)(iVar1 + 0x58) = param_1[0x5e];
    param_1[0x66] = 0;
  }
  param_1[0x67] = 1;
  *(float *)(param_1[1] + 0x104) = *(float *)(param_1[1] + 0x100) + (float)_DAT_100e4138;
  param_1[0x1d] = (int)CFuncTrackChange::Find;
  (**(code **)(*param_1 + 0x2c))();
  return;
}

