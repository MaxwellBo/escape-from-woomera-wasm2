
/* public: void __thiscall CCineMonster::CineThink(void) */

void __thiscall CCineMonster::CineThink(CCineMonster *this)

{
  int iVar1;
  int *piVar2;
  
                    /* 0x8fd80  44  ?CineThink@CCineMonster@@QAEXXZ */
  iVar1 = FUN_10019410((uint *)(this + 0xc0));
  piVar2 = FUN_1008f8a0(this,(byte *)(*(int *)(DAT_10122044 + 0x98) + *(int *)(this + 0x314)),iVar1)
  ;
  iVar1 = FUN_10019420(this + 0x168,(int)piVar2);
  if (iVar1 != 0) {
    (**(code **)(*(int *)this + 0x22c))();
    (*DAT_10121efc)(2,s_script___s__using_monster___s__101160a4,
                    *(int *)(*(int *)(this + 4) + 0x1cc) + *(int *)(DAT_10122044 + 0x98),
                    *(int *)(this + 0x314) + *(int *)(DAT_10122044 + 0x98));
    return;
  }
  FUN_100901d0((int)this);
  (*DAT_10121efc)(2,s_script___s__can_t_find_monster___1011607c,
                  *(int *)(*(int *)(this + 4) + 0x1cc) + *(int *)(DAT_10122044 + 0x98),
                  *(int *)(this + 0x314) + *(int *)(DAT_10122044 + 0x98));
  (**(code **)(*(int *)this + 8))(0x3f800000);
  return;
}

