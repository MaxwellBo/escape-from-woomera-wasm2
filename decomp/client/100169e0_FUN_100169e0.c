
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100169e0(void)

{
  uint uVar1;
  undefined *puVar2;
  int iVar3;
  
  uVar1 = DAT_100a4fdc;
  if (DAT_100a4fe0 == 0) {
    if (DAT_100a4fdc != DAT_100a3930) {
      DAT_100a3930 = DAT_100a4fdc;
      puVar2 = &DAT_100a3660;
      do {
        if (puVar2 != (undefined *)0x0) {
          if ((uVar1 & 1 << ((byte)*(undefined4 *)(puVar2 + 0x9c) & 0x1f)) == 0) {
            (&DAT_100a37a8)[*(int *)(puVar2 + 0x90) * 0xb + *(int *)(puVar2 + 0x94)] = 0;
          }
          else {
            (&DAT_100a37a8)[*(int *)(puVar2 + 0x90) * 0xb + *(int *)(puVar2 + 0x94)] = puVar2;
          }
        }
        puVar2 = puVar2 + -0x148;
      } while (0x100a0ea8 < (int)puVar2);
    }
    if ((DAT_100a3968 != 0) && ((DAT_100a3a90 & 1) != 0)) {
      iVar3 = DAT_100a3968;
      if (DAT_100a3968 != 1) {
        (*DAT_100a503c)(DAT_100a3968);
        _DAT_100a3970 = *(undefined4 *)(DAT_100a3968 + 0x9c);
        iVar3 = DAT_100a3968;
      }
      DAT_100a3a90 = DAT_100a3a90 & 0xfffffffe;
      DAT_100a3968 = 0;
      _DAT_100a394c = iVar3;
      (*DAT_100a5048)(s_common_wpn_select_wav_10077f68,0x3f800000);
    }
  }
  return;
}

