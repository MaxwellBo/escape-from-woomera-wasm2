
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined ** __thiscall FUN_100487d0(void *this,undefined4 param_1)

{
  undefined **ppuVar1;
  
  switch(param_1) {
  case 8:
    if (*(int *)((int)this + 0x1d8) == 2) {
      return &PTR_DAT_1010d948;
    }
    break;
  case 0xc:
    return &PTR_DAT_1010d978;
  case 0x12:
    if (_DAT_100de4f8 < *(float *)(*(int *)((int)this + 4) + 0x160)) {
      return &PTR_DAT_1010d858;
    }
    return &PTR_DAT_1010d8c0;
  case 0x13:
    return &PTR_DAT_1010d910;
  case 0x16:
    if ((*(uint *)(*(int *)((int)this + 4) + 0x1a4) & 0x200) != 0) {
      if (*DAT_10122044 < *(float *)((int)this + 0x310)) {
        return &PTR_DAT_1010d7c8;
      }
      return &PTR_DAT_1010d9a8;
    }
  case 0x2c:
  case 0x2d:
    return &PTR_DAT_1010d9d0;
  case 0x29:
    if (*(int *)((int)this + 0x1d8) == 2) {
      return &PTR_DAT_1010d7c8;
    }
    break;
  case 0x2b:
    return &PTR_DAT_1010d800;
  case 0x2e:
    return &PTR_DAT_1010da38;
  }
  ppuVar1 = FUN_10026300(this,param_1);
  return ppuVar1;
}

