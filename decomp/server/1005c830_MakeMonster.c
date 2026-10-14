
/* public: void __thiscall CMonsterMaker::MakeMonster(void) */

void __thiscall CMonsterMaker::MakeMonster(CMonsterMaker *this)

{
  int iVar1;
  int iVar2;
  
                    /* 0x5c830  141  ?MakeMonster@CMonsterMaker@@QAEXXZ */
  iVar1 = (*DAT_10121e64)(*(undefined4 *)(this + 0x308));
  if (iVar1 == 0) {
LAB_1005c858:
    (*DAT_10121efc)(1,s_NULL_Ent_in_MonsterMaker__101107f8);
    return;
  }
  iVar2 = (*DAT_10121f20)(iVar1);
  if (iVar2 == 0) goto LAB_1005c858;
  iVar2 = *(int *)(this + 4);
  *(undefined4 *)(iVar1 + 0x88) = *(undefined4 *)(iVar2 + 8);
  *(undefined4 *)(iVar1 + 0x8c) = *(undefined4 *)(iVar2 + 0xc);
  *(undefined4 *)(iVar1 + 0x90) = *(undefined4 *)(iVar2 + 0x10);
  iVar2 = *(int *)(this + 4);
  *(undefined4 *)(iVar1 + 0xd0) = *(undefined4 *)(iVar2 + 0x50);
  *(undefined4 *)(iVar1 + 0xd4) = *(undefined4 *)(iVar2 + 0x54);
  *(undefined4 *)(iVar1 + 0xd8) = *(undefined4 *)(iVar2 + 0x58);
  *(uint *)(iVar1 + 0x220) = *(uint *)(iVar1 + 0x220) | 0x80000000;
  if ((*(uint *)(*(int *)(this + 4) + 0x1a0) & 0x400) != 0) {
    *(uint *)(iVar1 + 0x220) = *(uint *)(iVar1 + 0x220) | 0x400;
  }
  if ((*(byte *)(*(int *)(this + 4) + 0x1a0) & 8) != 0) {
    *(uint *)(iVar1 + 0x220) = *(uint *)(iVar1 + 0x220) | 4;
  }
  FUN_10018b20(*(int *)(iVar1 + 0x288));
  iVar2 = *(int *)(iVar1 + 0x288);
  *(undefined4 *)(iVar1 + 0x218) = *(undefined4 *)(*(int *)(this + 4) + 0x208);
  if (iVar2 == 0) {
    iVar2 = (*DAT_10121f1c)(0);
    if (iVar2 == 0) goto LAB_1005c944;
  }
  if (*(int **)(iVar2 + 0x7c) != (int *)0x0) {
    iVar2 = (**(code **)(**(int **)(iVar2 + 0x7c) + 0x74))();
    if (iVar2 != 0) {
      *(undefined4 *)(iVar2 + 0x300) = *(undefined4 *)(this + 0x300);
      *(undefined4 *)(iVar2 + 0x304) = *(undefined4 *)(this + 0x304);
    }
  }
LAB_1005c944:
  if (*(int *)(*(int *)(this + 4) + 0x1d0) != 0) {
    *(int *)(iVar1 + 0x24c) = *(int *)(*(int *)(this + 4) + 0x1d0);
  }
  iVar1 = *(int *)(this + 0x30c);
  *(int *)(this + 0x310) = *(int *)(this + 0x310) + 1;
  *(int *)(this + 0x30c) = iVar1 + -1;
  if (iVar1 + -1 == 0) {
    *(undefined4 *)(this + 0x74) = 0;
    *(undefined4 *)(this + 0x7c) = 0;
    return;
  }
  if (*(int *)(this + 0x31c) != 0) {
    (**(code **)(*(int *)this + 8))(*(undefined4 *)(this + 0xb8));
    *(code **)(this + 0x74) = MakerThink;
  }
  return;
}

