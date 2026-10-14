
/* public: void __thiscall CRpgRocket::IgniteThink(void) */

void __thiscall CRpgRocket::IgniteThink(CRpgRocket *this)

{
  undefined4 uVar1;
  
                    /* 0x8b4c0  131  ?IgniteThink@CRpgRocket@@QAEXXZ */
  *(undefined4 *)(*(int *)(this + 4) + 0x108) = 5;
  *(uint *)(*(int *)(this + 4) + 0x118) = *(uint *)(*(int *)(this + 4) + 0x118) | 0x40;
  FUN_10094b20(*(void **)(this + 4),*(undefined4 *)((int)*(void **)(this + 4) + 0x208),2,
               s_weapons_rocket1_wav_10102cec,0x3f800000,0x3f000000,0,100);
  (*DAT_10121ec0)(0,0x17,0,0);
  (*DAT_10121ec8)(0x16);
  uVar1 = (*DAT_10121f24)(*(undefined4 *)(*(int *)(this + 4) + 0x208));
  (*DAT_10121ed0)(uVar1);
  (*DAT_10121ed0)(*(undefined4 *)(this + 0x30c));
  (*DAT_10121ec8)(0x28);
  (*DAT_10121ec8)(5);
  (*DAT_10121ec8)(0xe0);
  (*DAT_10121ec8)(0xe0);
  (*DAT_10121ec8)(0xff);
  (*DAT_10121ec8)(0xff);
  (*DAT_10121ec4)();
  *(undefined4 *)(this + 0x310) = *DAT_10122044;
  *(code **)(this + 0x74) = FollowThink;
  (**(code **)(*(int *)this + 8))(0x3dcccccd);
  return;
}

