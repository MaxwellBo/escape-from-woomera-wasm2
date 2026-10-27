
/* private: void __thiscall CApacheHVR::IgniteThink(void) */

void __thiscall CApacheHVR::IgniteThink(CApacheHVR *this)

{
  undefined4 uVar1;
  
                    /* 0xbd80  130  ?IgniteThink@CApacheHVR@@AAEXXZ */
  *(uint *)(*(int *)(this + 4) + 0x118) = *(uint *)(*(int *)(this + 4) + 0x118) | 0x40;
  FUN_10094b20(*(void **)(*(int *)(this + 4) + 0x208),*(void **)(*(int *)(this + 4) + 0x208),2,
               s_weapons_rocket1_wav_10102cec,0x3f800000,0x3f000000,0,100);
  (*DAT_10121ec0)(0,0x17,0,0);
  (*DAT_10121ec8)(0x16);
  uVar1 = (*DAT_10121f24)(*(undefined4 *)(*(int *)(this + 4) + 0x208));
  (*DAT_10121ed0)(uVar1);
  (*DAT_10121ed0)(*(undefined4 *)(this + 0x30c));
  (*DAT_10121ec8)(0xf);
  (*DAT_10121ec8)(5);
  (*DAT_10121ec8)(0xe0);
  (*DAT_10121ec8)(0xe0);
  (*DAT_10121ec8)(0xff);
  (*DAT_10121ec8)(0xff);
  (*DAT_10121ec4)();
  *(code **)(this + 0x74) = AccelerateThink;
  (**(code **)(*(int *)this + 8))(0x3dcccccd);
  return;
}

