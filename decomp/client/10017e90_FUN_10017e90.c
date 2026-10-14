
byte * __cdecl FUN_10017e90(byte *param_1,byte *param_2,int param_3,int param_4)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  byte *pbVar4;
  bool bVar5;
  
  if (param_1 != (byte *)0x0) {
    while (param_4 != 0) {
      param_4 = param_4 + -1;
      pbVar2 = param_2;
      pbVar4 = param_1;
      do {
        bVar1 = *pbVar2;
        bVar5 = bVar1 < *pbVar4;
        if (bVar1 != *pbVar4) {
LAB_10017ed5:
          iVar3 = (1 - (uint)bVar5) - (uint)(bVar5 != 0);
          goto LAB_10017eda;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar2[1];
        bVar5 = bVar1 < pbVar4[1];
        if (bVar1 != pbVar4[1]) goto LAB_10017ed5;
        pbVar2 = pbVar2 + 2;
        pbVar4 = pbVar4 + 2;
      } while (bVar1 != 0);
      iVar3 = 0;
LAB_10017eda:
      if ((iVar3 == 0) && (*(int *)(param_1 + 0x84) == param_3)) {
        return param_1;
      }
      param_1 = param_1 + 0x98;
    }
  }
  return (byte *)0x0;
}

