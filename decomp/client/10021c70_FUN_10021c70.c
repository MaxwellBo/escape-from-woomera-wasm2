
uint __thiscall
FUN_10021c70(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  int *piVar2;
  
  uVar1 = 0;
  piVar2 = (int *)((int)this + 0x154);
  do {
    if (*piVar2 == 0) {
      *(undefined4 *)((int)this + uVar1 * 0x10 + 0x154) = param_2;
      *(undefined4 *)((uVar1 + 0x15) * 0x10 + (int)this) = param_1;
      *(undefined4 *)((int)this + uVar1 * 0x10 + 0x158) = param_3;
      *(undefined4 *)((int)this + uVar1 * 0x10 + 0x15c) = param_4;
      return CONCAT31((int3)((uint)param_3 >> 8),1);
    }
    uVar1 = uVar1 + 1;
    piVar2 = piVar2 + 4;
  } while ((int)uVar1 < 0x80);
  return uVar1 & 0xffffff00;
}

