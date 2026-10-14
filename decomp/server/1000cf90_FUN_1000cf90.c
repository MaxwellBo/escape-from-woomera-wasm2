
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_1000cf90(void *param_1)

{
  void *this;
  float in_stack_ffffff94;
  float fVar1;
  undefined4 *puVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float in_stack_ffffffac;
  float in_stack_ffffffb0;
  void *pvVar6;
  undefined4 in_stack_ffffffb4;
  float fVar7;
  char *pcVar8;
  float fVar9;
  int iVar10;
  int iVar11;
  float fVar12;
  float local_24;
  undefined4 local_20;
  float local_1c;
  undefined4 local_18 [3];
  float local_c [3];
  
  FUN_100af200(*(int *)((int)param_1 + 4) + 0x50);
  iVar10 = *(int *)((int)param_1 + 4);
  local_24 = *(float *)(iVar10 + 8);
  local_20 = *(undefined4 *)(iVar10 + 0xc);
  local_1c = *(float *)(iVar10 + 0x10) + _DAT_100debf4;
  FUN_10061590(param_1,local_18,&local_24);
  FUN_100ae830(local_c,local_18);
  FUN_100083f0(param_1,0,local_c[0]);
  fVar12 = 0.0;
  *(undefined4 *)(*(int *)((int)param_1 + 4) + 0x118) = 2;
  iVar11 = 0;
  iVar10 = 4;
  if (*(float *)(*(int *)((int)param_1 + 4) + 0x164) == _DAT_100dd5f8) {
    fVar9 = 8.40779e-45;
    fVar7 = 1024.0;
    fVar5 = 0.01745;
    fVar4 = 0.01745;
    fVar3 = 0.01745;
    FUN_10001d60(&stack0xffffffac,0x3c8ef34d,0x3c8ef34d,0x3c8ef34d);
    puVar2 = local_18;
    fVar1 = 2.5404515e-29;
    FUN_10003850(&stack0xffffffa0,puVar2);
    FUN_10003850(&stack0xffffff94,&local_24);
    FUN_100204d0(param_1,1,in_stack_ffffff94,fVar1,(float)puVar2,fVar3,fVar4,fVar5,in_stack_ffffffac
                 ,in_stack_ffffffb0,in_stack_ffffffb4,fVar7,fVar9,iVar10,iVar11,fVar12);
    iVar10 = (*DAT_10121f70)();
    if (iVar10 < 0xb) {
      iVar10 = iVar10 + -5;
    }
    else {
      iVar10 = 0;
    }
    iVar10 = iVar10 + 100;
    pcVar8 = s_barney_ba_attack2_wav_101030b0;
  }
  else {
    fVar9 = 4.2039e-45;
    fVar7 = 1024.0;
    fVar5 = 0.01745;
    fVar4 = 0.01745;
    fVar3 = 0.01745;
    FUN_10001d60(&stack0xffffffac,0x3c8ef34d,0x3c8ef34d,0x3c8ef34d);
    puVar2 = local_18;
    fVar1 = 2.540411e-29;
    FUN_10003850(&stack0xffffffa0,puVar2);
    FUN_10003850(&stack0xffffff94,&local_24);
    FUN_100204d0(param_1,1,in_stack_ffffff94,fVar1,(float)puVar2,fVar3,fVar4,fVar5,in_stack_ffffffac
                 ,in_stack_ffffffb0,in_stack_ffffffb4,fVar7,fVar9,iVar10,iVar11,fVar12);
    iVar11 = (*DAT_10121f70)();
    iVar10 = 100;
    if (iVar11 == 0) {
      pcVar8 = s_weapons_357_shot2_wav_101030c8;
      this = *(void **)(*(int *)((int)param_1 + 4) + 0x208);
      pvVar6 = this;
      goto LAB_1000d144;
    }
    pcVar8 = s_weapons_357_shot1_wav_101030e0;
  }
  this = *(void **)((int)param_1 + 4);
  pvVar6 = *(void **)((int)this + 0x208);
LAB_1000d144:
  FUN_10094b20(this,pvVar6,1,pcVar8,0x3f800000,0x3f4ccccd,0,iVar10);
  FUN_10095d30(1,(undefined4 *)(*(int *)((int)param_1 + 4) + 8),0x180,0.3);
  *(int *)((int)param_1 + 0x2b4) = *(int *)((int)param_1 + 0x2b4) + -1;
  return;
}

