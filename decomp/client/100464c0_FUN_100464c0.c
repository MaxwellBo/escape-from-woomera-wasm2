
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * __thiscall
FUN_100464c0(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)

{
  float fVar1;
  float10 fVar2;
  
  *(undefined1 *)((int)this + 0x24) = 1;
  *(undefined4 *)this = param_1;
  *(undefined4 *)((int)this + 4) = param_2;
  *(undefined4 *)((int)this + 0x18) = param_4;
  *(undefined4 *)((int)this + 8) = param_3;
  fVar1 = (float)DAT_100a4dd0;
  *(undefined4 *)((int)this + 0x1c) = 0x41200000;
  fVar1 = fVar1 - _DAT_10064f94;
  *(undefined4 *)((int)this + 0xc) = 0x41700000;
  *(float *)((int)this + 0x10) = fVar1 + _DAT_1005c370;
  *(undefined4 *)((int)this + 0x14) = param_3;
  fVar2 = FUN_10044870();
  *(float *)((int)this + 0x28) = (float)fVar2;
  *(undefined4 *)((int)this + 0x20) = param_5;
  return this;
}

