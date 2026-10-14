
void __thiscall FUN_100c2480(void *this,undefined *param_1)

{
  if (param_1 != (undefined *)0x0) {
    if (param_1 == *(undefined **)((int)this + 0x2c)) {
      *(undefined4 *)((int)this + 0x2c) = 0;
    }
    if (*(int *)(param_1 + 0x14) != 0) {
      FUN_100c2580(*(undefined **)(param_1 + 4));
    }
    FUN_100c2580(param_1);
  }
  return;
}

