
void __fastcall FUN_10046240(void *param_1)

{
  char cVar1;
  undefined4 *puVar2;
  undefined1 local_1c [4];
  undefined4 *local_18;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_100583f8;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_10045aa0(param_1,local_1c,(int)param_1 + 0x28);
  local_4 = 0;
  puVar2 = local_18;
  if (local_18 == (undefined4 *)0x0) {
    puVar2 = &DAT_10064d30;
  }
  (*DAT_100a503c)(puVar2);
  if (local_18 != (undefined4 *)0x0) {
    cVar1 = *(char *)((int)local_18 + -1);
    if ((cVar1 != '\0') && (cVar1 != -1)) {
      *(char *)((int)local_18 + -1) = cVar1 + -1;
      ExceptionList = pvStack_c;
      return;
    }
    FUN_10049a73((undefined *)((int)local_18 + -1));
  }
  ExceptionList = pvStack_c;
  return;
}

