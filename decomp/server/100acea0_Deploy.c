
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: void __thiscall CBaseTurret::Deploy(void) */

void __thiscall CBaseTurret::Deploy(CBaseTurret *this)

{
  int iVar1;
  void *this_00;
  float10 fVar2;
  float fVar3;
  
                    /* 0xacea0  66  ?Deploy@CBaseTurret@@QAEXXZ */
  (**(code **)(*(int *)this + 8))(0x3dcccccd);
  FUN_10007fc0((int)this,0.0);
  if (*(int *)(*(int *)(this + 4) + 0x128) != 3) {
    *(undefined4 *)(this + 0x330) = 1;
    FUN_100ad2f0(this,3);
    FUN_10094b20(this_00,*(undefined4 *)(*(int *)(this + 4) + 0x208),4,
                 s_turret_tu_deploy_wav_1011a34c,0x3f000000,0x3f4ccccd,0,100);
    FUN_10098e40(this,(int *)this,1,0);
  }
  if (*(int *)(this + 0xd4) != 0) {
    *(float *)(*(int *)(this + 4) + 0xf0) = (float)*(int *)(this + 0x318);
    *(float *)(*(int *)(this + 4) + 0xe4) = (float)-*(int *)(this + 0x318);
    iVar1 = *(int *)(this + 4);
    FUN_100afdc0(iVar1,iVar1 + 0xdc,iVar1 + 0xe8);
    *(undefined4 *)(this + 0x358) = 0;
    if (*(int *)(this + 0x32c) == 1) {
      fVar3 = *(float *)(*(int *)(this + 4) + 0x54) + _DAT_100ddaec;
    }
    else {
      fVar3 = *(float *)(*(int *)(this + 4) + 0x54);
    }
    fVar2 = FUN_100ae770(fVar3);
    *(float *)(this + 0x35c) = (float)fVar2;
    FUN_100ad2f0(this,2);
    *(undefined4 *)(*(int *)(this + 4) + 0x138) = 0;
    *(code **)(this + 0x74) = SearchThink;
  }
  *(float *)(this + 0x348) = *(float *)(this + 0x34c) + *DAT_10122044;
  return;
}

