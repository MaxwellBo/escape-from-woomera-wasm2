
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: void __thiscall CFuncTrain::ThinkDoNext(void) */

void __thiscall CFuncTrain::ThinkDoNext(CFuncTrain *this)

{
                    /* 0x765a0  249  ?ThinkDoNext@CFuncTrain@@QAEXXZ */
  (**(code **)(*(int *)this + 8))(0x3dcccccd);
  if (*DAT_10122044 != (float)_DAT_100dd628) {
    *(code **)(this + 0x74) = Next;
  }
  return;
}

