
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __cdecl FUN_1005185c(int param_1,int param_2,double param_3,double *param_4)

{
  double dVar1;
  double dVar2;
  int iVar3;
  
  dVar1 = (double)CONCAT44(param_2,param_1);
  if ((double)CONCAT44(param_2,param_1) < _DAT_1005d2a8) {
    dVar1 = -dVar1;
  }
  dVar2 = _DAT_1007e7d8;
  if (param_3._4_4_ == 0x7ff00000) {
    if (param_3._0_4_ != 0) {
LAB_100518e7:
      if (param_2 == 0x7ff00000) {
        if (param_1 != 0) {
          return 0;
        }
        if (_DAT_1005d2a8 < param_3) goto LAB_10051982;
        if (param_3 < _DAT_1005d2a8) goto LAB_10051919;
      }
      else {
        if (param_2 != -0x100000) {
          return 0;
        }
        if (param_1 != 0) {
          return 0;
        }
        iVar3 = FUN_1005198c(param_3);
        if (_DAT_1005d2a8 < param_3) {
          dVar2 = _DAT_1007e7d8;
          if (iVar3 == 1) {
            dVar2 = -_DAT_1007e7d8;
          }
          goto LAB_10051982;
        }
        if (param_3 < _DAT_1005d2a8) {
          dVar2 = _DAT_1007e7f8;
          if (iVar3 != 1) {
            dVar2 = 0.0;
          }
          goto LAB_10051982;
        }
      }
      dVar2 = 1.0;
      goto LAB_10051982;
    }
    if (_DAT_10059a10 < dVar1) goto LAB_10051982;
    if (_DAT_10059a10 <= dVar1) {
LAB_100518ac:
      *param_4 = _DAT_1007e7e0;
      return 1;
    }
  }
  else {
    if (param_3 != -INFINITY) goto LAB_100518e7;
    if (dVar1 <= _DAT_10059a10) {
      if (_DAT_10059a10 <= dVar1) goto LAB_100518ac;
      goto LAB_10051982;
    }
  }
LAB_10051919:
  dVar2 = 0.0;
LAB_10051982:
  *param_4 = dVar2;
  return 0;
}

