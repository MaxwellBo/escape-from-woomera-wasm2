
undefined4 __cdecl FUN_100a5750(byte *param_1,int param_2,byte *param_3,char *param_4,int param_5)

{
  char cVar1;
  byte bVar2;
  byte *pbVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  byte *pbVar8;
  byte *pbVar9;
  char *pcVar10;
  bool bVar11;
  
  if ((((param_1 == (byte *)0x0) || (param_3 == (byte *)0x0)) || (param_4 == (char *)0x0)) ||
     (param_5 == 0)) {
    return 0;
  }
  iVar7 = 0;
  pbVar8 = param_1;
  if (0 < param_2) {
    do {
      pbVar3 = pbVar8;
      pbVar9 = param_3;
      if (*(int *)(pbVar8 + 0x40) == param_5) {
        do {
          bVar2 = *pbVar3;
          bVar11 = bVar2 < *pbVar9;
          if (bVar2 != *pbVar9) {
LAB_100a57b9:
            iVar4 = (1 - (uint)bVar11) - (uint)(bVar11 != 0);
            goto LAB_100a57be;
          }
          if (bVar2 == 0) break;
          bVar2 = pbVar3[1];
          bVar11 = bVar2 < pbVar9[1];
          if (bVar2 != pbVar9[1]) goto LAB_100a57b9;
          pbVar3 = pbVar3 + 2;
          pbVar9 = pbVar9 + 2;
        } while (bVar2 != 0);
        iVar4 = 0;
LAB_100a57be:
        if (iVar4 == 0) {
          return 0;
        }
      }
      iVar7 = iVar7 + 1;
      pbVar8 = pbVar8 + 0x50;
    } while (iVar7 < param_2);
  }
  uVar5 = 0xffffffff;
  pbVar8 = param_1 + param_2 * 0x50;
  do {
    pbVar3 = param_3;
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    pbVar3 = param_3 + 1;
    bVar2 = *param_3;
    param_3 = pbVar3;
  } while (bVar2 != 0);
  uVar5 = ~uVar5;
  pbVar3 = pbVar3 + -uVar5;
  pbVar9 = pbVar8;
  for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
    *(undefined4 *)pbVar9 = *(undefined4 *)pbVar3;
    pbVar3 = pbVar3 + 4;
    pbVar9 = pbVar9 + 4;
  }
  for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
    *pbVar9 = *pbVar3;
    pbVar3 = pbVar3 + 1;
    pbVar9 = pbVar9 + 1;
  }
  uVar5 = 0xffffffff;
  do {
    pcVar10 = param_4;
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    pcVar10 = param_4 + 1;
    cVar1 = *param_4;
    param_4 = pcVar10;
  } while (cVar1 != '\0');
  uVar5 = ~uVar5;
  pbVar3 = (byte *)(pcVar10 + -uVar5);
  pbVar9 = pbVar8 + 0x20;
  for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
    *(undefined4 *)pbVar9 = *(undefined4 *)pbVar3;
    pbVar3 = pbVar3 + 4;
    pbVar9 = pbVar9 + 4;
  }
  for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
    *pbVar9 = *pbVar3;
    pbVar3 = pbVar3 + 1;
    pbVar9 = pbVar9 + 1;
  }
  *(int *)(pbVar8 + 0x40) = param_5;
  *(undefined4 *)(pbVar8 + 0x44) = *(undefined4 *)(param_5 + 0x88);
  *(undefined4 *)(pbVar8 + 0x48) = *(undefined4 *)(param_5 + 0x8c);
  *(undefined4 *)(pbVar8 + 0x4c) = *(undefined4 *)(param_5 + 0x90);
  return 1;
}

