
void __cdecl FUN_100b2e90(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  void *extraout_ECX;
  void *this;
  byte **ppbVar4;
  undefined4 *puVar5;
  byte *apbStack_2c [4];
  byte *pbStack_1c;
  int iStack_c;
  
  iVar2 = (*DAT_10121e64)(param_1 - *(int *)(DAT_10122044 + 0x98));
  if (iVar2 == 0) {
LAB_100b2ec3:
    (*DAT_10121efc)(1,s_NULL_Ent_in_UTIL_PrecacheOtherWe_1011b89c);
    return;
  }
  iVar3 = (*DAT_10121f20)(iVar2);
  if (iVar3 == 0) goto LAB_100b2ec3;
  iVar3 = *(int *)(iVar2 + 0x288);
  if (iVar3 == 0) {
    iVar3 = (*DAT_10121f1c)(0);
    if (iVar3 == 0) goto LAB_100b2f68;
  }
  piVar1 = *(int **)(iVar3 + 0x7c);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x2c))();
    ppbVar4 = apbStack_2c;
    for (iVar3 = 0xb; iVar3 != 0; iVar3 = iVar3 + -1) {
      *ppbVar4 = (byte *)0x0;
      ppbVar4 = ppbVar4 + 1;
    }
    iVar3 = (**(code **)(*piVar1 + 0x124))(apbStack_2c);
    if (iVar3 != 0) {
      ppbVar4 = apbStack_2c;
      puVar5 = &DAT_10131e18 + iStack_c * 0xb;
      for (iVar3 = 0xb; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar5 = *ppbVar4;
        ppbVar4 = ppbVar4 + 1;
        puVar5 = puVar5 + 1;
      }
      this = (void *)0x0;
      if ((apbStack_2c[2] != (byte *)0x0) && (*apbStack_2c[2] != 0)) {
        FUN_100b2e30((void *)0x0,apbStack_2c[2]);
        this = extraout_ECX;
      }
      if ((pbStack_1c != (byte *)0x0) && (*pbStack_1c != 0)) {
        FUN_100b2e30(this,pbStack_1c);
      }
    }
  }
LAB_100b2f68:
  (*DAT_10121e60)(iVar2);
  return;
}

