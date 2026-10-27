
void __fastcall FUN_10008190(int param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = (*DAT_10121f30)(*(undefined4 *)(*(int *)(param_1 + 4) + 0x208));
  FUN_10008a50(iVar1,*(int *)(param_1 + 4),(float *)(param_1 + 200),(float *)(param_1 + 0xcc));
  uVar2 = FUN_10008210(param_1);
  *(uint *)(param_1 + 0xd8) = uVar2 & 1;
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x134) = *DAT_10122044;
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x138) = 0x3f800000;
  *(undefined4 *)(param_1 + 0xd4) = 0;
  *(undefined4 *)(param_1 + 0xd0) = *DAT_10122044;
  return;
}

