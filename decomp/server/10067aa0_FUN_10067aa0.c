
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_10067aa0(void *param_1)

{
  uint *puVar1;
  bool bVar2;
  undefined3 extraout_var;
  void *pvVar3;
  int iVar4;
  float *pfVar5;
  undefined4 *puVar6;
  float10 fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float local_d8;
  float local_d4;
  float local_d0;
  float local_cc;
  float local_c8;
  float local_c4;
  float local_c0;
  float local_bc;
  float local_b8;
  float local_b4;
  float local_b0;
  float local_ac;
  float local_a8;
  float local_a4;
  float local_a0;
  float local_9c;
  float local_98;
  float local_94;
  float local_90;
  float local_8c;
  float local_88;
  float local_84;
  float local_80;
  float local_7c;
  float local_78;
  float local_74;
  float local_6c;
  undefined4 local_68;
  undefined4 local_64;
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  float local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined1 local_30 [12];
  float local_24 [3];
  float local_18 [3];
  float local_c [3];
  
  if ((*DAT_10122044 < *(float *)((int)param_1 + 0x5b4)) &&
     (*(float *)((int)param_1 + 0x5b8) < *(float *)((int)param_1 + 0x5b4))) {
    do {
      if (*DAT_10122044 <= *(float *)((int)param_1 + 0x5b8)) {
        return;
      }
      puVar1 = (uint *)((int)param_1 + 0x160);
      bVar2 = FUN_10019450(puVar1);
      if (CONCAT31(extraout_var,bVar2) != 0) {
        FUN_10008450(param_1,2,&local_b4,local_30);
        iVar4 = *(int *)((int)param_1 + 4);
        fVar10 = *(float *)((int)param_1 + 0x5b8) - *DAT_10122044;
        local_78 = fVar10 * *(float *)(iVar4 + 0x20);
        local_74 = fVar10 * *(float *)(iVar4 + 0x24);
        local_d8 = local_b4 + local_78;
        local_d4 = local_b0 + local_74;
        local_d0 = local_ac + fVar10 * *(float *)(iVar4 + 0x28);
        local_94 = *(float *)((int)param_1 + 0x33c) - *(float *)(iVar4 + 0x10);
        local_98 = *(float *)((int)param_1 + 0x338) - *(float *)(iVar4 + 0xc);
        local_9c = *(float *)((int)param_1 + 0x334) - *(float *)(iVar4 + 8);
        local_90 = local_d8;
        local_8c = local_d4;
        local_88 = local_d0;
        fVar7 = FUN_1000a9b0(&local_9c);
        if (fVar7 == (float10)_DAT_100dd5f8) {
          local_cc = 0.0;
          local_c8 = 0.0;
          local_c4 = 1.0;
        }
        else {
          fVar7 = (float10)_DAT_100dd618 / fVar7;
          FUN_10001d60(&local_cc,(float)(fVar7 * (float10)local_9c),
                       (float)((float10)local_98 * fVar7),(float)((float10)local_94 * fVar7));
        }
        local_c0 = local_cc;
        local_bc = local_c8;
        local_b8 = local_c4;
        fVar10 = *DAT_10122044 - *(float *)((int)param_1 + 0x5b8);
        FUN_10001d60(&local_60,local_cc * fVar10,local_c8 * fVar10,local_c4 * fVar10);
        FUN_10001d60(&local_3c,local_60 + local_d8,local_d4 + local_5c,local_d0 + local_58);
        local_d0 = (float)local_34;
        local_d8 = local_3c;
        local_d4 = (float)local_38;
        pvVar3 = (void *)FUN_1001a1f0(0x10112448,&local_d8,
                                      (undefined4 *)(*(int *)((int)param_1 + 4) + 0x50),
                                      *(undefined4 *)(*(int *)((int)param_1 + 4) + 0x208));
        FUN_10001d60(&local_48,local_c0 * _DAT_100de484,local_bc * _DAT_100de484,
                     local_b8 * _DAT_100de484);
        iVar4 = *(int *)((int)pvVar3 + 4);
        *(undefined4 *)(iVar4 + 0x20) = local_48;
        *(undefined4 *)(iVar4 + 0x24) = local_44;
        *(undefined4 *)(iVar4 + 0x28) = local_40;
        iVar4 = FUN_10019410(puVar1);
        FUN_10069ce0(pvVar3,iVar4);
        FUN_10008450(param_1,3,&local_b4,local_30);
        fVar10 = *(float *)((int)param_1 + 0x5b8) - *DAT_10122044;
        iVar4 = *(int *)((int)param_1 + 4);
        FUN_10001d60(&local_54,fVar10 * *(float *)(iVar4 + 0x20),fVar10 * *(float *)(iVar4 + 0x24),
                     fVar10 * *(float *)(iVar4 + 0x28));
        FUN_10001d60(&local_6c,local_54 + local_b4,local_b0 + local_50,local_ac + local_4c);
        local_d0 = (float)local_64;
        iVar4 = *(int *)((int)param_1 + 4);
        local_d8 = local_6c;
        local_d4 = (float)local_68;
        FUN_10001d60(&local_84,*(float *)((int)param_1 + 0x334) - *(float *)(iVar4 + 8),
                     *(float *)((int)param_1 + 0x338) - *(float *)(iVar4 + 0xc),
                     *(float *)((int)param_1 + 0x33c) - *(float *)(iVar4 + 0x10));
        fVar7 = FUN_1000a9b0(&local_84);
        if (fVar7 == (float10)_DAT_100dd5f8) {
          fVar10 = 1.0;
          fVar9 = 0.0;
          fVar8 = 0.0;
        }
        else {
          fVar7 = (float10)_DAT_100dd618 / fVar7;
          fVar10 = (float)((float10)local_7c * fVar7);
          fVar9 = (float)((float10)local_80 * fVar7);
          fVar8 = (float)((float10)local_84 * fVar7);
        }
        FUN_10001d60(&local_a8,fVar8,fVar9,fVar10);
        local_c0 = local_a8;
        local_bc = local_a4;
        local_b8 = local_a0;
        fVar10 = *DAT_10122044 - *(float *)((int)param_1 + 0x5b8);
        FUN_10001d60(local_24,local_a8 * fVar10,local_a4 * fVar10,local_a0 * fVar10);
        pfVar5 = (float *)FUN_1000b550(&local_d8,local_18,local_24);
        local_d8 = *pfVar5;
        local_d4 = pfVar5[1];
        local_d0 = pfVar5[2];
        pvVar3 = (void *)FUN_1001a1f0(0x10112448,&local_d8,
                                      (undefined4 *)(*(int *)((int)param_1 + 4) + 0x50),
                                      *(undefined4 *)(*(int *)((int)param_1 + 4) + 0x208));
        puVar6 = (undefined4 *)FUN_10002280(&local_c0,local_c,200.0);
        iVar4 = *(int *)((int)pvVar3 + 4);
        *(undefined4 *)(iVar4 + 0x20) = *puVar6;
        *(undefined4 *)(iVar4 + 0x24) = puVar6[1];
        *(undefined4 *)(iVar4 + 0x28) = puVar6[2];
        iVar4 = FUN_10019410(puVar1);
        FUN_10069ce0(pvVar3,iVar4);
      }
      fVar10 = *(float *)((int)param_1 + 0x5b8) + (float)_DAT_100dd608;
      *(float *)((int)param_1 + 0x5b8) = fVar10;
    } while (fVar10 < *(float *)((int)param_1 + 0x5b4));
  }
  return;
}

