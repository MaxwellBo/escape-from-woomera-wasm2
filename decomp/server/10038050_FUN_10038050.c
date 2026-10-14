
void __fastcall FUN_10038050(char *param_1)

{
  undefined **ppuVar1;
  
  ppuVar1 = &PTR_s_debris_pushbox1_wav_101088d8;
  do {
    (*DAT_10121e0c)(*ppuVar1);
    ppuVar1 = ppuVar1 + 1;
  } while ((int)ppuVar1 < 0x101088e4);
  if ((*(byte *)(*(int *)(param_1 + 4) + 0x1a0) & 0x80) != 0) {
    FUN_10036d40(param_1);
  }
  return;
}

