
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_1003aa80(void *this,float *param_1,float param_2)

{
  float10 fVar1;
  float10 fVar2;
  
  if ((*(float *)((int)this + 0x108) != _DAT_100dd5f8) ||
     (*(float *)((int)this + 0x10c) != _DAT_100dd5f8)) {
    fVar1 = (float10)param_2 - (float10)*(float *)((int)this + 0x10c);
    fVar1 = fVar1 * fVar1;
    if (*(float *)((int)this + 0x108) != _DAT_100dd5f8) {
      fVar2 = (float10)fpatan((float10)*(float *)((int)this + 0x108),
                              SQRT(fVar1 - (float10)*(float *)((int)this + 0x108) *
                                           (float10)*(float *)((int)this + 0x108)));
      param_1[1] = (float)(fVar2 * (float10)_DAT_100e4918 + (float10)param_1[1]);
    }
    if (*(float *)((int)this + 0x10c) != _DAT_100dd5f8) {
      fVar1 = (float10)fpatan(-(float10)*(float *)((int)this + 0x10c),
                              SQRT(fVar1 - (float10)*(float *)((int)this + 0x10c) *
                                           (float10)*(float *)((int)this + 0x10c)));
      *param_1 = (float)(fVar1 * (float10)_DAT_100e4918 + (float10)*param_1);
    }
  }
  return;
}

