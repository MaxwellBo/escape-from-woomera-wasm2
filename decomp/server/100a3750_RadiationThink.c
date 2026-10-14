
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: void __thiscall CTriggerHurt::RadiationThink(void) */

void __thiscall CTriggerHurt::RadiationThink(CTriggerHurt *this)

{
  float fVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  float fVar6;
  float fVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  undefined4 *puVar11;
  float10 fVar12;
  float fStack_24;
  float local_20;
  float local_1c;
  float fStack_18;
  float fStack_14;
  float fStack_10;
  undefined4 local_4;
  
                    /* 0xa3750  171  ?RadiationThink@CTriggerHurt@@QAEXXZ */
  iVar9 = *(int *)(this + 4);
  local_20 = *(float *)(iVar9 + 0xd4) + *(float *)(iVar9 + 200);
  local_1c = *(float *)(iVar9 + 0xd8) + *(float *)(iVar9 + 0xcc);
  fVar1 = *(float *)(iVar9 + 8);
  uVar2 = *(undefined4 *)(iVar9 + 0xc);
  local_4 = *(undefined4 *)(iVar9 + 0x10);
  fVar6 = local_20 * _DAT_100dd614;
  uVar3 = *(undefined4 *)(iVar9 + 0x174);
  uVar4 = *(undefined4 *)(iVar9 + 0x178);
  fVar7 = local_1c * _DAT_100dd614;
  uVar5 = *(undefined4 *)(iVar9 + 0x17c);
  *(float *)(iVar9 + 8) = (*(float *)(iVar9 + 0xd0) + *(float *)(iVar9 + 0xc4)) * _DAT_100dd614;
  *(float *)(iVar9 + 0xc) = fVar6;
  *(float *)(iVar9 + 0x10) = fVar7;
  iVar9 = *(int *)(this + 4);
  *(undefined4 *)(iVar9 + 0x174) = 0;
  *(undefined4 *)(iVar9 + 0x178) = 0;
  *(undefined4 *)(iVar9 + 0x17c) = 0;
  iVar8 = (*DAT_10121e4c)(*(undefined4 *)(*(int *)(this + 4) + 0x208));
  iVar9 = *(int *)(this + 4);
  *(float *)(iVar9 + 8) = fVar1;
  *(undefined4 *)(iVar9 + 0xc) = uVar2;
  *(undefined4 *)(iVar9 + 0x10) = local_4;
  iVar9 = *(int *)(this + 4);
  *(undefined4 *)(iVar9 + 0x174) = uVar3;
  *(undefined4 *)(iVar9 + 0x178) = uVar4;
  *(undefined4 *)(iVar9 + 0x17c) = uVar5;
  if ((iVar8 != 0) && (iVar9 = (*DAT_10121f20)(iVar8), iVar9 != 0)) {
    iVar9 = iVar8 + 0x80;
    if ((iVar9 == 0) && (iVar10 = (*DAT_10121e5c)(), iVar10 != 0)) {
      iVar9 = iVar10 + 0x80;
    }
    iVar10 = *(int *)(iVar9 + 0x208);
    if ((iVar10 == 0) || (puVar11 = *(undefined4 **)(iVar10 + 0x7c), puVar11 == (undefined4 *)0x0))
    {
      puVar11 = (undefined4 *)(*DAT_10121f04)(iVar10,0x69c);
      if (puVar11 == (undefined4 *)0x0) {
        puVar11 = (undefined4 *)0x0;
      }
      else {
        FUN_1001d7d0(puVar11);
        *puVar11 = &PTR_FUN_100e0904;
      }
      puVar11[1] = iVar9;
    }
    iVar9 = *(int *)(this + 4);
    local_20 = *(float *)(iVar9 + 0xd4) + *(float *)(iVar9 + 200);
    local_1c = *(float *)(iVar9 + 0xd8) + *(float *)(iVar9 + 0xcc);
    fVar1 = (*(float *)(iVar9 + 0xc4) + *(float *)(iVar9 + 0xd0)) * _DAT_100dd614;
    fVar6 = local_20 * _DAT_100dd614;
    fVar7 = local_1c * _DAT_100dd614;
    FUN_10001d60(&fStack_24,(*(float *)(iVar8 + 0x144) + *(float *)(iVar8 + 0x150)) * _DAT_100dd614,
                 (*(float *)(iVar8 + 0x154) + *(float *)(iVar8 + 0x148)) * _DAT_100dd614,
                 (*(float *)(iVar8 + 0x158) + *(float *)(iVar8 + 0x14c)) * _DAT_100dd614);
    FUN_10001d60(&fStack_24,fVar1 - fStack_24,fVar6 - local_20,fVar7 - local_1c);
    fStack_10 = local_1c;
    fStack_18 = fStack_24;
    fStack_14 = local_20;
    fVar12 = FUN_1000a9b0(&fStack_18);
    if (fVar12 <= (float10)(float)puVar11[0x128]) {
      puVar11[0x128] = (float)fVar12;
      (**(code **)(*(int *)this + 8))(0x3e800000);
      return;
    }
  }
  (**(code **)(*(int *)this + 8))(0x3e800000);
  return;
}

