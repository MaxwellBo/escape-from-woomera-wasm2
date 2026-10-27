
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_1003ebc0(void *this,float param_1,float param_2)

{
  float10 fVar1;
  
  if (_DAT_100de530 <= param_2) {
    if (_DAT_100ddaec < param_2) {
      param_2 = param_2 - _DAT_100ddae8;
    }
  }
  else {
    param_2 = param_2 + _DAT_100ddae8;
  }
  if (_DAT_100ddb0c <= param_2) {
    if (_DAT_100ddb08 < param_2) {
      param_2 = 45.0;
    }
  }
  else {
    param_2 = -45.0;
  }
  fVar1 = FUN_100afec0(param_1,*(undefined4 *)((int)this + 0x330),4.0);
  *(float *)((int)this + 0x330) = (float)fVar1;
  fVar1 = FUN_100afec0(param_2,*(undefined4 *)((int)this + 0x334),8.0);
  *(float *)((int)this + 0x334) = (float)fVar1;
  FUN_10008360(this,0,(float)fVar1);
  FUN_10008360(this,1,*(float *)((int)this + 0x330));
  return;
}

