
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: void __thiscall CRpgRocket::FollowThink(void) */

void __thiscall CRpgRocket::FollowThink(CRpgRocket *this)

{
  int iVar1;
  int iVar2;
  float fVar3;
  int iVar4;
  undefined4 *puVar5;
  float *pfVar6;
  float10 fVar7;
  float *pfVar8;
  int iVar9;
  float fVar10;
  float fVar11;
  float *pfVar12;
  float fVar13;
  float local_7c;
  float local_74;
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  undefined1 local_38 [16];
  float local_28;
  
                    /* 0x8b5b0  112  ?FollowThink@CRpgRocket@@QAEXXZ */
  FUN_100af210((float *)(*(int *)(this + 4) + 0x50));
  local_7c = 4096.0;
  local_74 = DAT_10122044[10];
  local_70 = DAT_10122044[0xb];
  local_6c = DAT_10122044[0xc];
  iVar9 = 0x1008b5f5;
  for (iVar4 = FUN_100aec40(0,s_laser_spot_10115474); iVar4 != 0;
      iVar4 = FUN_100aec40(iVar4,s_laser_spot_10115474)) {
    iVar9 = *(int *)(iVar4 + 4) + 8;
    FUN_100afc60(*(int *)(this + 4) + 8,iVar9,0,*(undefined4 *)(*(int *)(this + 4) + 0x208),local_38
                );
    if ((float)_DAT_100ea5c8 <= local_28) {
      iVar1 = *(int *)(iVar4 + 4);
      iVar2 = *(int *)(this + 4);
      local_68 = *(float *)(iVar1 + 8) - *(float *)(iVar2 + 8);
      local_64 = *(float *)(iVar1 + 0xc) - *(float *)(iVar2 + 0xc);
      local_60 = *(float *)(iVar1 + 0x10) - *(float *)(iVar2 + 0x10);
      fVar13 = local_60 * local_60;
      fVar11 = local_64 * local_64;
      fVar10 = local_68 * local_68;
      local_5c = local_68;
      local_58 = local_64;
      local_54 = local_60;
      fVar7 = FUN_1000a9b0(&local_5c);
      if (fVar7 == (float10)_DAT_100dd5f8) {
        local_50 = 0.0;
        local_4c = 0.0;
        local_48 = 1.0;
      }
      else {
        fVar7 = (float10)_DAT_100dd618 / fVar7;
        iVar9 = 0x1008b6fa;
        FUN_10001d60(&local_50,(float)(fVar7 * (float10)local_5c),(float)((float10)local_58 * fVar7)
                     ,(float)((float10)local_54 * fVar7));
      }
      local_5c = local_50;
      local_58 = local_4c;
      local_54 = local_48;
      fVar3 = local_50 * DAT_10122044[10] +
              local_4c * DAT_10122044[0xb] + local_48 * DAT_10122044[0xc];
      if ((_DAT_100dd5f8 < fVar3) &&
         (fVar13 = (_DAT_100dd618 - fVar3) * SQRT(fVar10 + fVar11 + fVar13), fVar13 < local_7c)) {
        local_74 = local_50;
        local_70 = local_4c;
        local_6c = local_48;
        local_7c = fVar13;
      }
    }
  }
  pfVar12 = &local_44;
  fVar10 = 2.6962673e-29;
  puVar5 = (undefined4 *)FUN_100ae830(pfVar12,&local_74);
  iVar4 = *(int *)(this + 4);
  *(undefined4 *)(iVar4 + 0x50) = *puVar5;
  *(undefined4 *)(iVar4 + 0x54) = puVar5[1];
  *(undefined4 *)(iVar4 + 0x58) = puVar5[2];
  iVar4 = *(int *)(this + 4);
  fVar13 = SQRT(*(float *)(iVar4 + 0x28) * *(float *)(iVar4 + 0x28) +
                *(float *)(iVar4 + 0x24) * *(float *)(iVar4 + 0x24) +
                *(float *)(iVar4 + 0x20) * *(float *)(iVar4 + 0x20));
  if ((float)_DAT_100dd628 <= *DAT_10122044 - *(float *)(this + 0x310)) {
    if ((*(byte *)(iVar4 + 0x118) & 0x40) != 0) {
      *(undefined4 *)(iVar4 + 0x118) = 0;
      FUN_10094b20(*(void **)(this + 4),*(undefined4 *)((int)*(void **)(this + 4) + 0x208),2,
                   s_weapons_rocket1_wav_10102cec,0,0,0x20,100);
    }
    FUN_10001d60(&local_44,local_74 * fVar13 * _DAT_100eff98,local_70 * fVar13 * _DAT_100eff98,
                 local_6c * fVar13 * _DAT_100eff98);
    iVar4 = *(int *)(this + 4);
    FUN_10001d60(&local_50,*(float *)(iVar4 + 0x20) * _DAT_100e1140,
                 *(float *)(iVar4 + 0x24) * _DAT_100e1140,*(float *)(iVar4 + 0x28) * _DAT_100e1140);
    FUN_10001d60(&local_68,local_44 + local_50,local_40 + local_4c,local_3c + local_48);
    iVar4 = *(int *)(this + 4);
    *(float *)(iVar4 + 0x20) = local_68;
    *(float *)(iVar4 + 0x24) = local_64;
    *(float *)(iVar4 + 0x28) = local_60;
    iVar4 = *(int *)(this + 4);
    if (((*(int *)(iVar4 + 0x1c0) == 0) || (*(int *)(iVar4 + 0x1c4) == -0x13)) &&
       (fVar7 = FUN_1000a9b0((float *)(iVar4 + 0x20)), fVar7 < (float10)_DAT_100e0d84)) {
      CGrenade::Detonate((CGrenade *)this);
    }
  }
  else {
    fVar13 = fVar13 * (float)_DAT_100dd600 + (float)_DAT_100effa0;
    local_68 = local_74 * fVar13;
    local_64 = local_70 * fVar13;
    local_40 = *(float *)(iVar4 + 0x24) * _DAT_100e1140;
    local_3c = *(float *)(iVar4 + 0x28) * _DAT_100e1140;
    local_50 = *(float *)(iVar4 + 0x20) * _DAT_100e1140 + local_68;
    local_4c = local_40 + local_64;
    *(float *)(iVar4 + 0x20) = local_50;
    local_48 = local_3c + fVar13 * local_6c;
    *(float *)(iVar4 + 0x24) = local_4c;
    *(float *)(iVar4 + 0x28) = local_48;
    iVar4 = *(int *)(this + 4);
    if ((*(int *)(iVar4 + 0x1c0) == 3) && (-0x11 < *(int *)(iVar4 + 0x1c4))) {
      if (_DAT_100ddae4 <
          SQRT(*(float *)(iVar4 + 0x28) * *(float *)(iVar4 + 0x28) +
               *(float *)(iVar4 + 0x24) * *(float *)(iVar4 + 0x24) +
               *(float *)(iVar4 + 0x20) * *(float *)(iVar4 + 0x20))) {
        fVar7 = FUN_1000a9b0((float *)(iVar4 + 0x20));
        if (fVar7 == (float10)_DAT_100dd5f8) {
          fVar13 = 1.0;
          fVar10 = 0.0;
          fVar11 = 0.0;
        }
        else {
          fVar7 = (float10)_DAT_100dd618 / fVar7;
          fVar13 = (float)(fVar7 * (float10)*(float *)(iVar4 + 0x28));
          fVar10 = (float)(fVar7 * (float10)*(float *)(iVar4 + 0x24));
          fVar11 = (float)(fVar7 * (float10)*(float *)(iVar4 + 0x20));
        }
        FUN_10001d60(&local_50,fVar11,fVar10,fVar13);
        pfVar12 = (float *)(local_4c * _DAT_100ddae4);
        fVar10 = local_50 * _DAT_100ddae4;
        iVar9 = 0x1008b93a;
        FUN_10001d60(&local_44,fVar10,pfVar12,local_48 * _DAT_100ddae4);
        iVar4 = *(int *)(this + 4);
        *(float *)(iVar4 + 0x20) = local_44;
        *(float *)(iVar4 + 0x24) = local_40;
        *(float *)(iVar4 + 0x28) = local_3c;
      }
      iVar4 = 4;
      FUN_10003850(&stack0xffffff68,(undefined4 *)(*(int *)(this + 4) + 8));
      pfVar8 = &local_44;
      fVar11 = 0.1;
      fVar13 = 2.6964163e-29;
      pfVar6 = (float *)FUN_10002280((void *)(*(int *)(this + 4) + 0x20),pfVar8,0.1);
      FUN_10002250((void *)(*(int *)(this + 4) + 8),(float *)&stack0xffffff5c,pfVar6);
      FUN_100b0dd0(fVar13,pfVar8,fVar11,iVar9,fVar10,(float)pfVar12,iVar4);
      (**(code **)(*(int *)this + 8))();
      return;
    }
    if (_DAT_100de478 <
        SQRT(*(float *)(iVar4 + 0x28) * *(float *)(iVar4 + 0x28) +
             *(float *)(iVar4 + 0x24) * *(float *)(iVar4 + 0x24) +
             *(float *)(iVar4 + 0x20) * *(float *)(iVar4 + 0x20))) {
      fVar7 = FUN_1000a9b0((float *)(iVar4 + 0x20));
      if (fVar7 == (float10)_DAT_100dd5f8) {
        fVar13 = 1.0;
        fVar10 = 0.0;
        fVar11 = 0.0;
      }
      else {
        fVar7 = (float10)_DAT_100dd618 / fVar7;
        fVar13 = (float)(fVar7 * (float10)*(float *)(iVar4 + 0x28));
        fVar10 = (float)(fVar7 * (float10)*(float *)(iVar4 + 0x24));
        fVar11 = (float)(fVar7 * (float10)*(float *)(iVar4 + 0x20));
      }
      FUN_10001d60(&local_50,fVar11,fVar10,fVar13);
      FUN_10001d60(&local_44,local_50 * _DAT_100de478,local_4c * _DAT_100de478,
                   local_48 * _DAT_100de478);
      iVar4 = *(int *)(this + 4);
      *(float *)(iVar4 + 0x20) = local_44;
      *(float *)(iVar4 + 0x24) = local_40;
      *(float *)(iVar4 + 0x28) = local_3c;
      (**(code **)(*(int *)this + 8))();
      return;
    }
  }
  (**(code **)(*(int *)this + 8))();
  return;
}

