
undefined4 __fastcall FUN_1009b2f0(int *param_1)

{
  int iVar1;
  int *piVar2;
  float10 fVar3;
  
  iVar1 = FUN_1009b210(param_1);
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = *param_1;
  fVar3 = (float10)(*DAT_10121f74)(0x40a00000,0x40f00000,0x3f800000,0x40000000);
  (**(code **)(iVar1 + 0x198))(param_1[200],(float)fVar3);
  piVar2 = FUN_1009af10(param_1,1);
  FUN_10019420(param_1 + 0xdf,(int)piVar2);
  return 1;
}

