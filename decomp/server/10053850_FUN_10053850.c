
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_10053850(void *param_1,int *param_2)

{
  uint *puVar1;
  bool bVar2;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  void *this;
  void *this_00;
  undefined4 *puVar6;
  void *this_01;
  void *this_02;
  float10 fVar7;
  longlong lVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  undefined1 auStack_38 [4];
  int iStack_34;
  
  switch(*param_2) {
  case 1:
    break;
  case 2:
    uVar12 = 4;
    lVar8 = __ftol();
    piVar4 = FUN_1001fef0(param_1,70.0,(int)lVar8,uVar12);
    if (piVar4 == (int *)0x0) {
      uVar12 = *(undefined4 *)((int)param_1 + 0x36c);
      uVar11 = 0;
      uVar5 = *(undefined4 *)(*(int *)((int)param_1 + 4) + 0x208);
      uVar10 = 0x3f4ccccd;
      uVar9 = 0x3f800000;
      iVar3 = (*DAT_10121f70)(0,1);
      FUN_10094b20((&PTR_s_zombie_claw_miss1_wav_1010f8a4)[iVar3],uVar5,1,
                   (&PTR_s_zombie_claw_miss1_wav_1010f8a4)[iVar3],uVar9,uVar10,uVar11,uVar12);
      return;
    }
    if ((*(byte *)(piVar4[1] + 0x1a4) & 0x28) != 0) {
      *(undefined4 *)(piVar4[1] + 0x70) = 0xc1900000;
      *(undefined4 *)(piVar4[1] + 0x68) = 0x40a00000;
    }
    uVar12 = *(undefined4 *)((int)param_1 + 0x36c);
    uVar11 = 0;
    uVar5 = *(undefined4 *)(*(int *)((int)param_1 + 4) + 0x208);
    uVar10 = 0x3f4ccccd;
    uVar9 = 0x3f800000;
    iVar3 = (*DAT_10121f70)(0,2);
    FUN_10094b20((&PTR_s_zombie_claw_strike1_wav_1010f898)[iVar3],uVar5,1,
                 (&PTR_s_zombie_claw_strike1_wav_1010f898)[iVar3],uVar9,uVar10,uVar11,uVar12);
    return;
  case 3:
    if (DAT_10121df0 == 3) {
      *(undefined4 *)(*(int *)((int)param_1 + 4) + 0x138) = 0x3fc00000;
    }
    FUN_100af210((float *)(*(int *)((int)param_1 + 4) + 0x50));
    if (*(int *)((int)param_1 + 0x364) == 0) {
      iVar3 = *(int *)((int)param_1 + 4);
      fStack_3c = DAT_10122044[0xc] + DAT_10122044[0xc] + *(float *)(iVar3 + 0x10);
      fStack_40 = DAT_10122044[0xb] + DAT_10122044[0xb] + *(float *)(iVar3 + 0xc);
      fStack_44 = DAT_10122044[10] + DAT_10122044[10] + *(float *)(iVar3 + 8);
      (*DAT_10121ec0)(4,0x17,&fStack_44,0);
      (*DAT_10121ec8)(0x1b);
      (*DAT_10121edc)(fStack_44);
      (*DAT_10121edc)(fStack_40);
      (*DAT_10121edc)(fStack_3c);
      (*DAT_10121ec8)(0xc);
      (*DAT_10121ec8)(0xff);
      (*DAT_10121ec8)(0xb4);
      (*DAT_10121ec8)(0x60);
      lVar8 = __ftol();
      (*DAT_10121ec8)((int)lVar8);
      (*DAT_10121ec8)(0);
      (*DAT_10121ec4)();
    }
    puVar1 = (uint *)((int)param_1 + 0x370);
    bVar2 = FUN_10019450(puVar1);
    if (CONCAT31(extraout_var,bVar2) == 0) {
      FUN_10054250(param_1,-1);
      FUN_10054250(param_1,1);
      FUN_10054680((int)param_1);
    }
    else {
      piVar4 = (int *)FUN_10019410(puVar1);
      FUN_100546f0(param_1,0xffffffff,piVar4);
      piVar4 = (int *)FUN_10019410(puVar1);
      FUN_100546f0(param_1,1,piVar4);
    }
    FUN_10094b20(*(void **)((int)param_1 + 4),
                 *(undefined4 *)((int)*(void **)((int)param_1 + 4) + 0x208),1,
                 s_debris_zap4_wav_101064c8,0x3f800000,0x3f4ccccd,0,
                 (*(int *)((int)param_1 + 0x364) + 10) * 10);
    *(int *)(*(int *)((int)param_1 + 4) + 0x110) = *(int *)((int)param_1 + 0x364) / 2;
    return;
  case 4:
    FUN_10054be0((int)param_1);
    puVar1 = (uint *)((int)param_1 + 0x370);
    bVar2 = FUN_10019450(puVar1);
    if (CONCAT31(extraout_var_00,bVar2) != 0) {
      iVar3 = FUN_10019460(puVar1);
      iVar3 = *(int *)(iVar3 + 4);
      fStack_3c = *(float *)(iVar3 + 0x10) + _DAT_100e9cf4;
      fStack_40 = *(float *)(iVar3 + 0xc);
      fStack_44 = *(float *)(iVar3 + 8);
      iVar3 = FUN_10019460(puVar1);
      FUN_100afc90(&fStack_44,&fStack_44,0,1,*(undefined4 *)(*(int *)(iVar3 + 4) + 0x208),auStack_38
                  );
      if (iStack_34 == 0) {
        uVar12 = 0;
        iVar3 = FUN_10019460(puVar1);
        puVar6 = (undefined4 *)(*(int *)(iVar3 + 4) + 0x50);
        iVar3 = FUN_10019460(puVar1);
        piVar4 = (int *)FUN_1001a1f0(0x1010f98c,(undefined4 *)(*(int *)(iVar3 + 4) + 8),puVar6,
                                     uVar12);
        (**(code **)(*piVar4 + 0x74))();
        *(uint *)(piVar4[1] + 0x1a0) = *(uint *)(piVar4[1] + 0x1a0) | 1;
        FUN_100546f0(param_1,0xffffffff,piVar4);
        FUN_100546f0(param_1,1,piVar4);
        iVar3 = FUN_10019410(puVar1);
        FUN_100b0ef0(iVar3);
        uVar12 = *(undefined4 *)(*(int *)((int)param_1 + 4) + 0x208);
        uVar5 = (*DAT_10121f70)(0x82,0xa0);
        FUN_10094b20(this_01,uVar12,1,s_hassault_hw_shoot1_wav_10101aac,0x3f800000,0x3f4ccccd,0,
                     uVar5);
        return;
      }
    }
    FUN_100b2bd0();
    FUN_100af210((float *)(*(int *)((int)param_1 + 4) + 0x50));
    FUN_10054830(param_1,-1);
    FUN_10054830(param_1,1);
    uVar12 = *(undefined4 *)(*(int *)((int)param_1 + 4) + 0x208);
    uVar5 = (*DAT_10121f70)(0x82,0xa0);
    FUN_10094b20(this_02,uVar12,1,s_hassault_hw_shoot1_wav_10101aac,0x3f800000,0x3f4ccccd,0,uVar5);
    FUN_100b2bf0(*(undefined4 *)((int)param_1 + 4),*(undefined4 *)((int)param_1 + 4));
    fVar7 = (float10)(*DAT_10121f74)(0x3f000000,0x40800000);
    *(float *)((int)param_1 + 0x368) = (float)(fVar7 + (float10)*DAT_10122044);
    return;
  case 5:
    FUN_10054be0((int)param_1);
    return;
  default:
    FUN_10060620(param_1,param_2);
    return;
  }
  uVar12 = 4;
  lVar8 = __ftol();
  piVar4 = FUN_1001fef0(param_1,70.0,(int)lVar8,uVar12);
  if (piVar4 == (int *)0x0) {
    uVar12 = *(undefined4 *)((int)param_1 + 0x36c);
    uVar11 = 0;
    uVar5 = *(undefined4 *)(*(int *)((int)param_1 + 4) + 0x208);
    uVar10 = 0x3f4ccccd;
    uVar9 = 0x3f800000;
    iVar3 = (*DAT_10121f70)(0,1);
    FUN_10094b20(this_00,uVar5,1,(&PTR_s_zombie_claw_miss1_wav_1010f8a4)[iVar3],uVar9,uVar10,uVar11,
                 uVar12);
    return;
  }
  if ((*(byte *)(piVar4[1] + 0x1a4) & 0x28) != 0) {
    *(undefined4 *)(piVar4[1] + 0x70) = 0xc1900000;
    *(undefined4 *)(piVar4[1] + 0x68) = 0x40a00000;
  }
  uVar12 = *(undefined4 *)((int)param_1 + 0x36c);
  uVar11 = 0;
  uVar5 = *(undefined4 *)(*(int *)((int)param_1 + 4) + 0x208);
  uVar10 = 0x3f4ccccd;
  uVar9 = 0x3f800000;
  iVar3 = (*DAT_10121f70)(0,2);
  FUN_10094b20(this,uVar5,1,(&PTR_s_zombie_claw_strike1_wav_1010f898)[iVar3],uVar9,uVar10,uVar11,
               uVar12);
  return;
}

