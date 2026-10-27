
void FUN_100d1401(void)

{
  int *piVar1;
  DWORD *pDVar2;
  int unaff_EBP;
  
  piVar1 = *(int **)(unaff_EBP + 8);
  *(undefined4 *)(*(int *)(unaff_EBP + 0xc) + -4) = *(undefined4 *)(unaff_EBP + -0x28);
  pDVar2 = FUN_100cad28();
  pDVar2[0x1b] = *(DWORD *)(unaff_EBP + -0x1c);
  pDVar2 = FUN_100cad28();
  pDVar2[0x1c] = *(DWORD *)(unaff_EBP + -0x20);
  if ((((*piVar1 == -0x1f928c9d) && (piVar1[4] == 3)) && (piVar1[5] == 0x19930520)) &&
     ((*(int *)(unaff_EBP + -0x24) == 0 && (*(int *)(unaff_EBP + -0x2c) != 0)))) {
    __abnormal_termination();
    FUN_100d1643((int)piVar1);
  }
  return;
}

