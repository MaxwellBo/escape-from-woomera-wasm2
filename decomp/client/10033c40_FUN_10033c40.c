
void __fastcall FUN_10033c40(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0xe0);
  if (iVar1 != 0) {
    FUN_1004b841(iVar1,0x14,*(int *)(iVar1 + -4),CBasePlayerItem::AttemptToMaterialize);
    FUN_10049a73((undefined *)(iVar1 + -4));
  }
  FUN_10049a73(*(undefined **)(param_1 + 0xd0));
  FUN_10034120(param_1);
  return;
}

