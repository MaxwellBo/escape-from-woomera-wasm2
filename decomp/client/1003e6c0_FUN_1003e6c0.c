
bool __fastcall FUN_1003e6c0(int param_1)

{
  byte bVar1;
  byte *pbVar2;
  byte *pbVar3;
  bool bVar4;
  
  pbVar2 = (byte *)(*DAT_100a5118)();
  if (pbVar2 == (byte *)0x0) {
    return true;
  }
  pbVar3 = (byte *)(param_1 + 300);
  while( true ) {
    bVar1 = *pbVar3;
    bVar4 = bVar1 < *pbVar2;
    if (bVar1 != *pbVar2) break;
    if (bVar1 == 0) {
      return false;
    }
    bVar1 = pbVar3[1];
    bVar4 = bVar1 < pbVar2[1];
    if (bVar1 != pbVar2[1]) break;
    pbVar3 = pbVar3 + 2;
    pbVar2 = pbVar2 + 2;
    if (bVar1 == 0) {
      return false;
    }
  }
  return 1 - bVar4 != (uint)(bVar4 != 0);
}

