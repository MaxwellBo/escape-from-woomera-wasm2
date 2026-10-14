
/* public: void __thiscall CBaseTurret::Retire(void) */

void __thiscall CBaseTurret::Retire(CBaseTurret *this)

{
  int iVar1;
  
                    /* 0xacfd0  182  ?Retire@CBaseTurret@@QAEXXZ */
  *(undefined4 *)(this + 0x364) = 0;
  *(undefined4 *)(this + 0x368) = *(undefined4 *)(this + 0x354);
  (**(code **)(*(int *)this + 8))(0x3dcccccd);
  FUN_10007fc0((int)this,0.0);
  (**(code **)(*(int *)this + 0x23c))();
  iVar1 = FUN_100adab0(this);
  if (iVar1 == 0) {
    if (*(int *)(this + 0x30c) != 0) {
      (**(code **)(*(int *)this + 0x22c))();
      return;
    }
    if (*(int *)(*(int *)(this + 4) + 0x128) != 4) {
      FUN_100ad2f0(this,4);
      FUN_10094b20(*(void **)(this + 4),*(undefined4 *)((int)*(void **)(this + 4) + 0x208),4,
                   s_turret_tu_deploy_wav_1011a34c,0x3f000000,0x3f4ccccd,0,0x78);
      FUN_10098e40(this,(int *)this,0,0);
      return;
    }
    if (*(int *)(this + 0xd4) != 0) {
      *(undefined4 *)(this + 0x330) = 0;
      *(undefined4 *)(this + 0x348) = 0;
      FUN_100ad2f0(this,0);
      *(float *)(*(int *)(this + 4) + 0xf0) = (float)*(int *)(this + 0x31c);
      *(float *)(*(int *)(this + 4) + 0xe4) = (float)-*(int *)(this + 0x31c);
      iVar1 = *(int *)(this + 4);
      FUN_100afdc0(iVar1,iVar1 + 0xdc,iVar1 + 0xe8);
      if (*(int *)(this + 0x338) != 0) {
        *(code **)(this + 0x74) = AutoSearchThink;
        (**(code **)(*(int *)this + 8))(0x3dcccccd);
        return;
      }
      *(code **)(this + 0x74) = CBaseEntity::SUB_DoNothing;
      return;
    }
  }
  else {
    FUN_100ad2f0(this,2);
  }
  return;
}

