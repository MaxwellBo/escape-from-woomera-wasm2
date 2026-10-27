
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FUN_100204d0(void *this,uint param_1,float param_2,float param_3,float param_4,float param_5,
            float param_6,float param_7,float param_8,float param_9,undefined4 param_10,
            float param_11,float param_12,int param_13,int param_14,float param_15)

{
  int iVar1;
  int *piVar2;
  float fVar3;
  bool bVar4;
  float10 fVar5;
  float10 fVar6;
  longlong lVar7;
  float fVar8;
  undefined4 uVar9;
  float *pfVar10;
  undefined4 *puVar11;
  float *pfVar12;
  int iVar13;
  float *pfVar14;
  float fVar15;
  float fVar16;
  float fStack_f8;
  float fStack_f4;
  float fStack_f0;
  float fStack_ec;
  float fStack_e8;
  float fStack_e4;
  float fStack_e0;
  float fStack_dc;
  float fStack_d8;
  int *local_d4;
  uint local_d0;
  float fStack_cc;
  float fStack_c8;
  float fStack_c4;
  float fStack_c0;
  float afStack_bc [4];
  float fStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  int iStack_8c;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  float local_78;
  float local_74;
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  float fStack_5c;
  float fStack_58;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  float fStack_40;
  float fStack_38;
  float fStack_34;
  float fStack_2c;
  float fStack_28;
  float fStack_20;
  float fStack_1c;
  float fStack_14;
  float fStack_10;
  float fStack_c;
  float fStack_8;
  float fStack_4;
  
  local_74 = *(float *)(DAT_10122044 + 0x44);
  local_78 = *(float *)(DAT_10122044 + 0x40);
  local_6c = *(float *)(DAT_10122044 + 0x34);
  local_70 = *(float *)(DAT_10122044 + 0x48);
  local_68 = *(float *)(DAT_10122044 + 0x38);
  local_64 = *(float *)(DAT_10122044 + 0x3c);
  fVar3 = param_15;
  if (param_15 == 0.0) {
    fVar3 = *(float *)((int)this + 4);
  }
  local_d4 = this;
  FUN_100b2bd0();
  DAT_10131d00 = 0x1002;
  local_d0 = 1;
  fVar16 = param_12;
  if (param_1 != 0) {
    do {
      do {
        fVar5 = (float10)(*DAT_10121f74)();
        fVar6 = (float10)(*DAT_10121f74)();
        fVar15 = (float)(fVar6 + (float10)(float)fVar5);
        fVar5 = (float10)(*DAT_10121f74)();
        fStack_c0 = (float)fVar5;
        fVar8 = 0.5;
        fVar5 = (float10)(*DAT_10121f74)(0xbf000000);
        fVar5 = fVar5 + (float10)fStack_c0;
      } while ((float10)_DAT_100dd618 < (float10)fVar15 * (float10)fVar15 + fVar5 * fVar5);
      fVar5 = fVar5 * (float10)param_9;
      FUN_10001d60(&fStack_c,(float)(fVar5 * (float10)local_6c),(float)((float10)local_68 * fVar5),
                   (float)((float10)local_64 * fVar5));
      fVar15 = param_8 * fVar15;
      FUN_10001d60(&fStack_48,fVar15 * local_78,local_74 * fVar15,local_70 * fVar15);
      fStack_5c = param_6 + fStack_44;
      fStack_58 = param_7 + fStack_40;
      fStack_f8 = param_5 + fStack_48 + fStack_c;
      fStack_f4 = fStack_8 + fStack_5c;
      fStack_f0 = fStack_4 + fStack_58;
      fStack_14 = fStack_f4 * param_11;
      fStack_10 = fStack_f0 * param_11;
      fStack_ec = fStack_f8 * param_11 + param_2;
      fStack_e8 = param_3 + fStack_14;
      fStack_e4 = param_4 + fStack_10;
      pfVar12 = &fStack_ec;
      pfVar14 = *(float **)(*(int *)((int)this + 4) + 0x208);
      iVar13 = 0;
      fStack_cc = fStack_ec;
      fStack_c8 = fStack_e8;
      fStack_c4 = fStack_e4;
      FUN_100afc60(&param_2,pfVar12,0,pfVar14,afStack_bc);
      bVar4 = false;
      if ((param_13 != 0) &&
         (iVar1 = DAT_10121ce8 % param_13, DAT_10121ce8 = DAT_10121ce8 + 1, iVar1 == 0)) {
        iVar13 = (**(code **)(*(int *)this + 0xcc))();
        if (iVar13 == 0) {
          fStack_e0 = param_2;
          fStack_dc = param_3;
          fStack_d8 = param_4;
        }
        else {
          fStack_20 = *(float *)(DAT_10122044 + 0x2c) * _DAT_100dd634;
          fStack_1c = *(float *)(DAT_10122044 + 0x30) * _DAT_100dd634;
          fStack_50 = *(float *)(DAT_10122044 + 0x44) + *(float *)(DAT_10122044 + 0x44);
          fStack_4c = *(float *)(DAT_10122044 + 0x48) + *(float *)(DAT_10122044 + 0x48);
          fStack_2c = param_3;
          fStack_28 = param_4 - _DAT_100de4fc;
          fStack_38 = param_3 + fStack_50;
          fStack_34 = fStack_28 + fStack_4c;
          fStack_e0 = *(float *)(DAT_10122044 + 0x40) + *(float *)(DAT_10122044 + 0x40) + param_2 +
                      *(float *)(DAT_10122044 + 0x28) * _DAT_100dd634;
          fStack_dc = fStack_38 + fStack_20;
          fStack_7c = fStack_34 + fStack_1c;
          fStack_d8 = fStack_7c;
          fStack_84 = fStack_e0;
          fStack_80 = fStack_dc;
        }
        bVar4 = param_13 != 1;
        pfVar14 = &fStack_e0;
        iVar13 = 0x17;
        pfVar12 = (float *)0x5;
        (*DAT_10121ec0)();
        (*DAT_10121ec8)();
        (*DAT_10121edc)();
        fVar8 = fStack_dc;
        (*DAT_10121edc)();
        (*DAT_10121edc)(fStack_d8);
        (*DAT_10121edc)(uStack_a8);
        (*DAT_10121edc)(uStack_a4);
        (*DAT_10121edc)(uStack_a0);
        (*DAT_10121ec4)();
      }
      if (fStack_ac == (float)_DAT_100dd628) goto LAB_10020b18;
      iVar1 = iStack_8c;
      if ((iStack_8c == 0) && (iVar1 = (*DAT_10121f1c)(), iVar1 == 0)) {
        piVar2 = (int *)0x0;
      }
      else {
        piVar2 = *(int **)(iVar1 + 0x7c);
      }
      fVar8 = fVar3;
      if (param_14 != 0) {
        iVar1 = *piVar2;
        pfVar14 = afStack_bc;
        FUN_10003850(&stack0xfffffee0,&fStack_f8);
        (**(code **)(iVar1 + 0x5c))();
        pfVar10 = &fStack_ec;
        uVar9 = 0x100209b1;
        fVar15 = fVar16;
        FUN_10003850(&stack0xfffffee4,pfVar10);
        FUN_10003850(&stack0xfffffed8,&param_2);
        FUN_10094fd0((int)afStack_bc,fVar8,uVar9,pfVar10,pfVar12,iVar13,pfVar14,fVar15);
        FUN_100b2ce0((int)afStack_bc,(int)fVar16);
        goto LAB_10020b18;
      }
      switch(fVar16) {
      case 0.0:
        iVar1 = *piVar2;
        pfVar14 = afStack_bc;
        FUN_10003850(&stack0xfffffee0,&fStack_f8);
        (**(code **)(iVar1 + 0x5c))();
        fVar15 = 0.0;
        pfVar10 = &fStack_ec;
        uVar9 = 0x10020bc5;
        FUN_10003850(&stack0xfffffee4,pfVar10);
        FUN_10003850(&stack0xfffffed8,&param_2);
        FUN_10094fd0((int)afStack_bc,fVar8,uVar9,pfVar10,pfVar12,iVar13,pfVar14,fVar15);
        if (iStack_8c != 0) {
          pfVar14 = (float *)0x10020bfc;
          iVar1 = (*DAT_10121f20)();
          if (iVar1 != 0) {
            iVar1 = iStack_8c;
            if (iStack_8c != 0) {
              iVar1 = iStack_8c + 0x80;
            }
            if (*(int *)(iVar1 + 0x148) != 0) {
              pfVar14 = (float *)0x0;
              iVar13 = (*DAT_10121f70)();
              iVar13 = iVar13 + 0x19;
              pfVar12 = afStack_bc;
              FUN_100b0450((int)pfVar12,iVar13);
            }
          }
        }
        break;
      default:
        iVar1 = *piVar2;
        pfVar14 = afStack_bc;
        FUN_10003850(&stack0xfffffee0,&fStack_f8);
        (**(code **)(iVar1 + 0x5c))();
        pfVar10 = &fStack_ec;
        uVar9 = 0x10020c7a;
        fVar15 = fVar16;
        FUN_10003850(&stack0xfffffee4,pfVar10);
        FUN_10003850(&stack0xfffffed8,&param_2);
        FUN_10094fd0((int)afStack_bc,fVar8,uVar9,pfVar10,pfVar12,iVar13,pfVar14,fVar15);
        fVar15 = fVar16;
        goto LAB_10020c99;
      case 4.2039e-45:
        iVar1 = *piVar2;
        pfVar14 = afStack_bc;
        FUN_10003850(&stack0xfffffee0,&fStack_f8);
        (**(code **)(iVar1 + 0x5c))();
        fVar16 = param_12;
        if (!bVar4) {
          fVar16 = 4.2039e-45;
          pfVar10 = &fStack_ec;
          uVar9 = 0x10020ae4;
          FUN_10003850(&stack0xfffffee4,pfVar10);
          FUN_10003850(&stack0xfffffed8,&param_2);
          FUN_10094fd0((int)afStack_bc,fVar8,uVar9,pfVar10,pfVar12,iVar13,pfVar14,fVar16);
          iVar1 = 3;
LAB_10020b04:
          FUN_100b2ce0((int)afStack_bc,iVar1);
          fVar16 = param_12;
        }
        break;
      case 9.80909e-45:
        iVar1 = *piVar2;
        pfVar14 = afStack_bc;
        FUN_10003850(&stack0xfffffee0,&fStack_f8);
        (**(code **)(iVar1 + 0x5c))();
        fVar15 = 9.80909e-45;
        pfVar10 = &fStack_ec;
        uVar9 = 0x10020a27;
        FUN_10003850(&stack0xfffffee4,pfVar10);
        FUN_10003850(&stack0xfffffed8,&param_2);
        FUN_10094fd0((int)afStack_bc,fVar8,uVar9,pfVar10,pfVar12,iVar13,pfVar14,fVar15);
        fVar15 = 9.80909e-45;
LAB_10020c99:
        FUN_100b2ce0((int)afStack_bc,(int)fVar15);
        break;
      case 1.12104e-44:
        iVar1 = *piVar2;
        pfVar14 = afStack_bc;
        FUN_10003850(&stack0xfffffee0,&fStack_f8);
        (**(code **)(iVar1 + 0x5c))();
        fVar16 = param_12;
        if (!bVar4) {
          fVar16 = 1.12104e-44;
          pfVar10 = &fStack_ec;
          uVar9 = 0x10020a89;
          FUN_10003850(&stack0xfffffee4,pfVar10);
          FUN_10003850(&stack0xfffffed8,&param_2);
          FUN_10094fd0((int)afStack_bc,fVar8,uVar9,pfVar10,pfVar12,iVar13,pfVar14,fVar16);
          iVar1 = 8;
          goto LAB_10020b04;
        }
      }
LAB_10020b18:
      lVar7 = __ftol();
      iVar1 = (int)lVar7;
      puVar11 = &uStack_a8;
      uVar9 = 0x10020b3e;
      FUN_10003850(&stack0xfffffee4,puVar11);
      FUN_10003850(&stack0xfffffed8,&param_2);
      FUN_100b0dd0(fVar8,uVar9,(float)puVar11,pfVar12,iVar13,(float)pfVar14,iVar1);
      local_d0 = local_d0 + 1;
      this = local_d4;
    } while (local_d0 <= param_1);
  }
  FUN_100b2bf0(*(int *)((int)this + 4),fVar3);
  return;
}

