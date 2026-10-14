
int __cdecl FUN_1005383e(LPSTR param_1,WCHAR param_2)

{
  int iVar1;
  bool bVar2;
  
  InterlockedIncrement((LONG *)&DAT_100bd02c);
  bVar2 = DAT_100bd028 != 0;
  if (bVar2) {
    InterlockedDecrement((LONG *)&DAT_100bd02c);
    FUN_1004ca8b(0x13);
  }
  iVar1 = FUN_10053897(param_1,param_2);
  if (bVar2) {
    FUN_1004caec(0x13);
  }
  else {
    InterlockedDecrement((LONG *)&DAT_100bd02c);
  }
  return iVar1;
}

