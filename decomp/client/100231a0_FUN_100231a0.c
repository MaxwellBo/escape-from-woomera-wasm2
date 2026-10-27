
/* WARNING: Removing unreachable block (ram,0x100231ed) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __cdecl FUN_100231a0(int param_1)

{
  uint uVar1;
  float fVar2;
  uint uVar3;
  float10 fVar4;
  
  uVar1 = *(uint *)(param_1 + 8);
  uVar3 = uVar1 & 1;
  if ((uVar1 & 2) == 0) {
    fVar2 = _DAT_10059a18;
    if ((uVar1 & 4) != 0) goto LAB_10023213;
    if (uVar3 != 0) {
      fVar4 = (float10)_DAT_10059a10;
      *(uint *)(param_1 + 8) = uVar3;
      return fVar4;
    }
  }
  else {
    if ((uVar1 & 4) != 0) {
      fVar2 = _DAT_1005dc08;
      if (uVar3 != 0) {
        fVar4 = (float10)_DAT_1005dc04;
        *(uint *)(param_1 + 8) = uVar3;
        return fVar4;
      }
LAB_10023213:
      *(uint *)(param_1 + 8) = uVar3;
      return (float10)fVar2;
    }
    if (uVar3 != 0) {
      fVar4 = (float10)_DAT_100599f0;
      *(uint *)(param_1 + 8) = uVar3;
      return fVar4;
    }
  }
  fVar4 = (float10)_DAT_1005d2a8;
  *(uint *)(param_1 + 8) = uVar3;
  return fVar4;
}

