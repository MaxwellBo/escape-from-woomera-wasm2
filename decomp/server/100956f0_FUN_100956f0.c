
void __fastcall FUN_100956f0(int *param_1)

{
  int iVar1;
  float10 fVar2;
  
  if ((*(byte *)(param_1[1] + 0x1a0) & 1) == 0) {
    iVar1 = *param_1;
    fVar2 = (float10)(*DAT_10121f74)(0x40a00000,0x41700000);
    (**(code **)(iVar1 + 8))((float)fVar2);
  }
  return;
}

