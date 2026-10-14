
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_10083ee0(float *param_1)

{
  float fVar1;
  int iVar2;
  
  iVar2 = 3;
  do {
    if (*param_1 <= (float)_DAT_100de220) {
      if (*param_1 < (float)_DAT_100ef338) {
        fVar1 = *param_1 + (float)_DAT_100de210;
        goto LAB_10083f17;
      }
    }
    else {
      fVar1 = *param_1 - (float)_DAT_100de210;
LAB_10083f17:
      *param_1 = fVar1;
    }
    param_1 = param_1 + 1;
    iVar2 = iVar2 + -1;
    if (iVar2 == 0) {
      return;
    }
  } while( true );
}

