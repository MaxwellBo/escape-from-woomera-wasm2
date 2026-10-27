
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_100476f0(int *param_1,int *param_2)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  undefined3 extraout_var;
  undefined4 *puVar4;
  int iVar5;
  undefined3 extraout_var_00;
  float *pfVar6;
  byte *pbVar7;
  char *pcVar8;
  bool bVar9;
  float10 fVar10;
  undefined4 *in_stack_ffffff68;
  undefined4 uVar11;
  float in_stack_ffffff74;
  float in_stack_ffffff78;
  float fVar12;
  float fVar13;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  undefined4 uStack_30;
  float fStack_2c;
  float fStack_28;
  float fStack_20;
  float fStack_1c;
  undefined4 auStack_18 [3];
  undefined4 auStack_c [3];
  
  iVar3 = *param_2;
  if (iVar3 == 1) {
    FUN_10047380(param_1);
    return;
  }
  if (iVar3 != 2) {
    if (iVar3 != 3) {
      FUN_10060620(param_1,param_2);
      return;
    }
    fVar12 = 2.6124232e-29;
    FUN_100af210((float *)(param_1[1] + 0x50));
    *(undefined4 *)(param_1[1] + 0x108) = 6;
    *(uint *)(param_1[1] + 0x1a4) = *(uint *)(param_1[1] + 0x1a4) & 0xfffffdff;
    if (param_1[0xbf] == 0) {
      iVar3 = param_1[1];
      *(int *)(iVar3 + 0x20) = param_1[0xc5];
      *(int *)(iVar3 + 0x24) = param_1[0xc6];
      *(int *)(iVar3 + 0x28) = param_1[199];
      goto LAB_1004799f;
    }
    iVar3 = param_1[1];
    *(float *)(iVar3 + 0x20) = DAT_10121dd8;
    *(float *)(iVar3 + 0x24) = DAT_10121ddc;
    *(float *)(iVar3 + 0x28) = DAT_10121de0;
    iVar3 = param_1[0xbf];
    if (*(int *)(iVar3 + 0x328) == 1) {
      if (*(int *)(iVar3 + 0x324) == 5) {
LAB_100477f2:
        bVar9 = FUN_10019450((uint *)(param_1 + 0x5a));
        if (CONCAT31(extraout_var,bVar9) != 0) {
          iVar3 = FUN_10019460((uint *)(param_1 + 0x5a));
          iVar3 = *(int *)(iVar3 + 4);
          iVar5 = param_1[1];
          fVar13 = 0.5;
          fStack_54 = *(float *)(iVar3 + 8);
          fStack_4c = *(float *)(iVar3 + 0x10);
          fStack_50 = *(float *)(iVar3 + 0xc) + _DAT_100ddaf8;
          FUN_10003850(&stack0xffffff74,&fStack_54);
          puVar4 = FUN_100446d0(auStack_18,iVar5,(float *)(iVar5 + 8),in_stack_ffffff74,
                                in_stack_ffffff78,fVar12,fVar13);
          iVar3 = param_1[1];
          *(undefined4 *)(iVar3 + 0x20) = *puVar4;
          *(undefined4 *)(iVar3 + 0x24) = puVar4[1];
          *(undefined4 *)(iVar3 + 0x28) = puVar4[2];
        }
      }
      else if (*(int *)(iVar3 + 0x324) != 0) {
        pbVar7 = (byte *)(*(int *)(iVar3 + 0x31c) + (int)DAT_10122044[0x26]);
        pbVar2 = (byte *)(*(int *)(iVar3 + 0x318) + (int)DAT_10122044[0x26]);
        do {
          bVar1 = *pbVar2;
          bVar9 = bVar1 < *pbVar7;
          if (bVar1 != *pbVar7) {
LAB_100477e9:
            iVar3 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
            goto LAB_100477ee;
          }
          if (bVar1 == 0) break;
          bVar1 = pbVar2[1];
          bVar9 = bVar1 < pbVar7[1];
          if (bVar1 != pbVar7[1]) goto LAB_100477e9;
          pbVar2 = pbVar2 + 2;
          pbVar7 = pbVar7 + 2;
        } while (bVar1 != 0);
        iVar3 = 0;
LAB_100477ee:
        if (iVar3 != 0) goto LAB_100477f2;
      }
    }
    iVar3 = param_1[1];
    if (((*(float *)(iVar3 + 0x20) == DAT_10121dd8) && (*(float *)(iVar3 + 0x24) == DAT_10121ddc))
       && (*(float *)(iVar3 + 0x28) == DAT_10121de0)) {
      fVar12 = SQRT((float)_DAT_100e81f8 / (*(float *)(DAT_10121dac + 0xc) * (float)_DAT_100dd648))
               * *(float *)(DAT_10121dac + 0xc) * _DAT_100e81f4;
      FUN_100af200(iVar3 + 0x50);
      fStack_38 = DAT_10122044[0xb] * _DAT_100ddac8;
      fStack_34 = DAT_10122044[0xc] * _DAT_100ddac8;
      iVar3 = param_1[1];
      fStack_44 = fStack_38 + *(float *)(iVar3 + 0xc);
      fStack_40 = fStack_34 + *(float *)(iVar3 + 0x10) + _DAT_100e81f0;
      FUN_10001d60(&uStack_30,
                   ((DAT_10122044[10] * _DAT_100ddac8 + *(float *)(iVar3 + 8)) -
                   *(float *)(iVar3 + 8)) * fVar12,(fStack_44 - *(float *)(iVar3 + 0xc)) * fVar12,
                   (fStack_40 - *(float *)(iVar3 + 0x10)) * fVar12);
      iVar3 = param_1[1];
      *(undefined4 *)(iVar3 + 0x20) = uStack_30;
      *(float *)(iVar3 + 0x24) = fStack_2c;
      *(float *)(iVar3 + 0x28) = fStack_28;
    }
LAB_1004799f:
    param_1[0xc4] = (int)(*DAT_10122044 + (float)_DAT_100de538);
    return;
  }
  fStack_2c = DAT_10122044[0xb] * _DAT_100e81ec;
  fStack_28 = DAT_10122044[0xc] * _DAT_100e81ec;
  iVar3 = param_1[1];
  fStack_3c = DAT_10122044[10] * _DAT_100e81ec + *(float *)(iVar3 + 8);
  fStack_44 = fStack_2c + *(float *)(iVar3 + 0xc);
  fStack_40 = fStack_28 + *(float *)(iVar3 + 0x10);
  fStack_34 = fStack_40 + _DAT_100ddac8;
  fVar12 = 2.61265e-29;
  fStack_38 = fStack_44;
  FUN_100af200(iVar3 + 0x50);
  iVar3 = param_1[0xbf];
  if (iVar3 != 0) {
    pcVar8 = s_scripted_action_10101ba8;
    pbVar2 = (byte *)(**(int **)(iVar3 + 4) + (int)DAT_10122044[0x26]);
    do {
      bVar1 = *pbVar2;
      bVar9 = bVar1 < (byte)*pcVar8;
      if (bVar1 != *pcVar8) {
LAB_10047a70:
        iVar5 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
        goto LAB_10047a75;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar2[1];
      bVar9 = bVar1 < (byte)pcVar8[1];
      if (bVar1 != pcVar8[1]) goto LAB_10047a70;
      pbVar2 = pbVar2 + 2;
      pcVar8 = pcVar8 + 2;
    } while (bVar1 != 0);
    iVar5 = 0;
LAB_10047a75:
    if (iVar5 == 0) {
      if (*(int *)(iVar3 + 0x328) == 1) {
        if (*(int *)(iVar3 + 0x324) != 5) {
          if (*(int *)(iVar3 + 0x324) != 0) {
            pbVar7 = (byte *)(*(int *)(iVar3 + 0x31c) + (int)DAT_10122044[0x26]);
            pbVar2 = (byte *)(*(int *)(iVar3 + 0x318) + (int)DAT_10122044[0x26]);
            do {
              bVar1 = *pbVar2;
              bVar9 = bVar1 < *pbVar7;
              if (bVar1 != *pbVar7) {
LAB_10047ad7:
                iVar3 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
                goto LAB_10047adc;
              }
              if (bVar1 == 0) break;
              bVar1 = pbVar2[1];
              bVar9 = bVar1 < pbVar7[1];
              if (bVar1 != pbVar7[1]) goto LAB_10047ad7;
              pbVar2 = pbVar2 + 2;
              pbVar7 = pbVar7 + 2;
            } while (bVar1 != 0);
            iVar3 = 0;
LAB_10047adc:
            if (iVar3 != 0) goto LAB_10047ae0;
          }
          goto LAB_10047b42;
        }
LAB_10047ae0:
        bVar9 = FUN_10019450((uint *)(param_1 + 0x5a));
        if (CONCAT31(extraout_var_00,bVar9) == 0) goto LAB_10047b42;
        fVar13 = 0.5;
        fVar12 = 2.6127157e-29;
        iVar3 = FUN_10019460((uint *)(param_1 + 0x5a));
        FUN_10003850(&stack0xffffff74,(undefined4 *)(*(int *)(iVar3 + 4) + 8));
        in_stack_ffffff68 = auStack_c;
        pfVar6 = (float *)FUN_100446d0(in_stack_ffffff68,param_1[1],&fStack_3c,in_stack_ffffff74,
                                       in_stack_ffffff78,fVar12,fVar13);
        fStack_54 = *pfVar6;
        fStack_50 = pfVar6[1];
        fStack_4c = pfVar6[2];
      }
      else {
LAB_10047b42:
        fStack_20 = DAT_10122044[0xe] * _DAT_100dd614;
        fStack_1c = DAT_10122044[0xf] * _DAT_100dd614;
        fStack_44 = DAT_10122044[0xb] * _DAT_100dd614;
        fStack_40 = DAT_10122044[0xc] * _DAT_100dd614;
        fStack_6c = DAT_10122044[10] * _DAT_100dd614 + DAT_10122044[0xd] * _DAT_100dd614;
        fStack_68 = fStack_44 + fStack_20;
        fStack_64 = fStack_40 + fStack_1c;
        fVar10 = FUN_1000a9b0(&fStack_6c);
        if (fVar10 == (float10)_DAT_100dd5f8) {
          fStack_60 = 0.0;
          fStack_5c = 0.0;
          fStack_58 = 1.0;
        }
        else {
          fVar10 = (float10)_DAT_100dd618 / fVar10;
          fVar12 = (float)((float10)fStack_68 * fVar10);
          in_stack_ffffff78 = (float)((float10)fStack_6c * fVar10);
          in_stack_ffffff74 = 2.6127963e-29;
          FUN_10001d60(&fStack_60,in_stack_ffffff78,fVar12,(float)((float10)fStack_64 * fVar10));
        }
        fStack_54 = fStack_60 * DAT_10126aac;
        fStack_50 = fStack_5c * DAT_10126aac;
        fStack_4c = fStack_58 * DAT_10126aac;
        fStack_48 = fStack_54;
        fStack_44 = fStack_50;
        fStack_40 = fStack_4c;
      }
      pfVar6 = &fStack_54;
      goto LAB_10047c67;
    }
  }
  pfVar6 = (float *)(param_1 + 0xc9);
LAB_10047c67:
  fVar13 = 2.0;
  uVar11 = 0x10047c6d;
  FUN_10003850(&stack0xffffff74,pfVar6);
  FUN_10003850(&stack0xffffff68,&fStack_3c);
  FUN_10043bd0(param_1[1],in_stack_ffffff68,uVar11,pfVar6,in_stack_ffffff74,in_stack_ffffff78,fVar12
               ,fVar13);
  fVar12 = *DAT_10122044 + _DAT_100dd620;
  param_1[0xcc] = 0;
  param_1[200] = (int)fVar12;
  return;
}

