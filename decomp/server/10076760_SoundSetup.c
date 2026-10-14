
/* public: void __thiscall CFuncTrain::SoundSetup(void) */

void __thiscall CFuncTrain::SoundSetup(CFuncTrain *this)

{
  void *this_00;
  
                    /* 0x76760  206  ?SoundSetup@CFuncTrain@@QAEXXZ */
  this_00 = (void *)(*(int *)(*(int *)(this + 4) + 0x1e8) + *(int *)(DAT_10122044 + 0x98));
  FUN_10094b20(this_00,*(undefined4 *)(*(int *)(this + 4) + 0x208),6,this_00,
               *(undefined4 *)(this + 0x160),0x3f4ccccd,0,100);
  (**(code **)(*(int *)this + 8))(*(float *)(this + 0x174) - *(float *)(*(int *)(this + 4) + 0x100))
  ;
  *(undefined4 *)(this + 0x174) = 0;
  *(code **)(this + 0x74) = CBaseToggle::LinearMoveDone;
  return;
}

