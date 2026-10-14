
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100069a0(int param_1)

{
  int iVar1;
  bool bVar2;
  undefined3 extraout_var;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  uStack_c = *(undefined4 *)(param_1 + 8);
  iVar1 = *(int *)(param_1 + 4);
  uStack_8 = *(undefined4 *)(param_1 + 0xc);
  uStack_4 = *(undefined4 *)(param_1 + 0x10);
  (**(code **)(DAT_100a5140 + 8))(iVar1,6,s_weapons_egon_run3_wav_100763d0);
  if (*(int *)(param_1 + 0x38) != 0) {
    (**(code **)(DAT_100a5140 + 4))
              (iVar1,&uStack_c,1,s_weapons_egon_off1_wav_100763e8,0x3f7ae148,0x3f4ccccd,0,100);
  }
  bVar2 = FUN_1001a780(iVar1);
  if (CONCAT31(extraout_var,bVar2) != 0) {
    if (DAT_1007ee28 != 0) {
      *(undefined4 *)(DAT_1007ee28 + 0x38) = 0;
      DAT_1007ee28 = 0;
    }
    if (_DAT_1007ee24 != 0) {
      *(undefined4 *)(_DAT_1007ee24 + 0x38) = 0;
      _DAT_1007ee24 = 0;
    }
  }
  return;
}

