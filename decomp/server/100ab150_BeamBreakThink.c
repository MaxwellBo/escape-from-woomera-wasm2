
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* private: void __thiscall CTripmineGrenade::BeamBreakThink(void) */

void __thiscall CTripmineGrenade::BeamBreakThink(CTripmineGrenade *this)

{
  CTripmineGrenade *pCVar1;
  bool bVar2;
  undefined3 extraout_var;
  int iVar3;
  undefined1 local_38 [16];
  float local_28;
  int local_8;
  
                    /* 0xab150  16  ?BeamBreakThink@CTripmineGrenade@@AAEXXZ */
  *(undefined4 *)(DAT_10122044 + 0x84) = 1;
  FUN_100afc60(*(int *)(this + 4) + 8,this + 0x31c,0,*(undefined4 *)(*(int *)(this + 4) + 0x208),
               local_38);
  if (*(int *)(this + 0x334) == 0) {
    FUN_100ab000((int *)this);
    if (local_8 != 0) {
      FUN_10019420(this + 0x32c,*(int *)(local_8 + 0x7c));
    }
  }
  if (ABS(*(float *)(this + 0x328) - local_28) <= (float)_DAT_100de1e0) {
    pCVar1 = this + 0x32c;
    bVar2 = FUN_10019450((uint *)pCVar1);
    if (CONCAT31(extraout_var,bVar2) != 0) {
      iVar3 = FUN_10019460((uint *)pCVar1);
      iVar3 = *(int *)(iVar3 + 4);
      if (((*(float *)(this + 0x338) == *(float *)(iVar3 + 8)) &&
          (*(float *)(this + 0x33c) == *(float *)(iVar3 + 0xc))) &&
         (*(float *)(this + 0x340) == *(float *)(iVar3 + 0x10))) {
        iVar3 = FUN_10019460((uint *)pCVar1);
        iVar3 = *(int *)(iVar3 + 4);
        if (((*(float *)(this + 0x344) == *(float *)(iVar3 + 0x50)) &&
            (*(float *)(this + 0x348) == *(float *)(iVar3 + 0x54))) &&
           (*(float *)(this + 0x34c) == *(float *)(iVar3 + 0x58))) {
          (**(code **)(*(int *)this + 8))(0x3dcccccd);
          return;
        }
      }
    }
  }
  *(undefined4 *)(*(int *)(this + 4) + 0x198) = *(undefined4 *)(this + 0x350);
  *(undefined4 *)(*(int *)(this + 4) + 0x160) = 0;
  if (*(int *)(*(int *)(this + 4) + 0x198) == 0) {
    (**(code **)(*(int *)this + 0x68))(0,0);
    return;
  }
  (**(code **)(*(int *)this + 0x68))(*(int *)(*(int *)(this + 4) + 0x198) + 0x80,0);
  return;
}

