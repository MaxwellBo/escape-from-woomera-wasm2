
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_10008a50(int *param_1)

{
  int *piVar1;
  float fVar2;
  double dVar3;
  int iVar4;
  CBasePlayerItem *this;
  float10 fVar5;
  float10 fVar6;
  undefined4 uStack_68;
  float fStack_44;
  float fStack_18;
  float fStack_14;
  float fStack_10;
  float fStack_c;
  float fStack_8;
  float fStack_4;
  
  if (((float)param_1[0x2a] == _DAT_10059a18) && ((float)param_1[0x29] != _DAT_10059a18)) {
    param_1[0x2a] = *DAT_1007f7f8;
  }
  fVar5 = FUN_10018f40();
  if (fVar5 < (float10)(float)param_1[0x40]) {
    return;
  }
  if ((float)param_1[0x29] == _DAT_10059a18) {
    if (_DAT_10059a18 < (float)param_1[0x2a]) {
      param_1[0x29] = 0;
      if (*(int *)(param_1[0x37] + 0x534 + param_1[0x41] * 4) == 0) {
        (**(code **)(*param_1 + 0x194))();
        return;
      }
      (**(code **)(*param_1 + 0x17c))();
      uStack_68 = 0x10008d9b;
      fVar5 = FUN_10018fb0(*(int *)(param_1[0x37] + 0x308),10.0,0x41700000);
      fVar6 = FUN_10018f40();
      param_1[0x2a] = -0x40800000;
      param_1[0x40] = (int)(float)(fVar6 + (float10)(float)fVar5);
      return;
    }
    if (*(int *)(param_1[0x37] + 0x534 + param_1[0x41] * 4) == 0) {
      return;
    }
    fVar5 = FUN_10018fb0(*(int *)(param_1[0x37] + 0x308),0.0,0x3f800000);
    if ((float10)_DAT_10059a00 < fVar5) {
      fVar5 = FUN_10018f40();
      fVar5 = fVar5 + (float10)_DAT_1005ac90;
    }
    else {
      fVar6 = FUN_10018fb0(*(int *)(param_1[0x37] + 0x308),10.0,0x41700000);
      fVar5 = FUN_10018f40();
      fVar5 = fVar5 + (float10)(float)fVar6;
    }
    param_1[0x40] = (int)(float)fVar5;
    (**(code **)(*param_1 + 0x17c))();
    return;
  }
  fVar2 = *(float *)(*(int *)(param_1[0x37] + 4) + 0x74) +
          *(float *)(*(int *)(param_1[0x37] + 4) + 0x68);
  dVar3 = _DAT_1005afb8;
  if (fVar2 < _DAT_10059a18) {
    dVar3 = _DAT_1005afc0;
  }
  fStack_44 = (_DAT_1005afb0 - (fVar2 * (float)dVar3 - (float)_DAT_1005acb8)) * _DAT_1005acc8;
  if (_DAT_1005afac < fStack_44) {
    fStack_44 = 500.0;
  }
  CBasePlayerItem::AttemptToMaterialize(this);
  iVar4 = *(int *)(param_1[0x37] + 4);
  fStack_c = *(float *)(iVar4 + 0x174) + *(float *)(iVar4 + 8) +
             (float)DAT_1007f7f8[10] * _DAT_1005a184;
  fStack_8 = *(float *)(iVar4 + 0x178) + *(float *)(iVar4 + 0xc) +
             (float)DAT_1007f7f8[0xb] * _DAT_1005a184;
  fStack_4 = *(float *)(iVar4 + 0x17c) + *(float *)(iVar4 + 0x10) +
             (float)DAT_1007f7f8[0xc] * _DAT_1005a184;
  iVar4 = *(int *)(param_1[0x37] + 4);
  fStack_10 = fStack_44 * (float)DAT_1007f7f8[0xc] + *(float *)(iVar4 + 0x28);
  fStack_14 = fStack_44 * (float)DAT_1007f7f8[0xb] + *(float *)(iVar4 + 0x24);
  fStack_18 = fStack_44 * (float)DAT_1007f7f8[10] + *(float *)(iVar4 + 0x20);
  FUN_100083d0(&stack0xffffffa4,&fStack_18);
  FUN_100083d0(&uStack_68,&fStack_c);
  HUD_GetUserEntity();
  if (_DAT_1005afac <= fStack_44) {
    if (fStack_44 < _DAT_1005afa8) {
      (**(code **)(*param_1 + 0x17c))();
      goto LAB_10008c9e;
    }
    iVar4 = *param_1;
  }
  else {
    iVar4 = *param_1;
  }
  (**(code **)(iVar4 + 0x17c))();
LAB_10008c9e:
  CBasePlayerAmmo::DefaultTouch((CBasePlayerAmmo *)param_1[0x37],(CBaseEntity *)0x5);
  param_1[0x2a] = 0;
  param_1[0x29] = 0;
  fVar5 = FUN_10018f40();
  param_1[0x3e] = (int)(float)(fVar5 + (float10)_DAT_100599f0);
  fVar5 = FUN_10018f40();
  piVar1 = (int *)(param_1[0x37] + 0x534 + param_1[0x41] * 4);
  param_1[0x40] = (int)(float)(fVar5 + (float10)_DAT_100599f0);
  *piVar1 = *piVar1 + -1;
  if (*(int *)(param_1[0x37] + 0x534 + param_1[0x41] * 4) != 0) {
    return;
  }
  fVar5 = FUN_10018f40();
  fVar5 = fVar5 + (float10)_DAT_100599f0;
  param_1[0x3e] = (int)(float)fVar5;
  param_1[0x3f] = (int)(float)fVar5;
  param_1[0x40] = (int)(float)fVar5;
  return;
}

