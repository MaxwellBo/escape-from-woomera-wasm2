
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_1009bd00(int *param_1)

{
  float fVar1;
  int iVar2;
  float10 fVar3;
  
  iVar2 = FUN_1009b210(param_1);
  if (iVar2 != 0) {
    if ((float)param_1[0xdd] < *DAT_10122044) {
      param_1[0xc2] = param_1[0xc2] & 0xffffff7f;
    }
    if (((*(byte *)(param_1 + 0xc2) & 0x80) == 0) && ((param_1[0x57] & 0x40000U) != 0)) {
      iVar2 = *param_1;
      fVar3 = (float10)(*DAT_10121f74)(0x40333333,0x404ccccd,0x3f800000,0x40000000);
      (**(code **)(iVar2 + 0x198))(param_1[0xd5],(float)fVar3);
      fVar1 = *DAT_10122044 + _DAT_100de498;
      param_1[0xc2] = param_1[0xc2] | 0x80;
      param_1[0xdd] = (int)fVar1;
    }
  }
  return;
}

