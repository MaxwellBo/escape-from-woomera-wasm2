
void __thiscall FUN_100099e0(void *this,CBaseEntity *param_1)

{
  undefined1 uVar1;
  undefined3 extraout_var;
  int iVar2;
  CBasePlayerItem *extraout_ECX;
  CBasePlayerItem *this_00;
  CBasePlayerItem *extraout_ECX_00;
  CBasePlayerItem *this_01;
  CBasePlayerItem *this_02;
  CBasePlayerItem *this_03;
  
  CBasePlayerAmmo::DefaultTouch(this,param_1);
  uVar1 = FUN_10044880();
  this_01 = extraout_ECX;
  if (CONCAT31(extraout_var,uVar1) == 0) {
    iVar2 = (**(code **)(*(int *)param_1 + 0xcc))();
    this_01 = this_00;
    if ((iVar2 != 0) && (param_1 != (CBaseEntity *)0x0)) {
      CBasePlayerItem::AttemptToMaterialize(this_00);
      this_01 = extraout_ECX_00;
    }
  }
  CBasePlayerItem::AttemptToMaterialize(this_01);
  CBasePlayerItem::AttemptToMaterialize(this_02);
  CBasePlayerItem::AttemptToMaterialize(this_03);
  return;
}

