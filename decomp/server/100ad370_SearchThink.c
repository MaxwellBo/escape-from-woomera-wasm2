
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: void __thiscall CBaseTurret::SearchThink(void) */

void __thiscall CBaseTurret::SearchThink(CBaseTurret *this)

{
  CBaseTurret *this_00;
  float fVar1;
  bool bVar2;
  undefined3 extraout_var;
  int *piVar3;
  int iVar4;
  undefined3 extraout_var_00;
  undefined3 extraout_var_01;
  
                    /* 0xad370  196  ?SearchThink@CBaseTurret@@QAEXXZ */
  FUN_100ad2f0(this,2);
  FUN_10007fc0((int)this,0.0);
  (**(code **)(*(int *)this + 8))(0x3dcccccd);
  if ((*(float *)(this + 0x374) == _DAT_100dd5f8) && (*(float *)(this + 0x308) != _DAT_100dd5f8)) {
    *(float *)(this + 0x374) = *(float *)(this + 0x308) + *DAT_10122044;
  }
  (**(code **)(*(int *)this + 0x234))();
  this_00 = this + 0x160;
  bVar2 = FUN_10019450((uint *)this_00);
  if (CONCAT31(extraout_var,bVar2) != 0) {
    piVar3 = (int *)FUN_10019460((uint *)this_00);
    iVar4 = (**(code **)(*piVar3 + 0xb8))();
    if (iVar4 == 0) {
      FUN_10019420(this_00,0);
    }
  }
  bVar2 = FUN_10019450((uint *)this_00);
  if (CONCAT31(extraout_var_00,bVar2) == 0) {
    (**(code **)(*(int *)this + 0x11c))(0x4b0);
    iVar4 = (**(code **)(*(int *)this + 0x144))();
    FUN_10019420(this_00,iVar4);
  }
  bVar2 = FUN_10019450((uint *)this_00);
  if (CONCAT31(extraout_var_01,bVar2) != 0) {
    *(undefined4 *)(this + 0x348) = 0;
    *(undefined4 *)(this + 0x374) = 0;
    *(code **)(this + 0x74) = ActiveThink;
    return;
  }
  if (*DAT_10122044 <= *(float *)(this + 0x348)) {
    if ((*(float *)(this + 0x374) != _DAT_100dd5f8) && (*(float *)(this + 0x374) < *DAT_10122044)) {
      (**(code **)(*(int *)this + 0x22c))();
    }
  }
  else {
    *(undefined4 *)(this + 0x348) = 0;
    *(undefined4 *)(this + 0x374) = 0;
    *(code **)(this + 0x74) = Retire;
  }
  fVar1 = *(float *)(this + 0x328) * (float)_DAT_100dfb80 + *(float *)(this + 0x368);
  *(float *)(this + 0x368) = fVar1;
  if (_DAT_100ddae8 <= fVar1) {
    *(float *)(this + 0x368) = fVar1 - _DAT_100ddae8;
    FUN_100adab0(this);
    return;
  }
  FUN_100adab0(this);
  return;
}

