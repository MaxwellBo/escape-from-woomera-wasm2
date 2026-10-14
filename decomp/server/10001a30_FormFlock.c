
/* public: void __thiscall CFlockingFlyer::FormFlock(void) */

void __thiscall CFlockingFlyer::FormFlock(CFlockingFlyer *this)

{
  byte bVar1;
  int *piVar2;
  CFlockingFlyer *pCVar3;
  int iVar4;
  byte *pbVar5;
  char *pcVar6;
  bool bVar7;
  
                    /* 0x1a30  114  ?FormFlock@CFlockingFlyer@@QAEXXZ */
  if (*(int *)(this + 0x308) == 0) {
    *(CFlockingFlyer **)(this + 0x308) = this;
    *(undefined4 *)(this + 0x30c) = 0;
    for (piVar2 = (int *)FUN_100aeba0(0,*(int *)(this + 4) + 8,0x44800000); piVar2 != (int *)0x0;
        piVar2 = (int *)FUN_100aeba0((int)piVar2,*(int *)(this + 4) + 8,0x44800000)) {
      pCVar3 = (CFlockingFlyer *)(**(code **)(*piVar2 + 0x74))();
      if ((((pCVar3 != (CFlockingFlyer *)0x0) && (pCVar3 != this)) &&
          (iVar4 = (**(code **)(*(int *)pCVar3 + 0xb8))(), iVar4 != 0)) &&
         (*(int *)(pCVar3 + 0x2fc) == 0)) {
        pcVar6 = s_monster_flyer_10101344;
        pbVar5 = (byte *)(**(int **)(pCVar3 + 4) + *(int *)(DAT_10122044 + 0x98));
        do {
          bVar1 = *pbVar5;
          bVar7 = bVar1 < (byte)*pcVar6;
          if (bVar1 != *pcVar6) {
LAB_10001ad9:
            iVar4 = (1 - (uint)bVar7) - (uint)(bVar7 != 0);
            goto LAB_10001ade;
          }
          if (bVar1 == 0) break;
          bVar1 = pbVar5[1];
          bVar7 = bVar1 < (byte)pcVar6[1];
          if (bVar1 != pcVar6[1]) goto LAB_10001ad9;
          pbVar5 = pbVar5 + 2;
          pcVar6 = pcVar6 + 2;
        } while (bVar1 != 0);
        iVar4 = 0;
LAB_10001ade:
        if (iVar4 == 0) {
          FUN_10002ac0(this,(int)pCVar3);
        }
      }
    }
  }
  *(code **)(this + 0x74) = IdleThink;
  (**(code **)(*(int *)this + 8))(0);
  return;
}

