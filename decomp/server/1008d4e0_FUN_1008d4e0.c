
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_1008d4e0(void *this,int *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  float10 fVar7;
  
  switch(*param_1) {
  case 0x6c:
    FUN_1009b910(this,2.0);
    *(undefined4 *)((int)this + 0x37c) = *(undefined4 *)((int)this + 0x168);
    *(undefined4 *)((int)this + 0x380) = *(undefined4 *)((int)this + 0x16c);
    (**(code **)(*(int *)this + 0x198))(s_SC_HEAL_10115a9c,0x40000000,0x3f800000,0x40000000);
    break;
  case 0x6d:
    *(undefined4 *)((int)this + 0x1d0) = 0x1e;
    return;
  case 0x6e:
    iVar6 = FUN_1009b210(this);
    if (iVar6 != 0) {
      FUN_1009b910(this,2.0);
      *(undefined4 *)((int)this + 0x37c) = *(undefined4 *)((int)this + 0x160);
      *(undefined4 *)((int)this + 0x380) = *(undefined4 *)((int)this + 0x164);
      piVar4 = (int *)FUN_10019460((uint *)((int)this + 0x160));
      iVar6 = (**(code **)(*piVar4 + 0xcc))();
      if (iVar6 == 0) {
        (**(code **)(*(int *)this + 0x198))(s_SC_FEAR_10115a88,0x40a00000,0x3f800000,0x3f4ccccd);
      }
      else {
        (**(code **)(*(int *)this + 0x198))(s_SC_PLFEAR_10115a90,0x40a00000,0x3f800000,0x3f4ccccd);
      }
    }
    break;
  case 0x6f:
    *(undefined4 *)((int)this + 0x284) = 0x40;
    return;
  case 0x71:
    fVar7 = (float10)(*DAT_10121f74)(0,0x3f800000);
    if ((float10)(float)param_1[1] <= fVar7) break;
  case 0x70:
    FUN_1008d450(this);
    break;
  case 0x72:
    iVar6 = *(int *)((int)this + 4);
    iVar5 = FUN_10019460((uint *)((int)this + 0x168));
    iVar5 = *(int *)(iVar5 + 4);
    fVar1 = *(float *)(iVar5 + 8) - *(float *)(iVar6 + 8);
    fVar3 = *(float *)(iVar5 + 0xc) - *(float *)(iVar6 + 0xc);
    fVar2 = *(float *)(iVar5 + 0x10) - *(float *)(iVar6 + 0x10);
    if (_DAT_100dd618 <= SQRT(fVar1 * fVar1 + fVar3 * fVar3 + fVar2 * fVar2)) {
      iVar6 = FUN_10019460((uint *)((int)this + 0x168));
      iVar6 = *(int *)(iVar6 + 4);
      *(undefined4 *)((int)this + 0x278) = *(undefined4 *)(iVar6 + 8);
      *(undefined4 *)((int)this + 0x27c) = *(undefined4 *)(iVar6 + 0xc);
      *(undefined4 *)((int)this + 0x280) = *(undefined4 *)(iVar6 + 0x10);
      iVar6 = FUN_1005d500(this,0x3f,0x3f000000);
      if (iVar6 != 0) {
        return;
      }
      *(uint *)((int)this + 0x15c) = *(uint *)((int)this + 0x15c) | 0x40000000;
      return;
    }
    break;
  default:
    FUN_10099e10(this,param_1);
    return;
  }
  if ((*(uint *)((int)this + 0x15c) & 0x40000000) != 0) {
    return;
  }
  *(undefined4 *)((int)this + 0x1e0) = 4;
  return;
}

