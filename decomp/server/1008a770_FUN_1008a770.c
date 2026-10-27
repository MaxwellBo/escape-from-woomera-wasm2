
void __fastcall FUN_1008a770(int param_1)

{
  int iVar1;
  void *extraout_ECX;
  void *extraout_ECX_00;
  void *this;
  undefined4 uVar2;
  undefined4 uVar3;
  char *pcVar4;
  undefined4 uVar5;
  
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x10c) = 0;
  iVar1 = (*DAT_10121f70)(0,4);
  if (iVar1 == 1) {
    uVar2 = *(undefined4 *)(*(int *)(param_1 + 4) + 0x208);
    iVar1 = (*DAT_10121f70)(0,0x27);
    uVar5 = 0x3f4ccccd;
    pcVar4 = s_roach_rch_die_wav_10115460;
    uVar3 = 2;
    this = extraout_ECX;
  }
  else {
    uVar2 = *(undefined4 *)(*(int *)(param_1 + 4) + 0x208);
    iVar1 = (*DAT_10121f70)(0,0x27);
    uVar5 = 0x3f333333;
    pcVar4 = s_roach_rch_smash_wav_10115438;
    uVar3 = 4;
    this = extraout_ECX_00;
  }
  FUN_10094b20(this,uVar2,uVar3,pcVar4,uVar5,0x3f4ccccd,0,iVar1 + 0x50);
  FUN_10095d30(2,(undefined4 *)(*(int *)(param_1 + 4) + 8),0x80,1.0);
  iVar1 = *(int *)(*(int *)(param_1 + 4) + 0x198);
  if (iVar1 == 0) {
    iVar1 = (*DAT_10121f1c)(0);
    if (iVar1 == 0) goto LAB_1008a83a;
  }
  if (*(int **)(iVar1 + 0x7c) != (int *)0x0) {
    (**(code **)(**(int **)(iVar1 + 0x7c) + 0x50))(*(undefined4 *)(param_1 + 4));
  }
LAB_1008a83a:
  FUN_100b0ef0(param_1);
  return;
}

