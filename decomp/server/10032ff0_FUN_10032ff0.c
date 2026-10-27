
void __fastcall FUN_10032ff0(int param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(*(int *)(param_1 + 4) + 0x184) == 0) {
    uVar1 = (*DAT_10121eb8)(*(int *)(*(int *)(param_1 + 4) + 0x1e8) + *(int *)(DAT_10122044 + 0x98))
    ;
    *(undefined4 *)(*(int *)(param_1 + 4) + 0x110) = uVar1;
    if (*(int *)(*(int *)(param_1 + 4) + 0x110) == 0) {
      (*DAT_10121efc)(1,s_locus_decal___s__can_t_find_deca_101084fc,
                      *(int *)(*(int *)(param_1 + 4) + 0x1e8) + *(int *)(DAT_10122044 + 0x98));
    }
  }
  return;
}

