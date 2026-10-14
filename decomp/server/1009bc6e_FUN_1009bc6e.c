
undefined4 __fastcall FUN_1009bc6e(int param_1)

{
  byte bVar1;
  uint *in_EAX;
  byte in_AF;
  uint *puVar2;
  
  *in_EAX = *in_EAX | 0xba241009;
  bVar1 = (byte)in_EAX;
  puVar2 = (uint *)CONCAT31((int3)((uint)in_EAX >> 8),
                            bVar1 + (9 < (bVar1 & 0xf) | in_AF) * -6 + (0x99 < bVar1) * -0x60);
  *puVar2 = *puVar2 | 0xba3a1009;
  if (*DAT_10122044 < *(float *)(param_1 + 0x378)) {
    return 1;
  }
  return 0;
}

