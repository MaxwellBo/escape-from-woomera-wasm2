
/* public: void __thiscall CBaseTurret::AutoSearchThink(void) */

void __thiscall CBaseTurret::AutoSearchThink(CBaseTurret *this)

{
  CBaseTurret *this_00;
  bool bVar1;
  undefined3 extraout_var;
  int *piVar2;
  int iVar3;
  undefined3 extraout_var_00;
  undefined3 extraout_var_01;
  
                    /* 0xad500  14  ?AutoSearchThink@CBaseTurret@@QAEXXZ */
  FUN_10007fc0((int)this,0.0);
  (**(code **)(*(int *)this + 8))(0x3e99999a);
  this_00 = this + 0x160;
  bVar1 = FUN_10019450((uint *)this_00);
  if (CONCAT31(extraout_var,bVar1) != 0) {
    piVar2 = (int *)FUN_10019460((uint *)this_00);
    iVar3 = (**(code **)(*piVar2 + 0xb8))();
    if (iVar3 == 0) {
      FUN_10019420(this_00,0);
    }
  }
  bVar1 = FUN_10019450((uint *)this_00);
  if (CONCAT31(extraout_var_00,bVar1) == 0) {
    (**(code **)(*(int *)this + 0x11c))(0x4b0);
    iVar3 = (**(code **)(*(int *)this + 0x144))();
    FUN_10019420(this_00,iVar3);
  }
  bVar1 = FUN_10019450((uint *)this_00);
  if (CONCAT31(extraout_var_01,bVar1) != 0) {
    *(code **)(this + 0x74) = Deploy;
    FUN_10094b20(*(void **)(*(int *)(this + 4) + 0x208),*(void **)(*(int *)(this + 4) + 0x208),4,
                 s_turret_tu_alert_wav_1011a2f0,0x3f000000,0x3f4ccccd,0,100);
  }
  return;
}

