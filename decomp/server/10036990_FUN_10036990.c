
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_10036990(int *param_1)

{
  uint *puVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  bool bVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined3 extraout_var;
  longlong lVar8;
  
  (**(code **)(*param_1 + 0x2c))();
  iVar6 = param_1[1];
  if ((*(byte *)(iVar6 + 0x1a0) & 1) == 0) {
    *(undefined4 *)(iVar6 + 0x16c) = 0x3f800000;
  }
  else {
    *(undefined4 *)(iVar6 + 0x16c) = 0;
  }
  if (param_1[0x3c] != 0) {
    *(uint *)(param_1[1] + 0x1a4) = *(uint *)(param_1[1] + 0x1a4) | 0x20;
    iVar6 = param_1[1];
    fVar3 = (*(float *)(iVar6 + 0xe0) + *(float *)(iVar6 + 0xec)) * _DAT_100dd614;
    *(float *)(iVar6 + 0x174) =
         (*(float *)(iVar6 + 0xdc) + *(float *)(iVar6 + 0xe8)) * _DAT_100dd614;
    fVar4 = (*(float *)(iVar6 + 0xe4) + *(float *)(iVar6 + 0xf0)) * _DAT_100dd614;
    *(float *)(iVar6 + 0x178) = fVar3;
    *(float *)(iVar6 + 0x17c) = fVar4;
  }
  if (param_1[0x3d] != 0) {
    iVar6 = (*DAT_10121e5c)();
    if (iVar6 == 0) {
      iVar6 = 0;
    }
    else {
      iVar6 = iVar6 + 0x80;
    }
    iVar2 = *(int *)(iVar6 + 0x208);
    if ((iVar2 == 0) || (puVar7 = *(undefined4 **)(iVar2 + 0x7c), puVar7 == (undefined4 *)0x0)) {
      puVar7 = (undefined4 *)(*DAT_10121f04)(iVar2,0xb8);
      if (puVar7 == (undefined4 *)0x0) {
        puVar7 = (undefined4 *)0x0;
      }
      else {
        *puVar7 = &PTR_FUN_100e46d8;
      }
      puVar7[1] = iVar6;
    }
    param_1[0x3e] = (int)puVar7;
  }
  *(undefined4 *)(param_1[1] + 0x10c) = 4;
  *(undefined4 *)(param_1[1] + 0x108) = 7;
  param_1[0x35] = *(int *)(param_1[1] + 0x54);
  *(undefined4 *)(param_1[1] + 0x54) = 0;
  iVar6 = param_1[1];
  lVar8 = __ftol();
  param_1[0x39] = (int)lVar8;
  lVar8 = __ftol();
  param_1[0x3a] = (int)lVar8;
  param_1[0x3b] = *(int *)(iVar6 + 0x148);
  if (param_1[0x32] == 0) {
    *(undefined4 *)(iVar6 + 0x20c) = 1;
  }
  (*DAT_10121e10)(*(undefined4 *)(param_1[1] + 0x208),
                  *(int *)(param_1[1] + 0xb8) + *(int *)(DAT_10122044 + 0x98));
  param_1[0x1e] = (int)CBreakable::BreakTouch;
  param_1[0x1f] = (int)CBreakable::BreakUse;
  if ((*(byte *)(param_1[1] + 0x1a0) & 1) != 0) {
    param_1[0x1e] = 0;
  }
  bVar5 = FUN_10037dd0((int)param_1);
  if ((CONCAT31(extraout_var,bVar5) == 0) && (*(int *)(param_1[1] + 0x148) != 0)) {
    puVar1 = (uint *)(param_1[1] + 0x1a4);
    *puVar1 = *puVar1 | 0x2000000;
  }
  iVar6 = param_1[0x18];
  if (0x1f < iVar6) {
    (*DAT_10121eb4)(iVar6,&DAT_10103c14);
    return;
  }
  if (iVar6 < -0x1f) {
    (*DAT_10121eb4)(-iVar6,&DAT_10103c18);
  }
  return;
}

