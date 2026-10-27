
int __cdecl FUN_10094520(byte *param_1)

{
  int *piVar1;
  byte bVar2;
  byte *pbVar3;
  int iVar4;
  int iVar5;
  byte *pbVar6;
  undefined4 *puVar7;
  bool bVar8;
  
  if (((DAT_10131048 != 0) && (param_1 != (byte *)0x0)) && (iVar5 = 0, DAT_10126bb8 != 0)) {
    puVar7 = &DAT_10126bb8;
    do {
      pbVar6 = (byte *)(puVar7 + -4);
      pbVar3 = param_1;
      do {
        bVar2 = *pbVar3;
        bVar8 = bVar2 < *pbVar6;
        if (bVar2 != *pbVar6) {
LAB_1009456f:
          iVar4 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
          goto LAB_10094574;
        }
        if (bVar2 == 0) break;
        bVar2 = pbVar3[1];
        bVar8 = bVar2 < pbVar6[1];
        if (bVar2 != pbVar6[1]) goto LAB_1009456f;
        pbVar3 = pbVar3 + 2;
        pbVar6 = pbVar6 + 2;
      } while (bVar2 != 0);
      iVar4 = 0;
LAB_10094574:
      if (iVar4 == 0) {
        return iVar5;
      }
      piVar1 = puVar7 + 0xd;
      puVar7 = puVar7 + 0xd;
      iVar5 = iVar5 + 1;
    } while (*piVar1 != 0);
  }
  return -1;
}

