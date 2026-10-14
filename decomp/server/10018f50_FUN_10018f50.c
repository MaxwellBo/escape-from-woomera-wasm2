
int __cdecl FUN_10018f50(int param_1,int param_2)

{
  byte *pbVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  byte *pbVar5;
  int iVar6;
  byte *pbVar7;
  bool bVar8;
  
  iVar4 = FUN_100aebf0(0,s_globalname_10105094,*(int *)(DAT_10122044 + 0x98) + param_2);
  if (iVar4 != 0) {
    iVar3 = *(int *)(DAT_10122044 + 0x98);
    pbVar1 = (byte *)(**(int **)(iVar4 + 4) + iVar3);
    pbVar7 = (byte *)(iVar3 + param_1);
    pbVar5 = pbVar1;
    do {
      bVar2 = *pbVar5;
      bVar8 = bVar2 < *pbVar7;
      if (bVar2 != *pbVar7) {
LAB_10018fba:
        iVar6 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
        goto LAB_10018fbf;
      }
      if (bVar2 == 0) break;
      bVar2 = pbVar5[1];
      bVar8 = bVar2 < pbVar7[1];
      if (bVar2 != pbVar7[1]) goto LAB_10018fba;
      pbVar5 = pbVar5 + 2;
      pbVar7 = pbVar7 + 2;
    } while (bVar2 != 0);
    iVar6 = 0;
LAB_10018fbf:
    if (iVar6 != 0) {
      (*DAT_10121efc)(1,s_Global_entity_found__s__wrong_cl_1010506c,iVar3 + param_2,pbVar1);
      iVar4 = 0;
    }
  }
  return iVar4;
}

