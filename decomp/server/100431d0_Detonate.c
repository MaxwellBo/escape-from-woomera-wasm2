
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: void __thiscall CGrenade::Detonate(void) */

void __thiscall CGrenade::Detonate(CGrenade *this)

{
  int iVar1;
  undefined4 local_50;
  undefined4 local_4c;
  float local_48;
  undefined4 local_44;
  undefined4 local_40;
  float local_3c;
  undefined1 local_38 [56];
  
                    /* 0x431d0  69  ?Detonate@CGrenade@@QAEXXZ */
  iVar1 = *(int *)(this + 4);
  local_50 = *(undefined4 *)(iVar1 + 8);
  local_4c = *(undefined4 *)(iVar1 + 0xc);
  local_3c = *(float *)(iVar1 + 0x10) + _DAT_100de45c;
  local_48 = local_3c - _DAT_100e113c;
  local_44 = local_50;
  local_40 = local_4c;
  FUN_100afc60(&local_44,&local_50,1,*(undefined4 *)(iVar1 + 0x208),local_38);
  FUN_10042d50(this,(int)local_38,0x40);
  return;
}

