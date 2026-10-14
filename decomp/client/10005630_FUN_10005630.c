
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10005630(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  double dVar4;
  bool bVar5;
  undefined4 uVar6;
  undefined3 extraout_var;
  int iVar7;
  undefined3 extraout_var_00;
  float10 fVar8;
  longlong lVar9;
  undefined4 uVar10;
  float fVar11;
  float fStack_150;
  float fStack_14c;
  float fStack_148;
  float fStack_144;
  float fStack_140;
  int iStack_13c;
  float fStack_138;
  float fStack_134;
  float fStack_130;
  int iStack_12c;
  int iStack_128;
  undefined4 uStack_124;
  float fStack_120;
  float fStack_11c;
  float fStack_118;
  float fStack_114;
  int aiStack_110 [4];
  float fStack_100;
  float fStack_fc;
  float fStack_f8;
  float fStack_f4;
  float fStack_f0;
  float fStack_ec;
  float fStack_e8;
  undefined4 uStack_e0;
  double dStack_cc;
  double dStack_c4;
  float fStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  float fStack_a4;
  float fStack_a0;
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  float afStack_80 [3];
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  int aiStack_68 [5];
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  float afStack_24 [3];
  undefined1 auStack_18 [12];
  undefined1 auStack_c [12];
  
  fStack_150 = *(float *)(param_1 + 0x30);
  fStack_bc = *(float *)(param_1 + 8);
  uStack_b8 = *(undefined4 *)(param_1 + 0xc);
  uStack_b0 = *(undefined4 *)(param_1 + 0x14);
  iVar2 = *(int *)(param_1 + 0x40);
  uVar3 = *(uint *)(param_1 + 4);
  uStack_a8 = *(undefined4 *)(param_1 + 0x1c);
  uStack_b4 = *(undefined4 *)(param_1 + 0x10);
  uStack_ac = *(undefined4 *)(param_1 + 0x18);
  fStack_120 = 1.0;
  iStack_12c = 0;
  iStack_128 = 1;
  iStack_13c = 10;
  if (*(int *)(param_1 + 0x44) != 0) {
    FUN_10005600(uVar3);
    return;
  }
  FUN_1001a7a0(param_1,&fStack_138,&fStack_bc);
  uStack_124 = (**(code **)(DAT_100a5140 + 0xc))(s_sprites_smoke_spr_1007688c);
  uVar6 = (**(code **)(DAT_100a5140 + 0xc))(s_sprites_hotglow_spr_10076878);
  (*DAT_100a5050)(&uStack_b0,&fStack_148,auStack_c,auStack_18);
  FUN_100312c0(&fStack_138,8192.0,&fStack_148,afStack_80);
  bVar5 = FUN_1001a780(uVar3);
  if (CONCAT31(extraout_var,bVar5) != 0) {
    FUN_100417f0(0,0xc0000000);
    (**(code **)(DAT_100a5140 + 0x40))(6,2);
  }
  puVar1 = (undefined4 *)(DAT_100a5140 + 4);
  iVar7 = (*DAT_100a5100)(0,0x1f);
  (*(code *)*puVar1)(uVar3,&fStack_bc,1,s_weapons_gauss2_wav_10076864,
                     fStack_150 * (float)_DAT_1005aca0 + (float)_DAT_100599f0,0x3f4ccccd,0,
                     iVar7 + 0x55);
  if (_DAT_1005ac98 < fStack_150) {
    do {
      if (iStack_13c < 1) {
        return;
      }
      iStack_13c = iStack_13c + -1;
      (**(code **)(DAT_100a5140 + 0x28))(0,1);
      (**(code **)(DAT_100a5140 + 0x2c))();
      (**(code **)(DAT_100a5140 + 0x34))(uVar3 - 1);
      (**(code **)(DAT_100a5140 + 0x38))(2);
      (**(code **)(DAT_100a5140 + 0x3c))(&fStack_138,afStack_80,2,0xffffffff,aiStack_110);
      (**(code **)(DAT_100a5140 + 0x30))();
      if (aiStack_110[0] != 0) {
        return;
      }
      if (iStack_128 == 0) {
        if (iVar2 == 0) {
          dStack_c4 = (double)fStack_150;
          dVar4 = _DAT_1005ac90;
        }
        else {
          dStack_c4 = 128.0;
          dVar4 = _DAT_10059a10;
        }
        (**(code **)(DAT_100a513c + 0xf8))
                  (&fStack_138,&fStack_fc,uStack_124,0x3dcccccd,(float)dVar4,0,(float)dStack_c4,0,0,
                   0,0x437f0000,(float)(int)((-(uint)(iVar2 != 0) & 0xffffff81) + 0xff),
                   (float)(int)((-(uint)(iVar2 != 0) & 0xffffff01) + 0xff));
      }
      else {
        bVar5 = FUN_1001a780(uVar3);
        if (CONCAT31(extraout_var_00,bVar5) != 0) {
          FUN_1001a9b0();
        }
        iStack_128 = 0;
        if (iVar2 == 0) {
          dStack_cc = (double)fStack_150;
          dVar4 = _DAT_1005ac90;
        }
        else {
          dStack_cc = 128.0;
          dVar4 = _DAT_10059a10;
        }
        (**(code **)(DAT_100a513c + 0xe4))
                  (uVar3 | 0x1000,&fStack_fc,uStack_124,0x3dcccccd,(float)dVar4,0,(float)dStack_cc,0
                   ,0,0,0x437f0000,(float)(int)((-(uint)(iVar2 != 0) & 0xffffff81) + 0xff),
                   (float)(int)((-(uint)(iVar2 != 0) & 0xffffff01) + 0xff));
      }
      iVar7 = (**(code **)(DAT_100a5140 + 0x24))(uStack_e0);
      if (iVar7 == 0) {
        return;
      }
      if (*(int *)(iVar7 + 0x60) == 4) {
        fStack_14c = -(fStack_148 * fStack_f0 + fStack_140 * fStack_e8 + fStack_144 * fStack_ec);
        if ((float)_DAT_100599f0 <= fStack_14c) {
          FUN_10003070((int)aiStack_110);
          (**(code **)(DAT_100a513c + 200))
                    (&fStack_fc,&DAT_100b2fa8,0x3f800000,uVar6,3,0xe,
                     fStack_150 * (float)_DAT_1005ac80,0x40c00000,0x80);
          if (iStack_12c != 0) {
            return;
          }
          iStack_12c = 1;
          if (iVar2 != 0) {
            (**(code **)(DAT_100a513c + 200))
                      (&fStack_fc,&DAT_100b2fa8,0x3e4ccccd,uVar6,3,0xe,0x3f48c8c9,0x3e99999a,0x80);
            fStack_11c = fStack_fc + fStack_f0;
            fStack_118 = fStack_f8 + fStack_ec;
            puVar1 = (undefined4 *)(DAT_100a513c + 0xa0);
            fStack_114 = fStack_f4 + fStack_e8;
            fVar8 = (float10)(*DAT_100a50fc)(0x41200000,0x41a00000,0x42c80000,0xff,0x43480000);
            (*(code *)*puVar1)(0xf,&fStack_fc,&fStack_11c,uVar6,8,0x3f19999a,
                               (float)(fVar8 * (float10)_DAT_1005ac78));
            return;
          }
          FUN_100312c0(&fStack_fc,8.0,&fStack_148,afStack_24);
          (**(code **)(DAT_100a5140 + 0x2c))();
          (**(code **)(DAT_100a5140 + 0x34))(uVar3 - 1);
          (**(code **)(DAT_100a5140 + 0x38))(2);
          (**(code **)(DAT_100a5140 + 0x3c))(afStack_24,afStack_80,2,0xffffffff,aiStack_68);
          if (aiStack_68[0] == 0) {
            (**(code **)(DAT_100a5140 + 0x3c))(&fStack_54,&fStack_fc,2,0xffffffff,aiStack_68);
            fStack_8c = fStack_54 - fStack_fc;
            fStack_88 = fStack_50 - fStack_f8;
            fStack_84 = fStack_4c - fStack_f4;
            fVar8 = FUN_100264c0(&fStack_8c);
            if ((float10)fStack_150 <= fVar8) {
              (**(code **)(DAT_100a5140 + 0x30))();
            }
            else {
              if (fVar8 == (float10)_DAT_10059a18) {
                fVar8 = (float10)_DAT_10059eb0;
              }
              fStack_150 = (float)((float10)fStack_150 - fVar8);
              puVar1 = (undefined4 *)(DAT_100a513c + 0xa0);
              fStack_a4 = fStack_fc - fStack_148;
              fStack_a0 = fStack_f8 - fStack_144;
              fStack_9c = fStack_f4 - fStack_140;
              fVar8 = (float10)(*DAT_100a50fc)(0x41200000,0x41a00000,0x42c80000,0xff,0x42c80000);
              (*(code *)*puVar1)(0xf,&fStack_fc,&fStack_a4,uVar6,3,0x3dcccccd,
                                 (float)(fVar8 * (float10)_DAT_1005ac78));
              FUN_10003070((int)aiStack_68);
              (**(code **)(DAT_100a513c + 200))
                        (&fStack_54,&DAT_100b2fa8,0x3dcccccd,uVar6,3,0xe,
                         fStack_150 * (float)_DAT_1005ac80,0x40c00000,0x80);
              fStack_11c = fStack_54 - fStack_148;
              fStack_118 = fStack_50 - fStack_144;
              puVar1 = (undefined4 *)(DAT_100a513c + 0xa0);
              fStack_114 = fStack_4c - fStack_140;
              fVar8 = (float10)(*DAT_100a50fc)(0x41200000,0x41a00000,0x43480000,0xff,0x42200000);
              fVar11 = (float)(fVar8 * (float10)_DAT_1005ac78);
              uVar10 = 0x3dcccccd;
              lVar9 = __ftol();
              (*(code *)*puVar1)(0xf,&fStack_54,&fStack_11c,uVar6,(int)lVar9,uVar10,fVar11);
              fStack_138 = fStack_54 + fStack_148;
              fStack_134 = fStack_50 + fStack_144;
              fStack_130 = fStack_4c + fStack_140;
              (**(code **)(DAT_100a5140 + 0x30))();
            }
          }
          else {
            fStack_150 = 0.0;
            (**(code **)(DAT_100a5140 + 0x30))();
          }
        }
        else {
          FUN_100312c0(&fStack_148,fStack_14c + fStack_14c,&fStack_f0,&fStack_74);
          fStack_148 = fStack_74;
          fStack_120 = fStack_120 - fStack_100;
          fStack_144 = fStack_70;
          fStack_140 = fStack_6c;
          FUN_100312c0(&fStack_fc,8.0,&fStack_148,&fStack_138);
          FUN_100312c0(&fStack_138,8192.0,&fStack_148,afStack_80);
          (**(code **)(DAT_100a513c + 200))
                    (&fStack_fc,&DAT_100b2fa8,0x3e4ccccd,uVar6,3,0xe,
                     fStack_14c * fStack_150 * (float)_DAT_1005ac80,
                     fStack_14c * fStack_150 * (float)_DAT_1005ac88,0x80);
          fStack_98 = fStack_fc + fStack_f0;
          fStack_94 = fStack_f8 + fStack_ec;
          puVar1 = (undefined4 *)(DAT_100a513c + 0xa0);
          fStack_90 = fStack_f4 + fStack_e8;
          fVar8 = (float10)(*DAT_100a50fc)(0x41200000,0x41a00000,0x42c80000,0xff,0x42c80000);
          (*(code *)*puVar1)(0xf,&fStack_fc,&fStack_98,uVar6,3,0x3dcccccd,
                             (float)(fVar8 * (float10)_DAT_1005ac78));
          if (fStack_14c == _DAT_10059a18) {
            fStack_14c = 0.1;
          }
          fStack_150 = (_DAT_10059eb0 - fStack_14c) * fStack_150;
        }
      }
      else {
        fStack_138 = fStack_fc + fStack_148;
        fStack_134 = fStack_f8 + fStack_144;
        fStack_130 = fStack_f4 + fStack_140;
      }
    } while (_DAT_1005ac98 < fStack_150);
  }
  return;
}

