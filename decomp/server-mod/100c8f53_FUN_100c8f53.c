
undefined4 __cdecl FUN_100c8f53(FILE *param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0xffffffff;
  if ((param_1->_flag & 0x40) == 0) {
    FUN_100cf974((uint)param_1);
    uVar1 = __fclose_lk(param_1);
    FUN_100cf9c6((uint)param_1);
  }
  else {
    param_1->_flag = 0;
  }
  return uVar1;
}

