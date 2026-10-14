
void __fastcall FUN_10028dd0(int param_1)

{
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x10c) = 0;
  if ((*(byte *)(*(int *)(param_1 + 4) + 0x1a0) & 1) != 0) {
    (*DAT_10121e08)(s_sprites_null_spr_10108000);
    (*DAT_10121e10)(*(undefined4 *)(*(int *)(param_1 + 4) + 0x208),s_sprites_null_spr_10108000);
    FUN_100afdc0(*(int *)(param_1 + 4),&DAT_10121dd8,&DAT_10121dd8);
  }
  return;
}

