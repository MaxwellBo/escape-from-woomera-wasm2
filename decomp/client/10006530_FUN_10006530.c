
void FUN_10006530(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  bool bVar3;
  int iVar4;
  undefined3 extraout_var;
  float10 fVar5;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  uStack_c = *(undefined4 *)(param_1 + 8);
  uStack_8 = *(undefined4 *)(param_1 + 0xc);
  uStack_4 = *(undefined4 *)(param_1 + 0x10);
  iVar2 = *(int *)(param_1 + 4);
  puVar1 = (undefined4 *)(DAT_100a5140 + 4);
  iVar4 = (*DAT_100a5100)(0,0xf);
  (*(code *)*puVar1)(iVar2,&uStack_c,1,s_weapons_xbow_fire1_wav_1007618c,0x3f800000,0x3f4ccccd,0,
                     iVar4 + 0x5d);
  puVar1 = (undefined4 *)(DAT_100a5140 + 4);
  iVar4 = (*DAT_100a5100)(0,0xf);
  fVar5 = (float10)(*DAT_100a50fc)(0x3f733333,0x3f800000,0x3f4ccccd,0,iVar4 + 0x5d);
  (*(code *)*puVar1)(iVar2,&uStack_c,3,s_weapons_xbow_reload1_wav_10076170,(float)fVar5);
  bVar3 = FUN_1001a780(iVar2);
  if (CONCAT31(extraout_var,bVar3) != 0) {
    if (*(int *)(param_1 + 0x38) == 0) {
      if (*(int *)(param_1 + 0x3c) != 0) {
        (**(code **)(DAT_100a5140 + 0x40))(6,1);
      }
    }
    else {
      (**(code **)(DAT_100a5140 + 0x40))(4,1);
    }
    FUN_100417f0(0,0xc0000000);
  }
  return;
}

