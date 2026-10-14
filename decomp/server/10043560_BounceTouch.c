
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: void __thiscall CGrenade::BounceTouch(class CBaseEntity *) */

void __thiscall CGrenade::BounceTouch(CGrenade *this,CBaseEntity *param_1)

{
  int iVar1;
  float fVar2;
  undefined4 uVar3;
  int iVar4;
  longlong lVar5;
  undefined4 uStack_68;
  float fVar6;
  undefined4 local_38 [14];
  
                    /* 0x43560  23  ?BounceTouch@CGrenade@@QAEXPAVCBaseEntity@@@Z */
  iVar1 = *(int *)(this + 4);
  iVar4 = *(int *)(iVar1 + 0x198);
  if (*(int *)(*(int *)(param_1 + 4) + 0x208) != iVar4) {
    if ((*(float *)(this + 700) < *DAT_10122044) &&
       (_DAT_100dd61c <
        SQRT(*(float *)(iVar1 + 0x28) * *(float *)(iVar1 + 0x28) +
             *(float *)(iVar1 + 0x24) * *(float *)(iVar1 + 0x24) +
             *(float *)(iVar1 + 0x20) * *(float *)(iVar1 + 0x20)))) {
      if ((iVar4 != 0) && (iVar4 = iVar4 + 0x80, iVar4 != 0)) {
        FUN_100afcf0(local_38);
        FUN_100b2bd0();
        iVar1 = *(int *)param_1;
        FUN_10003850(&uStack_68,DAT_10122044 + 10);
        (**(code **)(iVar1 + 0x5c))(iVar4,0x3f800000);
        FUN_100b2bf0(*(undefined4 *)(this + 4),iVar4);
      }
      *(float *)(this + 700) = *DAT_10122044 + (float)_DAT_100dd628;
    }
    iVar1 = *(int *)(this + 4);
    fVar6 = *(float *)(iVar1 + 0x28) * (float)_DAT_100e5ef0;
    if ((*(int *)(this + 0x308) == 0) &&
       (SQRT(*(float *)(iVar1 + 0x20) * *(float *)(iVar1 + 0x20) +
             *(float *)(iVar1 + 0x24) * *(float *)(iVar1 + 0x24) + fVar6 * fVar6) <= _DAT_100de498))
    {
      fVar6 = 0.3;
      lVar5 = __ftol();
      uStack_68 = 0x100436be;
      FUN_10095d30(0x20,(undefined4 *)(iVar1 + 8),(int)lVar5,fVar6);
      *(undefined4 *)(this + 0x308) = 1;
    }
    iVar1 = *(int *)(this + 4);
    if ((*(uint *)(iVar1 + 0x1a4) & 0x200) == 0) {
      (**(code **)(*(int *)this + 0x22c))();
    }
    else {
      fVar6 = *(float *)(iVar1 + 0x24) * _DAT_100e1138;
      fVar2 = *(float *)(iVar1 + 0x28) * _DAT_100e1138;
      *(float *)(iVar1 + 0x20) = *(float *)(iVar1 + 0x20) * _DAT_100e1138;
      *(float *)(iVar1 + 0x24) = fVar6;
      *(float *)(iVar1 + 0x28) = fVar2;
      uVar3 = (*DAT_10121f70)();
      *(undefined4 *)(*(int *)(this + 4) + 0x128) = uVar3;
    }
    iVar1 = *(int *)(this + 4);
    *(float *)(iVar1 + 0x138) =
         SQRT(*(float *)(iVar1 + 0x28) * *(float *)(iVar1 + 0x28) +
              *(float *)(iVar1 + 0x24) * *(float *)(iVar1 + 0x24) +
              *(float *)(iVar1 + 0x20) * *(float *)(iVar1 + 0x20)) * (float)_DAT_100e5ee8;
    iVar1 = *(int *)(this + 4);
    if ((float)_DAT_100dd628 < *(float *)(iVar1 + 0x138)) {
      *(undefined4 *)(iVar1 + 0x138) = 0x3f800000;
      return;
    }
    if (*(float *)(iVar1 + 0x138) < (float)_DAT_100dd648) {
      *(undefined4 *)(iVar1 + 0x138) = 0;
    }
  }
  return;
}

