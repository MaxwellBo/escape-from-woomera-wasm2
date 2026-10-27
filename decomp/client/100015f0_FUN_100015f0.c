
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_100015f0(int *param_1)

{
  int iVar1;
  CBasePlayerItem *this;
  
  if (0 < *(int *)(param_1[0x37] + 0x8c)) {
    if (*(float *)(*(int *)(param_1[0x37] + 4) + 0x214) != _DAT_10059a18) {
      (**(code **)(*param_1 + 0x188))();
    }
    iVar1 = FUN_1000a2a0(param_1,5,7,4.5,0);
    if (iVar1 != 0) {
      iVar1 = (*DAT_1007f038)(0,0xf);
      (*DAT_1007f03c)(0x3f733333,0x3f800000,0x3f4ccccd,0,iVar1 + 0x5d);
      CBasePlayerItem::AttemptToMaterialize(this);
    }
  }
  return;
}

