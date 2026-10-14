
undefined4 __thiscall FUN_1001a170(void *this,int param_1)

{
  undefined4 uVar1;
  
  uVar1 = (**(code **)(*(int *)this + 0x58))();
  if ((param_1 != 3) && (param_1 != 2)) {
    switch(uVar1) {
    case 0:
    case 3:
      if (param_1 == 0) {
        return 0;
      }
      break;
    case 1:
    case 2:
      if (param_1 == 1) {
        return 0;
      }
    }
  }
  return 1;
}

