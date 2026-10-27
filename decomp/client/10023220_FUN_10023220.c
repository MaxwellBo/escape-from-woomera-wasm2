
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_10023220(float param_1,float *param_2)

{
  float10 fVar1;
  float10 fVar2;
  float10 fVar3;
  
  if ((DAT_100a9808 & 1) != 0) {
    param_1 = param_1 * *(float *)(DAT_100a997c + 0xc);
  }
  if ((DAT_100a9920 & 1) == 0) {
    fVar1 = FUN_100231a0(0x100a98b8);
    param_2[1] = (float)((float10)param_2[1] -
                        fVar1 * (float10)*(float *)(DAT_100a986c + 0xc) * (float10)param_1);
    fVar1 = FUN_100231a0(0x100a98a8);
    param_2[1] = (float)(fVar1 * (float10)*(float *)(DAT_100a986c + 0xc) * (float10)param_1 +
                        (float10)param_2[1]);
    fVar1 = FUN_10026200();
    param_2[1] = (float)fVar1;
  }
  if ((DAT_100a9988 & 1) != 0) {
    FUN_1003fdd0();
    fVar1 = FUN_100231a0(0x100a9898);
    *param_2 = (float)((float10)*param_2 -
                      fVar1 * (float10)*(float *)(DAT_100a9978 + 0xc) * (float10)param_1);
    fVar1 = FUN_100231a0(0x100a9948);
    *param_2 = (float)(fVar1 * (float10)*(float *)(DAT_100a9978 + 0xc) * (float10)param_1 +
                      (float10)*param_2);
  }
  fVar1 = FUN_100231a0(0x100a98e8);
  fVar2 = FUN_100231a0(0x100a97d8);
  fVar3 = (float10)*param_2 -
          (float10)(float)fVar1 * (float10)*(float *)(DAT_100a9978 + 0xc) * (float10)param_1;
  *param_2 = (float)fVar3;
  *param_2 = (float)(fVar2 * (float10)*(float *)(DAT_100a9978 + 0xc) * (float10)param_1 + fVar3);
  if (((float)fVar1 != _DAT_10059a18) || (fVar2 != (float10)_DAT_10059a18)) {
    FUN_1003fdd0();
  }
  if (*(float *)(DAT_100a983c + 0xc) < *param_2) {
    *param_2 = *(float *)(DAT_100a983c + 0xc);
  }
  if (*param_2 < -*(float *)(DAT_100a9884 + 0xc)) {
    *param_2 = -*(float *)(DAT_100a9884 + 0xc);
  }
  if (_DAT_1005fa54 < param_2[2]) {
    param_2[2] = 50.0;
  }
  if (param_2[2] < _DAT_10060170) {
    param_2[2] = -50.0;
  }
  return;
}

