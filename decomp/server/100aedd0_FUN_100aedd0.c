
int __cdecl FUN_100aedd0(int param_1,byte *param_2,byte *param_3)

{
  byte bVar1;
  void *this;
  byte *pbVar2;
  int iVar3;
  int iVar4;
  byte *pbVar5;
  int iVar6;
  size_t _Count;
  char *pcVar7;
  bool bVar8;
  int local_54;
  byte local_50 [80];
  
  _Count = 0;
  iVar6 = -1;
  pbVar5 = (byte *)0x0;
  bVar1 = *param_3;
  local_54 = 0;
  do {
    if (bVar1 == 0) {
LAB_100aee1f:
      this = (void *)FUN_100af030(0,param_2);
      if (this != (void *)0x0) {
        do {
          pcVar7 = s_info_group_1011b14c;
          pbVar2 = (byte *)(**(int **)((int)this + 4) + *(int *)(DAT_10122044 + 0x98));
          do {
            bVar1 = *pbVar2;
            bVar8 = bVar1 < (byte)*pcVar7;
            if (bVar1 != *pcVar7) {
LAB_100aee74:
              iVar3 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
              goto LAB_100aee79;
            }
            if (bVar1 == 0) break;
            bVar1 = pbVar2[1];
            bVar8 = bVar1 < (byte)pcVar7[1];
            if (bVar1 != pcVar7[1]) goto LAB_100aee74;
            pbVar2 = pbVar2 + 2;
            pcVar7 = pcVar7 + 2;
          } while (bVar1 != 0);
          iVar3 = 0;
LAB_100aee79:
          if ((iVar3 == 0) && (iVar3 = FUN_10007800(this,param_3), iVar3 != 0)) {
            if (pbVar5 == (byte *)0x0) {
              iVar3 = FUN_100af030(param_1,(byte *)(*(int *)(DAT_10122044 + 0x98) + iVar3));
            }
            else {
              iVar3 = FUN_100aedd0(param_1,(byte *)(*(int *)(DAT_10122044 + 0x98) + iVar3),pbVar5);
            }
            if ((iVar3 != 0) &&
               ((iVar4 = (*DAT_10121f20)(*(undefined4 *)(*(int *)(iVar3 + 4) + 0x208)), iVar6 == -1
                || (iVar4 < iVar6)))) {
              iVar6 = iVar4;
              local_54 = iVar3;
            }
          }
          this = (void *)FUN_100af030((int)this,param_2);
        } while (this != (void *)0x0);
        if (local_54 != 0) {
          return local_54;
        }
      }
      return 0;
    }
    if (bVar1 == 0x2e) {
      _strncpy((char *)local_50,(char *)param_3,_Count);
      local_50[_Count] = 0;
      pbVar5 = param_3 + _Count + 1;
      param_3 = local_50;
      goto LAB_100aee1f;
    }
    bVar1 = param_3[_Count + 1];
    _Count = _Count + 1;
  } while( true );
}

