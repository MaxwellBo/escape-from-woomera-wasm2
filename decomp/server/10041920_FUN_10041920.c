
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FUN_10041920(void *this,float param_1,float param_2,float param_3,float param_4,float param_5,
            float param_6,float param_7)

{
  int *piVar1;
  bool bVar2;
  double dVar3;
  int iVar4;
  float *pfVar5;
  int iVar6;
  undefined4 uVar7;
  float fVar8;
  float *pfVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined4 uVar15;
  float fStack_124;
  float local_120;
  float local_11c;
  float local_118;
  float fStack_114;
  float fStack_110;
  float fStack_10c;
  float fStack_108;
  float local_104;
  float local_100;
  float fStack_fc;
  float fStack_f8;
  float fStack_f4;
  float local_f0;
  int local_ec;
  float local_e8;
  float local_e4;
  float local_e0;
  float fStack_dc;
  float fStack_d8;
  float fStack_d4;
  float fStack_d0;
  float fStack_cc;
  float fStack_c8;
  int aiStack_c4 [4];
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  float fStack_a8;
  float fStack_a0;
  float fStack_9c;
  float fStack_98;
  int iStack_94;
  float fStack_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  float fStack_78;
  float fStack_70;
  float fStack_6c;
  float fStack_64;
  float fStack_60;
  float fStack_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  int aiStack_44 [5];
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  float afStack_c [3];
  
  bVar2 = true;
  *(undefined4 *)(*(int *)((int)this + 0xdc) + 0x314) = 0x1c2;
  local_104 = param_5 * _DAT_100e185c;
  local_120 = param_1;
  local_11c = param_2;
  local_118 = param_3;
  local_100 = param_6 * _DAT_100e185c;
  local_f0 = 1.0;
  local_ec = 0;
  iVar6 = 10;
  local_e8 = param_4 * _DAT_100e185c + param_1;
  local_e4 = local_104 + param_2;
  local_e0 = local_100 + param_3;
  iVar4 = *(int *)(*(int *)((int)this + 0xdc) + 4);
  uVar7 = *(undefined4 *)(iVar4 + 0x208);
  (*DAT_10121ff4)(1,uVar7,CONCAT22((short)((uint)(iVar4 + 8) >> 0x10),
                                   *(undefined2 *)((int)this + 0x134)));
  iVar4 = *(int *)(*(int *)((int)this + 0xdc) + 4);
  (*DAT_10121ff4)(3,*(undefined4 *)(iVar4 + 0x208),
                  CONCAT22((short)((uint)(iVar4 + 0x50) >> 0x10),*(undefined2 *)((int)this + 0x134))
                  ,0x3c23d70a,iVar4 + 8,iVar4 + 0x50,0,0,0,0,0,1);
  if (_DAT_100dd63c < param_7) {
    while (0 < iVar6) {
      iVar6 = iVar6 + -1;
      FUN_100afc60(&local_120,&local_e8,0,uVar7,aiStack_c4);
      if (aiStack_c4[0] != 0) {
        return;
      }
      iVar4 = iStack_94;
      if ((iStack_94 == 0) && (iVar4 = (*DAT_10121f1c)(), iVar4 == 0)) {
        return;
      }
      piVar1 = *(int **)(iVar4 + 0x7c);
      if (piVar1 == (int *)0x0) {
        return;
      }
      if (bVar2) {
        iVar4 = *(int *)(*(int *)((int)this + 0xdc) + 4);
        bVar2 = false;
        *(uint *)(iVar4 + 0x118) = *(uint *)(iVar4 + 0x118) | 2;
      }
      if (*(float *)(piVar1[1] + 0x16c) != _DAT_100dd5f8) {
        FUN_100b2bd0();
        iVar4 = *piVar1;
        FUN_10003850(&stack0xfffffeb8,&param_4);
        (**(code **)(iVar4 + 0x5c))();
        uVar7 = *(undefined4 *)(*(int *)((int)this + 0xdc) + 4);
        FUN_100b2bf0(uVar7,uVar7);
      }
      iVar4 = (**(code **)(*piVar1 + 0xc0))();
      if (iVar4 == 0) {
        local_120 = fStack_b0 + param_4;
        local_11c = fStack_ac + param_5;
        local_118 = fStack_a8 + param_6;
        uVar7 = *(undefined4 *)(piVar1[1] + 0x208);
        fStack_108 = local_120;
        local_104 = local_11c;
        local_100 = local_118;
      }
      else {
        uVar7 = 0;
        fStack_124 = -(fStack_a0 * param_4 + param_5 * fStack_9c + param_6 * fStack_98);
        if ((float)_DAT_100dd648 <= fStack_124) {
          if (local_ec != 0) {
            return;
          }
          local_ec = 1;
          if (*(int *)((int)this + 0x130) != 0) {
            return;
          }
          fStack_58 = param_5 * _DAT_100de45c;
          fStack_54 = param_6 * _DAT_100de45c;
          fStack_80 = param_4 * _DAT_100de45c + fStack_b0;
          fStack_7c = fStack_ac + fStack_58;
          fStack_78 = fStack_a8 + fStack_54;
          FUN_100afc60(&fStack_80,&local_e8,0,0,aiStack_44);
          if (aiStack_44[0] != 0) {
            return;
          }
          FUN_100afc60(&fStack_30,&fStack_b0,0,0,aiStack_44);
          fVar12 = SQRT((fStack_30 - fStack_b0) * (fStack_30 - fStack_b0) +
                        (fStack_2c - fStack_ac) * (fStack_2c - fStack_ac) +
                        (fStack_28 - fStack_a8) * (fStack_28 - fStack_a8));
          if (fVar12 < param_7) {
            if (fVar12 == _DAT_100dd5f8) {
              fVar12 = _DAT_100dd618;
            }
            param_7 = param_7 - fVar12;
            iVar4 = (**(code **)(*DAT_10121db8 + 0x18))();
            dVar3 = _DAT_100e0ed8;
            if (iVar4 != 0) {
              dVar3 = _DAT_100e5738;
            }
            fVar14 = param_7 * (float)dVar3;
            uVar15 = 0x40;
            iVar4 = 0;
            fVar12 = *(float *)(*(int *)((int)this + 0xdc) + 4);
            fVar11 = *(float *)((int)this + 4);
            pfVar9 = afStack_c;
            fVar10 = 8.0;
            fVar8 = 2.605663e-29;
            fVar13 = param_7;
            pfVar5 = (float *)FUN_10002280(&param_4,pfVar9,8.0);
            FUN_1000b550(&fStack_30,(float *)&stack0xfffffea8,pfVar5);
            FUN_1001fb30(fVar8,(float)pfVar9,fVar10,fVar11,fVar12,fVar13,fVar14,iVar4,uVar15);
            FUN_10095d30(1,(undefined4 *)(*(int *)((int)this + 4) + 8),0x400,3.0);
            local_120 = fStack_30 + param_4;
            local_11c = fStack_2c + param_5;
            local_118 = fStack_28 + param_6;
            fStack_d0 = local_120;
            fStack_cc = local_11c;
            fStack_c8 = local_118;
          }
        }
        else {
          FUN_10001d60(&fStack_50,fStack_a0 + fStack_a0,fStack_9c + fStack_9c,fStack_98 + fStack_98)
          ;
          fStack_88 = fStack_4c * fStack_124;
          fStack_84 = fStack_48 * fStack_124;
          param_4 = fStack_50 * fStack_124 + param_4;
          param_5 = fStack_88 + param_5;
          param_6 = fStack_84 + param_6;
          local_f0 = local_f0 - fStack_b4;
          fStack_70 = param_5 * _DAT_100de45c;
          fStack_6c = param_6 * _DAT_100de45c;
          local_120 = param_4 * _DAT_100de45c + fStack_b0;
          local_11c = fStack_ac + fStack_70;
          local_118 = fStack_a8 + fStack_6c;
          fStack_64 = param_5 * _DAT_100e185c;
          fStack_60 = param_6 * _DAT_100e185c;
          local_e8 = param_4 * _DAT_100e185c + local_120;
          local_e4 = fStack_64 + local_11c;
          local_e0 = fStack_60 + local_118;
          fStack_114 = param_4;
          fStack_110 = param_5;
          fStack_10c = param_6;
          fStack_fc = local_120;
          fStack_f8 = local_11c;
          fStack_f4 = local_118;
          fStack_dc = local_e8;
          fStack_d8 = local_e4;
          fStack_d4 = local_e0;
          FUN_10003850(&stack0xfffffeac,&fStack_b0);
          FUN_1001fea0();
          if (fStack_124 == _DAT_100dd5f8) {
            fStack_124 = 0.1;
          }
          param_7 = (_DAT_100dd618 - fStack_124) * param_7;
        }
      }
      if (param_7 <= _DAT_100dd63c) {
        return;
      }
    }
  }
  return;
}

