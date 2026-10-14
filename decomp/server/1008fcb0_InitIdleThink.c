
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: void __thiscall CCineMonster::InitIdleThink(void) */

void __thiscall CCineMonster::InitIdleThink(CCineMonster *this)

{
  int *piVar1;
  int iVar2;
  
                    /* 0x8fcb0  132  ?InitIdleThink@CCineMonster@@QAEXXZ */
  piVar1 = FUN_1008f8a0(this,(byte *)((int)DAT_10122044[0x26] + *(int *)(this + 0x314)),0);
  iVar2 = FUN_10019420(this + 0x168,(int)piVar1);
  if (iVar2 != 0) {
    (**(code **)(*(int *)this + 0x22c))();
    *(float *)(this + 0x34c) = *DAT_10122044 + (float)_DAT_100e08d8;
    (*DAT_10121efc)(2,s_script___s__using_monster___s__101160a4,
                    *(int *)(*(int *)(this + 4) + 0x1cc) + (int)DAT_10122044[0x26],
                    (int)DAT_10122044[0x26] + *(int *)(this + 0x314));
    return;
  }
  FUN_100901d0((int)this);
  (*DAT_10121efc)(2,s_script___s__can_t_find_monster___1011607c,
                  *(int *)(*(int *)(this + 4) + 0x1cc) + (int)DAT_10122044[0x26],
                  (int)DAT_10122044[0x26] + *(int *)(this + 0x314));
  (**(code **)(*(int *)this + 8))(0x3f800000);
  return;
}

