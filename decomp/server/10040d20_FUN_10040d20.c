
void __cdecl
FUN_10040d20(float param_1,float param_2,undefined4 param_3,float param_4,undefined4 param_5,
            undefined4 param_6)

{
  float fVar1;
  float fVar2;
  int *piVar3;
  float10 fVar4;
  undefined1 auStack_90 [4];
  char *pcStack_8c;
  undefined1 *puStack_88;
  undefined1 auStack_80 [128];
  
  fVar2 = param_4;
  fVar1 = -param_4;
  fVar4 = (float10)(*DAT_10121f74)(fVar1,param_4);
  param_1 = (float)(fVar4 + (float10)param_1);
  fVar4 = (float10)(*DAT_10121f74)(fVar1,fVar2);
  param_2 = (float)(fVar4 + (float10)param_2);
  piVar3 = (int *)FUN_1001a1f0(0x10108754,&param_1,&DAT_10121dd8,0);
  FUN_100c8506(auStack_80,&DAT_10108750);
  puStack_88 = auStack_80;
  pcStack_8c = s_iMagnitude_10108734;
  (**(code **)(*piVar3 + 0x30))(auStack_90);
  *(uint *)(piVar3[1] + 0x1a0) = *(uint *)(piVar3[1] + 0x1a0) | 1;
  (**(code **)(*piVar3 + 0x28))();
  piVar3[0x1d] = (int)CBaseEntity::SUB_CallUseToggle;
  (**(code **)(*piVar3 + 8))(param_4);
  return;
}

