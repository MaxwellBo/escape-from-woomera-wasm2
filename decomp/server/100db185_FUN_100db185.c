
undefined4 * __thiscall FUN_100db185(void *this,undefined4 param_1)

{
  FUN_100dbedb(this);
  *(undefined4 *)((int)this + 0x50) = 0;
  *(undefined4 *)((int)this + 0x4c) = param_1;
  *(undefined ***)this = &PTR_FUN_100fa5c0;
  return this;
}

