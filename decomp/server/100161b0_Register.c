
/* public: void __thiscall CMultiSource::Register(void) */

void __thiscall CMultiSource::Register(CMultiSource *this)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  CMultiSource *pCVar4;
  
  *(undefined4 *)(this + 0x238) = 0;
  pCVar4 = this + 0xb8;
                    /* 0x161b0  175  ?Register@CMultiSource@@QAEXXZ */
  for (iVar3 = 0x40; iVar3 != 0; iVar3 = iVar3 + -1) {
    *(undefined4 *)pCVar4 = 0;
    pCVar4 = pCVar4 + 4;
  }
  *(code **)(this + 0x74) = CBaseEntity::SUB_DoNothing;
  iVar3 = FUN_100af100(0,*(int *)(*(int *)(this + 4) + 0x1cc) + *(int *)(DAT_10122044 + 0x98));
  while ((iVar3 != 0 && (iVar1 = *(int *)(this + 0x238), iVar1 < 0x20))) {
    *(int *)(this + 0x238) = iVar1 + 1;
    FUN_10019420(this + iVar1 * 8 + 0xb8,iVar3);
    iVar3 = FUN_100af100(iVar3,*(int *)(*(int *)(this + 4) + 0x1cc) + *(int *)(DAT_10122044 + 0x98))
    ;
  }
  for (piVar2 = (int *)FUN_100aec40(0,s_multi_manager_101049e0); piVar2 != (int *)0x0;
      piVar2 = (int *)FUN_100aec40((int)piVar2,s_multi_manager_101049e0)) {
    if (0x1f < *(int *)(this + 0x238)) goto LAB_100162ad;
    iVar3 = (**(code **)(*piVar2 + 0xc4))(*(undefined4 *)(*(int *)(this + 4) + 0x1cc));
    if (iVar3 != 0) {
      iVar3 = *(int *)(this + 0x238);
      *(int *)(this + 0x238) = iVar3 + 1;
      FUN_10019420(this + iVar3 * 8 + 0xb8,(int)piVar2);
    }
  }
  if (0x1f < *(int *)(this + 0x238)) {
LAB_100162ad:
    (*DAT_10121efc)(1,s_WARNING__There_are_too_many_enti_1010498c,
                    *(int *)(*(int *)(this + 4) + 0x1cc) + *(int *)(DAT_10122044 + 0x98),0x20);
  }
  *(uint *)(*(int *)(this + 4) + 0x1a0) = *(uint *)(*(int *)(this + 4) + 0x1a0) & 0xfffffffd;
  return;
}

