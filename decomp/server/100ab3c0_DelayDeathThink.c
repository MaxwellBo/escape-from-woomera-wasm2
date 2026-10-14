
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* private: void __thiscall CTripmineGrenade::DelayDeathThink(void) */

void __thiscall CTripmineGrenade::DelayDeathThink(CTripmineGrenade *this)

{
  int iVar1;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  undefined1 local_38 [56];
  
                    /* 0xab3c0  63  ?DelayDeathThink@CTripmineGrenade@@AAEXXZ */
  FUN_100aafd0((int)this);
  iVar1 = *(int *)(this + 4);
  local_3c = *(float *)(iVar1 + 0x10) - *(float *)(this + 0x318) * _DAT_100ddb10;
  local_40 = *(float *)(iVar1 + 0xc) - *(float *)(this + 0x314) * _DAT_100ddb10;
  local_44 = *(float *)(iVar1 + 8) - *(float *)(this + 0x310) * _DAT_100ddb10;
  local_48 = *(float *)(this + 0x318) * _DAT_100de45c + *(float *)(iVar1 + 0x10);
  local_4c = *(float *)(this + 0x314) * _DAT_100de45c + *(float *)(iVar1 + 0xc);
  local_50 = *(float *)(this + 0x310) * _DAT_100de45c + *(float *)(iVar1 + 8);
  FUN_100afc60(&local_50,&local_44,0,*(undefined4 *)(iVar1 + 0x208),local_38);
  FUN_10042d50(this,(int)local_38,0x40);
  return;
}

