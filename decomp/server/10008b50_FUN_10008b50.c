
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl
FUN_10008b50(int param_1,int param_2,undefined4 *param_3,float param_4,float param_5,int param_6)

{
  int iVar1;
  int iVar2;
  float fVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  
  if (((param_1 != 0) && (*(int *)(param_2 + 0x128) < *(int *)(param_1 + 0xa4))) &&
     (param_3 != (undefined4 *)0x0)) {
    iVar4 = *(int *)(param_2 + 0x128) * 0xb0 + *(int *)(param_1 + 0xa8) + param_1;
    iVar1 = *(int *)(iVar4 + 0x30);
    iVar5 = *(int *)(iVar4 + 0x34) + param_1;
    if ((iVar1 != 0) && (param_6 <= iVar1)) {
      iVar2 = *(int *)(iVar4 + 0x38);
      if (iVar2 < 2) {
        param_4 = 0.0;
        param_5 = 1.0;
      }
      else {
        param_4 = param_4 * (float)(iVar2 + -1) * (float)_DAT_100de1d0;
        param_5 = param_5 * (float)(iVar2 + -1) * (float)_DAT_100de1d0;
      }
      if (param_6 < iVar1) {
        piVar6 = (int *)(iVar5 + param_6 * 0x4c);
        do {
          if ((piVar6[1] < 5000) &&
             (((fVar3 = (float)*piVar6, param_4 <= fVar3 && (fVar3 < param_5)) ||
              (((*(byte *)(iVar4 + 0x24) & 1) != 0 &&
               (((float)(iVar2 + -1) <= param_5 &&
                (fVar3 < (param_5 - (float)iVar2) + _DAT_100dd618)))))))) {
            *param_3 = *(undefined4 *)(iVar5 + 4 + param_6 * 0x4c);
            param_3[1] = iVar5 + param_6 * 0x4c + 0xc;
            return param_6 + 1;
          }
          param_6 = param_6 + 1;
          piVar6 = piVar6 + 0x13;
        } while (param_6 < iVar1);
      }
    }
  }
  return 0;
}

