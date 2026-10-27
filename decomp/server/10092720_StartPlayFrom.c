
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: void __thiscall CAmbientGeneric::StartPlayFrom(void) */

void __thiscall CAmbientGeneric::StartPlayFrom(CAmbientGeneric *this)

{
                    /* 0x92720  221  ?StartPlayFrom@CAmbientGeneric@@QAEXXZ */
  FUN_10094b20(DAT_10122044,*(undefined4 *)(this + 0x128),*(undefined4 *)(this + 300),
               (char *)(*(int *)(*(int *)(this + 4) + 0x1d4) + *(int *)((int)DAT_10122044 + 0x98)),
               (float)*(int *)(this + 0x108) * (float)_DAT_100dfb88,*(undefined4 *)(this + 0xb8),
               0x100,*(undefined4 *)(this + 0xf8));
  *(code **)(this + 0x74) = RampThink;
  (**(code **)(*(int *)this + 8))(0x3dcccccd);
  return;
}

