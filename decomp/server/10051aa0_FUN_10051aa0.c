
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_10051aa0(void *this,int *param_1)

{
  switch(*param_1) {
  case 0x1c:
    if (*(float *)((int)this + 0x330) <= _DAT_100ddaf4) {
      *(undefined4 *)((int)this + 0x33c) = 1;
      FUN_100057f0(this,param_1);
      return;
    }
    *(undefined4 *)((int)this + 0x348) = 0x44000000;
    *(undefined4 *)((int)this + 0x330) = 0x44000000;
    break;
  case 0x5d:
  case 0x5e:
    return;
  case 0x5f:
    *(undefined4 *)(*(int *)((int)this + 4) + 0x110) = 1;
    FUN_1005e1e0(this,(byte *)s_bellyup_1010f82c);
    return;
  }
  FUN_100057f0(this,param_1);
  return;
}

