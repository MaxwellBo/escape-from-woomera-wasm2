
Panel * __cdecl
FUN_10034af0(undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4,int param_5,
            int param_6,int param_7,int param_8)

{
  void *this;
  Panel *pPVar1;
  void *local_c;
  code *pcStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  pcStack_8 = FUN_10057b5b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  this = operator_new(0xd8);
  local_4 = 0;
  if (this != (void *)0x0) {
    pPVar1 = FUN_10034b80(this,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
    ExceptionList = local_c;
    return pPVar1;
  }
  ExceptionList = local_c;
  return (Panel *)0x0;
}

