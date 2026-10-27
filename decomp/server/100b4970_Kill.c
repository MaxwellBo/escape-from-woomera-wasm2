
/* public: void __thiscall CWeaponBox::Kill(void) */

void __thiscall CWeaponBox::Kill(CWeaponBox *this)

{
  int *piVar1;
  int iVar2;
  CWeaponBox *pCVar3;
  
                    /* 0xb4970  135  ?Kill@CWeaponBox@@QAEXXZ */
  pCVar3 = this + 0xb8;
  iVar2 = 6;
  do {
    for (piVar1 = *(int **)pCVar3; piVar1 != (int *)0x0; piVar1 = (int *)piVar1[0x38]) {
      piVar1[0x1d] = (int)CBaseEntity::SUB_Remove;
      (**(code **)(*piVar1 + 8))(0x3dcccccd);
    }
    pCVar3 = pCVar3 + 4;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  FUN_100b0ef0((int)this);
  return;
}

