
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: void __thiscall CGrenade::ExplodeTouch(class CBaseEntity *) */

void __thiscall CGrenade::ExplodeTouch(CGrenade *this,CBaseEntity *param_1)

{
  float fVar1;
  int iVar2;
  undefined4 uVar3;
  float local_68;
  float local_64;
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  float local_40;
  float local_3c;
  undefined1 local_38 [56];
  
                    /* 0x43260  93  ?ExplodeTouch@CGrenade@@QAEXPAVCBaseEntity@@@Z */
  *(undefined4 *)(*(int *)(this + 4) + 400) = *(undefined4 *)(*(int *)(param_1 + 4) + 0x208);
  iVar2 = *(int *)(this + 4);
  fVar1 = *(float *)(iVar2 + 0x20);
  fVar1 = SQRT(fVar1 * fVar1 +
               *(float *)(iVar2 + 0x28) * *(float *)(iVar2 + 0x28) +
               *(float *)(iVar2 + 0x24) * *(float *)(iVar2 + 0x24));
  if (fVar1 == _DAT_100dd5f8) {
    local_68 = 0.0;
    local_64 = 0.0;
    local_60 = 1.0;
  }
  else {
    fVar1 = _DAT_100dd618 / fVar1;
    FUN_10001d60(&local_68,fVar1 * *(float *)(iVar2 + 0x20),fVar1 * *(float *)(iVar2 + 0x24),
                 fVar1 * *(float *)(iVar2 + 0x28));
  }
  local_40 = local_64 * _DAT_100ddac8;
  iVar2 = *(int *)(this + 4);
  local_3c = local_60 * _DAT_100ddac8;
  local_5c = *(float *)(iVar2 + 8) - local_68 * _DAT_100ddac8;
  local_58 = *(float *)(iVar2 + 0xc) - local_40;
  local_54 = *(float *)(iVar2 + 0x10) - local_3c;
  uVar3 = *(undefined4 *)(iVar2 + 0x208);
  fVar1 = SQRT(*(float *)(iVar2 + 0x28) * *(float *)(iVar2 + 0x28) +
               *(float *)(iVar2 + 0x24) * *(float *)(iVar2 + 0x24) +
               *(float *)(iVar2 + 0x20) * *(float *)(iVar2 + 0x20));
  if (fVar1 == _DAT_100dd5f8) {
    local_68 = 0.0;
    local_64 = 0.0;
    local_60 = 1.0;
  }
  else {
    fVar1 = _DAT_100dd618 / fVar1;
    local_50 = local_5c;
    local_4c = local_58;
    local_48 = local_54;
    FUN_10001d60(&local_68,fVar1 * *(float *)(iVar2 + 0x20),fVar1 * *(float *)(iVar2 + 0x24),
                 fVar1 * *(float *)(iVar2 + 0x28));
  }
  local_40 = local_64 * _DAT_100ddb10;
  local_3c = local_60 * _DAT_100ddb10;
  local_50 = local_68 * _DAT_100ddb10 + local_5c;
  local_4c = local_58 + local_40;
  local_48 = local_54 + local_3c;
  FUN_100afc60(&local_5c,&local_50,1,uVar3,local_38);
  FUN_10042d50(this,(int)local_38,0x40);
  return;
}

