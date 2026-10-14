
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_10035c30(void *this,float param_1)

{
  int iVar1;
  float10 fVar2;
  undefined4 local_8;
  
  if (*(int *)(*(int *)((int)this + 4) + 0x108) == 5) {
    fVar2 = FUN_10060350((int)this);
    local_8 = 0.0;
    iVar1 = (**(code **)(*(int *)this + 0x160))();
    if (*(int *)((int)this + 0x1d0) != iVar1) {
      if (_DAT_100e45b0 <= (float)fVar2) {
        if (_DAT_100ddacc < (float)fVar2) {
          local_8 = -90.0;
        }
      }
      else {
        local_8 = 90.0;
      }
    }
    fVar2 = FUN_100afe80(local_8,*(float *)(*(int *)((int)this + 4) + 0x58),
                         *(float *)(DAT_10122044 + 4) * (float)_DAT_100e45a8);
    *(float *)(*(int *)((int)this + 4) + 0x58) = (float)fVar2;
  }
  FUN_100603b0(this,param_1);
  return;
}

