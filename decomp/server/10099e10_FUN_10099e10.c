
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_10099e10(void *this,int *param_1)

{
  float fVar1;
  bool bVar2;
  undefined3 extraout_var;
  int iVar3;
  int iVar4;
  float10 fVar5;
  undefined1 auStack_60 [4];
  undefined4 uStack_5c;
  undefined4 uStack_54;
  float *pfStack_50;
  float local_30;
  float local_2c;
  float local_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  float local_18;
  float fStack_14;
  float fStack_10;
  float fStack_c;
  float fStack_8;
  
  switch(*param_1) {
  case 0x4f:
    FUN_10019420((void *)((int)this + 0x37c),0);
  default:
    FUN_100057f0(this,param_1);
    return;
  case 0x5d:
    (**(code **)(*(int *)this + 0x228))();
    iVar4 = *(int *)this;
    pfStack_50 = (float *)0x40200000;
    uStack_54 = 0x40000000;
    fVar5 = (float10)(*DAT_10121f74)();
    uStack_54 = *(undefined4 *)((int)this + 0x330);
    pfStack_50 = (float *)(float)fVar5;
    (**(code **)(iVar4 + 0x198))();
    goto LAB_1009a13b;
  case 0x5e:
    iVar4 = *(int *)((int)this + 4);
    local_30 = *(float *)(iVar4 + 0x50);
    local_28 = *(float *)(iVar4 + 0x58);
    local_2c = *(float *)(iVar4 + 0xac) + _DAT_100ddaec;
    pfStack_50 = &local_30;
    uStack_54 = 0x1009a076;
    (*DAT_10121e58)();
    fVar1 = (float)param_1[1];
    fStack_c = local_18 * fVar1;
    iVar4 = *(int *)((int)this + 4);
    fStack_8 = fStack_14 * fVar1;
    local_30 = fStack_c + *(float *)(iVar4 + 8);
    local_2c = fStack_8 + *(float *)(iVar4 + 0xc);
    local_28 = fVar1 * fStack_10 + *(float *)(iVar4 + 0x10);
    pfStack_50 = (float *)0x1009a0e2;
    fStack_24 = local_30;
    fStack_20 = local_2c;
    fStack_1c = local_28;
    iVar4 = FUN_1005d4b0(this,3,0x40000000,&local_30);
    if (iVar4 == 0) {
      iVar4 = *(int *)this;
      (**(code **)(iVar4 + 0x1c8))();
      uStack_5c = 0x1009a10a;
      FUN_10003850(&uStack_54,(undefined4 *)(*(int *)((int)this + 4) + 0x174));
      FUN_10003850(auStack_60,(undefined4 *)(*(int *)((int)this + 4) + 8));
      iVar4 = (**(code **)(iVar4 + 0x1c0))();
      if (iVar4 == 0) {
        *(uint *)((int)this + 0x15c) = *(uint *)((int)this + 0x15c) | 0x40000000;
        return;
      }
      *(float *)((int)this + 0x1c8) = *DAT_10122044 + _DAT_100de4ac;
    }
LAB_1009a13b:
    bVar2 = (*(uint *)((int)this + 0x15c) & 0x40000000) == 0;
    break;
  case 0x5f:
    *(undefined4 *)((int)this + 0x284) = 3;
    return;
  case 0x60:
    FUN_1009b1d0(this);
    bVar2 = (*(uint *)((int)this + 0x15c) & 0x40000000) == 0;
    break;
  case 0x61:
    FUN_1009b4c0(this);
    bVar2 = (*(uint *)((int)this + 0x15c) & 0x40000000) == 0;
    break;
  case 0x62:
    FUN_1009b350(this);
    bVar2 = (*(uint *)((int)this + 0x15c) & 0x40000000) == 0;
    break;
  case 99:
    FUN_10019420((void *)((int)this + 0x37c),0);
    bVar2 = (*(uint *)((int)this + 0x15c) & 0x40000000) == 0;
    break;
  case 100:
    iVar4 = *(int *)this;
    pfStack_50 = (float *)0x40333333;
    uStack_54 = 0x10099fbf;
    (*DAT_10121f74)();
    pfStack_50 = *(float **)((int)this + 0x334);
    uStack_54 = 0x10099fd4;
    (**(code **)(iVar4 + 0x198))();
    bVar2 = (*(uint *)((int)this + 0x15c) & 0x40000000) == 0;
    break;
  case 0x65:
    FUN_1009b2f0(this);
    bVar2 = (*(uint *)((int)this + 0x15c) & 0x40000000) == 0;
    break;
  case 0x66:
  case 0x67:
  case 0x6a:
    *(float *)((int)this + 0x1c4) = (float)param_1[1] + *DAT_10122044;
    return;
  case 0x68:
    goto switchD_10099e33_caseD_68;
  case 0x69:
    bVar2 = FUN_10019450((uint *)((int)this + 0x37c));
    if (CONCAT31(extraout_var,bVar2) != 0) {
      *(undefined4 *)(*(int *)((int)this + 4) + 0xb0) = 0x42700000;
      iVar4 = *(int *)((int)this + 4);
      pfStack_50 = (float *)0x10099ee1;
      iVar3 = FUN_10019460((uint *)((int)this + 0x37c));
      iVar3 = *(int *)(iVar3 + 4);
      pfStack_50 = (float *)0x10099f06;
      fVar5 = FUN_10060520((int)this,*(float *)(iVar3 + 8) - *(float *)(iVar4 + 8),
                           *(float *)(iVar3 + 0xc) - *(float *)(iVar4 + 0xc),
                           *(float *)(iVar3 + 0x10) - *(float *)(iVar4 + 0x10));
      iVar4 = *(int *)((int)this + 4);
      fVar5 = fVar5 - (float10)*(float *)(iVar4 + 0x54);
      if ((float10)_DAT_100ddaec < fVar5) {
        fVar5 = fVar5 - (float10)_DAT_100ddae8;
      }
      if (fVar5 < (float10)_DAT_100de530) {
        fVar5 = fVar5 + (float10)_DAT_100ddae8;
      }
      if ((float10)_DAT_100dd5f8 <= fVar5) {
        fVar5 = fVar5 - (float10)_DAT_100ddb08;
        if (fVar5 <= (float10)_DAT_100dd5f8) goto LAB_10099f67;
      }
      else {
        fVar5 = fVar5 + (float10)_DAT_100ddb08;
        if ((float10)_DAT_100dd5f8 <= fVar5) {
LAB_10099f67:
          fVar5 = (float10)_DAT_100dd5f8;
        }
      }
      *(float *)(iVar4 + 0xac) = (float)(fVar5 + (float10)*(float *)(iVar4 + 0x54));
    }
    bVar2 = (*(uint *)((int)this + 0x15c) & 0x40000000) == 0;
  }
  if (bVar2) {
    *(undefined4 *)((int)this + 0x1e0) = 4;
    return;
  }
switchD_10099e33_caseD_68:
  return;
}

