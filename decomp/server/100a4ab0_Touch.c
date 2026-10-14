
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: virtual void __thiscall CTriggerInOut::Touch(class CBaseEntity *) */

void __thiscall CTriggerInOut::Touch(CTriggerInOut *this,CBaseEntity *param_1)

{
  float fVar1;
  uint uVar2;
  undefined4 *puVar3;
  
                    /* 0xa4ab0  256  ?Touch@CTriggerInOut@@UAEXPAVCBaseEntity@@@Z */
  uVar2 = FUN_100a30c0(this,*(int **)(param_1 + 4));
  if (uVar2 != 0) {
    puVar3 = FUN_100a46c0(*(void **)(this + 0x164),(int *)param_1);
    fVar1 = _DAT_100dd5f8;
    *(undefined4 **)(this + 0x164) = puVar3;
    if ((*(float *)(this + 0x54) <= fVar1) && (puVar3[0x2f] != 0)) {
      (**(code **)(*(int *)this + 8))(0x3dcccccd);
    }
  }
  return;
}

