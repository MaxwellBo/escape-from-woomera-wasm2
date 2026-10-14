
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: void __thiscall CLaser::StrikeThink(void) */

void __thiscall CLaser::StrikeThink(CLaser *this)

{
  CLaser *pCVar1;
  float fVar2;
  float fVar3;
  float *pfVar4;
  int *piVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  CLaser *pCVar9;
  undefined4 uVar10;
  undefined1 *puVar11;
  float local_5c;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  undefined1 local_38 [56];
  
                    /* 0x2c210  230  ?StrikeThink@CLaser@@QAEXXZ */
  iVar8 = *(int *)(this + 4);
  local_5c = *(float *)(iVar8 + 8);
  local_58 = *(float *)(iVar8 + 0xc);
  local_54 = *(float *)(iVar8 + 0x10);
  if (*(int *)(this + 0xdc) != 0) {
    pfVar4 = FUN_10058750(&local_44,(int)this,0,
                          (byte *)(*(int *)(DAT_10122044 + 0x98) + *(int *)(this + 0xdc)));
    local_5c = *pfVar4;
    local_58 = pfVar4[1];
    local_54 = pfVar4[2];
  }
  if (*(int *)(this + 0xe0) == 0) {
    iVar8 = FUN_10029ad0((byte *)(*(int *)(DAT_10122044 + 0x98) +
                                 *(int *)(*(int *)(this + 4) + 0x1d4)));
    if (iVar8 != 0) {
      iVar8 = *(int *)(iVar8 + 4);
      *(undefined4 *)(this + 200) = *(undefined4 *)(iVar8 + 8);
      *(undefined4 *)(this + 0xcc) = *(undefined4 *)(iVar8 + 0xc);
      *(undefined4 *)(this + 0xd0) = *(undefined4 *)(iVar8 + 0x10);
    }
  }
  else {
    pfVar4 = FUN_10058820(&local_44,(int)this,0,
                          (byte *)(*(int *)(DAT_10122044 + 0x98) +
                                  *(int *)(*(int *)(this + 4) + 0x1d4)));
    local_50 = local_5c + *pfVar4;
    local_4c = local_58 + pfVar4[1];
    local_48 = local_54 + pfVar4[2];
    *(float *)(this + 200) = local_50;
    *(float *)(this + 0xcc) = local_4c;
    *(float *)(this + 0xd0) = local_48;
  }
  uVar7 = *(uint *)(this + 0xd8);
  uVar6 = uVar7 & 0x80000001;
  if ((int)uVar6 < 0) {
    uVar6 = (uVar6 - 1 | 0xfffffffe) + 1;
  }
  uVar6 = (uint)(uVar6 != 0);
  if ((int)uVar7 < 2) {
    iVar8 = 0;
  }
  else {
    iVar8 = ((int)uVar7 < 4) + 1;
  }
  pCVar1 = this + 200;
  pCVar9 = pCVar1;
  if (*(int *)(this + 0xd4) != 0) {
    fVar2 = *(float *)pCVar1 - local_5c;
    local_40 = *(float *)(this + 0xcc) - local_58;
    local_3c = *(float *)(this + 0xd0) - local_54;
    fVar3 = SQRT(fVar2 * fVar2 + local_40 * local_40 + local_3c * local_3c);
    if (fVar3 == _DAT_100dd5f8) {
      local_40 = 0.0;
      local_3c = 1.0;
      fVar2 = _DAT_100dd5f8;
    }
    else {
      fVar3 = _DAT_100dd618 / fVar3;
      fVar2 = fVar2 * fVar3;
      local_40 = local_40 * fVar3;
      local_3c = local_3c * fVar3;
    }
    local_4c = local_40 * _DAT_100de488;
    local_48 = local_3c * _DAT_100de488;
    local_44 = fVar2 * _DAT_100de488 + local_5c;
    local_40 = local_4c + local_58;
    local_3c = local_48 + local_54;
    pCVar9 = (CLaser *)&local_44;
  }
  uVar10 = 0;
  FUN_100afc20(&local_5c,pCVar9,iVar8,uVar6,0,local_38);
  puVar11 = local_38;
  FUN_10003850(&stack0xffffff88,&local_5c);
  FUN_1002c070(this,iVar8,uVar6,uVar10,(int)puVar11);
  if (*(int *)(*(int *)(this + 4) + 0x1c8) != 0) {
    *(undefined4 *)(DAT_10122044 + 0x84) = 1;
    FUN_100afc60(&local_5c,pCVar1,0,0,local_38);
    piVar5 = (int *)FUN_1002a9d0(this,(int)local_38);
    if (piVar5 == (int *)0x0) {
      iVar8 = *(int *)(this + 4);
      uVar7 = *(uint *)(iVar8 + 0x1a0) & 0xfff7ffff;
    }
    else {
      if ((*(uint *)(*(int *)(this + 4) + 0x1a0) & 0x80000) != 0) goto LAB_1002c4f6;
      FUN_10098c10((uint *)(*(int *)(*(int *)(this + 4) + 0x1c8) + *(int *)(DAT_10122044 + 0x98)),
                   piVar5,this,3,0);
      iVar8 = *(int *)(this + 4);
      uVar7 = *(uint *)(iVar8 + 0x1a0) | 0x80000;
    }
    *(uint *)(iVar8 + 0x1a0) = uVar7;
  }
LAB_1002c4f6:
  (**(code **)(*(int *)this + 8))();
  return;
}

