
/* public: void __thiscall CTentacle::Start(void) */

void __thiscall CTentacle::Start(CTentacle *this)

{
                    /* 0x9e890  219  ?Start@CTentacle@@QAEXXZ */
  *(code **)(this + 0x74) = Cycle;
  if (DAT_101312f8 == 0) {
    FUN_10094b20(*(void **)(*(int *)(this + 4) + 0x208),*(void **)(*(int *)(this + 4) + 0x208),4,
                 s_ambience_flies_wav_10118470,0x3f800000,0x3f4ccccd,0,100);
    DAT_101312f8 = 1;
    (**(code **)(*(int *)this + 8))(0x3dcccccd);
    return;
  }
  if (DAT_101312f4 == 0) {
    FUN_10094b20(this,*(undefined4 *)(*(int *)(this + 4) + 0x208),4,s_ambience_squirm2_wav_10118458,
                 0x3f800000,0x3f4ccccd,0,100);
    DAT_101312f4 = 1;
  }
  (**(code **)(*(int *)this + 8))(0x3dcccccd);
  return;
}

