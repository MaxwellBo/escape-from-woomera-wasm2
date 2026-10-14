
void __fastcall FUN_1000c820(int *param_1)

{
  bool bVar1;
  undefined3 extraout_var;
  int *piVar2;
  int iVar3;
  void *extraout_ECX;
  void *this;
  void *pvVar4;
  char *pcVar5;
  
  *(undefined4 *)(param_1[1] + 0x10c) = 0;
  *(undefined4 *)(param_1[1] + 0x16c) = 0;
  bVar1 = FUN_10019450((uint *)(param_1 + 0x58));
  if (CONCAT31(extraout_var,bVar1) != 0) {
    piVar2 = (int *)FUN_10019460((uint *)(param_1 + 0x58));
    piVar2 = (int *)(**(code **)(*piVar2 + 0x74))();
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 500))();
    }
  }
  iVar3 = (*DAT_10121f70)(0,1);
  if (iVar3 == 0) {
    pvVar4 = *(void **)(param_1[1] + 0x208);
    pcVar5 = s_barnacle_bcl_die1_wav_10102e78;
    this = extraout_ECX;
  }
  else {
    if (iVar3 != 1) goto LAB_1000c8c8;
    this = *(void **)(param_1[1] + 0x208);
    pcVar5 = s_barnacle_bcl_die3_wav_10102e90;
    pvVar4 = this;
  }
  FUN_10094b20(this,pvVar4,1,pcVar5,0x3f800000,0x3f4ccccd,0,100);
LAB_1000c8c8:
  (**(code **)(*param_1 + 0x1a8))(0x24);
  FUN_10008360(param_1,0,0.0);
  FUN_10007fc0((int)param_1,0.1);
  (**(code **)(*param_1 + 8))(0x3dcccccd);
  param_1[0x1d] = (int)CBarnacle::WaitTillDead;
  return;
}

