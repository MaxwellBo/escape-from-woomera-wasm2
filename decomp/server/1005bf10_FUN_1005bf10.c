
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_1005bf10(void *this,int *param_1,undefined4 param_2,undefined4 param_3)

{
  float fVar1;
  bool bVar2;
  undefined3 extraout_var;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  
  bVar2 = FUN_1005ae40(this,(int)param_1);
  if (CONCAT31(extraout_var,bVar2) == 0) {
    return;
  }
  switch(param_3) {
  case 0:
    iVar3 = *(int *)((int)this + 4);
    fVar1 = *(float *)(iVar3 + 0x164) - _DAT_100dd618;
    break;
  case 1:
  case 3:
    iVar3 = *(int *)((int)this + 4);
    fVar1 = *(float *)(iVar3 + 0x164) + _DAT_100dd618;
    break;
  case 2:
    lVar4 = __ftol();
    iVar3 = *(int *)((int)this + 4);
    fVar1 = (float)(int)lVar4;
    break;
  default:
    goto switchD_1005bf2f_default;
  }
  *(float *)(iVar3 + 0x164) = fVar1;
switchD_1005bf2f_default:
  lVar4 = __ftol();
  lVar5 = __ftol();
  if ((int)lVar4 == (int)lVar5) {
    FUN_10098bd0(this,param_1,3,0);
    if ((*(byte *)(*(int *)((int)this + 4) + 0x1a0) & 1) != 0) {
      FUN_100b0ef0((int)this);
    }
    iVar3 = *(int *)((int)this + 4);
    if ((*(byte *)(iVar3 + 0x1a0) & 2) != 0) {
      *(undefined4 *)(iVar3 + 0x164) = *(undefined4 *)(iVar3 + 0x1e0);
    }
  }
  return;
}

