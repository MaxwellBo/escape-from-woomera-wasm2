
void __cdecl FUN_1004d695(int param_1)

{
  undefined *UNRECOVERED_JUMPTABLE;
  void *local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_100659c0;
  puStack_10 = &LAB_10051364;
  local_14 = ExceptionList;
  if ((param_1 != 0) &&
     (UNRECOVERED_JUMPTABLE = *(undefined **)(*(int *)(param_1 + 0x1c) + 4),
     UNRECOVERED_JUMPTABLE != (undefined *)0x0)) {
    local_8 = 0;
    ExceptionList = &local_14;
    FUN_10049cff(*(undefined4 *)(param_1 + 0x18),UNRECOVERED_JUMPTABLE);
  }
  ExceptionList = local_14;
  return;
}

