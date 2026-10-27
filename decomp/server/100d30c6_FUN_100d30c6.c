
int __cdecl FUN_100d30c6(LPSTR param_1,WCHAR param_2)

{
  int iVar1;
  bool bVar2;
  
  InterlockedIncrement(&DAT_101351c8);
  bVar2 = DAT_101351c4 != 0;
  if (bVar2) {
    InterlockedDecrement(&DAT_101351c8);
    FUN_100cf6a6(0x13);
  }
  iVar1 = FUN_100d311f(param_1,param_2);
  if (bVar2) {
    FUN_100cf707(0x13);
  }
  else {
    InterlockedDecrement(&DAT_101351c8);
  }
  return iVar1;
}

