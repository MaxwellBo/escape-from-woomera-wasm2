
bool FUN_1003e6d4(void)

{
  byte bVar1;
  byte *in_EAX;
  byte *pbVar2;
  int unaff_EDI;
  bool bVar3;
  
  pbVar2 = (byte *)(unaff_EDI + 300);
  while( true ) {
    bVar1 = *pbVar2;
    bVar3 = bVar1 < *in_EAX;
    if (bVar1 != *in_EAX) break;
    if (bVar1 == 0) {
      return false;
    }
    bVar1 = pbVar2[1];
    bVar3 = bVar1 < in_EAX[1];
    if (bVar1 != in_EAX[1]) break;
    pbVar2 = pbVar2 + 2;
    in_EAX = in_EAX + 2;
    if (bVar1 == 0) {
      return false;
    }
  }
  return 1 - bVar3 != (uint)(bVar3 != 0);
}

