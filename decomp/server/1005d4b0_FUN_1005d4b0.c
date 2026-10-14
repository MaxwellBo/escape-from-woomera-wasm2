
void __thiscall FUN_1005d4b0(void *this,undefined4 param_1,undefined4 param_2,undefined4 *param_3)

{
  *(undefined4 *)((int)this + 0x274) = param_2;
  *(undefined4 *)((int)this + 0x284) = param_1;
  *(undefined4 *)((int)this + 0x26c) = 0x40;
  *(undefined4 *)((int)this + 0x278) = *param_3;
  *(undefined4 *)((int)this + 0x27c) = param_3[1];
  *(undefined4 *)((int)this + 0x280) = param_3[2];
  FUN_1005d300(this);
  return;
}

