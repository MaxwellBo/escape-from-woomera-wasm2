
int __cdecl FUN_100ae980(int *param_1,int param_2,float *param_3,float *param_4,uint param_5)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = 1;
  piVar1 = (int *)(*DAT_10121f28)(1);
  iVar4 = 0;
  if (piVar1 == (int *)0x0) {
    return 0;
  }
  if (1 < *(int *)(DAT_10122044 + 0x94)) {
    do {
      if (((*piVar1 == 0) &&
          ((((param_5 == 0 || ((piVar1[0x89] & param_5) != 0)) && (*param_3 <= (float)piVar1[0x54]))
           && ((param_3[1] <= (float)piVar1[0x55] && (param_3[2] <= (float)piVar1[0x56])))))) &&
         (((float)piVar1[0x51] <= *param_4 &&
          (((((float)piVar1[0x52] <= param_4[1] && ((float)piVar1[0x53] <= param_4[2])) &&
            ((piVar2 = piVar1, piVar1 != (int *)0x0 ||
             (piVar2 = (int *)(*DAT_10121f1c)(0), piVar2 != (int *)0x0)))) && (piVar2[0x1f] != 0))))
         )) {
        *param_1 = piVar2[0x1f];
        iVar4 = iVar4 + 1;
        param_1 = param_1 + 1;
        if (param_2 <= iVar4) {
          return iVar4;
        }
      }
      iVar3 = iVar3 + 1;
      piVar1 = piVar1 + 0xc9;
    } while (iVar3 < *(int *)(DAT_10122044 + 0x94));
  }
  return iVar4;
}

