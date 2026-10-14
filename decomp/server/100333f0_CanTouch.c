
/* public: void __thiscall CItemSoda::CanTouch(class CBaseEntity *) */

void __thiscall CItemSoda::CanTouch(CItemSoda *this,CBaseEntity *param_1)

{
  int iVar1;
  
                    /* 0x333f0  41  ?CanTouch@CItemSoda@@QAEXPAVCBaseEntity@@@Z */
  iVar1 = (**(code **)(*(int *)param_1 + 0xcc))();
  if (iVar1 != 0) {
    (**(code **)(*(int *)param_1 + 100))(0x3f800000,0);
    if (*(int *)(*(int *)(this + 4) + 0x198) != 0) {
      iVar1 = (*DAT_10121f20)(*(int *)(*(int *)(this + 4) + 0x198));
      if (iVar1 != 0) {
        *(undefined4 *)(*(int *)(*(int *)(this + 4) + 0x198) + 0x1e4) = 0;
      }
    }
    *(undefined4 *)(*(int *)(this + 4) + 0x10c) = 0;
    *(undefined4 *)(*(int *)(this + 4) + 0x108) = 0;
    *(undefined4 *)(*(int *)(this + 4) + 0x118) = 0x80;
    *(undefined4 *)(this + 0x78) = 0;
    *(code **)(this + 0x74) = CBaseEntity::SUB_Remove;
    (**(code **)(*(int *)this + 8))(0);
  }
  return;
}

