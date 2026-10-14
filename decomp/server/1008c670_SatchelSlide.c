
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* private: void __thiscall CSatchelCharge::SatchelSlide(class CBaseEntity *) */

void __thiscall CSatchelCharge::SatchelSlide(CSatchelCharge *this,CBaseEntity *param_1)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float local_44;
  float local_40;
  float local_3c;
  undefined1 local_38 [16];
  float local_28;
  
                    /* 0x8c670  193  ?SatchelSlide@CSatchelCharge@@AAEXPAVCBaseEntity@@@Z */
  if (*(int *)(*(int *)(param_1 + 4) + 0x208) != *(int *)(*(int *)(this + 4) + 0x198)) {
    *(undefined4 *)(*(int *)(this + 4) + 0x11c) = 0x3f800000;
    iVar1 = *(int *)(this + 4);
    local_3c = *(float *)(iVar1 + 0x10) - _DAT_100dd63c;
    local_40 = *(float *)(iVar1 + 0xc);
    local_44 = *(float *)(iVar1 + 8);
    FUN_100afc60((float *)(iVar1 + 8),&local_44,1,*(undefined4 *)(iVar1 + 0x208),local_38);
    if (local_28 < (float)_DAT_100dd628) {
      iVar1 = *(int *)(this + 4);
      fVar2 = *(float *)(iVar1 + 0x24) * _DAT_100e5ef8;
      fVar3 = *(float *)(iVar1 + 0x28) * _DAT_100e5ef8;
      *(float *)(iVar1 + 0x20) = *(float *)(iVar1 + 0x20) * _DAT_100e5ef8;
      *(float *)(iVar1 + 0x24) = fVar2;
      *(float *)(iVar1 + 0x28) = fVar3;
      iVar1 = *(int *)(this + 4);
      local_44 = *(float *)(iVar1 + 0x5c) * _DAT_100e0ed4;
      local_40 = *(float *)(iVar1 + 0x60) * _DAT_100e0ed4;
      local_3c = *(float *)(iVar1 + 100) * _DAT_100e0ed4;
      *(float *)(iVar1 + 0x5c) = local_44;
      *(float *)(iVar1 + 0x60) = local_40;
      *(float *)(iVar1 + 100) = local_3c;
    }
    iVar1 = *(int *)(this + 4);
    if (((*(uint *)(iVar1 + 0x1a4) & 0x200) == 0) &&
       (_DAT_100dd63c <
        SQRT(*(float *)(iVar1 + 0x24) * *(float *)(iVar1 + 0x24) +
             *(float *)(iVar1 + 0x20) * *(float *)(iVar1 + 0x20)))) {
      (**(code **)(*(int *)this + 0x22c))();
    }
    FUN_10007fc0((int)this,0.0);
  }
  return;
}

