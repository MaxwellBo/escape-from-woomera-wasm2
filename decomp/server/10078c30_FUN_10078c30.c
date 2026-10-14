
void __fastcall FUN_10078c30(int *param_1)

{
  int iVar1;
  
  *(undefined4 *)(param_1[1] + 0x10c) = 0;
  *(undefined4 *)(param_1[1] + 0x108) = 0;
  (*DAT_10121e10)(*(undefined4 *)(param_1[1] + 0x208),
                  *(int *)(param_1[1] + 0xb8) + *(int *)(DAT_10122044 + 0x98));
  iVar1 = param_1[1];
  FUN_100afdc0(iVar1,iVar1 + 0xdc,iVar1 + 0xe8);
  FUN_100afe10((int)param_1,param_1[1] + 8);
  param_1[0x1d] = (int)CFuncTrainControls::Find;
  (**(code **)(*param_1 + 8))(0);
  return;
}

