
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_10010370(void *this,int *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  bool bVar4;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  int iVar5;
  
  switch(*param_1) {
  case 0x5d:
    bVar4 = FUN_10019450((uint *)((int)this + 0x168));
    if (CONCAT31(extraout_var,bVar4) == 0) {
      *(uint *)((int)this + 0x15c) = *(uint *)((int)this + 0x15c) | 0x40000000;
      return;
    }
    fVar1 = *(float *)((int)this + 0x278) - *(float *)(*(int *)((int)this + 4) + 8);
    fVar2 = *(float *)((int)this + 0x27c) - *(float *)(*(int *)((int)this + 4) + 0xc);
    iVar5 = FUN_10019410((uint *)((int)this + 0x168));
    fVar3 = _DAT_100df2a0;
    if (iVar5 != 0) {
      fVar3 = *(float *)(*(int *)(iVar5 + 4) + 0x144);
    }
    if ((SQRT(fVar1 * fVar1 + fVar2 * fVar2) < fVar3) || (*(int *)((int)this + 0x26c) == 0)) {
      (*DAT_10121efc)(2,s_BM__Reached_node__10103a64);
      if ((*(uint *)((int)this + 0x15c) & 0x40000000) == 0) {
        *(undefined4 *)((int)this + 0x1e0) = 4;
      }
      FUN_1005d290((int)this);
      return;
    }
    break;
  default:
    FUN_10005140(this,param_1);
    break;
  case 0x5f:
  case 0x60:
    if ((*(int *)((int)this + 0xd4) != 0) &&
       (*(undefined4 *)((int)this + 0x1cc) = 0, (*(uint *)((int)this + 0x15c) & 0x40000000) == 0)) {
      *(undefined4 *)((int)this + 0x1e0) = 4;
      return;
    }
    break;
  case 0x62:
    bVar4 = FUN_10019450((uint *)((int)this + 0x168));
    if ((CONCAT31(extraout_var_00,bVar4) == 0) ||
       (iVar5 = FUN_10019460((uint *)((int)this + 0x168)),
       (*(byte *)(*(int *)(iVar5 + 4) + 0x1a0) & 2) == 0)) {
      if ((*(float *)((int)this + 0x1c4) < *DAT_10122044) &&
         ((*(uint *)((int)this + 0x15c) & 0x40000000) == 0)) {
        *(undefined4 *)((int)this + 0x1e0) = 4;
      }
      (*DAT_10121efc)(2,s_BM__The_WAIT_is_over__10103a4c);
      return;
    }
  }
  return;
}

