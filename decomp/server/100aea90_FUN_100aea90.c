
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl FUN_100aea90(int *param_1,int param_2,float *param_3,float param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  
  iVar6 = 1;
  piVar4 = (int *)(*DAT_10121f28)(1);
  fVar1 = param_4 * param_4;
  iVar7 = 0;
  if (piVar4 == (int *)0x0) {
    return 0;
  }
  if (1 < *(int *)(DAT_10122044 + 0x94)) {
    do {
      if ((((*piVar4 == 0) && ((*(byte *)(piVar4 + 0x89) & 0x28) != 0)) &&
          (fVar2 = (*param_3 - (float)piVar4[0x22]) * (*param_3 - (float)piVar4[0x22]),
          fVar2 <= fVar1)) &&
         ((((fVar2 = (param_3[1] - (float)piVar4[0x23]) * (param_3[1] - (float)piVar4[0x23]) + fVar2
            , fVar2 <= fVar1 &&
            (fVar3 = param_3[2] - ((float)piVar4[0x56] + (float)piVar4[0x53]) * (float)_DAT_100dd648
            , fVar3 * fVar3 + fVar2 <= fVar1)) &&
           ((piVar5 = piVar4, piVar4 != (int *)0x0 ||
            (piVar5 = (int *)(*DAT_10121f1c)(0), piVar5 != (int *)0x0)))) && (piVar5[0x1f] != 0))))
      {
        *param_1 = piVar5[0x1f];
        iVar7 = iVar7 + 1;
        param_1 = param_1 + 1;
        if (param_2 <= iVar7) {
          return iVar7;
        }
      }
      iVar6 = iVar6 + 1;
      piVar4 = piVar4 + 0xc9;
    } while (iVar6 < *(int *)(DAT_10122044 + 0x94));
  }
  return iVar7;
}

