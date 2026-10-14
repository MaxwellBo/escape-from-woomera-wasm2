
void FUN_10003690(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  bool bVar3;
  undefined4 uVar4;
  undefined3 extraout_var;
  int iVar5;
  float10 fVar6;
  float fStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  float fStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  float fStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  float afStack_3c [3];
  float afStack_30 [3];
  undefined1 auStack_24 [12];
  undefined1 auStack_18 [12];
  float afStack_c [3];
  
  fStack_78 = *(float *)(param_1 + 8);
  uStack_74 = *(undefined4 *)(param_1 + 0xc);
  uStack_70 = *(undefined4 *)(param_1 + 0x10);
  uStack_60 = *(undefined4 *)(param_1 + 0x14);
  uStack_5c = *(undefined4 *)(param_1 + 0x18);
  uStack_58 = *(undefined4 *)(param_1 + 0x1c);
  uStack_54 = *(undefined4 *)(param_1 + 0x20);
  uStack_50 = *(undefined4 *)(param_1 + 0x24);
  iVar2 = *(int *)(param_1 + 4);
  uStack_4c = *(undefined4 *)(param_1 + 0x28);
  (*DAT_100a5050)(&uStack_60,&fStack_6c,afStack_30,afStack_3c);
  uVar4 = (**(code **)(DAT_100a5140 + 0xc))(s_models_shell_mdl_10076750);
  bVar3 = FUN_1001a780(iVar2);
  if (CONCAT31(extraout_var,bVar3) != 0) {
    FUN_1001a9b0();
    (**(code **)(DAT_100a5140 + 0x40))(3,2);
    FUN_100417f0(0,0xc0000000);
  }
  FUN_1001a880(param_1,(int)&fStack_78,(int)&uStack_54,(int)auStack_24,(int)auStack_18,&fStack_6c,
               (int)afStack_30,(int)afStack_3c,20.0,-12.0,4.0);
  FUN_1001a830(auStack_18,auStack_24,uStack_5c,uVar4,1);
  puVar1 = (undefined4 *)(DAT_100a5140 + 4);
  iVar5 = (*DAT_100a5100)(0,3);
  fVar6 = (float10)(*DAT_100a50fc)(0x3f6b851f,0x3f800000,0x3f4ccccd,0,iVar5 + 0x62);
  (*(code *)*puVar1)(iVar2,&fStack_78,1,s_weapons_pl_gun3_wav_1007673c,(float)fVar6);
  FUN_1001a7a0(param_1,afStack_c,&fStack_78);
  fStack_48 = fStack_6c;
  uStack_44 = uStack_68;
  uStack_40 = uStack_64;
  FUN_100031a0(iVar2,(int)&fStack_6c,afStack_30,afStack_3c,1,afStack_c,(int)&fStack_48,8192.0,1,0,
               &DAT_1007ee28 + iVar2,*(float *)(param_1 + 0x30),*(float *)(param_1 + 0x34));
  return;
}

