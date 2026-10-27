
void FUN_100ce9c4(void)

{
  if (DAT_101361f4 != (undefined4 *)0x0) {
    VirtualFree((LPVOID)(DAT_101361e8 * 0x8000 + DAT_101361f4[3]),0x8000,0x4000);
    DAT_101361f4[2] = DAT_101361f4[2] | 0x80000000U >> ((byte)DAT_101361e8 & 0x1f);
    *(undefined4 *)(DAT_101361f4[4] + 0xc4 + DAT_101361e8 * 4) = 0;
    *(char *)(DAT_101361f4[4] + 0x43) = *(char *)(DAT_101361f4[4] + 0x43) + -1;
    if (*(char *)(DAT_101361f4[4] + 0x43) == '\0') {
      DAT_101361f4[1] = DAT_101361f4[1] & 0xfffffffe;
    }
    if ((DAT_101361f4[2] == -1) && (1 < DAT_101361f8)) {
      HeapFree(DAT_10136204,0,(LPVOID)DAT_101361f4[4]);
      FUN_100c97a0(DAT_101361f4,DAT_101361f4 + 5,
                   (DAT_101361f8 * 0x14 - (int)DAT_101361f4) + -0x14 + DAT_101361fc);
      DAT_101361f8 = DAT_101361f8 + -1;
    }
    DAT_101361f4 = (undefined4 *)0x0;
  }
  return;
}

