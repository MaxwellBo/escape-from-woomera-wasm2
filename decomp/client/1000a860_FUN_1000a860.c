
void FUN_1000a860(void)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *in_stack_00000014;
  
  puVar2 = in_stack_00000014;
  for (iVar1 = 0xe; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  in_stack_00000014[4] = 0x3f800000;
  return;
}

