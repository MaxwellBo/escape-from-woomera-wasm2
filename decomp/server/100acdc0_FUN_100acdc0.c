
void __thiscall FUN_100acdc0(void *param_1,undefined4 *param_2,undefined4 *param_3)

{
  void *extraout_ECX;
  void *this;
  float in_stack_ffffffc4;
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float in_stack_ffffffdc;
  float in_stack_ffffffe0;
  void *pvVar5;
  undefined4 in_stack_ffffffe4;
  float fVar6;
  char *pcVar7;
  float fVar8;
  int iVar9;
  int iVar10;
  float fVar11;
  
  fVar11 = 0.0;
  iVar10 = 0;
  iVar9 = 1;
  fVar8 = 8.40779e-45;
  fVar6 = 1200.0;
  fVar4 = 0.0;
  fVar3 = 0.0;
  fVar2 = 0.0;
  FUN_10001d60(&stack0xffffffdc,0,0,0);
  fVar1 = 2.7374347e-29;
  FUN_10003850(&stack0xffffffd0,param_3);
  FUN_10003850(&stack0xffffffc4,param_2);
  FUN_100204d0(param_1,1,in_stack_ffffffc4,fVar1,(float)param_3,fVar2,fVar3,fVar4,in_stack_ffffffdc,
               in_stack_ffffffe0,in_stack_ffffffe4,fVar6,fVar8,iVar9,iVar10,fVar11);
  iVar9 = (*DAT_10121f70)();
  if (iVar9 == 0) {
    this = *(void **)((int)param_1 + 4);
    pvVar5 = *(void **)((int)this + 0x208);
    pcVar7 = s_weapons_hks1_wav_10111a78;
  }
  else if (iVar9 == 1) {
    pvVar5 = *(void **)(*(int *)((int)param_1 + 4) + 0x208);
    pcVar7 = s_weapons_hks2_wav_10111a64;
    this = extraout_ECX;
  }
  else {
    if (iVar9 != 2) goto LAB_100ace88;
    this = *(void **)(*(int *)((int)param_1 + 4) + 0x208);
    pcVar7 = s_weapons_hks3_wav_10111a50;
    pvVar5 = this;
  }
  FUN_10094b20(this,pvVar5,1,pcVar7,0x3f800000,0x3f4ccccd,0,100);
LAB_100ace88:
  *(uint *)(*(int *)((int)param_1 + 4) + 0x118) = *(uint *)(*(int *)((int)param_1 + 4) + 0x118) | 2;
  return;
}

