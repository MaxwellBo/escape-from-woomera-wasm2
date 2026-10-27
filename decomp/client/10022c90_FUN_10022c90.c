
void __cdecl FUN_10022c90(int *param_1)

{
  byte *pbVar1;
  int iVar2;
  undefined4 extraout_ECX;
  
  pbVar1 = (byte *)(*DAT_100a508c)(1);
  if (*pbVar1 == 0) {
    param_1[1] = 0;
    *param_1 = 0;
    param_1[2] = 4;
  }
  else {
    iVar2 = FUN_100499e5((void *)CONCAT31((int3)((uint)extraout_ECX >> 8),*pbVar1),pbVar1);
    if (*param_1 == iVar2) {
      *param_1 = 0;
    }
    else {
      if (param_1[1] != iVar2) {
        return;
      }
      param_1[1] = 0;
    }
    if (((*param_1 == 0) && (param_1[1] == 0)) && ((param_1[2] & 1U) != 0)) {
      param_1[2] = param_1[2] & 0xfffffffeU | 4;
      return;
    }
  }
  return;
}

