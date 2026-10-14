
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* private: void __thiscall CTripmineGrenade::PowerupThink(void) */

void __thiscall CTripmineGrenade::PowerupThink(CTripmineGrenade *this)

{
  CTripmineGrenade *this_00;
  int iVar1;
  bool bVar2;
  undefined3 extraout_var;
  int iVar3;
  void *this_01;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  undefined1 local_38 [4];
  int local_34;
  float local_28;
  int local_8;
  
                    /* 0xaaba0  169  ?PowerupThink@CTripmineGrenade@@AAEXXZ */
  this_00 = this + 0x32c;
  bVar2 = FUN_10019450((uint *)this_00);
  if (CONCAT31(extraout_var,bVar2) == 0) {
    iVar3 = *(int *)(*(int *)(this + 4) + 0x198);
    *(undefined4 *)(*(int *)(this + 4) + 0x198) = 0;
    iVar1 = *(int *)(this + 4);
    local_3c = *(float *)(iVar1 + 0x10) - *(float *)(this + 0x318) * _DAT_100ddac8;
    local_40 = *(float *)(iVar1 + 0xc) - *(float *)(this + 0x314) * _DAT_100ddac8;
    local_44 = *(float *)(iVar1 + 8) - *(float *)(this + 0x310) * _DAT_100ddac8;
    local_48 = *(float *)(this + 0x318) * _DAT_100de45c + *(float *)(iVar1 + 0x10);
    local_4c = *(float *)(this + 0x314) * _DAT_100de45c + *(float *)(iVar1 + 0xc);
    local_50 = *(float *)(this + 0x310) * _DAT_100de45c + *(float *)(iVar1 + 8);
    FUN_100afc60(&local_50,&local_44,0,*(undefined4 *)(iVar1 + 0x208),local_38);
    if ((local_34 != 0) || ((iVar3 != 0 && (local_8 == iVar3)))) {
      *(int *)(*(int *)(this + 4) + 0x198) = iVar3;
      *(float *)(this + 0x30c) = *(float *)(this + 0x30c) + (float)_DAT_100dfb80;
      (**(code **)(*(int *)this + 8))(0x3dcccccd);
      return;
    }
    if ((float)_DAT_100dd628 <= local_28) {
      FUN_10094b20(*(void **)(this + 4),*(undefined4 *)((int)*(void **)(this + 4) + 0x208),2,
                   s_weapons_mine_deploy_wav_10119f64,0,0,0x20,100);
      FUN_10094b20(*(void **)(*(int *)(this + 4) + 0x208),*(void **)(*(int *)(this + 4) + 0x208),4,
                   s_weapons_mine_charge_wav_1010d054,0,0,0x20,100);
      *(code **)(this + 0x74) = CBaseEntity::SUB_Remove;
      (**(code **)(*(int *)this + 8))(0x3dcccccd);
      iVar3 = *(int *)(this + 4);
      (*DAT_10121efc)(1,s_WARNING_Tripmine_at___0f____0f____10119fb0,(double)*(float *)(iVar3 + 8),
                      (double)*(float *)(iVar3 + 0xc),(double)*(float *)(iVar3 + 0x10));
      FUN_100aafd0((int)this);
      return;
    }
    *(int *)(*(int *)(this + 4) + 0x198) = local_8;
    iVar3 = *(int *)(*(int *)(this + 4) + 0x198);
    if (iVar3 == 0) {
      iVar3 = (*DAT_10121f1c)(0);
      if (iVar3 != 0) goto LAB_100aacd6;
      iVar3 = 0;
    }
    else {
LAB_100aacd6:
      iVar3 = *(int *)(iVar3 + 0x7c);
    }
    FUN_10019420(this_00,iVar3);
    iVar3 = FUN_10019460((uint *)this_00);
    iVar3 = *(int *)(iVar3 + 4);
    *(undefined4 *)(this + 0x338) = *(undefined4 *)(iVar3 + 8);
    *(undefined4 *)(this + 0x33c) = *(undefined4 *)(iVar3 + 0xc);
    *(undefined4 *)(this + 0x340) = *(undefined4 *)(iVar3 + 0x10);
    iVar3 = FUN_10019460((uint *)this_00);
    iVar3 = *(int *)(iVar3 + 4);
    *(undefined4 *)(this + 0x344) = *(undefined4 *)(iVar3 + 0x50);
    *(undefined4 *)(this + 0x348) = *(undefined4 *)(iVar3 + 0x54);
    *(undefined4 *)(this + 0x34c) = *(undefined4 *)(iVar3 + 0x58);
  }
  else {
    iVar3 = FUN_10019460((uint *)this_00);
    iVar3 = *(int *)(iVar3 + 4);
    if (((*(float *)(this + 0x338) != *(float *)(iVar3 + 8)) ||
        (*(float *)(this + 0x33c) != *(float *)(iVar3 + 0xc))) ||
       (*(float *)(this + 0x340) != *(float *)(iVar3 + 0x10))) {
LAB_100aaef1:
      FUN_10094b20(*(void **)(*(int *)(this + 4) + 0x208),*(void **)(*(int *)(this + 4) + 0x208),2,
                   s_weapons_mine_deploy_wav_10119f64,0,0,0x20,100);
      FUN_10094b20(this_01,*(undefined4 *)(*(int *)(this + 4) + 0x208),4,
                   s_weapons_mine_charge_wav_1010d054,0,0,0x20,100);
      iVar3 = *(int *)(this + 4);
      local_3c = *(float *)(this + 0x318) * _DAT_100e0ed0 + *(float *)(iVar3 + 0x10);
      local_40 = *(float *)(this + 0x314) * _DAT_100e0ed0 + *(float *)(iVar3 + 0xc);
      local_44 = *(float *)(this + 0x310) * _DAT_100e0ed0 + *(float *)(iVar3 + 8);
      iVar3 = FUN_1001a1f0(0x10108af8,&local_44,(undefined4 *)(iVar3 + 0x50),0);
      *(uint *)(*(int *)(iVar3 + 4) + 0x1a0) = *(uint *)(*(int *)(iVar3 + 4) + 0x1a0) | 0x40000000;
      *(code **)(this + 0x74) = CBaseEntity::SUB_Remove;
      FUN_100aafd0((int)this);
      goto LAB_100aafb4;
    }
    iVar3 = FUN_10019460((uint *)this_00);
    iVar3 = *(int *)(iVar3 + 4);
    if (((*(float *)(this + 0x344) != *(float *)(iVar3 + 0x50)) ||
        (*(float *)(this + 0x348) != *(float *)(iVar3 + 0x54))) ||
       (*(float *)(this + 0x34c) != *(float *)(iVar3 + 0x58))) goto LAB_100aaef1;
  }
  if (*(float *)(this + 0x30c) < *DAT_10122044) {
    *(undefined4 *)(*(int *)(this + 4) + 0x10c) = 2;
    FUN_100afe10((int)this,*(int *)(this + 4) + 8);
    FUN_100ab000((int *)this);
    FUN_10094b20(*(void **)(*(int *)(this + 4) + 0x208),*(void **)(*(int *)(this + 4) + 0x208),2,
                 s_weapons_mine_activate_wav_10119f94,0x3f000000,0x3f4ccccd,1,0x4b);
    (**(code **)(*(int *)this + 8))(0x3dcccccd);
    return;
  }
LAB_100aafb4:
  (**(code **)(*(int *)this + 8))(0x3dcccccd);
  return;
}

