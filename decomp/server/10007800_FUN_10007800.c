
int __thiscall FUN_10007800(void *this,byte *param_1)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  byte *pbVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  byte *pbVar9;
  char *pcVar10;
  int *piVar11;
  char *pcVar12;
  bool bVar13;
  
  iVar3 = DAT_10122044;
  if (param_1 == (byte *)0x0) {
    (*DAT_10121efc)(1,s_info_group__GetMember_called_wit_1010207c);
    return 0;
  }
  iVar8 = 0;
  if (0 < *(int *)((int)this + 0xb8)) {
    piVar11 = (int *)((int)this + 0xbc);
    do {
      pbVar4 = (byte *)(*piVar11 + *(int *)(DAT_10122044 + 0x98));
      pbVar9 = param_1;
      do {
        bVar2 = *pbVar9;
        bVar13 = bVar2 < *pbVar4;
        if (bVar2 != *pbVar4) {
LAB_10007887:
          iVar5 = (1 - (uint)bVar13) - (uint)(bVar13 != 0);
          goto LAB_1000788c;
        }
        if (bVar2 == 0) break;
        bVar2 = pbVar9[1];
        bVar13 = bVar2 < pbVar4[1];
        if (bVar2 != pbVar4[1]) goto LAB_10007887;
        pbVar9 = pbVar9 + 2;
        pbVar4 = pbVar4 + 2;
      } while (bVar2 != 0);
      iVar5 = 0;
LAB_1000788c:
      if (iVar5 == 0) {
        return *(int *)((int)this + iVar8 * 4 + 0xfc);
      }
      iVar8 = iVar8 + 1;
      piVar11 = piVar11 + 1;
    } while (iVar8 < *(int *)((int)this + 0xb8));
  }
  if (*(int *)((int)this + 0x13c) == 0) {
    (*DAT_10121efc)(1,s_info_group___s__has_no_member_ca_10102050,
                    *(int *)(*(int *)((int)this + 4) + 0x1cc) + *(int *)(DAT_10122044 + 0x98),
                    param_1);
    return 0;
  }
  uVar6 = 0xffffffff;
  pcVar10 = (char *)(*(int *)(DAT_10122044 + 0x98) + *(int *)((int)this + 0x13c));
  do {
    pcVar12 = pcVar10;
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    pcVar12 = pcVar10 + 1;
    cVar1 = *pcVar10;
    pcVar10 = pcVar12;
  } while (cVar1 != '\0');
  uVar6 = ~uVar6;
  pcVar10 = pcVar12 + -uVar6;
  pcVar12 = (char *)&DAT_10121c40;
  for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
    *(undefined4 *)pcVar12 = *(undefined4 *)pcVar10;
    pcVar10 = pcVar10 + 4;
    pcVar12 = pcVar12 + 4;
  }
  for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
    *pcVar12 = *pcVar10;
    pcVar10 = pcVar10 + 1;
    pcVar12 = pcVar12 + 1;
  }
  uVar6 = 0xffffffff;
  do {
    pbVar9 = param_1;
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    pbVar9 = param_1 + 1;
    bVar2 = *param_1;
    param_1 = pbVar9;
  } while (bVar2 != 0);
  uVar6 = ~uVar6;
  iVar8 = -1;
  pcVar10 = (char *)&DAT_10121c40;
  do {
    pcVar12 = pcVar10;
    if (iVar8 == 0) break;
    iVar8 = iVar8 + -1;
    pcVar12 = pcVar10 + 1;
    cVar1 = *pcVar10;
    pcVar10 = pcVar12;
  } while (cVar1 != '\0');
  pbVar9 = pbVar9 + -uVar6;
  pbVar4 = (byte *)(pcVar12 + -1);
  for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
    *(undefined4 *)pbVar4 = *(undefined4 *)pbVar9;
    pbVar9 = pbVar9 + 4;
    pbVar4 = pbVar4 + 4;
  }
  for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
    *pbVar4 = *pbVar9;
    pbVar9 = pbVar9 + 1;
    pbVar4 = pbVar4 + 1;
  }
  return (int)&DAT_10121c40 - *(int *)(iVar3 + 0x98);
}

