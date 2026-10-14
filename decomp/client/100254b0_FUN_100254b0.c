
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_100254b0(float param_1,int param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  
  iVar1 = DAT_100a4dd0;
  if (param_1 == _DAT_100601b0) {
    lVar3 = __ftol();
    iVar2 = (int)lVar3;
  }
  else if (_DAT_10059a18 <= param_1) {
    lVar3 = __ftol();
    iVar2 = (int)lVar3;
  }
  else {
    lVar3 = __ftol();
    iVar2 = (int)lVar3;
  }
  if (iVar1 < iVar2 + param_2) {
    return iVar1 - param_2;
  }
  if (iVar2 < 0) {
    iVar2 = 0;
  }
  return iVar2;
}

