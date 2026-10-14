
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_1009a1e0(void *this,int *param_1)

{
  int iVar1;
  float fVar2;
  float fVar3;
  bool bVar4;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  int iVar5;
  undefined3 extraout_var_01;
  float10 fVar6;
  longlong lVar7;
  
  switch(*param_1) {
  case 0x5b:
    iVar5 = FUN_1009bcc0((int)this);
    if (iVar5 != 0) {
      bVar4 = FUN_10019450((uint *)((int)this + 0x37c));
      if (CONCAT31(extraout_var_00,bVar4) != 0) {
        iVar5 = FUN_10019460((uint *)((int)this + 0x37c));
        FUN_1009b420(this,(float *)(*(int *)(iVar5 + 4) + 8));
        goto LAB_1009a4c1;
      }
    }
    FUN_1009b420(this,(float *)(*(int *)((int)this + 4) + 8));
    FUN_1009b350(this);
    iVar5 = (*DAT_10121f70)(0,*(int *)((int)this + 0x30c) * 0x14);
    if (iVar5 == 0) {
      FUN_1009b4c0(this);
    }
LAB_1009a4c1:
    FUN_10005140(this,param_1);
    if (*(int *)((int)this + 0x1e0) != 4) {
      return;
    }
    FUN_1009b420(this,(float *)(*(int *)((int)this + 4) + 8));
    return;
  default:
    iVar5 = FUN_1009bcc0((int)this);
    if (iVar5 != 0) {
      bVar4 = FUN_10019450((uint *)((int)this + 0x37c));
      if (CONCAT31(extraout_var_01,bVar4) != 0) {
        iVar5 = FUN_10019460((uint *)((int)this + 0x37c));
        FUN_1009b420(this,(float *)(*(int *)(iVar5 + 4) + 8));
        FUN_10005140(this,param_1);
        return;
      }
    }
    FUN_10008360(this,0,0.0);
    FUN_10005140(this,param_1);
    return;
  case 0x5f:
    fVar2 = *(float *)((int)this + 0x290) - *(float *)(*(int *)((int)this + 4) + 8);
    fVar3 = *(float *)((int)this + 0x294) - *(float *)(*(int *)((int)this + 4) + 0xc);
    if ((SQRT(fVar2 * fVar2 + fVar3 * fVar3) <= (float)param_1[1]) &&
       (*(int *)((int)this + 0x26c) != 0)) {
      return;
    }
    if ((*(uint *)((int)this + 0x15c) & 0x40000000) == 0) {
      *(undefined4 *)((int)this + 0x1e0) = 4;
    }
    FUN_1005d290((int)this);
    return;
  case 0x66:
  case 0x67:
    if (((*(int *)((int)this + 0x1d8) != 1) ||
        (iVar5 = (**(code **)(*(int *)this + 0x98))(), iVar5 != 0)) ||
       (iVar5 = FUN_1009bcc0((int)this), iVar5 != 0)) {
LAB_1009a2f2:
      *(uint *)((int)this + 0x15c) = *(uint *)((int)this + 0x15c) | 0x40000000;
      return;
    }
    iVar5 = (*DAT_10121f28)(1);
    if (iVar5 != 0) {
      FUN_1009b420(this,(float *)(iVar5 + 0x88));
    }
    if (*param_1 == 0x67) {
      fVar2 = *(float *)(iVar5 + 0x88) - *(float *)(*(int *)((int)this + 4) + 8);
      fVar3 = *(float *)(iVar5 + 0x8c) - *(float *)(*(int *)((int)this + 4) + 0xc);
      if (_DAT_100ddaf4 < SQRT(fVar2 * fVar2 + fVar3 * fVar3)) {
        *(uint *)((int)this + 0x15c) = *(uint *)((int)this + 0x15c) | 0x40000000;
      }
      FUN_100af200(iVar5 + 0xd0);
      fVar6 = FUN_100b1010((float *)(iVar5 + 0x88),(float *)(*(int *)((int)this + 4) + 8),
                           DAT_10122044 + 10);
      if (fVar6 < (float10)*(float *)((int)this + 0x1c0)) {
        *(uint *)((int)this + 0x15c) = *(uint *)((int)this + 0x15c) | 0x40000000;
      }
    }
    if (*DAT_10122044 <= *(float *)((int)this + 0x1c4)) {
      return;
    }
    break;
  case 0x68:
    iVar5 = (**(code **)(*(int *)this + 0x98))();
    if ((iVar5 == 0) && (iVar5 = FUN_1009bcc0((int)this), iVar5 != 0)) {
      bVar4 = FUN_10019450((uint *)((int)this + 0x37c));
      if (CONCAT31(extraout_var,bVar4) != 0) {
        iVar5 = FUN_10019460((uint *)((int)this + 0x37c));
        FUN_1009b420(this,(float *)(*(int *)(iVar5 + 4) + 8));
        return;
      }
    }
    break;
  case 0x6a:
    iVar5 = (*DAT_10121f28)(1);
    if (iVar5 == 0) goto LAB_1009a2f2;
    FUN_10060260(this,*(float *)(iVar5 + 0x88),*(float *)(iVar5 + 0x8c),*(float *)(iVar5 + 0x90));
    iVar1 = *(int *)this;
    lVar7 = __ftol();
    (**(code **)(iVar1 + 0x128))((int)lVar7);
    FUN_1009b420(this,(float *)(iVar5 + 0x88));
    if (*DAT_10122044 <= *(float *)((int)this + 0x1c4)) {
      return;
    }
    fVar6 = FUN_10060350((int)this);
    if ((float10)_DAT_100dd63c <= fVar6) {
      return;
    }
  }
  if ((*(uint *)((int)this + 0x15c) & 0x40000000) != 0) {
    return;
  }
  *(undefined4 *)((int)this + 0x1e0) = 4;
  return;
}

