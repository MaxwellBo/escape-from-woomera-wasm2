
void __fastcall FUN_100a98e0(int param_1)

{
  int iVar1;
  undefined1 *puVar2;
  undefined *puVar3;
  undefined1 auStack_100 [256];
  
  puVar2 = auStack_100;
  iVar1 = *(int *)(*(int *)(param_1 + 4) + 0x1d0);
  if (iVar1 != 0) {
    iVar1 = *(int *)(DAT_10122044 + 0x98) + iVar1;
    puVar3 = &DAT_10119df8;
    FUN_100c8506(auStack_100,&DAT_10119df8);
    (*DAT_10121ea4)(auStack_100,puVar2,puVar3,iVar1);
  }
  return;
}

