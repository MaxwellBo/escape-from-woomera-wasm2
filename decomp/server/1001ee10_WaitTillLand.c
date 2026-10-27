
/* public: void __thiscall CGib::WaitTillLand(void) */

void __thiscall CGib::WaitTillLand(CGib *this)

{
  int iVar1;
  
                    /* 0x1ee10  277  ?WaitTillLand@CGib@@QAEXXZ */
  iVar1 = (**(code **)(*(int *)this + 200))();
  if (iVar1 == 0) {
    FUN_100b0ef0((int)this);
    return;
  }
  iVar1 = *(int *)(this + 4);
  if (((*(float *)(iVar1 + 0x20) == DAT_10121dd8) && (*(float *)(iVar1 + 0x24) == DAT_10121ddc)) &&
     (*(float *)(iVar1 + 0x28) == DAT_10121de0)) {
    *(code **)(this + 0x74) = CBaseEntity::SUB_StartFadeOut;
    (**(code **)(*(int *)this + 8))(*(undefined4 *)(this + 0xc4));
    if (*(int *)(this + 0xb8) != -1) {
      FUN_10095d30(0x10,(undefined4 *)(*(int *)(this + 4) + 8),0x180,25.0);
      return;
    }
  }
  else {
    (**(code **)(*(int *)this + 8))(0x3f000000);
  }
  return;
}

