
void __fastcall FUN_1009b1d0(int *param_1)

{
  int iVar1;
  float10 fVar2;
  
  FUN_1009b130((int)param_1);
  iVar1 = *param_1;
  fVar2 = (float10)(*DAT_10121f74)(0x40333333,0x404ccccd,0x3f800000,0x40000000);
  (**(code **)(iVar1 + 0x198))(param_1[0xc5],(float)fVar2);
  return;
}

