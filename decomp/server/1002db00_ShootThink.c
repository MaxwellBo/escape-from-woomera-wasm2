
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: void __thiscall CGibShooter::ShootThink(void) */

void __thiscall CGibShooter::ShootThink(CGibShooter *this)

{
  int *piVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  float *pfVar5;
  int *piVar6;
  undefined1 *extraout_ECX;
  byte *pbVar7;
  float10 fVar8;
  float10 fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float local_c4;
  float local_c0;
  float local_bc;
  int local_b8;
  float local_a4;
  float local_a0;
  float local_9c;
  float fStack_98;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  float fStack_78;
  undefined1 auStack_74 [12];
  float fStack_68;
  float fStack_64;
  float fStack_5c;
  float fStack_58;
  float fStack_50;
  float fStack_4c;
  float fStack_44;
  float fStack_40;
  float fStack_38;
  float fStack_34;
  float fStack_2c;
  float fStack_28;
  float local_20 [3];
  float afStack_14 [4];
  
                    /* 0x2db00  199  ?ShootThink@CGibShooter@@QAEXXZ */
  if (*(float *)(this + 0xb8) == _DAT_100dd5f8) {
    local_b8 = *(int *)(this + 200);
    if (local_b8 < 1) goto LAB_1002e01b;
  }
  else {
    local_b8 = 1;
    (**(code **)(*(int *)this + 8))();
  }
  do {
    if (*(int *)(this + 0xec) != 0) {
      pbVar7 = (byte *)(*(int *)(DAT_10122044 + 0x98) + *(int *)(this + 0xec));
      iVar4 = FUN_10019410((uint *)(this + 0xc0));
      FUN_100588f0(extraout_ECX,iVar4,pbVar7);
    }
    if (*(int *)(this + 0xe8) == 0) {
      iVar4 = *(int *)(this + 4);
      local_c4 = *(float *)(iVar4 + 0x44);
      local_c0 = *(float *)(iVar4 + 0x48);
      local_bc = *(float *)(iVar4 + 0x4c);
    }
    else {
      pbVar7 = (byte *)(*(int *)(DAT_10122044 + 0x98) + *(int *)(this + 0xe8));
      iVar4 = FUN_10019410((uint *)(this + 0xc0));
      pfVar5 = FUN_10058820(local_20,(int)this,iVar4,pbVar7);
      fVar10 = *pfVar5;
      fVar11 = pfVar5[1];
      fVar12 = pfVar5[2];
      fVar2 = SQRT(fVar11 * fVar11 + fVar12 * fVar12 + fVar10 * fVar10);
      if (fVar2 == _DAT_100dd5f8) {
        local_a4 = 0.0;
        local_a0 = 0.0;
        local_9c = 1.0;
      }
      else {
        fVar2 = _DAT_100dd618 / fVar2;
        FUN_10001d60(&local_a4,fVar2 * fVar10,fVar11 * fVar2,fVar12 * fVar2);
      }
      local_c4 = local_a4;
      local_c0 = local_a0;
      local_bc = local_9c;
    }
    iVar4 = DAT_10122044;
    pfVar5 = (float *)(DAT_10122044 + 0x40);
    fVar8 = (float10)(*DAT_10121f74)();
    iVar3 = DAT_10122044;
    fStack_2c = (float)(fVar8 * (float10)*pfVar5);
    fStack_28 = (float)(fVar8 * (float10)*(float *)(iVar4 + 0x44));
    fVar9 = (float10)*(float *)(this + 0xd8);
    pfVar5 = (float *)(DAT_10122044 + 0x28);
    fStack_50 = (float)((float10)fStack_2c * fVar9);
    fStack_4c = (float)((float10)fStack_28 * fVar9);
    fStack_80 = fStack_50 + local_c4;
    fStack_7c = local_c0 + fStack_4c;
    fStack_78 = (float)((float10)local_bc + fVar8 * (float10)*(float *)(iVar4 + 0x48) * fVar9);
    fVar8 = (float10)(*DAT_10121f74)();
    iVar4 = DAT_10122044;
    fStack_68 = (float)(fVar8 * (float10)*pfVar5);
    fStack_64 = (float)(fVar8 * (float10)*(float *)(iVar3 + 0x2c));
    fVar9 = (float10)*(float *)(this + 0xd8);
    fStack_38 = (float)((float10)fStack_68 * fVar9);
    fStack_34 = (float)((float10)fStack_64 * fVar9);
    fStack_8c = fStack_38 + fStack_80;
    fStack_88 = fStack_34 + fStack_7c;
    fStack_84 = (float)(fVar8 * (float10)*(float *)(iVar3 + 0x30) * fVar9 + (float10)fStack_78);
    pfVar5 = (float *)(DAT_10122044 + 0x34);
    fVar8 = (float10)(*DAT_10121f74)();
    fStack_5c = (float)(fVar8 * (float10)*pfVar5);
    fStack_58 = (float)(fVar8 * (float10)*(float *)(iVar4 + 0x38));
    fVar9 = (float10)*(float *)(this + 0xd8);
    fStack_44 = (float)((float10)fStack_5c * fVar9);
    fStack_40 = (float)((float10)fStack_58 * fVar9);
    fVar10 = fStack_44 + fStack_8c;
    fVar11 = fStack_40 + fStack_88;
    fVar8 = fVar8 * (float10)*(float *)(iVar4 + 0x3c) * fVar9 + (float10)fStack_84;
    fVar9 = SQRT((float10)fVar10 * (float10)fVar10 +
                 (float10)fVar11 * (float10)fVar11 + fVar8 * fVar8);
    if (fVar9 == (float10)_DAT_100dd5f8) {
      fVar12 = 1.0;
      fVar10 = 0.0;
      fVar11 = 0.0;
    }
    else {
      fVar9 = (float10)_DAT_100dd618 / fVar9;
      fVar12 = (float)(fVar8 * fVar9);
      fVar11 = (float)((float10)fVar11 * fVar9);
      fVar10 = (float)((float10)fVar10 * fVar9);
    }
    FUN_10001d60(auStack_74,fVar10,fVar11,fVar12);
    if (*(int *)(this + 0xe4) == 0) {
      iVar4 = *(int *)(this + 4);
      fStack_98 = *(float *)(iVar4 + 8);
      fStack_94 = *(float *)(iVar4 + 0xc);
      fStack_90 = *(float *)(iVar4 + 0x10);
    }
    else {
      pbVar7 = (byte *)(*(int *)(DAT_10122044 + 0x98) + *(int *)(this + 0xe4));
      iVar4 = FUN_10019410((uint *)(this + 0xc0));
      pfVar5 = FUN_10058750(afStack_14,(int)this,iVar4,pbVar7);
      fStack_98 = *pfVar5;
      fStack_94 = pfVar5[1];
      fStack_90 = pfVar5[2];
    }
    iVar4 = *(int *)this;
    FUN_10003850(&stack0xffffff10,&fStack_98);
    piVar6 = (int *)(**(code **)(iVar4 + 0x118))();
    if (piVar6 != (int *)0x0) {
      *(undefined4 *)(piVar6[1] + 0x1cc) = *(undefined4 *)(this + 0xe0);
      piVar1 = *(int **)(this + 4);
      if ((*(byte *)(piVar1 + 0x68) & 4) != 0) {
        iVar4 = piVar6[1];
        (*DAT_10121efc)(1,s_DEBUG___s___s__creates_a_shot_at_101082dc,
                        *(int *)(DAT_10122044 + 0x98) + *piVar1,
                        piVar1[0x73] + *(int *)(DAT_10122044 + 0x98),(double)*(float *)(iVar4 + 8),
                        (double)*(float *)(iVar4 + 0xc),(double)*(float *)(iVar4 + 0x10),
                        (double)*(float *)(iVar4 + 0x20));
      }
      if (*(int *)(this + 0xf0) != 0) {
        FUN_10098c10((uint *)(*(int *)(DAT_10122044 + 0x98) + *(int *)(this + 0xf0)),piVar6,this,3,0
                    );
      }
    }
    local_b8 = local_b8 + -1;
    *(int *)(this + 200) = *(int *)(this + 200) + -1;
  } while (local_b8 != 0);
LAB_1002e01b:
  if (*(int *)(this + 200) < 1) {
    if ((*(byte *)(*(int *)(this + 4) + 0x1a0) & 1) != 0) {
      *(undefined4 *)(this + 0x74) = 0;
      *(undefined4 *)(this + 200) = *(undefined4 *)(this + 0xcc);
      FUN_10019680((int)this);
      return;
    }
    *(code **)(this + 0x74) = CBaseEntity::SUB_Remove;
    (**(code **)(*(int *)this + 8))();
  }
  return;
}

