
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: void __thiscall CTriggerHevCharge::ChargeTouch(class CBaseEntity *) */

void __thiscall CTriggerHevCharge::ChargeTouch(CTriggerHevCharge *this,CBaseEntity *param_1)

{
  CBaseEntity *pCVar1;
  bool bVar2;
  undefined3 extraout_var;
  int iVar3;
  longlong lVar4;
  
                    /* 0xa3aa0  43  ?ChargeTouch@CTriggerHevCharge@@QAEXPAVCBaseEntity@@@Z */
  pCVar1 = param_1;
  bVar2 = FUN_100995b0((int)this);
  if ((((CONCAT31(extraout_var,bVar2) == 0) &&
       (iVar3 = (**(code **)(*(int *)param_1 + 0xcc))(), iVar3 != 0)) &&
      ((*(uint *)(*(int *)(param_1 + 4) + 0x168) & 0x80000000) != 0)) &&
     (*(float *)(*(int *)(this + 4) + 0x1e4) <= *DAT_10122044)) {
    *(float *)(*(int *)(this + 4) + 0x1e4) = *DAT_10122044 + (float)_DAT_100dd648;
    iVar3 = *(int *)(param_1 + 4);
    lVar4 = __ftol();
    param_1 = (CBaseEntity *)lVar4;
    if ((int)param_1 < 0x65) {
      if ((int)param_1 < 0) {
        param_1 = (CBaseEntity *)0x0;
      }
    }
    else {
      param_1 = (CBaseEntity *)0x64;
    }
    if ((float)(int)param_1 != *(float *)(iVar3 + 0x1bc)) {
      *(float *)(iVar3 + 0x1bc) = (float)(int)param_1;
      if (*(int *)(*(int *)(this + 4) + 0x1c8) != 0) {
        FUN_10098e40(this,(int *)pCVar1,3,0);
      }
      iVar3 = (**(code **)(*DAT_10121db8 + 0x18))();
      if ((iVar3 == 0) && ((*(byte *)(*(int *)(this + 4) + 0x1a0) & 4) == 0)) {
        *(undefined4 *)(*(int *)(this + 4) + 0x194) = *(undefined4 *)(*(int *)(pCVar1 + 4) + 0x208);
        (**(code **)(*(int *)this + 8))(0x3f800000);
        return;
      }
    }
  }
  return;
}

