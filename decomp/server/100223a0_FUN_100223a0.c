
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_100223a0(int *param_1,int *param_2)

{
  uint *puVar1;
  byte bVar2;
  int iVar3;
  bool bVar4;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  byte *pbVar5;
  int iVar6;
  undefined3 extraout_var_01;
  int *piVar7;
  undefined4 uVar8;
  byte *pbVar9;
  float10 fVar10;
  float10 fVar11;
  float fVar12;
  undefined1 *puVar13;
  float in_stack_fffffef0;
  float fVar14;
  int *piVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float *pfVar19;
  float fVar20;
  float fStack_e4;
  float fStack_e0;
  float fStack_dc;
  float fStack_d8;
  float fStack_d4;
  float fStack_d0;
  float fStack_cc;
  float fStack_c8;
  float fStack_c4;
  float fStack_bc;
  float fStack_b8;
  float fStack_b4;
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
  float fStack_6c;
  float fStack_68;
  float fStack_60;
  float fStack_5c;
  float fStack_54;
  float fStack_50;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  float fStack_20;
  float fStack_1c;
  undefined1 auStack_18 [12];
  float afStack_c [3];
  
  if (*DAT_10122044 < (float)param_1[0xd2]) {
    pfVar19 = &fStack_30;
    fVar17 = 2.8026e-45;
    fVar16 = 2.5665607e-29;
    FUN_10008450(param_1,2,pfVar19,auStack_18);
    if ((float)param_1[0xd1] < (float)param_1[0xd2]) {
      do {
        if (*DAT_10122044 <= (float)param_1[0xd1]) break;
        fVar20 = (float)param_1[0xd1] - *DAT_10122044;
        iVar6 = param_1[1];
        fStack_60 = fVar20 * *(float *)(iVar6 + 0x20);
        fStack_5c = fVar20 * *(float *)(iVar6 + 0x24);
        fStack_d8 = fStack_30 + fStack_60;
        fStack_d4 = fStack_2c + fStack_5c;
        fStack_d0 = fStack_28 + fVar20 * *(float *)(iVar6 + 0x28);
        if (param_1[0xbf] == 0) {
          bVar4 = FUN_10019450((uint *)(param_1 + 0x58));
          if (CONCAT31(extraout_var,bVar4) != 0) {
            if (param_1[0xbf] != 0) goto LAB_10022493;
            puVar1 = (uint *)(param_1 + 0x58);
            bVar4 = FUN_10019450(puVar1);
            if (CONCAT31(extraout_var_01,bVar4) != 0) {
              if ((*(byte *)(param_1 + 0x57) & 0x10) == 0) {
                fStack_9c = (float)param_1[0xdb] * _DAT_100e1138;
                fStack_98 = (float)param_1[0xdc] * _DAT_100e1138;
                fStack_94 = (float)param_1[0xdd] * _DAT_100e1138;
                param_1[0xdb] = (int)fStack_9c;
                param_1[0xdc] = (int)fStack_98;
                param_1[0xdd] = (int)fStack_94;
              }
              else {
                iVar6 = FUN_10019460(puVar1);
                iVar6 = *(int *)(iVar6 + 4);
                fStack_20 = *(float *)(iVar6 + 0x24) * _DAT_100dd614;
                fStack_1c = *(float *)(iVar6 + 0x28) * _DAT_100dd614;
                fStack_44 = (float)param_1[0xdc] * _DAT_100dd614;
                fStack_40 = (float)param_1[0xdd] * _DAT_100dd614;
                fStack_a8 = (float)param_1[0xdb] * _DAT_100dd614 +
                            *(float *)(iVar6 + 0x20) * _DAT_100dd614;
                fStack_a4 = fStack_44 + fStack_20;
                param_1[0xdb] = (int)fStack_a8;
                fStack_a0 = fStack_40 + fStack_1c;
                param_1[0xdc] = (int)fStack_a4;
                param_1[0xdd] = (int)fStack_a0;
              }
              piVar15 = param_1 + 0xdb;
              piVar7 = (int *)FUN_10019460(puVar1);
              fVar14 = 2.566834e-29;
              fVar20 = DAT_10126ae0;
              FUN_10003850(&stack0xfffffefc,piVar15);
              puVar13 = &stack0xfffffef0;
              fVar18 = (float)(param_1[1] + 8);
              fVar12 = 2.566841e-29;
              (**(code **)(*piVar7 + 0x104))();
              FUN_10003850(&stack0xfffffee4,&fStack_d8);
              pfVar19 = (float *)FUN_10022040(afStack_c,fVar12,(float)puVar13,fVar18,
                                              in_stack_fffffef0,fVar14,(float)piVar15,fVar16,fVar17,
                                              (float)pfVar19,fVar20);
              fStack_e4 = *pfVar19;
              fStack_e0 = pfVar19[1];
              fStack_dc = pfVar19[2];
            }
            goto LAB_100227b3;
          }
        }
        else {
LAB_10022493:
          bVar4 = FUN_10019450((uint *)(param_1 + 0x5a));
          if ((CONCAT31(extraout_var_00,bVar4) != 0) &&
             (iVar6 = param_1[0xbf], *(int *)(iVar6 + 0x328) == 1)) {
            if (*(int *)(iVar6 + 0x324) == 5) {
LAB_1002251f:
              iVar6 = FUN_10019460((uint *)(param_1 + 0x5a));
              iVar6 = *(int *)(iVar6 + 4);
              iVar3 = param_1[1];
              fVar16 = *(float *)(iVar6 + 8) - *(float *)(iVar3 + 8);
              fStack_bc = *(float *)(iVar6 + 0xc) - *(float *)(iVar3 + 0xc);
              fStack_b8 = *(float *)(iVar6 + 0x10) - *(float *)(iVar3 + 0x10);
              fVar17 = SQRT(fVar16 * fVar16 + fStack_bc * fStack_bc + fStack_b8 * fStack_b8);
              if (fVar17 == _DAT_100dd5f8) {
                fVar20 = 1.0;
                fVar18 = 0.0;
                fVar17 = 0.0;
              }
              else {
                fVar17 = _DAT_100dd618 / fVar17;
                fVar20 = fStack_b8 * fVar17;
                fVar18 = fStack_bc * fVar17;
                fVar17 = fVar17 * fVar16;
              }
              FUN_10001d60(&fStack_78,fVar17,fVar18,fVar20);
              fStack_e4 = fStack_78 * DAT_10126ae0;
              fStack_e0 = fStack_74 * DAT_10126ae0;
              fStack_dc = fStack_70 * DAT_10126ae0;
              fStack_b4 = fStack_e4;
              fStack_b0 = fStack_e0;
              fStack_ac = fStack_dc;
              goto LAB_100227b3;
            }
            if (*(int *)(iVar6 + 0x324) != 0) {
              pbVar9 = (byte *)(*(int *)(iVar6 + 0x31c) + (int)DAT_10122044[0x26]);
              pbVar5 = (byte *)(*(int *)(iVar6 + 0x318) + (int)DAT_10122044[0x26]);
              do {
                bVar2 = *pbVar5;
                bVar4 = bVar2 < *pbVar9;
                if (bVar2 != *pbVar9) {
LAB_10022512:
                  iVar6 = (1 - (uint)bVar4) - (uint)(bVar4 != 0);
                  goto LAB_10022517;
                }
                if (bVar2 == 0) break;
                bVar2 = pbVar5[1];
                bVar4 = bVar2 < pbVar9[1];
                if (bVar2 != pbVar9[1]) goto LAB_10022512;
                pbVar5 = pbVar5 + 2;
                pbVar9 = pbVar9 + 2;
              } while (bVar2 != 0);
              iVar6 = 0;
LAB_10022517:
              if (iVar6 != 0) goto LAB_1002251f;
            }
          }
          FUN_100af200(param_1[1] + 0x50);
          fStack_e4 = DAT_10126ae0 * DAT_10122044[10];
          fStack_e0 = DAT_10126ae0 * DAT_10122044[0xb];
          fStack_dc = DAT_10126ae0 * DAT_10122044[0xc];
          fStack_90 = fStack_e4;
          fStack_8c = fStack_e0;
          fStack_88 = fStack_dc;
LAB_100227b3:
          pfVar19 = (float *)0xbd0ef34d;
          fVar10 = (float10)(*DAT_10121f74)();
          fStack_6c = (float)fVar10;
          fVar17 = 0.0349;
          fVar16 = -0.0349;
          fVar10 = (float10)(*DAT_10121f74)();
          fStack_68 = (float)fVar10;
          fVar10 = (float10)(*DAT_10121f74)();
          fVar11 = (float10)DAT_10126ae0;
          fStack_54 = (float)(fVar11 * (float10)fStack_6c);
          fStack_50 = (float)((float10)fStack_68 * fVar11);
          fStack_e4 = fStack_e4 + fStack_54;
          fStack_e0 = fStack_e0 + fStack_50;
          fStack_dc = (float)((float10)fStack_dc + fVar10 * fVar11);
          fVar20 = *DAT_10122044 - (float)param_1[0xd1];
          fStack_3c = fStack_e4 * fVar20;
          fStack_38 = fStack_e0 * fVar20;
          fStack_d8 = fStack_3c + fStack_d8;
          fStack_d4 = fStack_38 + fStack_d4;
          fStack_d0 = fVar20 * fStack_dc + fStack_d0;
          in_stack_fffffef0 = *(float *)(param_1[1] + 0x208);
          fStack_cc = fStack_e4;
          fStack_c8 = fStack_e0;
          fStack_c4 = fStack_dc;
          fStack_84 = fStack_d8;
          fStack_80 = fStack_d4;
          fStack_7c = fStack_d0;
          iVar6 = FUN_1001a1f0(0x10106408,&fStack_d8,(undefined4 *)(param_1[1] + 0x50),
                               in_stack_fffffef0);
          iVar6 = *(int *)(iVar6 + 4);
          *(float *)(iVar6 + 0x20) = fStack_e4;
          *(float *)(iVar6 + 0x24) = fStack_e0;
          *(float *)(iVar6 + 0x28) = fStack_dc;
        }
        fVar20 = (float)param_1[0xd1];
        fVar18 = (float)_DAT_100dd608;
        param_1[0xd1] = (int)(fVar20 + fVar18);
      } while (fVar20 + fVar18 < (float)param_1[0xd2]);
    }
    if ((float)param_1[0xd2] < (float)param_1[0xd1]) {
      param_1[0xd5] = 0x40;
      param_1[0xd7] = param_1[0xd2];
      param_1[0xd6] = 0x40;
      param_1[0xd8] = param_1[0xd2];
      param_1[0xe1] = 0;
    }
  }
  iVar6 = *param_2;
  if ((iVar6 < 1) || ((3 < iVar6 && (iVar6 != 0x5b)))) {
    FUN_10005140(param_1,param_2);
  }
  else {
    FUN_10060260(param_1,(float)param_1[0xaa],(float)param_1[0xab],(float)param_1[0xac]);
    iVar6 = *param_1;
    __ftol();
    (**(code **)(iVar6 + 0x128))();
    if (param_1[0x35] != 0) {
      param_1[0xe1] = 0;
    }
    FUN_10005140(param_1,param_2);
    if (param_1[0xe1] == 0) {
      if ((param_1[0x57] & 0x400U) == 0) {
        if ((param_1[0x57] & 0x1000U) == 0) {
          iVar6 = FUN_10022200(param_1);
          if ((param_1[0x35] == 0) && (iVar6 == *(int *)(param_1[1] + 0x128))) {
            return;
          }
          *(int *)(param_1[1] + 0x128) = iVar6;
          *(undefined4 *)(param_1[1] + 0x130) = 0;
          FUN_10008190((int)param_1);
          return;
        }
        iVar6 = 0x1d;
      }
      else {
        iVar6 = 0x1c;
      }
      uVar8 = FUN_10008100(param_1,iVar6);
      *(undefined4 *)(param_1[1] + 0x128) = uVar8;
      *(undefined4 *)(param_1[1] + 0x130) = 0;
      FUN_10008190((int)param_1);
      param_1[0xe1] = 1;
      return;
    }
  }
  return;
}

