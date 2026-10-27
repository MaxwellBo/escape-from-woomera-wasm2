
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FUN_10028bb0(void *param_1,undefined4 param_2,undefined4 param_3,int param_4,float param_5)

{
  void *this;
  float fVar1;
  float fVar2;
  bool bVar3;
  undefined3 extraout_var;
  int in_stack_ffffffc4;
  int in_stack_ffffffc8;
  int in_stack_ffffffcc;
  float fVar4;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  float fStack_14;
  float fStack_10;
  float fStack_8;
  float fStack_4;
  
  if (param_4 == 2) {
    if ((float)_DAT_100dd628 < param_5) {
      param_5 = 1.0;
    }
    bVar3 = FUN_100995b0((int)param_1);
    if (CONCAT31(extraout_var,bVar3) == 0) {
      fStack_14 = *(float *)((int)param_1 + 0x108) - *(float *)((int)param_1 + 0xfc);
      this = *(void **)((int)param_1 + 4);
      fStack_10 = *(float *)((int)param_1 + 0x10c) - *(float *)((int)param_1 + 0x100);
      fStack_8 = fStack_14 * param_5;
      fStack_4 = fStack_10 * param_5;
      fStack_24 = (*(float *)((int)param_1 + 0x104) - *(float *)((int)param_1 + 0xf8)) * param_5 +
                  *(float *)((int)param_1 + 0xf8);
      fStack_20 = fStack_8 + *(float *)((int)param_1 + 0xfc);
      fStack_1c = fStack_4 + *(float *)((int)param_1 + 0x100);
      if (*(float *)((int)this + 0x1f8) == _DAT_100dd5f8) {
        fVar2 = fStack_24 - *(float *)((int)this + 8);
        fVar1 = fStack_20 - *(float *)((int)this + 0xc);
        fVar4 = fStack_1c - *(float *)((int)this + 0x10);
        fVar4 = SQRT(fVar2 * fVar2 + fVar1 * fVar1 + fVar4 * fVar4) * _DAT_100dd63c;
      }
      else {
        fVar4 = *(float *)((int)this + 0x1f8);
      }
      if (fVar4 != _DAT_100dd5f8) {
        if (*(int *)((int)param_1 + 0x160) == 0) {
          *(undefined4 *)((int)param_1 + 0x160) = 2;
          in_stack_ffffffcc = 0;
          in_stack_ffffffc8 = 0x3f4ccccd;
          in_stack_ffffffc4 = 0x3f800000;
          FUN_10094b20(this,*(undefined4 *)((int)this + 0x208),6,
                       (char *)(*(int *)((int)this + 0x1ec) + *(int *)(DAT_10122044 + 0x98)),
                       0x3f800000,0x3f4ccccd,0,100);
        }
        *(float *)((int)param_1 + 0x164) = param_5;
        FUN_10003850(&stack0xffffffc4,&fStack_24);
        FUN_10099340(param_1,in_stack_ffffffc4,in_stack_ffffffc8,in_stack_ffffffcc,(int)fVar4);
        *(code **)((int)param_1 + 0x130) = CMomentaryDoor::MomentaryMoveDone;
      }
    }
  }
  return;
}

