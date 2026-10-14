
/* public: void __thiscall CBaseDoor::DoorHitBottom(void) */

void __thiscall CBaseDoor::DoorHitBottom(CBaseDoor *this)

{
  int *piVar1;
  void *pvVar2;
  int iVar3;
  CBaseDoor *pCVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  
                    /* 0x27de0  78  ?DoorHitBottom@CBaseDoor@@QAEXXZ */
  iVar6 = *(int *)(this + 4);
  if ((*(uint *)(iVar6 + 0x1a0) & 0x80000000) == 0) {
    pvVar2 = (void *)(*(int *)(iVar6 + 0x1ec) + *(int *)(DAT_10122044 + 0x98));
    FUN_10094b20(pvVar2,*(undefined4 *)(iVar6 + 0x208),6,pvVar2,0,0,0x20,100);
    pvVar2 = (void *)(*(int *)(*(int *)(this + 4) + 0x1f0) + *(int *)(DAT_10122044 + 0x98));
    FUN_10094b20(pvVar2,*(undefined4 *)(*(int *)(this + 4) + 0x208),6,pvVar2,0x3f800000,0x3f4ccccd,0
                 ,100);
  }
  iVar6 = *(int *)(this + 4);
  *(undefined4 *)(this + 0xdc) = 1;
  if (((*(uint *)(iVar6 + 0x1a0) & 0x100) == 0) || ((*(uint *)(iVar6 + 0x1a0) & 0x400) != 0)) {
    *(code **)(this + 0x78) = DoorTouch;
  }
  else {
    *(undefined4 *)(this + 0x78) = 0;
  }
  pCVar4 = this;
  if ((*(byte *)(iVar6 + 0x1a0) & 1) == 0) {
    if (*(int *)(iVar6 + 0x1d0) == 0) goto LAB_10027ef9;
    uVar7 = 0;
    iVar5 = 3;
    piVar1 = (int *)FUN_10019410((uint *)(this + 0xc0));
    iVar6 = *(int *)(DAT_10122044 + 0x98);
    iVar3 = *(int *)(*(int *)(this + 4) + 0x1d0);
  }
  else {
    if (*(int *)(iVar6 + 0x1d4) == 0) goto LAB_10027ef9;
    uVar7 = 0;
    iVar5 = 3;
    piVar1 = (int *)FUN_10019410((uint *)(this + 0xc0));
    iVar6 = *(int *)(DAT_10122044 + 0x98);
    iVar3 = *(int *)(*(int *)(this + 4) + 0x1d4);
  }
  FUN_10098c10((uint *)(iVar6 + iVar3),piVar1,pCVar4,iVar5,uVar7);
LAB_10027ef9:
  if (*(int *)(this + 0x18c) == 0) {
    uVar7 = 0;
    if (*(int *)(this + 0x188) == 0) {
      iVar6 = 3;
    }
    else {
      iVar6 = 1;
    }
    piVar1 = (int *)FUN_10019410((uint *)(this + 0xc0));
    FUN_10098e40(this,piVar1,iVar6,uVar7);
  }
  return;
}

