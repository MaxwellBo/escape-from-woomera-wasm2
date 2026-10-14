
int __cdecl FUN_10008f50(int param_1,int param_2,int param_3,int *param_4)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint *puVar4;
  uint uVar5;
  
  if (param_1 == 0) {
    return param_3;
  }
  iVar3 = *(int *)(param_1 + 0xa8) + param_1;
  iVar1 = param_2 * 0xb0 + iVar3;
  uVar5 = *(uint *)(iVar1 + 0xa0);
  if ((uVar5 != 0) && (uVar2 = *(uint *)(param_3 * 0xb0 + 0xa0 + iVar3), uVar2 != 0)) {
    if (0 < *param_4) {
      uVar5 = *(uint *)(iVar1 + 0xa4);
    }
    if (uVar5 == uVar2) {
      *param_4 = 1;
      return param_3;
    }
    uVar2 = (uint)*(byte *)(*(int *)(param_1 + 0xec) * (uVar5 - 1) + *(int *)(param_1 + 0xf0) +
                            uVar2 + -1 + param_1);
    if (uVar2 != 0) {
      iVar1 = 0;
      if (0 < *(int *)(param_1 + 0xa4)) {
        puVar4 = (uint *)(iVar3 + 0xa4);
        do {
          if ((puVar4[-1] == uVar5) && (*puVar4 == uVar2)) {
            *param_4 = 1;
            return iVar1;
          }
          if (((puVar4[1] != 0) && (*puVar4 == uVar5)) && (puVar4[-1] == uVar2)) {
            *param_4 = -1;
            return iVar1;
          }
          iVar1 = iVar1 + 1;
          puVar4 = puVar4 + 0x2c;
        } while (iVar1 < *(int *)(param_1 + 0xa4));
      }
      (*DAT_10121efc)(1,s_error_in_transition_graph_101029bc);
    }
  }
  return param_3;
}

