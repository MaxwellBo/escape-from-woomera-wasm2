
void __fastcall FUN_10022aa0(CBaseEntity *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float in_stack_ffffffe0;
  float in_stack_ffffffe4;
  float in_stack_ffffffe8;
  float fVar7;
  float afStack_c [3];
  
  if (*(int *)(param_1 + 0x1d8) == 2) {
    fVar7 = 20.0;
    fVar6 = -3.0;
    fVar5 = 10.0;
    fVar4 = 2.0;
    FUN_10001d60(&stack0xffffffe0,0x40000000,0x41200000,0xc0400000);
    fVar3 = 7.0;
    fVar2 = 4.0;
    fVar1 = 100.0;
    FUN_10001d60(&stack0xffffffd4,0x42c80000,0x40800000,0x40e00000);
    FUN_10001d60(&stack0xffffffc8,0,0,0);
    FUN_10022040(afStack_c,fVar1,fVar2,fVar3,fVar4,fVar5,fVar6,in_stack_ffffffe0,in_stack_ffffffe4,
                 in_stack_ffffffe8,fVar7);
  }
  FUN_10006c50(param_1);
  return;
}

