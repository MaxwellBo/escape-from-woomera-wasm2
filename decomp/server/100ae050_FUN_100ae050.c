
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_100ae050(void *this,undefined4 param_1,undefined4 param_2,float param_3)

{
  if (*(float *)(*(int *)((int)this + 4) + 0x16c) == _DAT_100dd5f8) {
    return 0;
  }
  if (*(int *)((int)this + 0x330) == 0) {
    *(code **)((int)this + 0x74) = CBaseTurret::Deploy;
    *(undefined4 *)((int)this + 0x7c) = 0;
    (**(code **)(*(int *)this + 8))(0x3dcccccd);
  }
  *(float *)(*(int *)((int)this + 4) + 0x160) =
       *(float *)(*(int *)((int)this + 4) + 0x160) - param_3;
  if (*(float *)(*(int *)((int)this + 4) + 0x160) <= _DAT_100dd5f8) {
    *(undefined4 *)(*(int *)((int)this + 4) + 0x160) = 0;
    *(undefined4 *)(*(int *)((int)this + 4) + 0x16c) = 0;
    *(undefined4 *)(*(int *)((int)this + 4) + 0x1e4) = *DAT_10122044;
    *(uint *)(*(int *)((int)this + 4) + 0x1a4) =
         *(uint *)(*(int *)((int)this + 4) + 0x1a4) & 0xffffffdf;
    *(undefined4 *)((int)this + 0x7c) = 0;
    *(code **)((int)this + 0x74) = CSentry::SentryDeath;
    FUN_10098e40(this,this,1,0);
    (**(code **)(*(int *)this + 8))(0x3dcccccd);
    return 0;
  }
  return 1;
}

