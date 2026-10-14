
int * FUN_100dae51(void)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  int *piVar5;
  int *extraout_ECX;
  int unaff_EBP;
  
  FUN_100dc594();
  *(int **)(unaff_EBP + -0x14) = extraout_ECX;
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  if (*(int *)(unaff_EBP + 0x14) != 0) {
    *extraout_ECX = (int)&DAT_100fa59c;
    FUN_100dab6a(extraout_ECX + 3);
    *(undefined4 *)(unaff_EBP + -0x10) = 1;
    *(undefined4 *)(unaff_EBP + -4) = 0;
  }
  puVar4 = operator_new(0x54);
  *(undefined4 **)(unaff_EBP + 0x14) = puVar4;
  *(undefined4 *)(unaff_EBP + -4) = 1;
  if (puVar4 != (undefined4 *)0x0) {
    FUN_100db14f(puVar4);
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_100db5d9();
  iVar2 = *(int *)(*extraout_ECX + 4);
  uVar3 = *(uint *)(unaff_EBP + 0x10);
  *(undefined4 *)(unaff_EBP + -4) = 2;
  *(undefined ***)(iVar2 + (int)extraout_ECX) = &PTR_FUN_100fa598;
  *(undefined4 *)(*(int *)(*extraout_ECX + 4) + 0x1c + (int)extraout_ECX) = 1;
  piVar5 = FUN_100dbcfd(*(void **)(*(int *)(*extraout_ECX + 4) + 4 + (int)extraout_ECX),
                        *(LPCSTR *)(unaff_EBP + 8),*(uint *)(unaff_EBP + 0xc) | 1,uVar3);
  if (piVar5 == (int *)0x0) {
    puVar1 = (uint *)(*(int *)(*extraout_ECX + 4) + 8 + (int)extraout_ECX);
    *puVar1 = *puVar1 | 2;
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return extraout_ECX;
}

