
/* public: void __thiscall CNihilanth::StartupThink(void) */

void __thiscall CNihilanth::StartupThink(CNihilanth *this)

{
  int iVar1;
  
                    /* 0x67150  224  ?StartupThink@CNihilanth@@QAEXXZ */
  *(undefined4 *)(this + 0x374) = 0;
  *(undefined4 *)(this + 0x42c) = 0x44000000;
  iVar1 = FUN_100af030(0,(byte *)s_n_min_10112468);
  if (iVar1 == 0) {
    *(undefined4 *)(this + 0x358) = 0xc5800000;
  }
  else {
    *(undefined4 *)(this + 0x358) = *(undefined4 *)(*(int *)(iVar1 + 4) + 0x10);
  }
  iVar1 = FUN_100af030(0,(byte *)s_n_max_10112460);
  if (iVar1 == 0) {
    *(undefined4 *)(this + 0x35c) = 0x45800000;
  }
  else {
    *(undefined4 *)(this + 0x35c) = *(undefined4 *)(*(int *)(iVar1 + 4) + 0x10);
  }
  FUN_10019420(this + 0x380,(int)this);
  iVar1 = 0x14;
  do {
    FUN_10068f00((int)this);
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  FUN_10019420(this + 0x380,0);
  *(code **)(this + 0x74) = HuntThink;
  *(code **)(this + 0x7c) = CommandUse;
  (**(code **)(*(int *)this + 8))(0x3dcccccd);
  return;
}

