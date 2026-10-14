
void __cdecl FUN_100b03b0(float *param_1)

{
  float10 fVar1;
  float10 fVar2;
  float10 fVar3;
  
  fVar1 = (float10)(*DAT_10121f74)(0xbf800000,0x3f800000);
  fVar2 = (float10)(*DAT_10121f74)(0xbf800000,0x3f800000);
  fVar3 = (float10)(*DAT_10121f74)(0,0x3f800000);
  *param_1 = (float)fVar1;
  param_1[1] = (float)fVar2;
  param_1[2] = (float)fVar3;
  return;
}

