
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 __cdecl
FUN_1001c470(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  float10 fVar5;
  longlong lVar6;
  
  FUN_10026030(param_4,param_3);
  uVar2 = FUN_10026090();
  (*DAT_100a502c)(s_default_fov_10078604);
  lVar6 = __ftol();
  uVar4 = (undefined4)((ulonglong)lVar6 >> 0x20);
  iVar3 = (int)lVar6;
  if ((DAT_100a9584 != 0) && (*(float *)(DAT_100a9584 + 0xc) != _DAT_10059a18)) {
    return CONCAT44(uVar4,1);
  }
  DAT_100a9588 = (float)(int)uVar2;
  if (uVar2 == 0) {
    *(int *)(param_1 + 0x58) = iVar3;
  }
  else {
    *(uint *)(param_1 + 0x58) = uVar2;
  }
  if (*(int *)(param_1 + 0x58) == iVar3) {
    *(undefined4 *)(param_1 + 0x18) = 0;
    return CONCAT44(uVar4,1);
  }
  fVar5 = (float10)(*DAT_100a502c)(s_zoom_sensitivity_ratio_10078614);
  iVar1 = DAT_100a9ac4;
  *(float *)(param_1 + 0x18) =
       (float)(((float10)(int)uVar2 / (float10)iVar3) * (float10)*(float *)(DAT_100a9ac4 + 0xc) *
              fVar5);
  return CONCAT44(iVar1,1);
}

