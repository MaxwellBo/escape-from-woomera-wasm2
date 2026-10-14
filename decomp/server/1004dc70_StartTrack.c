
/* public: void __thiscall CHornet::StartTrack(void) */

void __thiscall CHornet::StartTrack(CHornet *this)

{
                    /* 0x4dc70  222  ?StartTrack@CHornet@@QAEXXZ */
  FUN_1004dcd0((int)this);
  *(code **)(this + 0x78) = TrackTouch;
  *(code **)(this + 0x74) = TrackTarget;
  (**(code **)(*(int *)this + 8))(0x3dcccccd);
  return;
}

