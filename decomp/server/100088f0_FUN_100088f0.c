
int __cdecl FUN_100088f0(int param_1,byte *param_2)

{
  byte *pbVar1;
  uint uVar2;
  void *this;
  void *extraout_ECX;
  int iVar3;
  
  if (param_1 == 0) {
    return 0;
  }
  this = *(void **)(param_1 + 0xa4);
  pbVar1 = (byte *)(*(int *)(param_1 + 0xa8) + param_1);
  iVar3 = 0;
  if (0 < (int)this) {
    do {
      uVar2 = FUN_100d8b20(this,pbVar1,param_2);
      if (uVar2 == 0) {
        return iVar3;
      }
      iVar3 = iVar3 + 1;
      pbVar1 = pbVar1 + 0xb0;
      this = extraout_ECX;
    } while (iVar3 < *(int *)(param_1 + 0xa4));
  }
  return -1;
}

