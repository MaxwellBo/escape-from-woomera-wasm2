
void __fastcall FUN_10053670(void *param_1)

{
  bool bVar1;
  undefined3 extraout_var;
  
  bVar1 = FUN_10019450((uint *)((int)param_1 + 0x160));
  if (CONCAT31(extraout_var,bVar1) != 0) {
    FUN_100945d0(*(undefined4 *)(*(int *)((int)param_1 + 4) + 0x208),(byte *)s_SLV_ALERT_1010f9a0);
    FUN_10053580(param_1,s_monster_alien_slave_1010f98c,512.0,*(uint *)((int)param_1 + 0x160),
                 *(undefined4 *)((int)param_1 + 0x164),(undefined4 *)((int)param_1 + 0x2a8));
  }
  return;
}

