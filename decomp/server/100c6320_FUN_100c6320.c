
void __fastcall FUN_100c6320(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  iVar3 = (*DAT_10121f30)(*(undefined4 *)(*(int *)(param_1 + 4) + 0x208));
  if (iVar3 == 0) {
    (*DAT_10121efc)(1,s_Invalid_model_ptr__FUCK_1011d0dc);
  }
  iVar2 = *(int *)(param_1 + 4);
  iVar3 = *(int *)(iVar3 + 0xa8) + iVar3;
  puVar1 = (undefined4 *)(*(int *)(iVar2 + 0x128) * 0xb0 + 0x60 + iVar3);
  uStack_c = *puVar1;
  uStack_8 = puVar1[1];
  uStack_4 = puVar1[2];
  puVar1 = (undefined4 *)(*(int *)(iVar2 + 0x128) * 0xb0 + 0x6c + iVar3);
  uStack_18 = *puVar1;
  uStack_14 = puVar1[1];
  uStack_10 = puVar1[2];
  FUN_100afdc0(iVar2,&uStack_c,&uStack_18);
  return;
}

