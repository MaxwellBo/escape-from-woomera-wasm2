
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: void __thiscall CTriggerTeleport::TeleportTouch(class CBaseEntity *) */

void __thiscall CTriggerTeleport::TeleportTouch(CTriggerTeleport *this,CBaseEntity *param_1)

{
  float fVar1;
  int *piVar2;
  int iVar3;
  float fVar4;
  bool bVar5;
  undefined3 extraout_var;
  uint uVar6;
  int iVar7;
  int iVar8;
  float *pfVar9;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  float local_4;
  
                    /* 0xa6a30  241  ?TeleportTouch@CTriggerTeleport@@QAEXPAVCBaseEntity@@@Z */
  piVar2 = *(int **)(param_1 + 4);
  if (((((*(byte *)(piVar2 + 0x69) & 0x28) != 0) &&
       (bVar5 = FUN_100b0030(*(int *)(this + 0x158),param_1), CONCAT31(extraout_var,bVar5) != 0)) &&
      (uVar6 = FUN_100a30c0(this,piVar2), uVar6 != 0)) &&
     (iVar7 = FUN_100af030(0,(byte *)(*(int *)(*(int *)(this + 4) + 0x1c8) +
                                     *(int *)(DAT_10122044 + 0x98))), iVar7 != 0)) {
    iVar8 = FUN_100af030(0,(byte *)(*(int *)(*(int *)(this + 4) + 0x1d4) +
                                   *(int *)(DAT_10122044 + 0x98)));
    if (iVar8 == 0) {
      iVar8 = *(int *)(iVar7 + 4);
      local_18 = *(float *)(iVar8 + 8);
      local_14 = *(float *)(iVar8 + 0xc);
      local_10 = *(float *)(iVar8 + 0x10);
      iVar8 = (**(code **)(*(int *)param_1 + 0xcc))();
      if (iVar8 != 0) {
        local_10 = local_10 - *(float *)(*(int *)(param_1 + 4) + 0xe4);
      }
      local_10 = local_10 + _DAT_100dd618;
      FUN_100afe10((int)param_1,&local_18);
      iVar8 = *(int *)(iVar7 + 4);
      iVar3 = *(int *)(param_1 + 4);
      *(undefined4 *)(iVar3 + 0x50) = *(undefined4 *)(iVar8 + 0x50);
      *(undefined4 *)(iVar3 + 0x54) = *(undefined4 *)(iVar8 + 0x54);
      *(undefined4 *)(iVar3 + 0x58) = *(undefined4 *)(iVar8 + 0x58);
      iVar8 = *(int *)(param_1 + 4);
      *(undefined4 *)(iVar8 + 0x2c) = DAT_10121dd8;
      *(undefined4 *)(iVar8 + 0x30) = DAT_10121ddc;
      *(undefined4 *)(iVar8 + 0x34) = DAT_10121de0;
      iVar8 = *(int *)(param_1 + 4);
      *(undefined4 *)(iVar8 + 0x20) = *(undefined4 *)(iVar8 + 0x2c);
      *(undefined4 *)(iVar8 + 0x24) = *(undefined4 *)(iVar8 + 0x30);
      *(undefined4 *)(iVar8 + 0x28) = *(undefined4 *)(iVar8 + 0x34);
      iVar8 = (**(code **)(*(int *)param_1 + 0xcc))();
      if (iVar8 != 0) {
        iVar7 = *(int *)(iVar7 + 4);
        iVar8 = *(int *)(param_1 + 4);
        *(undefined4 *)(iVar8 + 0x74) = *(undefined4 *)(iVar7 + 0x50);
        *(undefined4 *)(iVar8 + 0x78) = *(undefined4 *)(iVar7 + 0x54);
        *(undefined4 *)(iVar8 + 0x7c) = *(undefined4 *)(iVar7 + 0x58);
      }
      piVar2[0x28] = 1;
    }
    else {
      iVar7 = *(int *)(iVar7 + 4);
      iVar3 = *(int *)(iVar8 + 4);
      local_18 = *(float *)(iVar7 + 8) - *(float *)(iVar3 + 8);
      local_14 = *(float *)(iVar7 + 0xc) - *(float *)(iVar3 + 0xc);
      local_10 = *(float *)(iVar7 + 0x10) - *(float *)(iVar3 + 0x10);
      if (((*(float *)(iVar3 + 0x50) != *(float *)(iVar7 + 0x50)) ||
          (*(float *)(iVar3 + 0x54) != *(float *)(iVar7 + 0x54))) ||
         (*(float *)(iVar3 + 0x58) != *(float *)(iVar7 + 0x58))) {
        fVar4 = *(float *)(iVar7 + 0x54) - *(float *)(iVar3 + 0x54);
        *(float *)(*(int *)(param_1 + 4) + 0x54) = fVar4 + *(float *)(*(int *)(param_1 + 4) + 0x54);
        iVar7 = (**(code **)(*(int *)param_1 + 0xcc))();
        if (iVar7 != 0) {
          *(undefined4 *)(*(int *)(param_1 + 4) + 0x50) =
               *(undefined4 *)(*(int *)(param_1 + 4) + 0x74);
        }
        pfVar9 = (float *)FUN_100ae830(&local_c,*(int *)(param_1 + 4) + 0x20);
        fStack_30 = *pfVar9;
        fStack_2c = pfVar9[1] + fVar4;
        fStack_28 = pfVar9[2];
        FUN_100af200(&fStack_30);
        iVar7 = *(int *)(param_1 + 4);
        fVar1 = *(float *)(iVar7 + 0x20);
        local_4 = SQRT(*(float *)(iVar7 + 0x28) * *(float *)(iVar7 + 0x28) +
                       *(float *)(iVar7 + 0x24) * *(float *)(iVar7 + 0x24) + fVar1 * fVar1);
        local_c = local_4 * *(float *)(DAT_10122044 + 0x28);
        local_8 = local_4 * *(float *)(DAT_10122044 + 0x2c);
        local_4 = local_4 * *(float *)(DAT_10122044 + 0x30);
        *(float *)(iVar7 + 0x20) = local_c;
        *(float *)(iVar7 + 0x24) = local_8;
        *(float *)(iVar7 + 0x28) = local_4;
        *(float *)(*(int *)(param_1 + 4) + 0x28) = -*(float *)(*(int *)(param_1 + 4) + 0x28);
        iVar7 = *(int *)(param_1 + 4);
        iVar8 = *(int *)(iVar8 + 4);
        fStack_1c = *(float *)(iVar7 + 0x10) - *(float *)(iVar8 + 0x10);
        fStack_20 = *(float *)(iVar7 + 0xc) - *(float *)(iVar8 + 0xc);
        fStack_24 = *(float *)(iVar7 + 8) - *(float *)(iVar8 + 8);
        pfVar9 = (float *)FUN_100ae830(&local_c,&fStack_24);
        fStack_30 = *pfVar9;
        fStack_2c = pfVar9[1];
        fStack_28 = pfVar9[2];
        FUN_100af200(&fStack_30);
        fStack_2c = fStack_2c + fVar4;
        FUN_100af200(&fStack_30);
        fVar4 = SQRT(fStack_24 * fStack_24 + fStack_20 * fStack_20 + fStack_1c * fStack_1c);
        fStack_30 = fVar4 * *(float *)(DAT_10122044 + 0x28) + local_18;
        fStack_2c = fVar4 * *(float *)(DAT_10122044 + 0x2c) + local_14;
        local_18 = fStack_30 - fStack_24;
        local_14 = fStack_2c - fStack_20;
        local_10 = (-(fVar4 * *(float *)(DAT_10122044 + 0x30)) + local_10) - fStack_1c;
      }
      iVar7 = *(int *)(param_1 + 4);
      local_4 = local_10 + *(float *)(iVar7 + 0x10);
      local_8 = local_14 + *(float *)(iVar7 + 0xc);
      local_c = local_18 + *(float *)(iVar7 + 8);
      FUN_100afe10((int)param_1,&local_c);
    }
    piVar2[0x28] = 1;
    piVar2[0x69] = piVar2[0x69] & 0xfffffdff;
    FUN_10098c10((uint *)(*(int *)(*(int *)(this + 4) + 0x1e8) + *(int *)(DAT_10122044 + 0x98)),
                 (int *)param_1,this,3,0);
  }
  return;
}

