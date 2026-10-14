
uint __thiscall FUN_10052783(void *this,uint param_1)

{
  uint uVar1;
  
  if (DAT_1007bcf4 < 2) {
    uVar1 = (byte)PTR_DAT_1007bae8[param_1 * 2] & 4;
  }
  else {
    uVar1 = FUN_1004b6c6(this,param_1,4);
  }
  if (uVar1 == 0) {
    param_1 = (param_1 & 0xffffffdf) - 7;
  }
  return param_1;
}

