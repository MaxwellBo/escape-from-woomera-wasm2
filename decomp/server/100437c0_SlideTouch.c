
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: void __thiscall CGrenade::SlideTouch(class CBaseEntity *) */

void __thiscall CGrenade::SlideTouch(CGrenade *this,CBaseEntity *param_1)

{
  int iVar1;
  float fVar2;
  float fVar3;
  
                    /* 0x437c0  202  ?SlideTouch@CGrenade@@QAEXPAVCBaseEntity@@@Z */
  iVar1 = *(int *)(this + 4);
  if (*(int *)(*(int *)(param_1 + 4) + 0x208) != *(int *)(iVar1 + 0x198)) {
    if ((*(uint *)(iVar1 + 0x1a4) & 0x200) != 0) {
      fVar2 = *(float *)(iVar1 + 0x24) * _DAT_100e5ef8;
      fVar3 = *(float *)(iVar1 + 0x28) * _DAT_100e5ef8;
      *(float *)(iVar1 + 0x20) = *(float *)(iVar1 + 0x20) * _DAT_100e5ef8;
      *(float *)(iVar1 + 0x24) = fVar2;
      *(float *)(iVar1 + 0x28) = fVar3;
      return;
    }
    (**(code **)(*(int *)this + 0x22c))();
  }
  return;
}

