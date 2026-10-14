
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: void __thiscall CBaseButton::TriggerAndWait(void) */

void __thiscall CBaseButton::TriggerAndWait(CBaseButton *this)

{
  bool bVar1;
  undefined4 uVar2;
  undefined3 extraout_var;
  int *piVar3;
  int iVar4;
  undefined *puVar5;
  
                    /* 0x17370  260  ?TriggerAndWait@CBaseButton@@QAEXXZ */
  uVar2 = FUN_10019410((uint *)(this + 0xc0));
  bVar1 = FUN_100b0030(*(int *)(this + 0x158),uVar2);
  if (CONCAT31(extraout_var,bVar1) == 0) {
    return;
  }
  *(undefined4 *)(this + 0xdc) = 0;
  *(undefined4 *)(*(int *)(this + 4) + 0x130) = 0x3f800000;
  iVar4 = *(int *)(this + 0x60);
  if (iVar4 < 0x20) {
    if (-0x20 < iVar4) goto LAB_100173d6;
    puVar5 = &DAT_10103c14;
    iVar4 = -iVar4;
  }
  else {
    puVar5 = &DAT_10103c18;
  }
  (*DAT_10121eb4)(iVar4,puVar5);
LAB_100173d6:
  uVar2 = 0;
  iVar4 = 3;
  piVar3 = (int *)FUN_10019410((uint *)(this + 0xc0));
  FUN_10098e40(this,piVar3,iVar4,uVar2);
  if ((*(int *)(this + 0x15c) == 0) && ((*(byte *)(*(int *)(this + 4) + 0x1a0) & 0x20) == 0)) {
    *(code **)(this + 0x74) = ButtonReturn;
    if (*(float *)(this + 0xe8) == _DAT_100dd5f8) {
      ButtonReturn(this);
      return;
    }
    (**(code **)(*(int *)this + 8))(*(float *)(this + 0xe8));
    return;
  }
  if ((*(uint *)(*(int *)(this + 4) + 0x1a0) & 0x100) != 0) {
    *(code **)(this + 0x78) = ButtonTouch;
    return;
  }
  *(undefined4 *)(this + 0x78) = 0;
  return;
}

