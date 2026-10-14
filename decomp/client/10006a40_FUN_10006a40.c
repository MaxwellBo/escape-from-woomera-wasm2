
void FUN_10006a40(int param_1)

{
  int iVar1;
  bool bVar2;
  undefined3 extraout_var;
  int iVar3;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  iVar1 = *(int *)(param_1 + 4);
  uStack_c = *(undefined4 *)(param_1 + 8);
  uStack_8 = *(undefined4 *)(param_1 + 0xc);
  uStack_4 = *(undefined4 *)(param_1 + 0x10);
  bVar2 = FUN_1001a780(iVar1);
  if (CONCAT31(extraout_var,bVar2) != 0) {
    iVar3 = (*DAT_100a5100)(0,2);
    FUN_100417f0(0,(float)iVar3);
    (**(code **)(DAT_100a5140 + 0x40))(5,1);
  }
  iVar3 = (*DAT_100a5100)(0,2);
  if (iVar3 == 0) {
    (**(code **)(DAT_100a5140 + 4))
              (iVar1,&uStack_c,1,s_agrunt_ag_fire1_wav_10076924,0x3f800000,0x3f4ccccd,0,100);
  }
  else {
    if (iVar3 == 1) {
      (**(code **)(DAT_100a5140 + 4))
                (iVar1,&uStack_c,1,s_agrunt_ag_fire2_wav_10076938,0x3f800000,0x3f4ccccd,0,100);
      return;
    }
    if (iVar3 == 2) {
      (**(code **)(DAT_100a5140 + 4))
                (iVar1,&uStack_c,1,s_agrunt_ag_fire3_wav_1007694c,0x3f800000,0x3f4ccccd,0,100);
      return;
    }
  }
  return;
}

