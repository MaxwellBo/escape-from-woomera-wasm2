
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_10069140(void *param_1,undefined4 *param_2)

{
  float fVar1;
  float fVar2;
  int iVar3;
  undefined4 uVar4;
  bool bVar5;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  int iVar6;
  int iVar7;
  undefined3 extraout_var_01;
  undefined3 extraout_var_02;
  void *pvVar8;
  int iVar9;
  void *this;
  void *this_00;
  void *this_01;
  void *this_02;
  void *this_03;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  undefined1 auStack_2c [12];
  byte abStack_20 [32];
  
  switch(*param_2) {
  case 2:
    bVar5 = FUN_10019450((uint *)((int)param_1 + 0x160));
    if (CONCAT31(extraout_var,bVar5) != 0) {
      iVar9 = (*DAT_10121f70)(0,4);
      if (iVar9 == 0) {
        uVar4 = *(undefined4 *)(*(int *)((int)param_1 + 4) + 0x208);
        iVar9 = (*DAT_10121f70)(0,2);
        FUN_10094b20(this,uVar4,2,(&PTR_s_X_x_attack1_wav_10112130)[iVar9],0x3f800000,0x3e4ccccd,0,
                     100);
      }
      uVar4 = *(undefined4 *)(*(int *)((int)param_1 + 4) + 0x208);
      iVar9 = (*DAT_10121f70)(0,0);
      FUN_10094b20(this_00,uVar4,1,(&PTR_s_X_x_ballattack1_wav_1011213c)[iVar9],0x3f800000,
                   0x3e4ccccd,0,100);
      (*DAT_10121ec0)(0,0x17,0,0);
      (*DAT_10121ec8)(0x1c);
      iVar9 = (*DAT_10121f24)(*(undefined4 *)(*(int *)((int)param_1 + 4) + 0x208));
      (*DAT_10121ed0)(iVar9 + 0x3000);
      (*DAT_10121edc)(*(undefined4 *)(*(int *)((int)param_1 + 4) + 8));
      (*DAT_10121edc)(*(undefined4 *)(*(int *)((int)param_1 + 4) + 0xc));
      (*DAT_10121edc)(*(undefined4 *)(*(int *)((int)param_1 + 4) + 0x10));
      (*DAT_10121edc)(0x43800000);
      (*DAT_10121ec8)(0x80);
      (*DAT_10121ec8)(0x80);
      (*DAT_10121ec8)(0xff);
      (*DAT_10121ec8)(10);
      (*DAT_10121edc)(0x43000000);
      (*DAT_10121ec4)();
      (*DAT_10121ec0)(0,0x17,0,0);
      (*DAT_10121ec8)(0x1c);
      iVar9 = (*DAT_10121f24)(*(undefined4 *)(*(int *)((int)param_1 + 4) + 0x208));
      (*DAT_10121ed0)(iVar9 + 0x4000);
      (*DAT_10121edc)(*(undefined4 *)(*(int *)((int)param_1 + 4) + 8));
      (*DAT_10121edc)(*(undefined4 *)(*(int *)((int)param_1 + 4) + 0xc));
      (*DAT_10121edc)(*(undefined4 *)(*(int *)((int)param_1 + 4) + 0x10));
      (*DAT_10121edc)(0x43800000);
      (*DAT_10121ec8)(0x80);
      (*DAT_10121ec8)(0x80);
      (*DAT_10121ec8)(0xff);
      (*DAT_10121ec8)(10);
      (*DAT_10121edc)(0x43000000);
      (*DAT_10121ec4)();
      *(float *)((int)param_1 + 0x5b8) = *DAT_10122044;
      *(float *)((int)param_1 + 0x5b4) = *DAT_10122044 + (float)_DAT_100dd628;
      return;
    }
    break;
  case 3:
    bVar5 = FUN_10019450((uint *)((int)param_1 + 0x160));
    if (CONCAT31(extraout_var_00,bVar5) != 0) {
      FUN_100c8506(abStack_20,&DAT_101124f8);
      iVar9 = FUN_100af030(0,abStack_20);
      FUN_100c8506(abStack_20,&DAT_101124f8);
      iVar6 = FUN_100af030(0,abStack_20);
      if ((iVar6 == 0) && (iVar9 == 0)) {
        *(int *)((int)param_1 + 0x37c) = *(int *)((int)param_1 + 0x37c) + 1;
        uVar4 = *(undefined4 *)(*(int *)((int)param_1 + 4) + 0x208);
        iVar9 = (*DAT_10121f70)(0,0);
        FUN_10094b20(this_01,uVar4,1,(&PTR_s_X_x_ballattack1_wav_1011213c)[iVar9],0x3f800000,
                     0x3e4ccccd,0,100);
        (*DAT_10121efc)(2,s_nihilanth_can_t_target__s_10112514,abStack_20);
        (*DAT_10121ec0)(0,0x17,0,0);
        (*DAT_10121ec8)(0x1c);
        iVar9 = (*DAT_10121f24)(*(undefined4 *)(*(int *)((int)param_1 + 4) + 0x208));
        (*DAT_10121ed0)(iVar9 + 0x3000);
        (*DAT_10121edc)(*(undefined4 *)(*(int *)((int)param_1 + 4) + 8));
        (*DAT_10121edc)(*(undefined4 *)(*(int *)((int)param_1 + 4) + 0xc));
        (*DAT_10121edc)(*(undefined4 *)(*(int *)((int)param_1 + 4) + 0x10));
        (*DAT_10121edc)(0x43800000);
        (*DAT_10121ec8)(0x80);
        (*DAT_10121ec8)(0x80);
        (*DAT_10121ec8)(0xff);
        (*DAT_10121ec8)(10);
        (*DAT_10121edc)(0x43000000);
        (*DAT_10121ec4)();
        (*DAT_10121ec0)(0,0x17,0,0);
        (*DAT_10121ec8)(0x1c);
        iVar9 = (*DAT_10121f24)(*(undefined4 *)(*(int *)((int)param_1 + 4) + 0x208));
        (*DAT_10121ed0)(iVar9 + 0x4000);
        (*DAT_10121edc)(*(undefined4 *)(*(int *)((int)param_1 + 4) + 8));
        (*DAT_10121edc)(*(undefined4 *)(*(int *)((int)param_1 + 4) + 0xc));
        (*DAT_10121edc)(*(undefined4 *)(*(int *)((int)param_1 + 4) + 0x10));
        (*DAT_10121edc)(0x43800000);
        (*DAT_10121ec8)(0x80);
        (*DAT_10121ec8)(0x80);
        (*DAT_10121ec8)(0xff);
        (*DAT_10121ec8)(10);
        (*DAT_10121edc)(0x43000000);
        (*DAT_10121ec4)();
        *(float *)((int)param_1 + 0x5b8) = *DAT_10122044;
        *(float *)((int)param_1 + 0x5b4) = *DAT_10122044 + (float)_DAT_100dd628;
        return;
      }
      uVar4 = *(undefined4 *)(*(int *)((int)param_1 + 4) + 0x208);
      iVar7 = (*DAT_10121f70)(0,2);
      FUN_10094b20(this_02,uVar4,2,(&PTR_s_X_x_attack1_wav_10112130)[iVar7],0x3f800000,0x3e4ccccd,0,
                   100);
      FUN_10008450(param_1,2,&fStack_38,auStack_2c);
      pvVar8 = (void *)FUN_1001a1f0(0x10112448,&fStack_38,
                                    (undefined4 *)(*(int *)((int)param_1 + 4) + 0x50),
                                    *(undefined4 *)(*(int *)((int)param_1 + 4) + 0x208));
      iVar7 = *(int *)((int)param_1 + 4);
      fVar1 = *(float *)(iVar7 + 0xc);
      fVar2 = *(float *)(iVar7 + 0x10);
      iVar3 = *(int *)((int)pvVar8 + 4);
      *(float *)(iVar3 + 0x20) = *(float *)(iVar7 + 8) - fStack_38;
      *(float *)(iVar3 + 0x24) = fVar1 - fStack_34;
      *(float *)(iVar3 + 0x28) = fVar2 - fStack_30;
      iVar7 = FUN_10019410((uint *)((int)param_1 + 0x160));
      FUN_1006a330(pvVar8,(int)param_1,iVar7,iVar6,iVar9);
      return;
    }
    break;
  case 4:
    bVar5 = FUN_10019450((uint *)((int)param_1 + 0x380));
    if ((CONCAT31(extraout_var_01,bVar5) != 0) && (iVar9 = FUN_10068f00((int)param_1), iVar9 == 0))
    {
      FUN_10019420((uint *)((int)param_1 + 0x380),0);
      return;
    }
    break;
  case 5:
    uVar4 = *(undefined4 *)(*(int *)((int)param_1 + 4) + 0x208);
    iVar9 = (*DAT_10121f70)(0,2);
    FUN_10094b20(this_03,uVar4,2,(&PTR_s_X_x_recharge1_wav_10112144)[iVar9],0x3f800000,0x3e4ccccd,0,
                 100);
    return;
  case 6:
    bVar5 = FUN_10019450((uint *)((int)param_1 + 0x160));
    if (CONCAT31(extraout_var_02,bVar5) != 0) {
      FUN_10008450(param_1,2,&fStack_38,auStack_2c);
      pvVar8 = (void *)FUN_1001a1f0(0x10112448,&fStack_38,
                                    (undefined4 *)(*(int *)((int)param_1 + 4) + 0x50),
                                    *(undefined4 *)(*(int *)((int)param_1 + 4) + 0x208));
      iVar9 = *(int *)((int)param_1 + 4);
      iVar6 = *(int *)((int)pvVar8 + 4);
      fVar1 = *(float *)(iVar9 + 0xc);
      fVar2 = *(float *)(iVar9 + 0x10);
      *(float *)(iVar6 + 0x20) = *(float *)(iVar9 + 8) - fStack_38;
      *(float *)(iVar6 + 0x24) = fVar1 - fStack_34;
      *(float *)(iVar6 + 0x28) = fVar2 - fStack_30;
      iVar9 = FUN_10019410((uint *)((int)param_1 + 0x160));
      FUN_10069ce0(pvVar8,iVar9);
    }
  }
  return;
}

