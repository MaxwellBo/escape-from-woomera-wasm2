
float * __cdecl FUN_10058750(float *param_1,int param_2,int param_3,byte *param_4)

{
  byte bVar1;
  int *piVar2;
  float local_c;
  float local_8;
  float local_4;
  
  bVar1 = *param_4;
  if ((((char)bVar1 < '0') || ('9' < (char)bVar1)) && (bVar1 != 0x2d)) {
    piVar2 = (int *)FUN_100af060(0,param_4,param_3);
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 0x18))(param_1,param_3);
      return param_1;
    }
    (*DAT_10121efc)(4,s__s___s__has_bad_or_missing_calc__1011045c,
                    **(int **)(param_2 + 4) + *(int *)(DAT_10122044 + 0x98),
                    (*(int **)(param_2 + 4))[0x73] + *(int *)(DAT_10122044 + 0x98),param_4);
    *param_1 = DAT_10121dd8;
    param_1[1] = DAT_10121ddc;
    param_1[2] = DAT_10121de0;
    return param_1;
  }
  FUN_100b0920(&local_c,(char *)param_4);
  *param_1 = local_c;
  param_1[1] = local_8;
  param_1[2] = local_4;
  return param_1;
}

