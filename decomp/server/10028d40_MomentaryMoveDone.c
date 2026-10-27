
/* public: void __thiscall CMomentaryDoor::MomentaryMoveDone(void) */

void __thiscall CMomentaryDoor::MomentaryMoveDone(CMomentaryDoor *this)

{
  void *this_00;
  
                    /* 0x28d40  149  ?MomentaryMoveDone@CMomentaryDoor@@QAEXXZ */
  *(undefined4 *)(this + 0x160) = 0;
  this_00 = *(void **)(this + 4);
  FUN_10094b20(this_00,*(undefined4 *)((int)this_00 + 0x208),6,
               (char *)(*(int *)((int)this_00 + 0x1ec) + *(int *)(DAT_10122044 + 0x98)),0,0,0x20,100
              );
  return;
}

