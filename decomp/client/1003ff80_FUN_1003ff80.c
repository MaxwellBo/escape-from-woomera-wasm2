
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_1003ff80(int param_1)

{
  int iVar1;
  float10 fVar2;
  
  iVar1 = (*DAT_100a50c0)();
  if (iVar1 != 0) {
    *(float *)(iVar1 + 0xb58) = *(float *)(param_1 + 0x94) + *(float *)(param_1 + 0x10);
    *(float *)(iVar1 + 0xb54) =
         *(float *)(param_1 + 0x90) * (float)_DAT_10059cf0 - *(float *)(param_1 + 0xc);
    fVar2 = (float10)fsin((float10)_DAT_1007a97c * (float10)*(float *)(param_1 + 0x40));
    *(float *)(iVar1 + 0xb5c) =
         (float)((float10)*(float *)(iVar1 + 0xb5c) -
                fVar2 * (float10)_DAT_1007a9c4 * (float10)DAT_100b6f9c);
    fVar2 = (float10)fsin((float10)_DAT_1007a994 * (float10)*(float *)(param_1 + 0x40));
    *(float *)(iVar1 + 0xb54) =
         (float)((float10)*(float *)(iVar1 + 0xb54) -
                (float10)_DAT_1007a9dc * (float10)_DAT_100599f0 * fVar2 * (float10)DAT_100b6f9c);
    fVar2 = (float10)fsin((float10)_DAT_1007a964 * (float10)*(float *)(param_1 + 0x40));
    *(float *)(iVar1 + 0xb58) =
         (float)((float10)*(float *)(iVar1 + 0xb58) -
                fVar2 * (float10)_DAT_1007a9ac * (float10)DAT_100b6f9c);
    *(undefined4 *)(iVar1 + 0x2cc) = *(undefined4 *)(iVar1 + 0xb54);
    *(undefined4 *)(iVar1 + 0x2d0) = *(undefined4 *)(iVar1 + 0xb58);
    *(undefined4 *)(iVar1 + 0x2d4) = *(undefined4 *)(iVar1 + 0xb5c);
    *(undefined4 *)(iVar1 + 0xb28) = *(undefined4 *)(iVar1 + 0xb54);
    *(undefined4 *)(iVar1 + 0xb2c) = *(undefined4 *)(iVar1 + 0xb58);
    *(undefined4 *)(iVar1 + 0xb30) = *(undefined4 *)(iVar1 + 0xb5c);
  }
  return;
}

