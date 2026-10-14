
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
FUN_1001d530(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  int iVar2;
  float *pfVar3;
  float *pfVar4;
  longlong lVar5;
  
  FUN_10026030(param_4,param_3);
  pfVar3 = (float *)&DAT_100a9590;
  do {
    uVar1 = FUN_10026090();
    pfVar4 = pfVar3 + 1;
    *pfVar3 = (float)(int)uVar1;
    pfVar3 = pfVar4;
  } while ((int)pfVar4 < 0x100a959c);
  iVar2 = FUN_100260d0();
  _DAT_100a95a0 = (float)iVar2;
  iVar2 = FUN_100260d0();
  DAT_100a958c = (float)iVar2;
  if (_DAT_10059a18 < _DAT_100a95a0) {
    DAT_100a959c = FUN_100260d0();
    DAT_100a95a4 = 30000.0;
    return;
  }
  if (_DAT_100a95a0 < _DAT_10059a18) {
    iVar2 = FUN_100260d0();
    DAT_100a95a4 = (float)iVar2;
    lVar5 = __ftol();
    DAT_100a959c = (int)lVar5;
    return;
  }
  iVar2 = FUN_100260d0();
  DAT_100a95a4 = (float)iVar2;
  return;
}

