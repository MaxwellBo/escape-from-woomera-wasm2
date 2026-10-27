
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: void __thiscall CBaseTurret::Initialize(void) */

void __thiscall CBaseTurret::Initialize(CBaseTurret *this)

{
  float fVar1;
  int iVar2;
  
                    /* 0xac590  133  ?Initialize@CBaseTurret@@QAEXXZ */
  *(undefined4 *)(this + 0x330) = 0;
  *(undefined4 *)(this + 0x334) = 0;
  *(undefined4 *)(this + 0x30c) = 0;
  FUN_10008360(this,0,0.0);
  FUN_10008360(this,1,0.0);
  if (*(int *)(this + 0x324) == 0) {
    *(undefined4 *)(this + 0x324) = 0x1e;
  }
  if (*(float *)(this + 0x34c) == _DAT_100dd5f8) {
    *(undefined4 *)(this + 0x34c) = 0x41700000;
  }
  *(undefined4 *)(this + 0x354) = *(undefined4 *)(*(int *)(this + 4) + 0x54);
  if (*(int *)(this + 0x32c) == 1) {
    *(undefined4 *)(*(int *)(this + 4) + 0xa4) = 0x43340000;
    *(undefined4 *)(*(int *)(this + 4) + 0x50) = 0x43340000;
    *(float *)(*(int *)(this + 4) + 0x17c) = -*(float *)(*(int *)(this + 4) + 0x17c);
    *(uint *)(*(int *)(this + 4) + 0x118) = *(uint *)(*(int *)(this + 4) + 0x118) | 0x10;
    *(float *)(*(int *)(this + 4) + 0x54) = *(float *)(*(int *)(this + 4) + 0x54) + _DAT_100ddaec;
    iVar2 = *(int *)(this + 4);
    if (_DAT_100ddae8 < *(float *)(iVar2 + 0x54)) {
      *(float *)(iVar2 + 0x54) = *(float *)(iVar2 + 0x54) - _DAT_100ddae8;
    }
  }
  *(undefined4 *)(this + 0x364) = 0;
  if (*(int *)(this + 0x338) != 0) {
    fVar1 = *DAT_10122044;
    *(code **)(this + 0x74) = AutoSearchThink;
    *(float *)(this + 0x348) = *(float *)(this + 0x34c) + fVar1;
    (**(code **)(*(int *)this + 8))(0x3dcccccd);
    return;
  }
  *(code **)(this + 0x74) = CBaseEntity::SUB_DoNothing;
  return;
}

