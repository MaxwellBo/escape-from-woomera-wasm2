
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_10050740(void *this,int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  longlong lVar3;
  
  switch(*param_1) {
  case 0x2d:
    uVar2 = (*DAT_10121f70)(0,3);
    *(undefined4 *)(*(int *)((int)this + 4) + 0x110) = uVar2;
    FUN_10060260(this,*(float *)((int)this + 0x2a8),*(float *)((int)this + 0x2ac),
                 *(float *)((int)this + 0x2b0));
    iVar1 = *(int *)this;
    lVar3 = __ftol();
    (**(code **)(iVar1 + 0x128))((int)lVar3);
    (*DAT_10121ec0)(5,0x17,*(int *)((int)this + 4) + 8,0);
    (*DAT_10121ec8)(0xe);
    (*DAT_10121edc)(*(undefined4 *)(*(int *)((int)this + 4) + 8));
    (*DAT_10121edc)(*(undefined4 *)(*(int *)((int)this + 4) + 0xc));
    (*DAT_10121edc)(*(float *)(*(int *)((int)this + 4) + 0x10) + _DAT_100dd634);
    lVar3 = __ftol();
    (*DAT_10121ec8)((int)lVar3);
    lVar3 = __ftol();
    (*DAT_10121ec8)((int)lVar3);
    lVar3 = __ftol();
    (*DAT_10121ec8)((int)lVar3);
    (*DAT_10121ec4)();
    if (*(int *)((int)this + 0xd4) == 0) {
      return;
    }
    FUN_10050190(this);
    goto LAB_10050910;
  default:
    FUN_10005140(this,param_1);
    break;
  case 0x5d:
    iVar1 = *(int *)(*(int *)((int)this + 4) + 0x110);
    if (iVar1 < 3) {
      *(int *)(*(int *)((int)this + 4) + 0x110) = iVar1 + 1;
      return;
    }
    break;
  case 0x5f:
    FUN_10060260(this,*(float *)((int)this + 0x2a8),*(float *)((int)this + 0x2ac),
                 *(float *)((int)this + 0x2b0));
    iVar1 = *(int *)this;
    lVar3 = __ftol();
    (**(code **)(iVar1 + 0x128))((int)lVar3);
  case 0x62:
    if (*(int *)((int)this + 0xd4) != 0) {
LAB_10050910:
      if ((*(uint *)((int)this + 0x15c) & 0x40000000) == 0) {
        *(undefined4 *)((int)this + 0x1e0) = 4;
        return;
      }
    }
  }
  return;
}

