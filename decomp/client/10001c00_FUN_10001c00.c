
bool __thiscall FUN_10001c00(int param_1,int param_2)

{
  byte bVar1;
  byte *pbVar2;
  byte *pbVar3;
  bool bVar4;
  
  pbVar2 = (byte *)(*(int *)(*(int *)(param_1 + 4) + 0x1cc) + *(int *)(DAT_1007f7f8 + 0x98));
  pbVar3 = (byte *)(*(int *)(DAT_1007f7f8 + 0x98) + param_2);
  while( true ) {
    bVar1 = *pbVar3;
    bVar4 = bVar1 < *pbVar2;
    if (bVar1 != *pbVar2) break;
    if (bVar1 == 0) {
      return true;
    }
    bVar1 = pbVar3[1];
    bVar4 = bVar1 < pbVar2[1];
    if (bVar1 != pbVar2[1]) break;
    pbVar3 = pbVar3 + 2;
    pbVar2 = pbVar2 + 2;
    if (bVar1 == 0) {
      return true;
    }
  }
  return 1 - bVar4 == (uint)(bVar4 != 0);
}

