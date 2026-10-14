
void __fastcall FUN_100073d0(int param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = *(int *)(param_1 + 4);
  uVar2 = *(uint *)(iVar1 + 0x1a0);
  if ((uVar2 & 1) != 0) {
    if ((uVar2 & 2) != 0) {
      (*DAT_10121efc)(1,s_DEBUG__info_alias__s_turns_on_10101f40,
                      *(int *)(iVar1 + 0x1cc) + *(int *)(DAT_10122044 + 0x98));
    }
    *(uint *)(*(int *)(param_1 + 4) + 0x1a0) = *(uint *)(*(int *)(param_1 + 4) + 0x1a0) & 0xfffffffe
    ;
    *(undefined4 *)(*(int *)(param_1 + 4) + 0x1e8) = *(undefined4 *)(*(int *)(param_1 + 4) + 0x1c8);
    FUN_100aecd0(param_1);
    return;
  }
  if ((uVar2 & 2) != 0) {
    (*DAT_10121efc)(1,s_DEBUG__info_alias__s_turns_off_10101f20,
                    *(int *)(iVar1 + 0x1cc) + *(int *)(DAT_10122044 + 0x98));
  }
  *(uint *)(*(int *)(param_1 + 4) + 0x1a0) = *(uint *)(*(int *)(param_1 + 4) + 0x1a0) | 1;
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x1e8) = *(undefined4 *)(*(int *)(param_1 + 4) + 0x1d0);
  FUN_100aecd0(param_1);
  return;
}

