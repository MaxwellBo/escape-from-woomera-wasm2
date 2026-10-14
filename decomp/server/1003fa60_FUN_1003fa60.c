
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_1003fa60(int param_1)

{
  int *piVar1;
  int iVar2;
  float in_stack_ffffffb8;
  float fVar3;
  float *pfVar4;
  float fVar5;
  float fVar6;
  int iVar7;
  int local_28;
  undefined4 local_24;
  undefined4 local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_c;
  float local_8;
  float local_4;
  
  FUN_100af200(*(int *)(param_1 + 4) + 0x50);
  local_18 = *(float *)(DAT_10122044 + 0x28) * _DAT_100dd61c;
  pfVar4 = &local_c;
  local_14 = *(float *)(DAT_10122044 + 0x2c) * _DAT_100dd61c;
  iVar7 = *(int *)(param_1 + 4);
  local_4 = *(float *)(DAT_10122044 + 0x30) * _DAT_100dd61c + *(float *)(iVar7 + 0x10);
  local_8 = local_14 + *(float *)(iVar7 + 0xc);
  local_c = local_18 + *(float *)(iVar7 + 8);
  fVar3 = 2.6028486e-29;
  FUN_10040a40(pfVar4,(*(float *)(iVar7 + 0xd8) - *(float *)(iVar7 + 0xcc)) * (float)_DAT_100ddad8,
               0x42fa0000,1.5);
  iVar7 = *(int *)(param_1 + 4);
  local_28 = 0;
  iVar2 = 0x3c;
  local_24 = *(undefined4 *)(iVar7 + 8);
  local_20 = *(undefined4 *)(iVar7 + 0xc);
  local_1c = *(float *)(iVar7 + 0x10) + _DAT_100ddac8;
  do {
    fVar6 = (float)local_28 * (float)_DAT_100e0eb8;
    fVar5 = 70.0;
    iVar7 = iVar2;
    FUN_10003850(&stack0xffffffb8,&local_24);
    FUN_10040d20(in_stack_ffffffb8,fVar3,pfVar4,fVar5,fVar6,iVar7);
    local_1c = local_1c + _DAT_100dd5d4;
    iVar2 = iVar2 + 0x28;
    local_28 = local_28 + 2;
  } while (iVar2 < 200);
  piVar1 = (int *)FUN_1001a1f0(0x1010d0dc,(undefined4 *)(*(int *)(param_1 + 4) + 8),&DAT_10121dd8,0)
  ;
  *(undefined4 *)(piVar1[1] + 0x160) = 0x3f800000;
  *(undefined4 *)(piVar1[1] + 0x144) = 0x42380000;
  *(undefined4 *)(piVar1[1] + 0x1e0) = 0;
  (**(code **)(*piVar1 + 8))();
  return;
}

