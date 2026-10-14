
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_1009b420(void *this,float *param_1)

{
  int iVar1;
  float10 fVar2;
  
  if ((*(uint *)((int)this + 0x2b8) & 0x400) != 0) {
    iVar1 = *(int *)((int)this + 4);
    fVar2 = FUN_10060520((int)this,*param_1 - *(float *)(iVar1 + 8),
                         param_1[1] - *(float *)(iVar1 + 0xc),param_1[2] - *(float *)(iVar1 + 0x10))
    ;
    fVar2 = fVar2 - (float10)*(float *)(*(int *)((int)this + 4) + 0x54);
    param_1 = (float *)(float)fVar2;
    if ((float10)_DAT_100ddaec < fVar2) {
      param_1 = (float *)((float)param_1 - _DAT_100ddae8);
    }
    if ((float)param_1 < _DAT_100de530) {
      param_1 = (float *)((float)param_1 + _DAT_100ddae8);
    }
    FUN_10008360(this,0,(float)param_1);
  }
  return;
}

