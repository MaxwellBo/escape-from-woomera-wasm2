
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_10040080(int param_1)

{
  float10 fVar1;
  
  fVar1 = (float10)fsin((float10)_DAT_1007a97c * (float10)*(float *)(param_1 + 0x40));
  *(float *)(param_1 + 0x14) =
       (float)(fVar1 * (float10)_DAT_1007a9c4 * (float10)DAT_100b6f9c +
              (float10)*(float *)(param_1 + 0x14));
  fVar1 = (float10)fsin((float10)_DAT_1007a994 * (float10)*(float *)(param_1 + 0x40));
  *(float *)(param_1 + 0xc) =
       (float)(fVar1 * (float10)_DAT_1007a9dc * (float10)DAT_100b6f9c +
              (float10)*(float *)(param_1 + 0xc));
  fVar1 = (float10)fsin((float10)_DAT_1007a964 * (float10)*(float *)(param_1 + 0x40));
  *(float *)(param_1 + 0x10) =
       (float)(fVar1 * (float10)_DAT_1007a9ac * (float10)DAT_100b6f9c +
              (float10)*(float *)(param_1 + 0x10));
  return;
}

