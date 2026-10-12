
undefined4 * __thiscall FUN_100bff60(void *this,byte param_1)

{
  *(undefined ***)this = &PTR_FUN_100f74c4;
  if (*(undefined4 **)((int)this + 4) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)((int)this + 4))(1);
  }
  *(undefined ***)this = &PTR_LAB_100f74dc;
  if ((param_1 & 1) != 0) {
    FUN_100c8ce6(this);
  }
  return this;
}

