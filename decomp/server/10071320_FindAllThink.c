
/* public: void __thiscall COsprey::FindAllThink(void) */

void __thiscall COsprey::FindAllThink(COsprey *this)

{
  COsprey *pCVar1;
  int iVar2;
  int *piVar3;
  
                    /* 0x71320  104  ?FindAllThink@COsprey@@QAEXXZ */
  piVar3 = (int *)0x0;
  *(undefined4 *)(this + 0x378) = 0;
  do {
    piVar3 = (int *)FUN_100aec40((int)piVar3,s_monster_human_grunt_10101a08);
    if (piVar3 == (int *)0x0) break;
    iVar2 = (**(code **)(*piVar3 + 0xb8))();
    if (iVar2 != 0) {
      FUN_10019420(this + *(int *)(this + 0x378) * 8 + 0x37c,(int)piVar3);
      iVar2 = piVar3[1];
      pCVar1 = this + *(int *)(this + 0x378) * 0xc + 0x43c;
      *(undefined4 *)pCVar1 = *(undefined4 *)(iVar2 + 8);
      *(undefined4 *)(pCVar1 + 4) = *(undefined4 *)(iVar2 + 0xc);
      *(undefined4 *)(pCVar1 + 8) = *(undefined4 *)(iVar2 + 0x10);
      *(int *)(this + 0x378) = *(int *)(this + 0x378) + 1;
    }
  } while (*(int *)(this + 0x378) < 0x18);
  if (*(int *)(this + 0x378) == 0) {
    *(undefined4 *)(this + 0x378) = 4;
  }
  *(code **)(this + 0x74) = FlyThink;
  (**(code **)(*(int *)this + 8))(0x3dcccccd);
  *(undefined4 *)(this + 0x354) = *DAT_10122044;
  return;
}

