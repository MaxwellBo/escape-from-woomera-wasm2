
void FUN_100cdd03(void)

{
  int iVar1;
  undefined4 *puVar2;
  undefined **ppuVar3;
  
  if (DAT_10136208 == 3) {
    iVar1 = 0;
    if (0 < DAT_101361f8) {
      puVar2 = (undefined4 *)((int)DAT_101361fc + 0xc);
      do {
        VirtualFree((LPVOID)*puVar2,0x100000,0x4000);
        VirtualFree((LPVOID)*puVar2,0,0x8000);
        HeapFree(DAT_10136204,0,(LPVOID)puVar2[1]);
        puVar2 = puVar2 + 5;
        iVar1 = iVar1 + 1;
      } while (iVar1 < DAT_101361f8);
    }
    HeapFree(DAT_10136204,0,DAT_101361fc);
  }
  else if (DAT_10136208 == 2) {
    ppuVar3 = &PTR_LOOP_1011e4a8;
    do {
      if (ppuVar3[4] != (undefined *)0x0) {
        VirtualFree(ppuVar3[4],0,0x8000);
      }
      ppuVar3 = (undefined **)*ppuVar3;
    } while (ppuVar3 != &PTR_LOOP_1011e4a8);
  }
  HeapDestroy(DAT_10136204);
  return;
}

