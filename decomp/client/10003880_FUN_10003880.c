
void FUN_10003880(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  bool bVar3;
  undefined4 uVar4;
  undefined3 extraout_var;
  int iVar5;
  float10 fVar6;
  float fVar7;
  float fVar8;
  float fStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  float fStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  float fStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  float afStack_3c [3];
  float afStack_30 [3];
  float afStack_24 [3];
  undefined1 auStack_18 [12];
  undefined1 auStack_c [12];
  
  fStack_6c = *(float *)(param_1 + 8);
  uStack_68 = *(undefined4 *)(param_1 + 0xc);
  uStack_64 = *(undefined4 *)(param_1 + 0x10);
  uStack_60 = *(undefined4 *)(param_1 + 0x14);
  uStack_5c = *(undefined4 *)(param_1 + 0x18);
  uStack_58 = *(undefined4 *)(param_1 + 0x1c);
  uStack_48 = *(undefined4 *)(param_1 + 0x20);
  uStack_44 = *(undefined4 *)(param_1 + 0x24);
  iVar2 = *(int *)(param_1 + 4);
  uStack_40 = *(undefined4 *)(param_1 + 0x28);
  (*DAT_100a5050)(&uStack_60,&fStack_78,afStack_30,afStack_3c);
  uVar4 = (**(code **)(DAT_100a5140 + 0xc))(s_models_shotgunshell_mdl_1007677c);
  bVar3 = FUN_1001a780(iVar2);
  if (CONCAT31(extraout_var,bVar3) != 0) {
    FUN_1001a9b0();
    (**(code **)(DAT_100a5140 + 0x40))(2,2);
    FUN_100417f0(0,0xc1200000);
  }
  iVar5 = 2;
  do {
    FUN_1001a880(param_1,(int)&fStack_6c,(int)&uStack_48,(int)auStack_18,(int)auStack_c,&fStack_78,
                 (int)afStack_30,(int)afStack_3c,32.0,-12.0,6.0);
    FUN_1001a830(auStack_c,auStack_18,uStack_5c,uVar4,2);
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
  puVar1 = (undefined4 *)(DAT_100a5140 + 4);
  iVar5 = (*DAT_100a5100)(0,0x1f);
  fVar6 = (float10)(*DAT_100a50fc)(0x3f7ae148,0x3f800000,0x3f4ccccd,0,iVar5 + 0x55);
  (*(code *)*puVar1)(iVar2,&fStack_6c,1,s_weapons_dbarrel1_wav_10076764,(float)fVar6);
  FUN_1001a7a0(param_1,afStack_24,&fStack_6c);
  fStack_54 = fStack_78;
  uStack_50 = uStack_74;
  uStack_4c = uStack_70;
  iVar5 = (*DAT_100a5080)();
  if (iVar5 < 2) {
    fVar8 = 0.08716;
    fVar7 = 0.08716;
    iVar5 = 0xc;
  }
  else {
    fVar8 = 0.04362;
    fVar7 = 0.17365;
    iVar5 = 8;
  }
  FUN_100031a0(iVar2,(int)&fStack_78,afStack_30,afStack_3c,iVar5,afStack_24,(int)&fStack_54,2048.0,4
               ,0,&DAT_1007ee28 + iVar2,fVar7,fVar8);
  return;
}

