
int * FUN_100da7cd(void)

{
  int iVar1;
  undefined4 *puVar2;
  int *extraout_ECX;
  int unaff_EBP;
  
  FUN_100dc594();
  if ((*(int *)((int)extraout_ECX + *(int *)(*extraout_ECX + 4) + 0x1c) != 0) &&
     (puVar2 = *(undefined4 **)((int)extraout_ECX + *(int *)(*extraout_ECX + 4) + 4),
     puVar2 != (undefined4 *)0x0)) {
    (**(code **)*puVar2)(1);
  }
  *(undefined4 *)(*(int *)(*extraout_ECX + 4) + 4 + (int)extraout_ECX) = 0;
  puVar2 = FUN_100dab6a((undefined4 *)(unaff_EBP + -0x5c));
  *(undefined4 *)(unaff_EBP + -4) = 0;
  FUN_100dad0e((void *)(*(int *)(*extraout_ECX + 4) + (int)extraout_ECX),(int)puVar2);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_100dac95((undefined4 *)(unaff_EBP + -0x5c));
  iVar1 = *(int *)(unaff_EBP + 8);
  *(undefined4 *)(*(int *)(*extraout_ECX + 4) + 0x1c + (int)extraout_ECX) = 0;
  FUN_100dacdf((void *)(*(int *)(*extraout_ECX + 4) + (int)extraout_ECX),iVar1);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return extraout_ECX;
}

