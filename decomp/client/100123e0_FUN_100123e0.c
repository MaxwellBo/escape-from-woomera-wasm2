
void __fastcall FUN_100123e0(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  void *pvStack_c;
  code *pcStack_8;
  uint local_4;
  
  pcStack_8 = FUN_100578b6;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_1005e588;
  param_1[5] = &PTR_FUN_1005e55c;
  local_4 = 1;
  DAT_100a0444 = 0;
  puVar2 = param_1 + 0x6401;
  iVar1 = 7;
  do {
    FUN_10049a73((undefined *)puVar2[-2]);
    puVar2[-2] = 0;
    FUN_10049a73((undefined *)*puVar2);
    *puVar2 = 0;
    FUN_10049a73((undefined *)puVar2[-1]);
    puVar2[-1] = 0;
    puVar2 = puVar2 + 4;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  FUN_10049a73((undefined *)param_1[0x5dfc]);
  param_1[0x5dfc] = 0;
  FUN_100136b0((int)param_1);
  iVar1 = (*DAT_100a510c)();
  if ((iVar1 != 0) && (*(char *)(param_1 + 0x63fe) != '\0')) {
    (*DAT_100a510c)();
    FUN_10011f00((char *)(param_1 + 0x5dfe));
  }
  local_4 = local_4 & 0xffffff00;
  thunk_FUN_10011ec0((undefined *)(param_1 + 0x5dfe));
  *param_1 = &PTR_LAB_1005e5d4;
  ExceptionList = pvStack_c;
  return;
}

