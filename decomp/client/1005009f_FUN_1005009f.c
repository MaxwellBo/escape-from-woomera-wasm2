
void FUN_1005009f(void)

{
  int iVar1;
  undefined4 *puVar2;
  undefined **ppuVar3;
  
  if (DAT_100bd050 == 3) {
    iVar1 = 0;
    if (0 < DAT_100bd040) {
      puVar2 = (undefined4 *)((int)DAT_100bd044 + 0xc);
      do {
        VirtualFree((LPVOID)*puVar2,0x100000,0x4000);
        VirtualFree((LPVOID)*puVar2,0,0x8000);
        HeapFree(DAT_100bd04c,0,(LPVOID)puVar2[1]);
        puVar2 = puVar2 + 5;
        iVar1 = iVar1 + 1;
      } while (iVar1 < DAT_100bd040);
    }
    HeapFree(DAT_100bd04c,0,DAT_100bd044);
  }
  else if (DAT_100bd050 == 2) {
    ppuVar3 = &PTR_LOOP_1007c3c8;
    do {
      if (ppuVar3[4] != (undefined *)0x0) {
        VirtualFree(ppuVar3[4],0,0x8000);
      }
      ppuVar3 = (undefined **)*ppuVar3;
    } while (ppuVar3 != &PTR_LOOP_1007c3c8);
  }
  HeapDestroy(DAT_100bd04c);
  return;
}

