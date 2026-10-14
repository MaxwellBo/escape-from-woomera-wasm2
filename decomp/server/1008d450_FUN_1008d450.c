
void __fastcall FUN_1008d450(int *param_1)

{
  int iVar1;
  float10 fVar2;
  
  iVar1 = FUN_1009b210(param_1);
  if (iVar1 != 0) {
    FUN_1009b910(param_1,10.0);
    iVar1 = *param_1;
    param_1[0xdf] = param_1[0x58];
    param_1[0xe0] = param_1[0x59];
    fVar2 = (float10)(*DAT_10121f74)(0x40400000,0x40c00000,0x3f800000,0x3f4ccccd);
    (**(code **)(iVar1 + 0x198))(s_SC_SCREAM_10115a7c,(float)fVar2);
  }
  return;
}

