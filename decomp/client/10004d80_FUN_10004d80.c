
void FUN_10004d80(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  bool bVar3;
  undefined3 extraout_var;
  int iVar4;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  iVar2 = *(int *)(param_1 + 4);
  uStack_c = *(undefined4 *)(param_1 + 8);
  uStack_8 = *(undefined4 *)(param_1 + 0xc);
  uStack_4 = *(undefined4 *)(param_1 + 0x10);
  bVar3 = FUN_1001a780(iVar2);
  if (CONCAT31(extraout_var,bVar3) != 0) {
    (**(code **)(DAT_100a5140 + 0x40))(2,2);
    FUN_100417f0(0,0xc1200000);
  }
  iVar4 = (*DAT_100a5100)(0,1);
  if (iVar4 == 0) {
    puVar1 = (undefined4 *)(DAT_100a5140 + 4);
    iVar4 = (*DAT_100a5100)(0,0xf);
    (*(code *)*puVar1)(iVar2,&uStack_c,1,s_weapons_glauncher_wav_100767d4,0x3f800000,0x3f4ccccd,0,
                       iVar4 + 0x5e);
  }
  else if (iVar4 == 1) {
    puVar1 = (undefined4 *)(DAT_100a5140 + 4);
    iVar4 = (*DAT_100a5100)(0,0xf);
    (*(code *)*puVar1)(iVar2,&uStack_c,1,s_weapons_glauncher2_wav_100767ec,0x3f800000,0x3f4ccccd,0,
                       iVar4 + 0x5e);
    return;
  }
  return;
}

