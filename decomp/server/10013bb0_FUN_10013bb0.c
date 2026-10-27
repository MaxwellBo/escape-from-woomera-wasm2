
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_10013bb0(void *param_1,int *param_2)

{
  byte bVar1;
  uint uVar2;
  float fVar3;
  bool bVar4;
  undefined3 extraout_var;
  byte *pbVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  undefined4 *puVar9;
  void *extraout_ECX;
  void *this;
  byte *pbVar10;
  float10 fVar11;
  float10 fVar12;
  float10 fVar13;
  longlong lVar14;
  void *pvVar15;
  char *pcVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined4 uVar20;
  float fStack_d8;
  float fStack_d4;
  float fStack_d0;
  float fStack_cc;
  float fStack_c8;
  float fStack_c4;
  float fStack_c0;
  float fStack_bc;
  float fStack_b8;
  float fStack_b0;
  float fStack_ac;
  float fStack_a8;
  float fStack_a4;
  float fStack_a0;
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  float fStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float fStack_2c;
  float fStack_28;
  float afStack_24 [3];
  undefined1 auStack_18 [12];
  float afStack_c [3];
  
  switch(*param_2) {
  case 1:
    FUN_100af200(*(int *)((int)param_1 + 4) + 0x50);
    fStack_b0 = *(float *)(DAT_10122044 + 0x38) * _DAT_100e0008;
    fStack_ac = *(float *)(DAT_10122044 + 0x3c) * _DAT_100e0008;
    fStack_2c = *(float *)(DAT_10122044 + 0x44) * _DAT_100de45c +
                *(float *)(DAT_10122044 + 0x2c) * _DAT_100e0004;
    fStack_28 = *(float *)(DAT_10122044 + 0x48) * _DAT_100de45c +
                *(float *)(DAT_10122044 + 0x30) * _DAT_100e0004;
    iVar8 = *(int *)((int)param_1 + 4);
    fStack_cc = *(float *)(DAT_10122044 + 0x40) * _DAT_100de45c +
                *(float *)(DAT_10122044 + 0x28) * _DAT_100e0004 +
                *(float *)(DAT_10122044 + 0x34) * _DAT_100e0008 + *(float *)(iVar8 + 8);
    fStack_c8 = fStack_2c + fStack_b0 + *(float *)(iVar8 + 0xc);
    fStack_c4 = fStack_28 + fStack_ac + *(float *)(iVar8 + 0x10);
    fStack_c0 = fStack_cc;
    fStack_bc = fStack_c8;
    fStack_b8 = fStack_c4;
    if (*(int *)((int)param_1 + 0x2fc) == 0) {
      iVar8 = FUN_10019460((uint *)((int)param_1 + 0x160));
      iVar8 = *(int *)(iVar8 + 4);
      iVar6 = FUN_10019460((uint *)((int)param_1 + 0x160));
      iVar6 = *(int *)(iVar6 + 4);
      fStack_b0 = *(float *)(iVar6 + 0x178) + *(float *)(iVar8 + 0xc);
      fStack_ac = *(float *)(iVar6 + 0x17c) + *(float *)(iVar8 + 0x10);
      fStack_9c = (*(float *)(iVar8 + 8) + *(float *)(iVar6 + 0x174)) - fStack_cc;
      fStack_98 = fStack_b0 - fStack_c8;
      fStack_94 = fStack_ac - fStack_c4;
      fVar11 = FUN_1000a9b0(&fStack_9c);
      if (fVar11 == (float10)_DAT_100dd5f8) {
        fStack_a8 = 0.0;
        fStack_a4 = 0.0;
        fStack_a0 = 1.0;
      }
      else {
        fVar11 = (float10)_DAT_100dd618 / fVar11;
        FUN_10001d60(&fStack_a8,(float)((float10)fStack_9c * fVar11),
                     (float)((float10)fStack_98 * fVar11),(float)((float10)fStack_94 * fVar11));
      }
      fStack_d8 = fStack_a8;
      fStack_d4 = fStack_a4;
      fStack_d0 = fStack_a0;
      goto LAB_10013f20;
    }
    bVar4 = FUN_10019450((uint *)((int)param_1 + 0x168));
    if ((CONCAT31(extraout_var,bVar4) != 0) &&
       (iVar8 = *(int *)((int)param_1 + 0x2fc), *(int *)(iVar8 + 0x328) == 1)) {
      if (*(int *)(iVar8 + 0x324) == 5) {
LAB_10013d85:
        iVar8 = FUN_10019460((uint *)((int)param_1 + 0x168));
        iVar8 = *(int *)(iVar8 + 4);
        fVar17 = *(float *)(iVar8 + 8) - fStack_cc;
        fVar18 = *(float *)(iVar8 + 0xc) - fStack_c8;
        fVar19 = *(float *)(iVar8 + 0x10) - fStack_c4;
        fVar3 = SQRT(fVar18 * fVar18 + fVar19 * fVar19 + fVar17 * fVar17);
        if (fVar3 == _DAT_100dd5f8) {
          fVar19 = 1.0;
          fVar18 = 0.0;
          fVar17 = 0.0;
        }
        else {
          fVar3 = _DAT_100dd618 / fVar3;
          fVar19 = fVar19 * fVar3;
          fVar18 = fVar18 * fVar3;
          fVar17 = fVar17 * fVar3;
        }
        FUN_10001d60(&fStack_90,fVar17,fVar18,fVar19);
        fStack_d8 = fStack_90;
        fStack_d4 = fStack_8c;
        fStack_d0 = fStack_88;
        goto LAB_10013f20;
      }
      if (*(int *)(iVar8 + 0x324) != 0) {
        pbVar10 = (byte *)(*(int *)(iVar8 + 0x31c) + *(int *)(DAT_10122044 + 0x98));
        pbVar5 = (byte *)(*(int *)(iVar8 + 0x318) + *(int *)(DAT_10122044 + 0x98));
        do {
          bVar1 = *pbVar5;
          bVar4 = bVar1 < *pbVar10;
          if (bVar1 != *pbVar10) {
LAB_10013d78:
            iVar8 = (1 - (uint)bVar4) - (uint)(bVar4 != 0);
            goto LAB_10013d7d;
          }
          if (bVar1 == 0) break;
          bVar1 = pbVar5[1];
          bVar4 = bVar1 < pbVar10[1];
          if (bVar1 != pbVar10[1]) goto LAB_10013d78;
          pbVar5 = pbVar5 + 2;
          pbVar10 = pbVar10 + 2;
        } while (bVar1 != 0);
        iVar8 = 0;
LAB_10013d7d:
        if (iVar8 != 0) goto LAB_10013d85;
      }
    }
    fStack_d8 = *(float *)(DAT_10122044 + 0x28);
    fStack_d4 = *(float *)(DAT_10122044 + 0x2c);
    fStack_d0 = *(float *)(DAT_10122044 + 0x30);
LAB_10013f20:
    fVar11 = (float10)(*DAT_10121f74)();
    fVar12 = (float10)(*DAT_10121f74)();
    fVar13 = (float10)(*DAT_10121f74)();
    FUN_10014820((int)param_1);
    (*DAT_10121ec0)();
    (*DAT_10121ec8)();
    (*DAT_10121edc)();
    (*DAT_10121edc)(fStack_c8);
    (*DAT_10121edc)(fStack_c4);
    (*DAT_10121edc)((float)(fVar11 + (float10)fStack_d8));
    (*DAT_10121edc)((float)(fVar12 + (float10)fStack_d4));
    (*DAT_10121edc)((float)(fVar13 + (float10)fStack_d0));
    (*DAT_10121ed0)(DAT_10121ccc);
    (*DAT_10121ec8)(0xf);
    (*DAT_10121ec8)(0xd2);
    (*DAT_10121ec8)(0x19);
    (*DAT_10121ec4)();
    FUN_10003850(&stack0xffffff00,&fStack_cc);
    FUN_10013090(*(int *)((int)param_1 + 4));
    return;
  case 2:
    uVar20 = 4;
    lVar14 = __ftol();
    piVar7 = FUN_1001fef0(param_1,70.0,(int)lVar14,uVar20);
    if (piVar7 != (int *)0x0) {
      fStack_b0 = *(float *)(DAT_10122044 + 0x2c) * _DAT_100dd61c;
      fStack_ac = *(float *)(DAT_10122044 + 0x30) * _DAT_100dd61c;
      iVar8 = piVar7[1];
      fStack_c0 = *(float *)(iVar8 + 0x20) - *(float *)(DAT_10122044 + 0x28) * _DAT_100dd61c;
      fStack_bc = *(float *)(iVar8 + 0x24) - fStack_b0;
      fStack_b8 = *(float *)(iVar8 + 0x28) - fStack_ac;
      *(float *)(iVar8 + 0x20) = fStack_c0;
      *(float *)(iVar8 + 0x24) = fStack_bc;
      *(float *)(iVar8 + 0x28) = fStack_b8;
      FUN_10001d60(&fStack_84,*(float *)(DAT_10122044 + 0x34) * _DAT_100dd61c,
                   *(float *)(DAT_10122044 + 0x38) * _DAT_100dd61c,
                   *(float *)(DAT_10122044 + 0x3c) * _DAT_100dd61c);
      iVar8 = piVar7[1];
      FUN_10001d60(&uStack_60,fStack_84 + *(float *)(iVar8 + 0x20),
                   fStack_80 + *(float *)(iVar8 + 0x24),fStack_7c + *(float *)(iVar8 + 0x28));
      iVar8 = piVar7[1];
      *(undefined4 *)(iVar8 + 0x20) = uStack_60;
      *(undefined4 *)(iVar8 + 0x24) = uStack_5c;
      *(undefined4 *)(iVar8 + 0x28) = uStack_58;
      return;
    }
    break;
  case 3:
    *(undefined4 *)(*(int *)((int)param_1 + 4) + 0x110) = 1;
    return;
  case 4:
    uVar20 = 0x2080;
    lVar14 = __ftol();
    piVar7 = FUN_1001fef0(param_1,70.0,(int)lVar14,uVar20);
    if (piVar7 != (int *)0x0) {
      *(undefined4 *)(piVar7[1] + 0x70) = 0xc1a00000;
      *(undefined4 *)(piVar7[1] + 0x68) = 0x41a00000;
      FUN_10001d60(&fStack_3c,*(float *)(DAT_10122044 + 0x40) * _DAT_100de484,
                   *(float *)(DAT_10122044 + 0x44) * _DAT_100de484,
                   *(float *)(DAT_10122044 + 0x48) * _DAT_100de484);
      iVar8 = piVar7[1];
      FUN_10001d60(&uStack_48,fStack_3c + *(float *)(iVar8 + 0x20),
                   fStack_38 + *(float *)(iVar8 + 0x24),fStack_34 + *(float *)(iVar8 + 0x28));
      iVar8 = piVar7[1];
      *(undefined4 *)(iVar8 + 0x20) = uStack_48;
      *(undefined4 *)(iVar8 + 0x24) = uStack_44;
      *(undefined4 *)(iVar8 + 0x28) = uStack_40;
      FUN_10001d60(&fStack_78,*(float *)(DAT_10122044 + 0x34) * _DAT_100dd61c,
                   *(float *)(DAT_10122044 + 0x38) * _DAT_100dd61c,
                   *(float *)(DAT_10122044 + 0x3c) * _DAT_100dd61c);
      iVar8 = piVar7[1];
      FUN_10001d60(&uStack_6c,fStack_78 + *(float *)(iVar8 + 0x20),
                   fStack_74 + *(float *)(iVar8 + 0x24),fStack_70 + *(float *)(iVar8 + 0x28));
      iVar8 = piVar7[1];
      *(undefined4 *)(iVar8 + 0x20) = uStack_6c;
      *(undefined4 *)(iVar8 + 0x24) = uStack_68;
      *(undefined4 *)(iVar8 + 0x28) = uStack_64;
      return;
    }
    break;
  case 5:
    uVar2 = *(uint *)(*(int *)((int)param_1 + 4) + 0x1a4);
    fVar18 = *(float *)(DAT_10121dac + 0xc);
    if ((uVar2 & 0x200) != 0) {
      *(uint *)(*(int *)((int)param_1 + 4) + 0x1a4) = uVar2 - 0x200;
    }
    *(float *)(*(int *)((int)param_1 + 4) + 0x28) =
         fVar18 * (float)_DAT_100dfff8 * (float)_DAT_100dd648 +
         *(float *)(*(int *)((int)param_1 + 4) + 0x28);
    return;
  case 6:
    piVar7 = FUN_1001fef0(param_1,70.0,0,0);
    if (piVar7 == (int *)0x0) {
      return;
    }
    (*DAT_10121f74)();
    lVar14 = __ftol();
    iVar8 = (*DAT_10121f70)();
    if (iVar8 == 0) {
      pvVar15 = *(void **)(*(int *)((int)param_1 + 4) + 0x208);
      pcVar16 = s_bullchicken_bc_bite2_wav_101041fc;
      this = extraout_ECX;
LAB_100143af:
      FUN_10094b20(this,pvVar15,1,pcVar16,0x3f800000,0x3f4ccccd,0,(int)lVar14);
    }
    else if (iVar8 == 1) {
      this = *(void **)(*(int *)((int)param_1 + 4) + 0x208);
      pcVar16 = s_bullchicken_bc_bite3_wav_10104218;
      pvVar15 = this;
      goto LAB_100143af;
    }
    FUN_100af360((float *)(piVar7[1] + 8),25.0,0x3fc00000,0x3f333333,2.0);
    iVar8 = (**(code **)(*piVar7 + 0xcc))();
    if (iVar8 != 0) {
      FUN_100af200(*(int *)((int)param_1 + 4) + 0x50);
      FUN_10001d60(afStack_24,*(float *)(DAT_10122044 + 0x34) * _DAT_100ddae4,
                   *(float *)(DAT_10122044 + 0x38) * _DAT_100ddae4,
                   *(float *)(DAT_10122044 + 0x3c) * _DAT_100ddae4);
      FUN_10001d60(&fStack_54,*(float *)(DAT_10122044 + 0x28) * _DAT_100ddae4,
                   *(float *)(DAT_10122044 + 0x2c) * _DAT_100ddae4,
                   *(float *)(DAT_10122044 + 0x30) * _DAT_100ddae4);
      iVar8 = piVar7[1];
      FUN_10001d60(auStack_18,fStack_54 + *(float *)(iVar8 + 0x20),
                   fStack_50 + *(float *)(iVar8 + 0x24),fStack_4c + *(float *)(iVar8 + 0x28));
      puVar9 = (undefined4 *)FUN_1000b550(auStack_18,afStack_c,afStack_24);
      iVar8 = piVar7[1];
      *(undefined4 *)(iVar8 + 0x20) = *puVar9;
      *(undefined4 *)(iVar8 + 0x24) = puVar9[1];
      *(undefined4 *)(iVar8 + 0x28) = puVar9[2];
      return;
    }
    break;
  default:
    FUN_10060620(param_1,param_2);
  }
  return;
}

