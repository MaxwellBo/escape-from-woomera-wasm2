
void FUN_10004590(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  bool bVar3;
  undefined4 uVar4;
  undefined3 extraout_var;
  int iVar5;
  int iVar6;
  float10 fVar7;
  char *pcVar8;
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
  
  fStack_78 = *(float *)(param_1 + 8);
  uStack_74 = *(undefined4 *)(param_1 + 0xc);
  uStack_70 = *(undefined4 *)(param_1 + 0x10);
  uStack_60 = *(undefined4 *)(param_1 + 0x14);
  uStack_5c = *(undefined4 *)(param_1 + 0x18);
  uStack_58 = *(undefined4 *)(param_1 + 0x1c);
  uStack_48 = *(undefined4 *)(param_1 + 0x20);
  uStack_44 = *(undefined4 *)(param_1 + 0x24);
  iVar2 = *(int *)(param_1 + 4);
  uStack_40 = *(undefined4 *)(param_1 + 0x28);
  (*DAT_100a5050)(&uStack_60,&fStack_6c,afStack_30,afStack_3c);
  uVar4 = (**(code **)(DAT_100a5140 + 0xc))(s_models_shell_mdl_10076750);
  bVar3 = FUN_1001a780(iVar2);
  if (CONCAT31(extraout_var,bVar3) != 0) {
    FUN_1001a9b0();
    puVar1 = (undefined4 *)(DAT_100a5140 + 0x40);
    iVar5 = (*DAT_100a5100)(0,2,2);
    (*(code *)*puVar1)(iVar5 + 5);
    fVar7 = (float10)(*DAT_100a50fc)(0xc0000000,0x40000000);
    FUN_100417f0(0,(float)fVar7);
  }
  FUN_1001a880(param_1,(int)&fStack_78,(int)&uStack_48,(int)auStack_18,(int)auStack_c,&fStack_6c,
               (int)afStack_30,(int)afStack_3c,20.0,-12.0,4.0);
  FUN_1001a830(auStack_c,auStack_18,uStack_5c,uVar4,1);
  iVar6 = (*DAT_100a5100)(0,1);
  iVar5 = DAT_100a5140;
  if (iVar6 == 0) {
    iVar6 = (*DAT_100a5100)(0,0xf);
    pcVar8 = s_weapons_hks1_wav_100767ac;
  }
  else {
    if (iVar6 != 1) goto LAB_10004733;
    iVar6 = (*DAT_100a5100)(0,0xf);
    pcVar8 = s_weapons_hks2_wav_100767c0;
  }
  (**(code **)(iVar5 + 4))(iVar2,&fStack_78,1,pcVar8,0x3f800000,0x3f4ccccd,0,iVar6 + 0x5e);
LAB_10004733:
  FUN_1001a7a0(param_1,afStack_24,&fStack_78);
  fStack_54 = fStack_6c;
  uStack_50 = uStack_68;
  uStack_4c = uStack_64;
  iVar5 = (*DAT_100a5080)();
  if (1 < iVar5) {
    FUN_100031a0(iVar2,(int)&fStack_6c,afStack_30,afStack_3c,1,afStack_24,(int)&fStack_54,8192.0,2,2
                 ,&DAT_1007ee28 + iVar2,*(float *)(param_1 + 0x30),*(float *)(param_1 + 0x34));
    return;
  }
  FUN_100031a0(iVar2,(int)&fStack_6c,afStack_30,afStack_3c,1,afStack_24,(int)&fStack_54,8192.0,2,2,
               &DAT_1007ee28 + iVar2,*(float *)(param_1 + 0x30),*(float *)(param_1 + 0x34));
  return;
}

