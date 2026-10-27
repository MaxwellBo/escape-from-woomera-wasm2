
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_100af360(float *param_1,float param_2,undefined4 param_3,int param_4,float param_5)

{
  int iVar1;
  float fVar2;
  float fVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  float fVar8;
  undefined4 uVar9;
  
  uVar4 = FUN_100af4d0();
  uVar5 = FUN_100af4d0();
  param_4 = 1;
  if (0 < *(int *)(DAT_10122044 + 0x90)) {
    do {
      iVar6 = FUN_100af1c0(param_4);
      if ((((iVar6 != 0) && (iVar1 = *(int *)(iVar6 + 4), (*(uint *)(iVar1 + 0x1a4) & 0x200) != 0))
          && ((param_5 <= _DAT_100dd5f8 ||
              (fVar8 = *param_1 - *(float *)(iVar1 + 8),
              fVar2 = param_1[1] - *(float *)(iVar1 + 0xc),
              fVar3 = param_1[2] - *(float *)(iVar1 + 0x10),
              SQRT(fVar8 * fVar8 + fVar3 * fVar3 + fVar2 * fVar2) < param_5)))) &&
         (param_2 != _DAT_100dd5f8)) {
        uVar9 = 0x45800000;
        fVar8 = param_2;
        uVar7 = FUN_100af4d0();
        (*DAT_10121ec0)(1,DAT_10124860,0,*(undefined4 *)(*(int *)(iVar6 + 4) + 0x208),fVar8,uVar9);
        (*DAT_10121ed0)(uVar7 & 0xffff);
        (*DAT_10121ed0)(uVar4 & 0xffff);
        (*DAT_10121ed0)(uVar5 & 0xffff);
        (*DAT_10121ec4)();
      }
      param_4 = param_4 + 1;
    } while (param_4 <= *(int *)(DAT_10122044 + 0x90));
  }
  return;
}

