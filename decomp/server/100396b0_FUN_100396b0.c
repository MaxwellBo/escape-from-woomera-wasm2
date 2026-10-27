
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __fastcall FUN_100396b0(void *param_1)

{
  byte bVar1;
  int iVar2;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  undefined3 extraout_var_01;
  int iVar3;
  int iVar4;
  int *piVar5;
  longlong lVar6;
  int local_1b4;
  int local_1b0;
  float local_1ac;
  float local_1a8;
  float local_1a4;
  int local_1a0;
  float local_19c;
  float local_198;
  float local_194;
  int local_190 [100];
  
  lVar6 = __ftol();
  iVar3 = *(int *)((int)param_1 + 4);
  local_1ac = (float)(int)lVar6;
  local_194 = local_1ac + *(float *)(iVar3 + 0x10);
  local_198 = local_1ac + *(float *)(iVar3 + 0xc);
  local_19c = local_1ac + *(float *)(iVar3 + 8);
  iVar4 = 0x2000;
  local_1b0 = 0;
  local_1a0 = 1;
  local_1a4 = *(float *)(iVar3 + 0x10) - local_1ac;
  local_1a8 = *(float *)(iVar3 + 0xc) - local_1ac;
  local_1ac = *(float *)(iVar3 + 8) - local_1ac;
  local_1b4 = FUN_100ae980(local_190,100,&local_1ac,&local_19c,0x28);
  if (local_1b4 < 1) {
    return 0;
  }
  piVar5 = local_190;
  iVar3 = 1;
  do {
    iVar2 = (**(code **)(*(int *)*piVar5 + 0xb8))();
    if (iVar2 != 0) {
      bVar1 = FUN_10039870(param_1,(int *)*piVar5);
      if (iVar3 < CONCAT31(extraout_var,bVar1)) {
        bVar1 = FUN_10039870(param_1,(int *)*piVar5);
        local_1a0 = CONCAT31(extraout_var_00,bVar1);
        iVar3 = *piVar5;
        lVar6 = __ftol();
        iVar2 = (int)lVar6;
LAB_1003982e:
        iVar4 = iVar2;
        local_1b0 = iVar3;
      }
      else {
        bVar1 = FUN_10039870(param_1,(int *)*piVar5);
        if (CONCAT31(extraout_var_01,bVar1) == iVar3) {
          iVar3 = *piVar5;
          lVar6 = __ftol();
          iVar2 = (int)lVar6;
          if (iVar2 <= iVar4) goto LAB_1003982e;
        }
      }
    }
    piVar5 = piVar5 + 1;
    local_1b4 = local_1b4 + -1;
    iVar3 = local_1a0;
    if (local_1b4 == 0) {
      return local_1b0;
    }
  } while( true );
}

