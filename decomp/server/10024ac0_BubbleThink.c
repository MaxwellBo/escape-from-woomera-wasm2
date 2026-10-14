
/* private: void __thiscall CCrossbowBolt::BubbleThink(void) */

void __thiscall CCrossbowBolt::BubbleThink(CCrossbowBolt *this)

{
  int iVar1;
  float *pfVar2;
  float fVar3;
  float *pfVar4;
  float fVar5;
  undefined4 in_stack_ffffffdc;
  undefined4 in_stack_ffffffe0;
  float in_stack_ffffffe4;
  int iVar6;
  
                    /* 0x24ac0  27  ?BubbleThink@CCrossbowBolt@@AAEXXZ */
  (**(code **)(*(int *)this + 8))();
  iVar1 = *(int *)(this + 4);
  if ((*(int *)(iVar1 + 0x1c0) != 0) && (-0x11 < *(int *)(iVar1 + 0x1c4))) {
    iVar6 = 1;
    FUN_10003850(&stack0xffffffdc,(undefined4 *)(iVar1 + 8));
    pfVar4 = (float *)&stack0xfffffff0;
    fVar5 = 0.1;
    fVar3 = 2.569579e-29;
    pfVar2 = (float *)FUN_10002280((void *)(*(int *)(this + 4) + 0x20),pfVar4,0.1);
    FUN_10002250((void *)(*(int *)(this + 4) + 8),(float *)&stack0xffffffd0,pfVar2);
    FUN_100b0dd0(fVar3,pfVar4,fVar5,in_stack_ffffffdc,in_stack_ffffffe0,in_stack_ffffffe4,iVar6);
  }
  return;
}

