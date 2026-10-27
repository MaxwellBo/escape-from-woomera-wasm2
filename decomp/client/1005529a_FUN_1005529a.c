
uint __cdecl FUN_1005529a(LPWSTR param_1,byte *param_2,uint param_3)

{
  uint uVar1;
  bool bVar2;
  
  InterlockedIncrement((LONG *)&DAT_100bd02c);
  bVar2 = DAT_100bd028 != 0;
  if (bVar2) {
    InterlockedDecrement((LONG *)&DAT_100bd02c);
    FUN_1004ca8b(0x13);
  }
  uVar1 = FUN_100552f7(param_1,param_2,param_3);
  if (bVar2) {
    FUN_1004caec(0x13);
  }
  else {
    InterlockedDecrement((LONG *)&DAT_100bd02c);
  }
  return uVar1;
}

