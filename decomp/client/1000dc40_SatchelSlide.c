
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* private: void __thiscall CSatchelCharge::SatchelSlide(class CBaseEntity *) */

void __thiscall CSatchelCharge::SatchelSlide(CSatchelCharge *this,CBaseEntity *param_1)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float local_28;
  
                    /* 0xdc40  231  ?SatchelSlide@CSatchelCharge@@AAEXPAVCBaseEntity@@@Z */
  if (*(int *)(*(int *)(param_1 + 4) + 0x208) != *(int *)(*(int *)(this + 4) + 0x198)) {
    *(undefined4 *)(*(int *)(this + 4) + 0x11c) = 0x3f800000;
    FUN_1000a860();
    if (local_28 < (float)_DAT_10059a10) {
      iVar1 = *(int *)(this + 4);
      fVar2 = *(float *)(iVar1 + 0x24) * _DAT_1005d9c8;
      fVar3 = *(float *)(iVar1 + 0x28) * _DAT_1005d9c8;
      *(float *)(iVar1 + 0x20) = *(float *)(iVar1 + 0x20) * _DAT_1005d9c8;
      *(float *)(iVar1 + 0x24) = fVar2;
      *(float *)(iVar1 + 0x28) = fVar3;
      iVar1 = *(int *)(this + 4);
      fVar2 = *(float *)(iVar1 + 0x60) * _DAT_1005d9c4;
      fVar3 = *(float *)(iVar1 + 100) * _DAT_1005d9c4;
      *(float *)(iVar1 + 0x5c) = *(float *)(iVar1 + 0x5c) * _DAT_1005d9c4;
      *(float *)(iVar1 + 0x60) = fVar2;
      *(float *)(iVar1 + 100) = fVar3;
    }
    iVar1 = *(int *)(this + 4);
    if (((*(uint *)(iVar1 + 0x1a4) & 0x200) == 0) &&
       (_DAT_1005ac98 <
        SQRT(*(float *)(iVar1 + 0x24) * *(float *)(iVar1 + 0x24) +
             *(float *)(iVar1 + 0x20) * *(float *)(iVar1 + 0x20)))) {
      (**(code **)(*(int *)this + 0x22c))();
    }
    FUN_10008fd0();
  }
  return;
}

