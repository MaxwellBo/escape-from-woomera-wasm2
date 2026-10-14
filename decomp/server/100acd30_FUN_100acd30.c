
void __thiscall FUN_100acd30(void *param_1,undefined4 *param_2,undefined4 *param_3)

{
  void *this;
  float in_stack_ffffffc4;
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float in_stack_ffffffdc;
  float in_stack_ffffffe0;
  undefined4 in_stack_ffffffe4;
  float fVar5;
  float fVar6;
  int iVar7;
  int iVar8;
  float fVar9;
  
  fVar9 = 0.0;
  iVar8 = 0;
  iVar7 = 1;
  fVar6 = 1.12104e-44;
  fVar5 = 1200.0;
  fVar4 = 0.0;
  fVar3 = 0.0;
  fVar2 = 0.0;
  FUN_10001d60(&stack0xffffffdc,0,0,0);
  fVar1 = 2.7373913e-29;
  FUN_10003850(&stack0xffffffd0,param_3);
  FUN_10003850(&stack0xffffffc4,param_2);
  FUN_100204d0(param_1,1,in_stack_ffffffc4,fVar1,(float)param_3,fVar2,fVar3,fVar4,in_stack_ffffffdc,
               in_stack_ffffffe0,in_stack_ffffffe4,fVar5,fVar6,iVar7,iVar8,fVar9);
  this = *(void **)(*(int *)((int)param_1 + 4) + 0x208);
  FUN_10094b20(this,this,1,s_turret_tu_fire1_wav_10102c20,0x3f800000,0x3f19999a,0,100);
  *(uint *)(*(int *)((int)param_1 + 4) + 0x118) = *(uint *)(*(int *)((int)param_1 + 4) + 0x118) | 2;
  return;
}

