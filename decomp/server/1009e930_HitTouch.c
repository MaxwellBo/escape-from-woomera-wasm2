
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: void __thiscall CTentacle::HitTouch(class CBaseEntity *) */

void __thiscall CTentacle::HitTouch(CTentacle *this,CBaseEntity *param_1)

{
  int iVar1;
  int iVar2;
  float fVar3;
  undefined4 local_38 [12];
  int local_8;
  int local_4;
  
                    /* 0x9e930  119  ?HitTouch@CTentacle@@QAEXPAVCBaseEntity@@@Z */
  FUN_100afcf0(local_38);
  iVar1 = *(int *)(this + 4);
  if ((((*(int *)(*(int *)(param_1 + 4) + 0xb4) != *(int *)(iVar1 + 0xb4)) &&
       (*(float *)(this + 0x330) <= *DAT_10122044)) && (local_8 != 0)) &&
     (*(int *)(local_8 + 0x134) == *(int *)(iVar1 + 0xb4))) {
    if (local_4 < 3) {
      if (local_4 == 0) {
        return;
      }
      iVar2 = *(int *)param_1;
      fVar3 = 20.0;
    }
    else {
      fVar3 = (float)*(int *)(this + 0x32c);
      iVar2 = *(int *)param_1;
    }
    (**(code **)(iVar2 + 0x60))(iVar1,iVar1,fVar3,1);
    *(float *)(this + 0x330) = *DAT_10122044 + (float)_DAT_100dd648;
  }
  return;
}

