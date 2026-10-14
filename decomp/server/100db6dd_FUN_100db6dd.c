
int * FUN_100db6dd(void)

{
  uint *puVar1;
  int iVar2;
  undefined4 *puVar3;
  int *extraout_ECX;
  int unaff_EBP;
  
  FUN_100dc594();
  if ((*(int *)((int)extraout_ECX + *(int *)(*extraout_ECX + 4) + 0x1c) != 0) &&
     (puVar3 = *(undefined4 **)((int)extraout_ECX + *(int *)(*extraout_ECX + 4) + 4),
     puVar3 != (undefined4 *)0x0)) {
    (**(code **)*puVar3)(1);
  }
  *(undefined4 *)(*(int *)(*extraout_ECX + 4) + 4 + (int)extraout_ECX) = 0;
  puVar3 = FUN_100dab6a((undefined4 *)(unaff_EBP + -0x5c));
  *(undefined4 *)(unaff_EBP + -4) = 0;
  FUN_100dad0e((void *)(*(int *)(*extraout_ECX + 4) + (int)extraout_ECX),(int)puVar3);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_100dac95((undefined4 *)(unaff_EBP + -0x5c));
  iVar2 = *(int *)(unaff_EBP + 8);
  *(undefined4 *)(*(int *)(*extraout_ECX + 4) + 0x1c + (int)extraout_ECX) = 0;
  FUN_100dacdf((void *)(*(int *)(*extraout_ECX + 4) + (int)extraout_ECX),iVar2);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  puVar1 = (uint *)(*(int *)(*extraout_ECX + 4) + 0x24 + (int)extraout_ECX);
  *puVar1 = *puVar1 | 1;
  extraout_ECX[2] = 0;
  return extraout_ECX;
}

