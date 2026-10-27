
uint * __cdecl FUN_100575ae(uint *param_1)

{
  char cVar1;
  size_t _Size;
  int iVar2;
  uint *puVar3;
  bool bVar4;
  LPWSTR local_c;
  
  local_c = (LPWSTR)0x0;
  if (DAT_100bcb04 == 0) {
    cVar1 = (char)*param_1;
    puVar3 = param_1;
    while (cVar1 != '\0') {
      cVar1 = (char)*puVar3;
      if (('`' < cVar1) && (cVar1 < '{')) {
        *(char *)puVar3 = cVar1 + -0x20;
      }
      puVar3 = (uint *)((int)puVar3 + 1);
      cVar1 = *(char *)puVar3;
    }
  }
  else {
    InterlockedIncrement((LONG *)&DAT_100bd02c);
    bVar4 = DAT_100bd028 == 0;
    if (!bVar4) {
      InterlockedDecrement((LONG *)&DAT_100bd02c);
      FUN_1004ca8b(0x13);
    }
    if (DAT_100bcb04 == 0) {
      if (bVar4) {
        InterlockedDecrement((LONG *)&DAT_100bd02c);
      }
      else {
        FUN_1004caec(0x13);
      }
      cVar1 = (char)*param_1;
      puVar3 = param_1;
      while (cVar1 != '\0') {
        cVar1 = (char)*puVar3;
        if (('`' < cVar1) && (cVar1 < '{')) {
          *(char *)puVar3 = cVar1 + -0x20;
        }
        puVar3 = (uint *)((int)puVar3 + 1);
        cVar1 = *(char *)puVar3;
      }
    }
    else {
      _Size = FUN_100519f1(DAT_100bcb04,0x200,(char *)param_1,-1,(LPWSTR)0x0,0,0,1);
      if (((_Size != 0) && (local_c = _malloc(_Size), local_c != (LPWSTR)0x0)) &&
         (iVar2 = FUN_100519f1(DAT_100bcb04,0x200,(char *)param_1,-1,local_c,_Size,0,1), iVar2 != 0)
         ) {
        FUN_10053680(param_1,(uint *)local_c);
      }
      if (bVar4) {
        InterlockedDecrement((LONG *)&DAT_100bd02c);
      }
      else {
        FUN_1004caec(0x13);
      }
      FUN_1004ad7e((undefined *)local_c);
    }
  }
  return param_1;
}

