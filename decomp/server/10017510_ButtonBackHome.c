
/* public: void __thiscall CBaseButton::ButtonBackHome(void) */

void __thiscall CBaseButton::ButtonBackHome(CBaseButton *this)

{
  byte bVar1;
  int iVar2;
  int *piVar3;
  byte *pbVar4;
  char *pcVar5;
  bool bVar6;
  CBaseButton *pCVar7;
  undefined4 uVar8;
  int iVar9;
  undefined4 uVar10;
  
                    /* 0x17510  28  ?ButtonBackHome@CBaseButton@@QAEXXZ */
  *(undefined4 *)(this + 0xdc) = 1;
  if ((*(byte *)(*(int *)(this + 4) + 0x1a0) & 0x20) != 0) {
    uVar10 = 0;
    iVar9 = 3;
    piVar3 = (int *)FUN_10019410((uint *)(this + 0xc0));
    FUN_10098e40(this,piVar3,iVar9,uVar10);
  }
  if (*(int *)(*(int *)(this + 4) + 0x1c8) != 0) {
    piVar3 = (int *)0x0;
    while( true ) {
      iVar9 = FUN_10019410((uint *)(this + 0xc0));
      piVar3 = (int *)FUN_100af060((int)piVar3,
                                   (byte *)(*(int *)(*(int *)(this + 4) + 0x1c8) +
                                           *(int *)(DAT_10122044 + 0x98)),iVar9);
      if ((piVar3 == (int *)0x0) || (*(int *)(piVar3[1] + 0x208) == 0)) break;
      iVar9 = (*DAT_10121f20)(*(int *)(piVar3[1] + 0x208));
      if (iVar9 == 0) break;
      pcVar5 = s_multisource_10104cc8;
      pbVar4 = (byte *)(*(int *)(DAT_10122044 + 0x98) + *(int *)piVar3[1]);
      do {
        bVar1 = *pbVar4;
        bVar6 = bVar1 < (byte)*pcVar5;
        if (bVar1 != *pcVar5) {
LAB_100175e2:
          iVar9 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
          goto LAB_100175e7;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar4[1];
        bVar6 = bVar1 < (byte)pcVar5[1];
        if (bVar1 != pcVar5[1]) goto LAB_100175e2;
        pbVar4 = pbVar4 + 2;
        pcVar5 = pcVar5 + 2;
      } while (bVar1 != 0);
      iVar9 = 0;
LAB_100175e7:
      if (iVar9 == 0) {
        iVar2 = *piVar3;
        uVar8 = 3;
        pCVar7 = this;
        uVar10 = FUN_10019410((uint *)(this + 0xc0));
        (**(code **)(iVar2 + 0xe4))(uVar10,pCVar7,uVar8,iVar9);
      }
    }
  }
  if ((*(uint *)(*(int *)(this + 4) + 0x1a0) & 0x100) == 0) {
    *(undefined4 *)(this + 0x78) = 0;
  }
  else {
    *(code **)(this + 0x78) = ButtonTouch;
  }
  if ((*(byte *)(*(int *)(this + 4) + 0x1a0) & 0x40) != 0) {
    *(code **)(this + 0x74) = ButtonSpark;
    (**(code **)(*(int *)this + 8))(0x3f000000);
    return;
  }
  FUN_10019680((int)this);
  return;
}

