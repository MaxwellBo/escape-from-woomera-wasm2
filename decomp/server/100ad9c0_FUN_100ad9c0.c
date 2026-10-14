
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_100ad9c0(void *this,undefined4 param_1,undefined4 param_2,float param_3)

{
  int iVar1;
  
  iVar1 = *(int *)((int)this + 4);
  if (*(float *)(iVar1 + 0x16c) == _DAT_100dd5f8) {
    return 0;
  }
  if (*(int *)((int)this + 0x330) == 0) {
    param_3 = param_3 * (float)_DAT_100dfb80;
  }
  *(float *)(iVar1 + 0x160) = *(float *)(iVar1 + 0x160) - param_3;
  iVar1 = *(int *)((int)this + 4);
  if (_DAT_100dd5f8 < *(float *)(iVar1 + 0x160)) {
    if ((*(float *)(iVar1 + 0x160) <= _DAT_100dd63c) && (*(int *)((int)this + 0x330) != 0)) {
      *(undefined4 *)((int)this + 0x334) = 1;
      *(code **)((int)this + 0x74) = CBaseTurret::SearchThink;
    }
    return 1;
  }
  *(undefined4 *)(iVar1 + 0x160) = 0;
  *(undefined4 *)(*(int *)((int)this + 4) + 0x16c) = 0;
  *(undefined4 *)(*(int *)((int)this + 4) + 0x1e4) = *DAT_10122044;
  *(uint *)(*(int *)((int)this + 4) + 0x1a4) =
       *(uint *)(*(int *)((int)this + 4) + 0x1a4) & 0xffffffdf;
  *(undefined4 *)((int)this + 0x7c) = 0;
  *(code **)((int)this + 0x74) = CBaseTurret::TurretDeath;
  FUN_10098e40(this,this,1,0);
  (**(code **)(*(int *)this + 8))(0x3dcccccd);
  return 0;
}

