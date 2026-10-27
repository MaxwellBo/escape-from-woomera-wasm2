
int __cdecl FUN_100aef20(int param_1,byte *param_2)

{
  byte bVar1;
  undefined4 uVar2;
  byte bVar3;
  byte *pbVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  size_t _Count;
  char *pcVar8;
  bool bVar9;
  char local_54 [84];
  
  if ((param_2 != (byte *)0x0) && (bVar1 = *param_2, bVar1 != 0)) {
    _Count = 0;
    bVar3 = bVar1;
    do {
      if (bVar3 == 0x2e) {
        _strncpy(local_54,(char *)param_2,_Count);
        local_54[_Count] = '\0';
        iVar5 = FUN_100aedd0(param_1,local_54,param_2 + _Count + 1);
        return iVar5;
      }
      bVar3 = param_2[_Count + 1];
      _Count = _Count + 1;
    } while (bVar3 != 0);
    if (bVar1 == 0x2a) {
      pcVar8 = s__player_1011b158;
      pbVar4 = param_2;
      do {
        bVar1 = *pbVar4;
        bVar9 = bVar1 < (byte)*pcVar8;
        if (bVar1 != *pcVar8) {
LAB_100aefb4:
          iVar5 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
          goto LAB_100aefb9;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar4[1];
        bVar9 = bVar1 < (byte)pcVar8[1];
        if (bVar1 != pcVar8[1]) goto LAB_100aefb4;
        pbVar4 = pbVar4 + 2;
        pcVar8 = pcVar8 + 2;
      } while (bVar1 != 0);
      iVar5 = 0;
LAB_100aefb9:
      if (iVar5 != 0) {
        iVar5 = FUN_100aed50(param_1,param_2 + 1);
        return iVar5;
      }
      iVar5 = FUN_100aec40(0,s_player_10101c54);
      if (iVar5 != 0) {
        if (param_1 != 0) {
          uVar2 = *(undefined4 *)(*(int *)(iVar5 + 4) + 0x208);
          iVar6 = (*DAT_10121f20)(*(undefined4 *)(*(int *)(param_1 + 4) + 0x208));
          iVar7 = (*DAT_10121f20)(uVar2);
          if (iVar7 <= iVar6) {
            return 0;
          }
        }
        return iVar5;
      }
    }
  }
  return 0;
}

