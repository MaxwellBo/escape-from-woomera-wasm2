
void __fastcall FUN_100159a0(int *param_1)

{
  int iVar1;
  char *pcVar2;
  
  if (param_1[0x2e] != 1) {
    if (param_1[0x2e] == 3) {
      param_1[0x2e] = 0;
      if ((*(byte *)(param_1[1] + 0x1a0) & 2) != 0) {
        (*DAT_10121efc)(1,s_DEBUG__env_state___s__turned_its_10104844,
                        *(int *)(param_1[1] + 0x1cc) + *(int *)(DAT_10122044 + 0x98));
        if (*(int *)(param_1[1] + 0x1c8) != 0) {
          (*DAT_10121efc)(1,s___firing__s_10104874,
                          *(int *)(DAT_10122044 + 0x98) + *(int *)(param_1[1] + 0x1c8));
        }
        if (*(int *)(param_1[1] + 0x1f0) != 0) {
          (*DAT_10121efc)(1,s_and__s_1010486c,
                          *(int *)(DAT_10122044 + 0x98) + *(int *)(param_1[1] + 0x1f0));
        }
        (*DAT_10121efc)(1,&DAT_101047b8);
      }
      FUN_10098c10((uint *)(*(int *)(DAT_10122044 + 0x98) + *(int *)(param_1[1] + 0x1c8)),param_1,
                   param_1,0,0);
      FUN_10098c10((uint *)(*(int *)(DAT_10122044 + 0x98) + *(int *)(param_1[1] + 0x1f0)),param_1,
                   param_1,3,0);
    }
    return;
  }
  param_1[0x2e] = 2;
  if ((*(byte *)(param_1[1] + 0x1a0) & 2) == 0) goto LAB_10015a76;
  (*DAT_10121efc)(1,s_DEBUG__env_state___s__turned_its_10104880,
                  *(int *)(param_1[1] + 0x1cc) + *(int *)(DAT_10122044 + 0x98));
  iVar1 = *(int *)(param_1[1] + 0x1c8);
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_1[1] + 0x1ec);
    if (iVar1 != 0) {
      iVar1 = *(int *)(DAT_10122044 + 0x98) + iVar1;
      pcVar2 = s___firing__s_10104874;
      goto LAB_10015a5b;
    }
  }
  else {
    (*DAT_10121efc)(1,s___firing__s_10104874,*(int *)(DAT_10122044 + 0x98) + iVar1);
    if (*(int *)(param_1[1] + 0x1ec) != 0) {
      iVar1 = *(int *)(DAT_10122044 + 0x98) + *(int *)(param_1[1] + 0x1ec);
      pcVar2 = s_and__s_1010486c;
LAB_10015a5b:
      (*DAT_10121efc)(1,pcVar2,iVar1);
    }
  }
  (*DAT_10121efc)(1,&DAT_101047b8);
LAB_10015a76:
  FUN_10098c10((uint *)(*(int *)(DAT_10122044 + 0x98) + *(int *)(param_1[1] + 0x1c8)),param_1,
               param_1,1,0);
  FUN_10098c10((uint *)(*(int *)(DAT_10122044 + 0x98) + *(int *)(param_1[1] + 0x1ec)),param_1,
               param_1,3,0);
  return;
}

