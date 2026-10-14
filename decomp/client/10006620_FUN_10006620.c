
void FUN_10006620(int param_1)

{
  int iVar1;
  bool bVar2;
  undefined3 extraout_var;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  uStack_c = *(undefined4 *)(param_1 + 8);
  uStack_8 = *(undefined4 *)(param_1 + 0xc);
  iVar1 = *(int *)(param_1 + 4);
  uStack_4 = *(undefined4 *)(param_1 + 0x10);
  (**(code **)(DAT_100a5140 + 4))
            (iVar1,&uStack_c,1,s_weapons_rocketfire1_wav_1007690c,0x3f666666,0x3f4ccccd,0,100);
  (**(code **)(DAT_100a5140 + 4))
            (iVar1,&uStack_c,3,s_weapons_glauncher_wav_100767d4,0x3f333333,0x3f4ccccd,0,100);
  bVar2 = FUN_1001a780(iVar1);
  if (CONCAT31(extraout_var,bVar2) != 0) {
    (**(code **)(DAT_100a5140 + 0x40))(3,1);
    FUN_100417f0(0,0xc0a00000);
  }
  return;
}

