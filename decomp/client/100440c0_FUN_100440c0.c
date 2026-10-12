
void __thiscall FUN_100440c0(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  *(undefined4 *)((int)this + 0x120) = param_1;
  *(undefined4 *)((int)this + 0x124) = param_2;
  *(undefined4 *)((int)this + 0x128) = param_3;
  *(undefined ***)this = &PTR_FUN_10064d90;
  return;
}

