
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100060f0(int param_1)

{
  undefined4 *puVar1;
  bool bVar2;
  int iVar3;
  undefined3 extraout_var;
  int iVar4;
  undefined4 uVar5;
  uint *puVar6;
  float10 fVar7;
  float fStack_c8;
  float fStack_c4;
  float fStack_c0;
  float fStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  float fStack_b0;
  uint uStack_ac;
  uint uStack_a8;
  float fStack_a4;
  float fStack_a0;
  float fStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  float fStack_7c;
  float fStack_78;
  float afStack_74 [3];
  undefined1 auStack_68 [16];
  float fStack_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  undefined4 uStack_38;
  float afStack_24 [3];
  undefined1 auStack_18 [12];
  undefined1 auStack_c [12];
  
  fStack_bc = *(float *)(param_1 + 8);
  uStack_b8 = *(undefined4 *)(param_1 + 0xc);
  uStack_b4 = *(undefined4 *)(param_1 + 0x10);
  uStack_98 = *(undefined4 *)(param_1 + 0x14);
  uStack_94 = *(undefined4 *)(param_1 + 0x18);
  iVar4 = *(int *)(param_1 + 4);
  uStack_90 = *(undefined4 *)(param_1 + 0x1c);
  (*DAT_100a5050)(&uStack_98,&fStack_c8,auStack_c,auStack_18);
  FUN_1001a7a0(param_1,afStack_74,&fStack_bc);
  FUN_100312c0(afStack_74,8192.0,&fStack_c8,afStack_24);
  puVar1 = (undefined4 *)(DAT_100a5140 + 4);
  iVar3 = (*DAT_100a5100)(0,0xf);
  (*(code *)*puVar1)(iVar4,&fStack_bc,1,s_weapons_xbow_fire1_wav_1007618c,0x3f800000,0x3f4ccccd,0,
                     iVar3 + 0x5d);
  puVar1 = (undefined4 *)(DAT_100a5140 + 4);
  iVar3 = (*DAT_100a5100)(0,0xf);
  fVar7 = (float10)(*DAT_100a50fc)(0x3f733333,0x3f800000,0x3f4ccccd,0,iVar3 + 0x5d);
  (*(code *)*puVar1)(iVar4,&fStack_bc,3,s_weapons_xbow_reload1_wav_10076170,(float)fVar7);
  bVar2 = FUN_1001a780(iVar4);
  if (CONCAT31(extraout_var,bVar2) != 0) {
    if (*(int *)(param_1 + 0x38) == 0) {
      if (*(int *)(param_1 + 0x3c) != 0) {
        (**(code **)(DAT_100a5140 + 0x40))(6,1);
      }
    }
    else {
      (**(code **)(DAT_100a5140 + 0x40))(4,1);
    }
  }
  (**(code **)(DAT_100a5140 + 0x2c))();
  (**(code **)(DAT_100a5140 + 0x34))(iVar4 + -1);
  (**(code **)(DAT_100a5140 + 0x38))(2);
  (**(code **)(DAT_100a5140 + 0x3c))(afStack_74,afStack_24,2,0xffffffff,auStack_68);
  if (fStack_58 < (float)_DAT_10059a10) {
    iVar3 = (**(code **)(DAT_100a5140 + 0x24))(uStack_38);
    if (*(int *)(iVar3 + 0x60) == 4) {
      if (*(int *)(iVar3 + 0x68) == 0) {
        puVar1 = (undefined4 *)(DAT_100a5140 + 4);
        fVar7 = (float10)(*DAT_100a50fc)(0x3f733333,0x3f800000,0x3f4ccccd,0,100);
        (*(code *)*puVar1)(0,&fStack_54,4,s_weapons_xbow_hit1_wav_100768bc,(float)fVar7);
        iVar4 = (*DAT_100a50d4)(&fStack_54,0);
        if (iVar4 != -3) {
          (**(code **)(DAT_100a513c + 0x88))(&fStack_54);
        }
        uVar5 = (**(code **)(DAT_100a5140 + 0xc))(s_models_crossbow_bolt_mdl_100768a0);
        FUN_10031190(&fStack_c8,&fStack_b0);
        fStack_a4 = fStack_54 - fStack_c8 * _DAT_1005ac98;
        uStack_8c = 0;
        uStack_88 = 0;
        uStack_84 = 0;
        fStack_a0 = fStack_50 - fStack_c4 * _DAT_1005ac98;
        fStack_9c = fStack_4c - fStack_c0 * _DAT_1005ac98;
        puVar6 = (uint *)(**(code **)(DAT_100a513c + 0xc0))
                                   (&fStack_a4,&uStack_8c,&fStack_b0,0x40a00000,uVar5,0);
        if (puVar6 != (uint *)0x0) {
          *puVar6 = *puVar6 | 0x80000;
          fStack_7c = fStack_c4 * _DAT_1005ac98;
          fStack_78 = fStack_c0 * _DAT_1005ac98;
          puVar6[0x5c] = (uint)(fStack_54 - fStack_c8 * _DAT_1005ac98);
          puVar6[0x5d] = (uint)(fStack_50 - fStack_7c);
          puVar6[0x5e] = (uint)(fStack_4c - fStack_78);
          puVar6[0x5f] = (uint)fStack_b0;
          puVar6[0x60] = uStack_ac;
          puVar6[10] = (uint)FUN_100060b0;
          puVar6[0x61] = uStack_a8;
        }
      }
    }
    else {
      iVar3 = (*DAT_100a5100)(0,1);
      if (iVar3 == 0) {
        (**(code **)(DAT_100a5140 + 4))
                  (iVar4,&fStack_54,4,s_weapons_xbow_hitbod1_wav_100768d4,0x3f800000,0x3f4ccccd,0,
                   100);
        (**(code **)(DAT_100a5140 + 0x30))();
        return;
      }
      if (iVar3 == 1) {
        (**(code **)(DAT_100a5140 + 4))
                  (iVar4,&fStack_54,4,s_weapons_xbow_hitbod2_wav_100768f0,0x3f800000,0x3f4ccccd,0,
                   100);
        (**(code **)(DAT_100a5140 + 0x30))();
        return;
      }
    }
  }
  (**(code **)(DAT_100a5140 + 0x30))();
  return;
}

