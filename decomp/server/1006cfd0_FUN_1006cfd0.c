
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __thiscall FUN_1006cfd0(void *this,int param_1,int *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  bool bVar7;
  int iVar8;
  float *pfVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  int local_4c;
  int local_48;
  int local_44;
  int local_28;
  int local_24;
  float local_1c;
  float local_18;
  
  if (param_2 != (int *)0x0) {
    FUN_100c8f17(param_2,(byte *)s__________________________________10112b78);
    FUN_100c8f17(param_2,(byte *)s_InLine_Rejection__10112c8c);
    FUN_100c8f17(param_2,(byte *)s__________________________________10112b78);
  }
  local_44 = 0;
  local_28 = 0;
  iVar8 = 0;
  if (0 < *(int *)((int)this + 0x18)) {
    local_24 = 0;
    do {
      pfVar9 = (float *)(local_24 + *(int *)((int)this + 0xc));
      if (param_2 != (int *)0x0) {
        FUN_100c8f17(param_2,(byte *)s_Node__3d__10112c80);
      }
      local_4c = 0;
      if (0 < (int)pfVar9[8]) {
        do {
          iVar8 = *(int *)(param_1 + 4 + ((int)pfVar9[9] + local_4c) * 0x18);
          local_1c = *(float *)(*(int *)((int)this + 0xc) + iVar8 * 0x58) - *pfVar9;
          local_18 = *(float *)(*(int *)((int)this + 0xc) + 4 + iVar8 * 0x58) - pfVar9[1];
          fVar1 = SQRT(local_1c * local_1c + local_18 * local_18);
          if (fVar1 == _DAT_100dd5f8) {
            local_1c = 0.0;
            local_18 = 0.0;
          }
          else {
            local_1c = (_DAT_100dd618 / fVar1) * local_1c;
            local_18 = local_18 * (_DAT_100dd618 / fVar1);
          }
          *(float *)(param_1 + ((int)pfVar9[9] + local_4c) * 0x18 + 0x14) = fVar1;
          bVar7 = false;
          local_48 = 0;
          if (0 < (int)pfVar9[8]) {
            do {
              if (bVar7) break;
              if (local_48 != local_4c) {
                iVar8 = *(int *)(param_1 + 4 + (local_48 + (int)pfVar9[9]) * 0x18);
                fVar2 = *(float *)(*(int *)((int)this + 0xc) + iVar8 * 0x58) - *pfVar9;
                fVar6 = *(float *)(*(int *)((int)this + 0xc) + 4 + iVar8 * 0x58) - pfVar9[1];
                fVar5 = SQRT(fVar2 * fVar2 + fVar6 * fVar6);
                fVar3 = _DAT_100dd5f8;
                fVar4 = _DAT_100dd5f8;
                if (fVar5 != _DAT_100dd5f8) {
                  fVar3 = fVar2 * (_DAT_100dd618 / fVar5);
                  fVar4 = fVar6 * (_DAT_100dd618 / fVar5);
                }
                if (((float)_DAT_100ed3b8 <= fVar3 * local_1c + fVar4 * local_18) && (fVar5 < fVar1)
                   ) {
                  if (param_2 != (int *)0x0) {
                    FUN_100c8f17(param_2,(byte *)s_REJECTED_NODE__3d_through_Node___10112c50);
                  }
                  bVar7 = true;
                  puVar10 = (undefined4 *)
                            (param_1 + -0x18 + ((int)pfVar9[8] + (int)pfVar9[9]) * 0x18);
                  puVar11 = (undefined4 *)(param_1 + (local_4c + (int)pfVar9[9]) * 0x18);
                  for (iVar8 = 6; iVar8 != 0; iVar8 = iVar8 + -1) {
                    *puVar11 = *puVar10;
                    puVar10 = puVar10 + 1;
                    puVar11 = puVar11 + 1;
                  }
                  local_4c = local_4c + -1;
                  local_44 = local_44 + 1;
                  pfVar9[8] = (float)((int)pfVar9[8] + -1);
                }
              }
              local_48 = local_48 + 1;
            } while (local_48 < (int)pfVar9[8]);
          }
          local_4c = local_4c + 1;
        } while (local_4c < (int)pfVar9[8]);
      }
      if (param_2 != (int *)0x0) {
        FUN_100c8f17(param_2,(byte *)s__________________________________10112c00);
      }
      local_28 = local_28 + 1;
      local_24 = local_24 + 0x58;
      iVar8 = local_44;
    } while (local_28 < *(int *)((int)this + 0x18));
  }
  return iVar8;
}

