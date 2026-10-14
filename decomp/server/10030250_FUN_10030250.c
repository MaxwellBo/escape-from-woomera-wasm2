
void __fastcall FUN_10030250(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if (*(int *)(*(int *)(param_1 + 4) + 0x1c8) != 0) {
    (*DAT_10121e08)(s_sprites_null_spr_10108000);
  }
  iVar1 = *(int *)(*(int *)(param_1 + 4) + 0x1d0);
  if (iVar1 != 0) {
    uVar2 = (*DAT_10121e08)(*(int *)(DAT_10122044 + 0x98) + iVar1);
    *(undefined4 *)(param_1 + 0xb8) = uVar2;
  }
  return;
}

