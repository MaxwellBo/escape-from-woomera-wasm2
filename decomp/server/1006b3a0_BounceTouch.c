
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: void __thiscall CNihilanthHVR::BounceTouch(class CBaseEntity *) */

void __thiscall CNihilanthHVR::BounceTouch(CNihilanthHVR *this,CBaseEntity *param_1)

{
  CNihilanthHVR *pCVar1;
  float fVar2;
  float fVar3;
  float local_5c;
  float local_58;
  float local_54;
  undefined4 local_38 [9];
  float local_14;
  float local_10;
  float local_c;
  
                    /* 0x6b3a0  24  ?BounceTouch@CNihilanthHVR@@QAEXPAVCBaseEntity@@@Z */
  pCVar1 = this + 0x30c;
  fVar2 = SQRT(*(float *)(this + 0x314) * *(float *)(this + 0x314) +
               *(float *)(this + 0x310) * *(float *)(this + 0x310) +
               *(float *)pCVar1 * *(float *)pCVar1);
  if (fVar2 == _DAT_100dd5f8) {
    local_5c = 0.0;
    local_58 = 0.0;
    local_54 = 1.0;
  }
  else {
    fVar2 = _DAT_100dd618 / fVar2;
    FUN_10001d60(&local_5c,fVar2 * *(float *)pCVar1,fVar2 * *(float *)(this + 0x310),
                 fVar2 * *(float *)(this + 0x314));
  }
  FUN_100afcf0(local_38);
  fVar2 = -(local_5c * local_14 + local_10 * local_58 + local_c * local_54);
  fVar3 = SQRT(*(float *)(this + 0x314) * *(float *)(this + 0x314) +
               *(float *)(this + 0x310) * *(float *)(this + 0x310) +
               *(float *)pCVar1 * *(float *)pCVar1);
  *(float *)pCVar1 = ((local_14 + local_14) * fVar2 + local_5c) * fVar3;
  *(float *)(this + 0x310) = ((local_10 + local_10) * fVar2 + local_58) * fVar3;
  *(float *)(this + 0x314) = (fVar2 * (local_c + local_c) + local_54) * fVar3;
  return;
}

