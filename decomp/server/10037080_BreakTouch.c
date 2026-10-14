
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: void __thiscall CBreakable::BreakTouch(class CBaseEntity *) */

void __thiscall CBreakable::BreakTouch(CBreakable *this,CBaseEntity *param_1)

{
  int iVar1;
  float fVar2;
  bool bVar3;
  int iVar4;
  undefined3 extraout_var;
  float unaff_EDI;
  
                    /* 0x37080  25  ?BreakTouch@CBreakable@@QAEXPAVCBaseEntity@@@Z */
  iVar1 = *(int *)(param_1 + 4);
  iVar4 = (**(code **)(*(int *)param_1 + 0xcc))();
  if (iVar4 != 0) {
    bVar3 = FUN_10037dd0((int)this);
    if (CONCAT31(extraout_var,bVar3) != 0) {
      if (((*(byte *)(*(int *)(this + 4) + 0x1a0) & 2) != 0) &&
         (fVar2 = SQRT(*(float *)(iVar1 + 0x28) * *(float *)(iVar1 + 0x28) +
                       *(float *)(iVar1 + 0x24) * *(float *)(iVar1 + 0x24) +
                       *(float *)(iVar1 + 0x20) * *(float *)(iVar1 + 0x20)) * (float)_DAT_100dfb88,
         *(float *)(*(int *)(this + 4) + 0x160) <= fVar2)) {
        *(undefined4 *)(this + 0x78) = 0;
        (**(code **)(*(int *)this + 0x60))(iVar1,iVar1,fVar2,1);
        (**(code **)(*(int *)param_1 + 0x60))
                  (*(undefined4 *)(this + 4),*(undefined4 *)(this + 4),unaff_EDI * _DAT_100dd5e8,4);
      }
      if (((*(byte *)(*(int *)(this + 4) + 0x1a0) & 4) != 0) &&
         (*(float *)(*(int *)(this + 4) + 0xf0) - _DAT_100de4ac <= *(float *)(iVar1 + 0xcc))) {
        FUN_10036ee0((int)this);
        bVar3 = *(float *)(this + 0xb8) == _DAT_100dd5f8;
        *(code **)(this + 0x74) = Die;
        *(undefined4 *)(this + 0x78) = 0;
        if (bVar3) {
          *(undefined4 *)(this + 0xb8) = 0x3dcccccd;
        }
        (**(code **)(*(int *)this + 8))(*(undefined4 *)(this + 0xb8));
      }
    }
  }
  return;
}

