
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_1005d5a0(void *this,undefined4 param_1)

{
  int iVar1;
  float *pfVar2;
  uint *puVar3;
  int iVar4;
  int iVar5;
  float fVar6;
  float *local_168;
  float *local_164;
  float *local_160;
  int local_15c;
  float local_158;
  float local_154;
  float local_150;
  float fStack_14c;
  float fStack_148;
  float fStack_144;
  float fStack_140;
  float fStack_13c;
  float fStack_138;
  float fStack_134;
  float fStack_130;
  float fStack_12c;
  int local_128;
  float fStack_124;
  float fStack_120;
  float fStack_11c;
  float fStack_114;
  float fStack_110;
  float fStack_108;
  float fStack_104;
  float local_100 [7];
  float local_e4 [57];
  
  local_128 = 0;
  iVar1 = *(int *)((int)this + 0x270);
  if (iVar1 < 8) {
    puVar3 = (uint *)(iVar1 * 0x10 + 0x1f8 + (int)this);
    do {
      if ((*puVar3 == 0) || (local_128 = local_128 + 1, (*puVar3 & 0x80) != 0)) break;
      iVar1 = iVar1 + 1;
      puVar3 = puVar3 + 4;
    } while (iVar1 < 8);
    if (1 < local_128) {
      iVar1 = *(int *)((int)this + 4);
      iVar5 = 0;
      iVar4 = 0;
      local_15c = 0;
      local_158 = *(float *)(iVar1 + 8);
      local_128 = local_128 + -1;
      local_154 = *(float *)(iVar1 + 0xc);
      local_150 = *(float *)(iVar1 + 0x10);
      if (0 < local_128) {
        local_164 = local_100 + 4;
        local_168 = local_e4;
        local_160 = local_100 + 3;
        pfVar2 = local_100;
        do {
          iVar1 = FUN_1005d580(*(uint *)((iVar4 + *(int *)((int)this + 0x270)) * 0x10 + 0x1f8 +
                                        (int)this));
          if (iVar1 == 0) {
            iVar1 = (iVar4 + *(int *)((int)this + 0x270)) * 0x10;
            local_15c = iVar5 + 1;
            *pfVar2 = *(float *)(iVar1 + 0x1ec + (int)this);
            pfVar2[1] = *(float *)((int)this + iVar1 + 0x1f0);
            pfVar2[2] = *(float *)((int)this + iVar1 + 500);
            pfVar2[3] = *(float *)((int)this + iVar1 + 0x1f8);
            local_160 = local_160 + 4;
            local_168 = local_168 + 4;
            local_164 = local_164 + 4;
            pfVar2 = pfVar2 + 4;
LAB_1005d8e4:
            iVar5 = local_15c + 1;
            local_158 = *pfVar2;
            local_154 = pfVar2[1];
            local_150 = pfVar2[2];
            local_168 = local_168 + 4;
            local_160 = local_160 + 4;
            local_164 = local_164 + 4;
            pfVar2 = pfVar2 + 4;
            local_15c = iVar5;
          }
          else {
            iVar1 = (**(code **)(*(int *)this + 0x150))
                              (&local_158,
                               (iVar4 + *(int *)((int)this + 0x270)) * 0x10 + 0x1fc + (int)this,
                               param_1,0);
            if (iVar1 != 2) {
              iVar1 = (iVar4 + *(int *)((int)this + 0x270)) * 0x10;
              fStack_114 = *(float *)(iVar1 + 0x1f0 + (int)this) +
                           *(float *)(iVar1 + 0x200 + (int)this);
              fStack_110 = *(float *)((int)this + iVar1 + 500) +
                           *(float *)((int)this + iVar1 + 0x204);
              fStack_14c = (*(float *)(iVar1 + 0x1ec + (int)this) +
                           *(float *)(iVar1 + 0x1fc + (int)this)) * _DAT_100dd614;
              fStack_148 = fStack_114 * _DAT_100dd614;
              fStack_144 = fStack_110 * _DAT_100dd614;
              fStack_108 = local_154 + *(float *)((int)this + iVar1 + 0x1f0);
              fStack_104 = local_150 + *(float *)((int)this + iVar1 + 500);
              fStack_140 = (local_158 + *(float *)((int)this + iVar1 + 0x1ec)) * _DAT_100dd614;
              fStack_13c = fStack_108 * _DAT_100dd614;
              fStack_138 = fStack_104 * _DAT_100dd614;
              fVar6 = (float)(*(uint *)((int)this + iVar1 + 0x1f8) & 0xfffffe7f | 8);
              fStack_134 = fStack_14c;
              fStack_130 = fStack_148;
              fStack_12c = fStack_144;
              fStack_124 = fStack_140;
              fStack_120 = fStack_13c;
              fStack_11c = fStack_138;
              iVar1 = (**(code **)(*(int *)this + 0x150))(&local_158,&fStack_14c,param_1,0);
              if (iVar1 == 2) {
                *local_160 = fVar6;
                *pfVar2 = fStack_14c;
                pfVar2[1] = fStack_148;
                pfVar2[2] = fStack_144;
              }
              else {
                iVar1 = (**(code **)(*(int *)this + 0x150))(&fStack_140,&fStack_14c,param_1,0);
                if (iVar1 == 2) {
                  *local_160 = fVar6;
                  local_160 = local_160 + 4;
                  *pfVar2 = fStack_140;
                  pfVar2[1] = fStack_13c;
                  pfVar2[2] = fStack_138;
                  *local_168 = fVar6;
                  *local_164 = fStack_14c;
                  local_168 = local_168 + 4;
                  local_164[1] = fStack_148;
                  local_164[2] = fStack_144;
                  local_15c = local_15c + 1;
                  local_164 = local_164 + 4;
                  pfVar2 = pfVar2 + 4;
                }
                else {
                  iVar1 = (iVar4 + *(int *)((int)this + 0x270)) * 0x10;
                  *pfVar2 = *(float *)(iVar1 + 0x1ec + (int)this);
                  pfVar2[1] = *(float *)((int)this + iVar1 + 0x1f0);
                  pfVar2[2] = *(float *)((int)this + iVar1 + 500);
                  pfVar2[3] = *(float *)((int)this + iVar1 + 0x1f8);
                }
              }
              goto LAB_1005d8e4;
            }
          }
          iVar4 = iVar4 + 1;
        } while (iVar4 < local_128);
      }
      pfVar2 = (float *)((int)this + (iVar4 + *(int *)((int)this + 0x270)) * 0x10 + 0x1ec);
      local_100[iVar5 * 4] = *pfVar2;
      local_100[iVar5 * 4 + 1] = pfVar2[1];
      local_100[iVar5 * 4 + 2] = pfVar2[2];
      local_100[iVar5 * 4 + 3] = pfVar2[3];
      local_168 = (float *)((int)this + 0x1ec);
      iVar1 = 0;
      local_100[(iVar5 + 1) * 4 + 3] = 0.0;
      *(undefined4 *)((int)this + 0x270) = 0;
      pfVar2 = local_100;
      while (iVar1 < iVar5 + 1) {
        iVar1 = iVar1 + 1;
        *local_168 = *pfVar2;
        local_168[1] = pfVar2[1];
        local_168[2] = pfVar2[2];
        local_168[3] = pfVar2[3];
        local_168 = local_168 + 4;
        pfVar2 = pfVar2 + 4;
        if (7 < iVar1) {
          return;
        }
      }
      if (iVar1 < 8) {
        *(undefined4 *)(iVar1 * 0x10 + 0x1f8 + (int)this) = 0;
      }
    }
  }
  return;
}

