
void FUN_10005160(int param_1)

{
  int iVar1;
  bool bVar2;
  undefined3 extraout_var;
  int iVar3;
  int iVar4;
  float10 fVar5;
  char *pcVar6;
  float fStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  float afStack_24 [3];
  float afStack_18 [3];
  float afStack_c [3];
  
  fStack_54 = *(float *)(param_1 + 8);
  uStack_50 = *(undefined4 *)(param_1 + 0xc);
  uStack_4c = *(undefined4 *)(param_1 + 0x10);
  uStack_3c = *(undefined4 *)(param_1 + 0x14);
  uStack_38 = *(undefined4 *)(param_1 + 0x18);
  iVar1 = *(int *)(param_1 + 4);
  uStack_34 = *(undefined4 *)(param_1 + 0x1c);
  (*DAT_100a5050)(&uStack_3c,&uStack_48,afStack_c,afStack_18);
  bVar2 = FUN_1001a780(iVar1);
  if (CONCAT31(extraout_var,bVar2) != 0) {
    iVar3 = (*DAT_100a5080)();
    FUN_1001a9b0();
    (**(code **)(DAT_100a5140 + 0x40))(2,iVar3 != 1);
    FUN_100417f0(0,0xc1200000);
  }
  iVar4 = (*DAT_100a5100)(0,1);
  iVar3 = DAT_100a5140;
  if (iVar4 == 0) {
    fVar5 = (float10)(*DAT_100a50fc)(0x3f4ccccd,0x3f666666,0x3f4ccccd,0,100);
    pcVar6 = s_weapons_357_shot1_wav_10076804;
  }
  else {
    if (iVar4 != 1) goto LAB_1000527a;
    fVar5 = (float10)(*DAT_100a50fc)(0x3f4ccccd,0x3f666666,0x3f4ccccd,0,100);
    pcVar6 = s_weapons_357_shot2_wav_1007681c;
  }
  (**(code **)(iVar3 + 4))(iVar1,&fStack_54,1,pcVar6,(float)fVar5);
LAB_1000527a:
  FUN_1001a7a0(param_1,afStack_24,&fStack_54);
  uStack_30 = uStack_48;
  uStack_2c = uStack_44;
  uStack_28 = uStack_40;
  FUN_100031a0(iVar1,(int)&uStack_48,afStack_c,afStack_18,1,afStack_24,(int)&uStack_30,8192.0,3,0,
               (int *)0x0,*(float *)(param_1 + 0x30),*(float *)(param_1 + 0x34));
  return;
}

