
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall
FUN_100204aa(int *param_1,undefined4 param_2,uint param_3,float param_4,float param_5,float param_6,
            float param_7,float param_8,float param_9,float param_10,float param_11,
            undefined4 param_12,float param_13,float param_14,int param_15,int param_16,
            float param_17)

{
  char in_AL;
  byte bVar1;
  int iVar2;
  undefined4 unaff_EBX;
  int *piVar3;
  float fVar4;
  char in_CF;
  bool bVar5;
  float10 fVar6;
  float10 fVar7;
  longlong lVar8;
  float fVar9;
  undefined4 uVar10;
  float *pfVar11;
  undefined4 *puVar12;
  float *pfVar13;
  int iVar14;
  float *pfVar15;
  float fVar16;
  float fVar17;
  float fStack_f8;
  float fStack_f4;
  float fStack_f0;
  float fStack_ec;
  float fStack_e8;
  float fStack_e4;
  float fStack_e0;
  float fStack_dc;
  float fStack_d8;
  int *piStack_d4;
  uint uStack_d0;
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
  float fStack_78;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
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
  
  bVar1 = (in_AL + -4) - in_CF;
  cRam35100204 = cRam35100204 + (char)((uint)param_1 >> 8) + (0xfd < bVar1);
  cRam3d100204 = cRam3d100204 + (char)((uint)param_2 >> 8) + (0xfd < (byte)(bVar1 + 2));
  cRam90100204 = cRam90100204 + (char)((uint)unaff_EBX >> 8) + (0xfd < (byte)(bVar1 + 4));
  fStack_74 = *(float *)(DAT_10122044 + 0x44);
  fStack_78 = *(float *)(DAT_10122044 + 0x40);
  fStack_6c = *(float *)(DAT_10122044 + 0x34);
  fStack_70 = *(float *)(DAT_10122044 + 0x48);
  fStack_68 = *(float *)(DAT_10122044 + 0x38);
  fStack_64 = *(float *)(DAT_10122044 + 0x3c);
  fVar4 = param_17;
  if (param_17 == 0.0) {
    fVar4 = (float)param_1[1];
  }
  piStack_d4 = param_1;
  FUN_100b2bd0();
  DAT_10131d00 = 0x1002;
  uStack_d0 = 1;
  fVar17 = param_14;
  if (param_3 != 0) {
    do {
      do {
        fVar6 = (float10)(*DAT_10121f74)();
        fVar7 = (float10)(*DAT_10121f74)();
        fVar16 = (float)(fVar7 + (float10)(float)fVar6);
        fVar6 = (float10)(*DAT_10121f74)();
        fStack_c0 = (float)fVar6;
        fVar9 = 0.5;
        fVar6 = (float10)(*DAT_10121f74)(0xbf000000);
        fVar6 = fVar6 + (float10)fStack_c0;
      } while ((float10)_DAT_100dd618 < (float10)fVar16 * (float10)fVar16 + fVar6 * fVar6);
      fVar6 = fVar6 * (float10)param_11;
      FUN_10001d60(&fStack_c,(float)(fVar6 * (float10)fStack_6c),(float)((float10)fStack_68 * fVar6)
                   ,(float)((float10)fStack_64 * fVar6));
      fVar16 = param_10 * fVar16;
      FUN_10001d60(&fStack_48,fVar16 * fStack_78,fStack_74 * fVar16,fStack_70 * fVar16);
      fStack_5c = param_8 + fStack_44;
      fStack_58 = param_9 + fStack_40;
      fStack_f8 = param_7 + fStack_48 + fStack_c;
      fStack_f4 = fStack_8 + fStack_5c;
      fStack_f0 = fStack_4 + fStack_58;
      fStack_14 = fStack_f4 * param_13;
      fStack_10 = fStack_f0 * param_13;
      fStack_ec = fStack_f8 * param_13 + param_4;
      fStack_e8 = param_5 + fStack_14;
      fStack_e4 = param_6 + fStack_10;
      pfVar13 = &fStack_ec;
      pfVar15 = *(float **)(param_1[1] + 0x208);
      iVar14 = 0;
      fStack_cc = fStack_ec;
      fStack_c8 = fStack_e8;
      fStack_c4 = fStack_e4;
      FUN_100afc60(&param_4,pfVar13,0,pfVar15,afStack_bc);
      bVar5 = false;
      if ((param_15 != 0) &&
         (iVar2 = DAT_10121ce8 % param_15, DAT_10121ce8 = DAT_10121ce8 + 1, iVar2 == 0)) {
        iVar14 = (**(code **)(*param_1 + 0xcc))();
        if (iVar14 == 0) {
          fStack_e0 = param_4;
          fStack_dc = param_5;
          fStack_d8 = param_6;
        }
        else {
          fStack_20 = *(float *)(DAT_10122044 + 0x2c) * _DAT_100dd634;
          fStack_1c = *(float *)(DAT_10122044 + 0x30) * _DAT_100dd634;
          fStack_50 = *(float *)(DAT_10122044 + 0x44) + *(float *)(DAT_10122044 + 0x44);
          fStack_4c = *(float *)(DAT_10122044 + 0x48) + *(float *)(DAT_10122044 + 0x48);
          fStack_2c = param_5;
          fStack_28 = param_6 - _DAT_100de4fc;
          fStack_38 = param_5 + fStack_50;
          fStack_34 = fStack_28 + fStack_4c;
          fStack_e0 = *(float *)(DAT_10122044 + 0x40) + *(float *)(DAT_10122044 + 0x40) + param_4 +
                      *(float *)(DAT_10122044 + 0x28) * _DAT_100dd634;
          fStack_dc = fStack_38 + fStack_20;
          fStack_7c = fStack_34 + fStack_1c;
          fStack_d8 = fStack_7c;
          fStack_84 = fStack_e0;
          fStack_80 = fStack_dc;
        }
        bVar5 = param_15 != 1;
        pfVar15 = &fStack_e0;
        iVar14 = 0x17;
        pfVar13 = (float *)0x5;
        (*DAT_10121ec0)();
        (*DAT_10121ec8)();
        (*DAT_10121edc)();
        fVar9 = fStack_dc;
        (*DAT_10121edc)();
        (*DAT_10121edc)(fStack_d8);
        (*DAT_10121edc)(uStack_a8);
        (*DAT_10121edc)(uStack_a4);
        (*DAT_10121edc)(uStack_a0);
        (*DAT_10121ec4)();
      }
      if (fStack_ac == (float)_DAT_100dd628) goto LAB_10020b18;
      iVar2 = iStack_8c;
      if ((iStack_8c == 0) && (iVar2 = (*DAT_10121f1c)(), iVar2 == 0)) {
        piVar3 = (int *)0x0;
      }
      else {
        piVar3 = *(int **)(iVar2 + 0x7c);
      }
      fVar9 = fVar4;
      if (param_16 != 0) {
        iVar2 = *piVar3;
        pfVar15 = afStack_bc;
        FUN_10003850(&stack0xfffffee0,&fStack_f8);
        (**(code **)(iVar2 + 0x5c))();
        pfVar11 = &fStack_ec;
        uVar10 = 0x100209b1;
        fVar16 = fVar17;
        FUN_10003850(&stack0xfffffee4,pfVar11);
        FUN_10003850(&stack0xfffffed8,&param_4);
        FUN_10094fd0((int)afStack_bc,fVar9,uVar10,pfVar11,pfVar13,iVar14,pfVar15,fVar16);
        FUN_100b2ce0((int)afStack_bc,(int)fVar17);
        goto LAB_10020b18;
      }
      switch(fVar17) {
      case 0.0:
        iVar2 = *piVar3;
        pfVar15 = afStack_bc;
        FUN_10003850(&stack0xfffffee0,&fStack_f8);
        (**(code **)(iVar2 + 0x5c))();
        fVar16 = 0.0;
        pfVar11 = &fStack_ec;
        uVar10 = 0x10020bc5;
        FUN_10003850(&stack0xfffffee4,pfVar11);
        FUN_10003850(&stack0xfffffed8,&param_4);
        FUN_10094fd0((int)afStack_bc,fVar9,uVar10,pfVar11,pfVar13,iVar14,pfVar15,fVar16);
        if (iStack_8c != 0) {
          pfVar15 = (float *)0x10020bfc;
          iVar2 = (*DAT_10121f20)();
          if (iVar2 != 0) {
            iVar2 = iStack_8c;
            if (iStack_8c != 0) {
              iVar2 = iStack_8c + 0x80;
            }
            if (*(int *)(iVar2 + 0x148) != 0) {
              pfVar15 = (float *)0x0;
              iVar14 = (*DAT_10121f70)();
              iVar14 = iVar14 + 0x19;
              pfVar13 = afStack_bc;
              FUN_100b0450((int)pfVar13,iVar14);
            }
          }
        }
        break;
      default:
        iVar2 = *piVar3;
        pfVar15 = afStack_bc;
        FUN_10003850(&stack0xfffffee0,&fStack_f8);
        (**(code **)(iVar2 + 0x5c))();
        pfVar11 = &fStack_ec;
        uVar10 = 0x10020c7a;
        fVar16 = fVar17;
        FUN_10003850(&stack0xfffffee4,pfVar11);
        FUN_10003850(&stack0xfffffed8,&param_4);
        FUN_10094fd0((int)afStack_bc,fVar9,uVar10,pfVar11,pfVar13,iVar14,pfVar15,fVar16);
        fVar16 = fVar17;
        goto LAB_10020c99;
      case 4.2039e-45:
        iVar2 = *piVar3;
        pfVar15 = afStack_bc;
        FUN_10003850(&stack0xfffffee0,&fStack_f8);
        (**(code **)(iVar2 + 0x5c))();
        fVar17 = param_14;
        if (!bVar5) {
          fVar17 = 4.2039e-45;
          pfVar11 = &fStack_ec;
          uVar10 = 0x10020ae4;
          FUN_10003850(&stack0xfffffee4,pfVar11);
          FUN_10003850(&stack0xfffffed8,&param_4);
          FUN_10094fd0((int)afStack_bc,fVar9,uVar10,pfVar11,pfVar13,iVar14,pfVar15,fVar17);
          iVar2 = 3;
LAB_10020b04:
          FUN_100b2ce0((int)afStack_bc,iVar2);
          fVar17 = param_14;
        }
        break;
      case 9.80909e-45:
        iVar2 = *piVar3;
        pfVar15 = afStack_bc;
        FUN_10003850(&stack0xfffffee0,&fStack_f8);
        (**(code **)(iVar2 + 0x5c))();
        fVar16 = 9.80909e-45;
        pfVar11 = &fStack_ec;
        uVar10 = 0x10020a27;
        FUN_10003850(&stack0xfffffee4,pfVar11);
        FUN_10003850(&stack0xfffffed8,&param_4);
        FUN_10094fd0((int)afStack_bc,fVar9,uVar10,pfVar11,pfVar13,iVar14,pfVar15,fVar16);
        fVar16 = 9.80909e-45;
LAB_10020c99:
        FUN_100b2ce0((int)afStack_bc,(int)fVar16);
        break;
      case 1.12104e-44:
        iVar2 = *piVar3;
        pfVar15 = afStack_bc;
        FUN_10003850(&stack0xfffffee0,&fStack_f8);
        (**(code **)(iVar2 + 0x5c))();
        fVar17 = param_14;
        if (!bVar5) {
          fVar17 = 1.12104e-44;
          pfVar11 = &fStack_ec;
          uVar10 = 0x10020a89;
          FUN_10003850(&stack0xfffffee4,pfVar11);
          FUN_10003850(&stack0xfffffed8,&param_4);
          FUN_10094fd0((int)afStack_bc,fVar9,uVar10,pfVar11,pfVar13,iVar14,pfVar15,fVar17);
          iVar2 = 8;
          goto LAB_10020b04;
        }
      }
LAB_10020b18:
      lVar8 = __ftol();
      iVar2 = (int)lVar8;
      puVar12 = &uStack_a8;
      uVar10 = 0x10020b3e;
      FUN_10003850(&stack0xfffffee4,puVar12);
      FUN_10003850(&stack0xfffffed8,&param_4);
      FUN_100b0dd0(fVar9,uVar10,(float)puVar12,pfVar13,iVar14,(float)pfVar15,iVar2);
      uStack_d0 = uStack_d0 + 1;
      param_1 = piStack_d4;
    } while (uStack_d0 <= param_3);
  }
  FUN_100b2bf0(param_1[1],fVar4);
  return;
}

