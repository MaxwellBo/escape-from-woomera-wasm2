
float10 __cdecl FUN_100c5e50(int param_1,int param_2)

{
  float *pfVar1;
  float *pfVar2;
  undefined4 local_18 [3];
  undefined4 local_c [3];
  
  pfVar1 = (float *)FUN_100c5c30(local_18,param_2);
  pfVar2 = (float *)FUN_100c5c30(local_c,param_1);
  return SQRT(((float10)*pfVar2 - (float10)*pfVar1) * ((float10)*pfVar2 - (float10)*pfVar1) +
              ((float10)pfVar2[1] - (float10)pfVar1[1]) * ((float10)pfVar2[1] - (float10)pfVar1[1]))
  ;
}

