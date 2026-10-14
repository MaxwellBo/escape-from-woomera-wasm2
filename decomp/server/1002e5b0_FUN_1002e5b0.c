
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * __thiscall
FUN_1002e5b0(void *this,float param_1,float param_2,float param_3,float param_4,undefined4 param_5,
            undefined4 param_6)

{
  int iVar1;
  float fVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  float10 fVar6;
  
  if (*(int *)((int)this + 0x100) < 2) {
    iVar3 = (*DAT_10121e5c)();
    if (iVar3 == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = iVar3 + 0x80;
    }
    iVar1 = *(int *)(iVar3 + 0x208);
    if ((iVar1 == 0) || (piVar4 = *(int **)(iVar1 + 0x7c), piVar4 == (int *)0x0)) {
      piVar4 = (int *)(*DAT_10121f04)(iVar1,200);
      if (piVar4 == (int *)0x0) {
        piVar4 = (int *)0x0;
      }
      else {
        *piVar4 = (int)&PTR_FUN_100e0d98;
      }
      piVar4[1] = iVar3;
    }
    iVar3 = piVar4[1];
    *(float *)(iVar3 + 8) = param_1;
    *(float *)(iVar3 + 0xc) = param_2;
    *(float *)(iVar3 + 0x10) = param_3;
    iVar3 = piVar4[1];
    *(float *)(iVar3 + 0x20) = param_4;
    *(undefined4 *)(iVar3 + 0x24) = param_5;
    *(undefined4 *)(iVar3 + 0x28) = param_6;
    FUN_1001f200(piVar4,*(int *)(*(int *)((int)this + 4) + 0xb8) + (int)DAT_10122044[0x26]);
    if (*(int *)((int)this + 0x100) != 0) {
      param_1 = 0.0;
      *(undefined4 *)(piVar4[1] + 0x108) = 6;
      param_2 = 0.0;
      *(undefined4 *)(piVar4[1] + 0x10c) = 2;
      param_3 = 0.0;
      param_4 = 0.0;
      param_5 = 0;
      param_6 = 0;
      FUN_100afdc0(piVar4[1],&param_4,&param_1);
      piVar4[0x1e] = (int)CGib::StickyGibTouch;
    }
    iVar3 = *(int *)(*(int *)((int)this + 4) + 0x114);
    if (0 < iVar3) {
      uVar5 = (*DAT_10121f70)(0,iVar3 + -1);
      *(undefined4 *)(piVar4[1] + 0x114) = uVar5;
    }
    if (*(int *)((int)this + 0xf4) == 0) {
      piVar4[0x2e] = -1;
    }
    else {
      piVar4[0x2e] = *(int *)((int)this + 0xf4);
    }
    piVar4[0x30] = *(int *)((int)this + 0xd0);
    *(undefined4 *)(piVar4[1] + 0x148) = *(undefined4 *)(*(int *)((int)this + 4) + 0x148);
    *(undefined4 *)(piVar4[1] + 0x14c) = *(undefined4 *)(*(int *)((int)this + 4) + 0x14c);
    iVar3 = *(int *)((int)this + 4);
    iVar1 = piVar4[1];
    *(undefined4 *)(iVar1 + 0x150) = *(undefined4 *)(iVar3 + 0x150);
    *(undefined4 *)(iVar1 + 0x154) = *(undefined4 *)(iVar3 + 0x154);
    *(undefined4 *)(iVar1 + 0x158) = *(undefined4 *)(iVar3 + 0x158);
    *(undefined4 *)(piVar4[1] + 0x15c) = *(undefined4 *)(*(int *)((int)this + 4) + 0x15c);
    *(undefined4 *)(piVar4[1] + 0x144) = *(undefined4 *)(*(int *)((int)this + 4) + 0x144);
    *(undefined4 *)(piVar4[1] + 0x110) = *(undefined4 *)(*(int *)((int)this + 4) + 0x110);
    param_1 = (float)piVar4[0x15] - *DAT_10122044;
    fVar6 = (float10)(*DAT_10121f74)(0x3f733333,0x3f866666);
    fVar6 = fVar6 * (float10)*(float *)((int)this + 0xdc);
    piVar4[0x31] = (int)(float)fVar6;
    param_4 = (float)fVar6;
    if (fVar6 < (float10)param_1) {
      (**(code **)(*piVar4 + 8))(param_4);
      piVar4[0x31] = 0;
    }
    fVar6 = (float10)(*DAT_10121f74)(0x42c80000,0x43480000);
    *(float *)(piVar4[1] + 0x5c) = (float)fVar6;
    fVar6 = (float10)(*DAT_10121f74)(0x42c80000,0x43960000);
    *(float *)(piVar4[1] + 0x60) = (float)fVar6;
    return piVar4;
  }
  iVar3 = (*DAT_10121e5c)();
  if (iVar3 == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = iVar3 + 0x80;
  }
  iVar1 = *(int *)(iVar3 + 0x208);
  if ((iVar1 == 0) || (piVar4 = *(int **)(iVar1 + 0x7c), piVar4 == (int *)0x0)) {
    piVar4 = (int *)(*DAT_10121f04)(iVar1,0xc0);
    if (piVar4 == (int *)0x0) {
      piVar4 = (int *)0x0;
    }
    else {
      *piVar4 = (int)&PTR_FUN_100e2988;
    }
    piVar4[1] = iVar3;
  }
  *(int *)piVar4[1] = (int)&DAT_10108344 - (int)DAT_10122044[0x26];
  *(undefined4 *)(piVar4[1] + 0x10c) = 3;
  iVar3 = piVar4[1];
  *(float *)(iVar3 + 8) = param_1;
  *(float *)(iVar3 + 0xc) = param_2;
  *(float *)(iVar3 + 0x10) = param_3;
  iVar3 = piVar4[1];
  *(float *)(iVar3 + 0x20) = param_4;
  *(undefined4 *)(iVar3 + 0x24) = param_5;
  *(undefined4 *)(iVar3 + 0x28) = param_6;
  (*DAT_10121e10)(*(undefined4 *)(piVar4[1] + 0x208),
                  *(int *)(*(int *)((int)this + 4) + 0xb8) + (int)DAT_10122044[0x26]);
  param_1 = -*(float *)((int)this + 0x108);
  param_2 = -*(float *)((int)this + 0x10c);
  param_3 = -*(float *)((int)this + 0x110);
  FUN_100afdc0(piVar4[1],&param_1,(int)this + 0x108);
  *(undefined4 *)(piVar4[1] + 0x14c) = *(undefined4 *)(*(int *)((int)this + 4) + 0x14c);
  *(undefined4 *)(piVar4[1] + 0x148) = *(undefined4 *)(*(int *)((int)this + 4) + 0x148);
  iVar3 = *(int *)((int)this + 4);
  iVar1 = piVar4[1];
  *(undefined4 *)(iVar1 + 0x150) = *(undefined4 *)(iVar3 + 0x150);
  *(undefined4 *)(iVar1 + 0x154) = *(undefined4 *)(iVar3 + 0x154);
  *(undefined4 *)(iVar1 + 0x158) = *(undefined4 *)(iVar3 + 0x158);
  *(undefined4 *)(piVar4[1] + 0x15c) = *(undefined4 *)(*(int *)((int)this + 4) + 0x15c);
  *(undefined4 *)(piVar4[1] + 0x1d0) = *(undefined4 *)((int)this + 0xf8);
  *(undefined4 *)(piVar4[1] + 0x1d4) = *(undefined4 *)((int)this + 0xfc);
  *(undefined4 *)(piVar4[1] + 0x110) = *(undefined4 *)(*(int *)((int)this + 4) + 0x110);
  *(undefined4 *)(piVar4[1] + 0x114) = *(undefined4 *)(*(int *)((int)this + 4) + 0x114);
  *(undefined4 *)(piVar4[1] + 0x144) = *(undefined4 *)(*(int *)((int)this + 4) + 0x144);
  *(undefined4 *)(piVar4[1] + 0x130) = *(undefined4 *)(*(int *)((int)this + 4) + 0x130);
  *(undefined4 *)(piVar4[1] + 0x138) = *(undefined4 *)(*(int *)((int)this + 4) + 0x138);
  *(undefined4 *)(piVar4[1] + 0x120) = *(undefined4 *)((int)this + 0x104);
  switch(*(undefined4 *)((int)this + 0x100)) {
  case 2:
    *(undefined4 *)(piVar4[1] + 0x108) = 8;
    *(undefined4 *)(piVar4[1] + 0x10c) = 0;
    break;
  case 3:
    *(undefined4 *)(piVar4[1] + 0x108) = 9;
    break;
  case 4:
    *(undefined4 *)(piVar4[1] + 0x108) = 0xb;
    break;
  case 5:
    *(undefined4 *)(piVar4[1] + 0x108) = 6;
    break;
  case 6:
    *(undefined4 *)(piVar4[1] + 0x108) = 10;
  }
  if (*(float *)(piVar4[1] + 0x138) != _DAT_100dd5f8) {
    param_1 = (float)(*DAT_10121e18)(*(undefined4 *)(piVar4[1] + 0xb4));
    fVar2 = (float)(int)param_1 - _DAT_100dd618;
    piVar4[0x2f] = (int)fVar2;
    if ((float)_DAT_100dd628 < fVar2) {
      if (*(float *)((int)this + 0xdc) == _DAT_100dd5f8) {
        piVar4[0x1d] = (int)CSprite::AnimateThink;
      }
      else {
        *(float *)(piVar4[1] + 0x1e4) = *(float *)((int)this + 0xdc) + *DAT_10122044;
        piVar4[0x1d] = (int)CSprite::AnimateUntilDead;
      }
      (**(code **)(*piVar4 + 8))(0);
      piVar4[0x2e] = (int)*DAT_10122044;
      return piVar4;
    }
  }
  if (*(float *)((int)this + 0xdc) != _DAT_100dd5f8) {
    piVar4[0x1d] = (int)CBaseEntity::SUB_Remove;
    (**(code **)(*piVar4 + 8))(*(undefined4 *)((int)this + 0xdc));
  }
  return piVar4;
}

