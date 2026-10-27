
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100066c0(int param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  bool bVar3;
  undefined3 extraout_var;
  int iVar4;
  undefined3 extraout_var_00;
  int iVar5;
  undefined4 uVar6;
  char *pcVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  float afStack_80 [3];
  float afStack_74 [3];
  float afStack_68 [3];
  undefined1 auStack_5c [12];
  undefined1 auStack_50 [12];
  undefined1 auStack_44 [20];
  undefined1 auStack_30 [48];
  
  uStack_98 = *(undefined4 *)(param_1 + 8);
  iVar5 = *(int *)(param_1 + 0x40);
  uStack_94 = *(undefined4 *)(param_1 + 0xc);
  uStack_90 = *(undefined4 *)(param_1 + 0x10);
  uVar2 = *(uint *)(param_1 + 4);
  if (iVar5 == 0) {
    if (*(int *)(param_1 + 0x3c) == 1) {
      (**(code **)(DAT_100a5140 + 4))
                (uVar2,&uStack_98,6,s_weapons_egon_run3_wav_100763d0,0x3f7ae148,0x3f4ccccd,0,0x7d);
      goto LAB_10006782;
    }
    uVar9 = 100;
    uVar8 = 0x3f666666;
    pcVar7 = s_weapons_egon_run3_wav_100763d0;
    uVar6 = 6;
  }
  else {
    if (*(int *)(param_1 + 0x3c) != 1) {
      (**(code **)(DAT_100a5140 + 4))
                (uVar2,&uStack_98,1,s_weapons_egon_windup2_wav_100763b4,0x3f666666,0x3f4ccccd,0,100)
      ;
      goto LAB_10006782;
    }
    uVar9 = 0x7d;
    uVar8 = 0x3f7ae148;
    pcVar7 = s_weapons_egon_windup2_wav_100763b4;
    uVar6 = 1;
  }
  (**(code **)(DAT_100a5140 + 4))(uVar2,&uStack_98,uVar6,pcVar7,uVar8,0x3f4ccccd,0,uVar9);
LAB_10006782:
  bVar3 = FUN_1001a780(uVar2);
  if (CONCAT31(extraout_var,bVar3) != 0) {
    puVar1 = (undefined4 *)(DAT_100a5140 + 0x40);
    iVar4 = (*DAT_100a5100)(0,3,1);
    (*(code *)*puVar1)(*(undefined4 *)(&DAT_10076468 + iVar4 * 4));
  }
  if (iVar5 == 1) {
    bVar3 = FUN_1001a780(uVar2);
    if ((((CONCAT31(extraout_var_00,bVar3) != 0) && (DAT_1007ee28 == 0)) && (_DAT_1007ee24 == 0)) &&
       (*(float *)(DAT_100a9584 + 0xc) != _DAT_10059a18)) {
      iVar5 = (*DAT_100a50c4)(uVar2);
      if (iVar5 != 0) {
        uStack_8c = DAT_100a3a84;
        uStack_88 = DAT_100a3a88;
        uStack_84 = DAT_100a3a8c;
        (*DAT_100a5050)(&uStack_8c,afStack_74,auStack_50,auStack_5c);
        FUN_1001a7a0(param_1,afStack_80,(float *)(iVar5 + 0xb48));
        FUN_100312c0(afStack_80,2048.0,afStack_74,afStack_68);
        (**(code **)(DAT_100a5140 + 0x28))(0,1);
        (**(code **)(DAT_100a5140 + 0x2c))();
        (**(code **)(DAT_100a5140 + 0x34))(uVar2 - 1);
        (**(code **)(DAT_100a5140 + 0x38))(2);
        (**(code **)(DAT_100a5140 + 0x3c))(afStack_80,afStack_68,2,0xffffffff,auStack_44);
        (**(code **)(DAT_100a5140 + 0x30))();
        uVar6 = (**(code **)(DAT_100a5140 + 0xc))(s_sprites_xbeam1_spr_100763a0);
        DAT_1007ee28 = (**(code **)(DAT_100a513c + 0xe4))
                                 (uVar2 | 0x1000,auStack_30,uVar6,0x47c34f80,0x40600000,0x3e4ccccd,
                                  0x3d99999a,0x40a00000,0,0x3e19999a,0x40a00000,0x40a00000,
                                  0x41cc0000);
        if (DAT_1007ee28 != 0) {
          *(uint *)(DAT_1007ee28 + 8) = *(uint *)(DAT_1007ee28 + 8) | 0x10;
        }
        _DAT_1007ee24 =
             (**(code **)(DAT_100a513c + 0xe4))
                       (uVar2 | 0x1000,auStack_30,uVar6,0x47c34f80,0x40a00000,0x3da3d70a,0x3dcccccd,
                        0x40200000,0,0x3e19999a,0x40a00000,0x40a00000,0x41cc0000);
      }
    }
  }
  return;
}

