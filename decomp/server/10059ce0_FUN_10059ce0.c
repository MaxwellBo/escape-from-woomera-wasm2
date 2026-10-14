
float * __thiscall FUN_10059ce0(void *param_1,float *param_2,int param_3)

{
  int iVar1;
  void *this;
  undefined4 uVar2;
  undefined1 auStack_18 [12];
  undefined1 auStack_c [12];
  
  this = (void *)FUN_100af060(0,(byte *)(*(int *)(DAT_10122044 + 0x98) +
                                        *(int *)(*(int *)((int)param_1 + 4) + 0x1d0)),param_3);
  switch(*(undefined4 *)(*(int *)((int)param_1 + 4) + 0x184)) {
  case 1:
    goto LAB_10059d2e;
  case 2:
LAB_10059d2e:
    FUN_10059f70(param_1,param_2,(int)this);
    return param_2;
  default:
    iVar1 = *(int *)((int)this + 4);
    FUN_10059e30(param_1,param_2,(int)this,*(float *)(iVar1 + 0x20),*(float *)(iVar1 + 0x24),
                 *(float *)(iVar1 + 0x28));
    return param_2;
  case 5:
    uVar2 = 0;
    break;
  case 6:
    uVar2 = 1;
    break;
  case 7:
    uVar2 = 2;
    break;
  case 8:
    uVar2 = 3;
  }
  FUN_10008450(this,uVar2,auStack_c,auStack_18);
  FUN_10059f70(param_1,param_2,(int)this);
  return param_2;
}

