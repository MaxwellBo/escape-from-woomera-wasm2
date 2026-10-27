
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_1004d390(void *this,float param_1,int param_2)

{
  int iVar1;
  float10 fVar2;
  float10 fVar3;
  float unaff_retaddr;
  float in_stack_ffffff90;
  float fVar4;
  undefined4 *puVar5;
  float fVar6;
  float fVar7;
  float in_stack_ffffffa8;
  float in_stack_ffffffac;
  undefined4 in_stack_ffffffb0;
  float fVar8;
  float fVar9;
  undefined4 uVar10;
  int iVar11;
  float fVar12;
  undefined4 auStack_1c [3];
  float afStack_10 [2];
  undefined4 uStack_8;
  
  if (*(int *)((int)this + 0x10c) < 1) {
    if (*(int *)((int)this + 0xec) != 0) {
      (**(code **)(*(int *)this + 0x174))();
      fVar2 = FUN_100ae400();
      *(float *)((int)this + 0xf8) = (float)(fVar2 + (float10)_DAT_100dd608);
      return;
    }
  }
  else {
    *(int *)((int)this + 0x10c) = *(int *)((int)this + 0x10c) + -1;
    iVar1 = *(int *)(*(int *)((int)this + 0xdc) + 4);
    *(uint *)(iVar1 + 0x118) = *(uint *)(iVar1 + 0x118) | 2;
    FUN_1007c580(*(void **)((int)this + 0xdc),5);
    if (*(int *)(*(int *)((int)this + 4) + 0x114) == 1) {
      *(undefined4 *)(*(int *)((int)this + 0xdc) + 0x314) = 200;
      *(undefined4 *)(*(int *)((int)this + 0xdc) + 0x31c) = 0x80;
    }
    else {
      *(undefined4 *)(*(int *)((int)this + 0xdc) + 0x314) = 600;
      *(undefined4 *)(*(int *)((int)this + 0xdc) + 0x31c) = 0x100;
    }
    (**(code **)(**(int **)((int)this + 0xdc) + 0x214))();
    if (param_2 != 0) {
      FUN_10081540(*(void **)((int)this + 0xdc),afStack_10);
    }
    iVar1 = *(int *)(*(int *)((int)this + 0xdc) + 0x308);
    fVar12 = *(float *)(*(int *)((int)this + 0xdc) + 4);
    iVar11 = 0;
    uVar10 = 0;
    fVar9 = 1.4013e-45;
    fVar8 = 8192.0;
    fVar6 = unaff_retaddr;
    fVar7 = unaff_retaddr;
    FUN_10001d60(&stack0xffffffa8,unaff_retaddr,unaff_retaddr,unaff_retaddr);
    puVar5 = (undefined4 *)&stack0xffffffd8;
    fVar4 = 2.6196433e-29;
    FUN_10003850(&stack0xffffff9c,puVar5);
    FUN_10003850(&stack0xffffff90,auStack_1c);
    iVar1 = FUN_10020cd0(*(void **)((int)this + 0xdc),afStack_10,1,in_stack_ffffff90,fVar4,
                         (float)puVar5,unaff_retaddr,fVar6,fVar7,in_stack_ffffffa8,in_stack_ffffffac
                         ,in_stack_ffffffb0,fVar8,fVar9,uVar10,iVar11,fVar12,iVar1);
    uStack_8 = *(undefined4 *)(iVar1 + 8);
    (*DAT_10121ff4)();
    fVar2 = FUN_100ae400();
    *(float *)((int)this + 0xfc) = (float)(fVar2 + (float10)param_1);
    *(float *)((int)this + 0xf8) = (float)(fVar2 + (float10)param_1);
    if ((*(int *)((int)this + 0x10c) == 0) &&
       (*(int *)((int)*(void **)((int)this + 0xdc) + *(int *)((int)this + 0x104) * 4 + 0x534) < 1))
    {
      FUN_1007e210(*(void **)((int)this + 0xdc),(byte *)s__HEV_AMO0_1010665c,0,0);
    }
    fVar2 = FUN_100ae4b0(*(int *)(*(int *)((int)this + 0xdc) + 0x308),10.0,0x41700000);
    fVar3 = FUN_100ae400();
    *(float *)((int)this + 0x100) = (float)(fVar3 + (float10)(float)fVar2);
  }
  return;
}

