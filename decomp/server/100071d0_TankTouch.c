
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* private: void __thiscall CAirtank::TankTouch(class CBaseEntity *) */

void __thiscall CAirtank::TankTouch(CAirtank *this,CBaseEntity *param_1)

{
  void *this_00;
  int iVar1;
  
                    /* 0x71d0  238  ?TankTouch@CAirtank@@AAEXPAVCBaseEntity@@@Z */
  iVar1 = (**(code **)(*(int *)param_1 + 0xcc))();
  if (iVar1 != 0) {
    if (*(int *)(this + 0x30c) == 0) {
      FUN_10094b20(*(void **)(this + 4),*(undefined4 *)((int)*(void **)(this + 4) + 0x208),4,
                   s_player_pl_swim2_wav_10101dc8,0x3f800000,0x3f4ccccd,0,100);
      return;
    }
    this_00 = *(void **)(param_1 + 4);
    *(float *)((int)this_00 + 0x1fc) = *DAT_10122044 + _DAT_100dd624;
    FUN_10094b20(this_00,*(undefined4 *)(*(int *)(this + 4) + 0x208),2,
                 s_doors_aliendoor3_wav_10101db0,0x3f800000,0x3f4ccccd,0,100);
    (**(code **)(*(int *)this + 8))(0x41f00000);
    *(undefined4 *)(this + 0x30c) = 0;
    FUN_10098e40(this,(int *)this,3,0x3f800000);
  }
  return;
}

