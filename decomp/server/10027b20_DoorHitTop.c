
/* public: void __thiscall CBaseDoor::DoorHitTop(void) */

void __thiscall CBaseDoor::DoorHitTop(CBaseDoor *this)

{
  uint uVar1;
  int *piVar2;
  void *pvVar3;
  int iVar4;
  CBaseDoor *pCVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  
                    /* 0x27b20  79  ?DoorHitTop@CBaseDoor@@QAEXXZ */
  iVar7 = *(int *)(this + 4);
  if ((*(uint *)(iVar7 + 0x1a0) & 0x80000000) == 0) {
    pvVar3 = (void *)(*(int *)(iVar7 + 0x1ec) + *(int *)(DAT_10122044 + 0x98));
    FUN_10094b20(pvVar3,*(undefined4 *)(iVar7 + 0x208),6,pvVar3,0,0,0x20,100);
    pvVar3 = (void *)(*(int *)(*(int *)(this + 4) + 0x1f0) + *(int *)(DAT_10122044 + 0x98));
    FUN_10094b20(pvVar3,*(undefined4 *)(*(int *)(this + 4) + 0x208),6,pvVar3,0x3f800000,0x3f4ccccd,0
                 ,100);
  }
  *(undefined4 *)(this + 0xdc) = 0;
  uVar1 = *(uint *)(*(int *)(this + 4) + 0x1a0);
  if ((uVar1 & 0x20) == 0) {
    (**(code **)(*(int *)this + 8))(*(undefined4 *)(this + 0xe8));
    *(code **)(this + 0x74) = DoorGoDown;
    if (*(int *)(this + 0xe8) == -0x40800000) {
      FUN_10019680((int)this);
    }
  }
  else if (((uVar1 & 0x100) == 0) || ((uVar1 & 0x400) != 0)) {
    *(code **)(this + 0x78) = DoorTouch;
  }
  iVar7 = *(int *)(this + 4);
  pCVar5 = this;
  if ((*(byte *)(iVar7 + 0x1a0) & 1) == 0) {
    if (*(int *)(iVar7 + 0x1d4) == 0) goto LAB_10027c62;
    uVar8 = 0;
    iVar6 = 3;
    piVar2 = (int *)FUN_10019410((uint *)(this + 0xc0));
    iVar7 = *(int *)(DAT_10122044 + 0x98);
    iVar4 = *(int *)(*(int *)(this + 4) + 0x1d4);
  }
  else {
    if (*(int *)(iVar7 + 0x1d0) == 0) goto LAB_10027c62;
    uVar8 = 0;
    iVar6 = 3;
    piVar2 = (int *)FUN_10019410((uint *)(this + 0xc0));
    iVar7 = *(int *)(DAT_10122044 + 0x98);
    iVar4 = *(int *)(*(int *)(this + 4) + 0x1d0);
  }
  FUN_10098c10((uint *)(iVar7 + iVar4),piVar2,pCVar5,iVar6,uVar8);
LAB_10027c62:
  if (*(int *)(this + 0x18c) == 0) {
    uVar8 = 0;
    if (*(int *)(this + 0x188) == 0) {
      iVar7 = 3;
    }
    else {
      iVar7 = 0;
    }
    piVar2 = (int *)FUN_10019410((uint *)(this + 0xc0));
    FUN_10098e40(this,piVar2,iVar7,uVar8);
  }
  return;
}

