
void __thiscall FUN_100b48b0(void *this,int param_1)

{
  int iVar1;
  int iVar2;
  
  if (*(int *)((int)this + 0x1d0) < 0x20) {
    iVar1 = FUN_100c8388(this,*(byte **)(param_1 + 8));
    iVar2 = (*DAT_10121f14)(*(undefined4 *)(param_1 + 4));
    FUN_100b4bd0(this,iVar2,iVar1);
    *(int *)((int)this + 0x1d0) = *(int *)((int)this + 0x1d0) + 1;
    *(undefined4 *)(param_1 + 0xc) = 1;
    return;
  }
  (*DAT_10121efc)(1,s_WeaponBox_too_full__only__d_ammo_1011ba90,0x20);
  return;
}

