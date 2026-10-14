
/* public: void __thiscall CItemSoda::CanThink(void) */

void __thiscall CItemSoda::CanThink(CItemSoda *this)

{
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
                    /* 0x33360  40  ?CanThink@CItemSoda@@QAEXXZ */
  FUN_10094b20(*(void **)(*(int *)(this + 4) + 0x208),*(void **)(*(int *)(this + 4) + 0x208),1,
               s_weapons_g_bounce3_wav_10108524,0x3f800000,0x3f4ccccd,0,100);
  *(undefined4 *)(*(int *)(this + 4) + 0x10c) = 1;
  local_18 = 0x41000000;
  local_14 = 0x41000000;
  local_10 = 0x41000000;
  local_c = 0xc1000000;
  local_8 = 0xc1000000;
  local_4 = 0;
  FUN_100afdc0(*(int *)(this + 4),&local_c,&local_18);
  *(undefined4 *)(this + 0x74) = 0;
  *(code **)(this + 0x78) = CanTouch;
  return;
}

