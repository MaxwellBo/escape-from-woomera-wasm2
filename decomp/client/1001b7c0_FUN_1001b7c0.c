
uint FUN_1001b7c0(void)

{
  char cVar1;
  
  if ((DAT_100a5178 != 0) && (*(int **)(DAT_100a5178 + 0xaac) != (int *)0x0)) {
    cVar1 = (**(code **)(**(int **)(DAT_100a5178 + 0xaac) + 0x28))();
    return (uint)(cVar1 == '\0');
  }
  return DAT_100a5178 & 0xffffff00;
}

