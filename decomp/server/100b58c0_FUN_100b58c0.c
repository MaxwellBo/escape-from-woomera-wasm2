
byte * __thiscall FUN_100b58c0(void *this,int param_1)

{
  byte bVar1;
  byte *pbVar2;
  byte *pbVar3;
  int iVar4;
  byte *pbVar5;
  bool bVar6;
  
  if (param_1 == 0) {
    return (byte *)0x0;
  }
  pbVar2 = *(byte **)this;
  do {
    pbVar3 = (byte *)(*(int *)(DAT_10122044 + 0x98) + param_1);
    pbVar5 = pbVar2;
    if (pbVar2 == (byte *)0x0) {
      return (byte *)0x0;
    }
    do {
      bVar1 = *pbVar3;
      bVar6 = bVar1 < *pbVar5;
      if (bVar1 != *pbVar5) {
LAB_100b590f:
        iVar4 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
        goto LAB_100b5914;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar3[1];
      bVar6 = bVar1 < pbVar5[1];
      if (bVar1 != pbVar5[1]) goto LAB_100b590f;
      pbVar3 = pbVar3 + 2;
      pbVar5 = pbVar5 + 2;
    } while (bVar1 != 0);
    iVar4 = 0;
LAB_100b5914:
    if (iVar4 == 0) {
      return pbVar2;
    }
    pbVar2 = *(byte **)(pbVar2 + 100);
  } while( true );
}

