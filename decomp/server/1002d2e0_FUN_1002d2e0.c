
void __fastcall FUN_1002d2e0(void *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  
  if ((*(byte *)(*(int *)((int)param_1 + 4) + 0x1a0) & 1) == 0) {
    iVar4 = *(int *)((int)param_1 + 0xdc);
  }
  else {
    iVar4 = *(int *)((int)param_1 + 0xe0);
  }
  if (iVar4 != 0) {
    uVar2 = FUN_10008160(param_1,(byte *)(*(int *)(DAT_10122044 + 0x98) + iVar4));
    *(undefined4 *)(*(int *)((int)param_1 + 4) + 0x128) = uVar2;
    if (*(int *)(*(int *)((int)param_1 + 4) + 0x128) == -1) {
      iVar3 = *(int *)(*(int *)((int)param_1 + 4) + 0x1cc);
      if (iVar3 == 0) {
        iVar3 = *(int *)(DAT_10122044 + 0x98);
        pcVar5 = s_env_model__unknown_sequence___s__10108230;
        iVar1 = iVar3;
      }
      else {
        iVar3 = iVar3 + *(int *)(DAT_10122044 + 0x98);
        pcVar5 = s_env_model__s__unknown_sequence___10108254;
        iVar1 = *(int *)(DAT_10122044 + 0x98);
      }
      (*DAT_10121efc)(4,pcVar5,iVar3,iVar1 + iVar4);
      *(undefined4 *)(*(int *)((int)param_1 + 4) + 0x128) = 0;
    }
    *(undefined4 *)(*(int *)((int)param_1 + 4) + 0x130) = 0;
    FUN_10008190((int)param_1);
    if ((*(byte *)(*(int *)((int)param_1 + 4) + 0x1a0) & 1) == 0) {
      if (*(int *)((int)param_1 + 0xe4) == 1) {
        *(undefined4 *)((int)param_1 + 0xd8) = 1;
        return;
      }
    }
    else if (*(int *)((int)param_1 + 0xe8) == 1) {
      *(undefined4 *)((int)param_1 + 0xd8) = 1;
      return;
    }
    *(undefined4 *)((int)param_1 + 0xd8) = 0;
  }
  return;
}

