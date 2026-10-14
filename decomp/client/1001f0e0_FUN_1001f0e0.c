
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint __cdecl FUN_1001f0e0(int param_1,int param_2,undefined4 param_3,uint param_4)

{
  float fVar1;
  float fVar2;
  byte *pbVar3;
  byte *pbVar4;
  uint uVar5;
  undefined1 *extraout_ECX;
  undefined1 *extraout_ECX_00;
  void *this;
  float10 fVar6;
  
  pbVar3 = (byte *)(**(code **)(DAT_100a5148 + 0x20))(*(undefined4 *)(param_1 + 0x18),param_3);
  pbVar4 = (byte *)(**(code **)(DAT_100a5148 + 0x20))(*(undefined4 *)(param_2 + 0x18),param_3);
  fVar6 = FUN_1004a640(extraout_ECX,pbVar3);
  fVar1 = (float)fVar6;
  fVar6 = FUN_1004a640(extraout_ECX_00,pbVar4);
  fVar2 = (float)fVar6;
  if ((fVar1 == _DAT_10059a18) || (fVar2 == _DAT_10059a18)) {
    uVar5 = FUN_10056910(this,pbVar3,pbVar4);
    return uVar5;
  }
  if (fVar2 < fVar1) {
    return param_4;
  }
  if (fVar1 < fVar2) {
    return -param_4;
  }
  return 0;
}

