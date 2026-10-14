
uint __cdecl FUN_100d3345(LPWSTR param_1,byte *param_2,uint param_3)

{
  uint uVar1;
  bool bVar2;
  
  InterlockedIncrement(&DAT_101351c8);
  bVar2 = DAT_101351c4 != 0;
  if (bVar2) {
    InterlockedDecrement(&DAT_101351c8);
    FUN_100cf6a6(0x13);
  }
  uVar1 = FUN_100d33a2(param_1,param_2,param_3);
  if (bVar2) {
    FUN_100cf707(0x13);
  }
  else {
    InterlockedDecrement(&DAT_101351c8);
  }
  return uVar1;
}

