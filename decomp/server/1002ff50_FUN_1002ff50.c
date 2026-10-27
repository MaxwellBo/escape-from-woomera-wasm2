
void __fastcall FUN_1002ff50(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = *(int *)(*(int *)(param_1 + 4) + 0x1d0);
  if (iVar1 != 0) {
    uVar2 = (*DAT_10121e08)(*(int *)(DAT_10122044 + 0x98) + iVar1);
    *(undefined4 *)(param_1 + 200) = uVar2;
    return;
  }
  uVar2 = (*DAT_10121e08)(s_sprites_flare6_spr_101083b4);
  *(undefined4 *)(param_1 + 200) = uVar2;
  return;
}

