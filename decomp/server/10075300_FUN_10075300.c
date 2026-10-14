
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_10075300(void *this,float *param_1,float param_2)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  iVar1 = *(int *)((int)this + 4);
  fVar2 = *param_1 - *(float *)(iVar1 + 0x50);
  fVar3 = param_1[1] - *(float *)(iVar1 + 0x54);
  fVar4 = param_1[2] - *(float *)(iVar1 + 0x58);
  if ((float)_DAT_100dfb80 <= param_2) {
    FUN_10063ac0((int)this,fVar2 / param_2,fVar3 / param_2,fVar4 / param_2);
    return;
  }
  FUN_10063ac0((int)this,fVar2,fVar3,fVar4);
  (**(code **)(*(int *)this + 8))(0x3f800000);
  return;
}

