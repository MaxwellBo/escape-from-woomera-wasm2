
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_1001d9e0(undefined4 *param_1,float *param_2,float param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  float *pfVar5;
  float local_14;
  float local_10 [4];
  
  local_14 = param_3;
  if (_DAT_10059a18 <= param_3) {
    if (param_3 <= _DAT_10059ea0) {
      if (param_3 < _DAT_10059eb0) goto LAB_1001da7d;
    }
    else {
      local_14 = 2.0;
    }
    local_14 = local_14 - _DAT_10059eb0;
    pfVar5 = param_2 + 8;
    param_2 = param_2 + 4;
  }
  else {
    local_14 = 0.0;
LAB_1001da7d:
    pfVar5 = param_2 + 4;
  }
  puVar4 = (undefined4 *)FUN_1001d960(local_10,local_14,param_2,pfVar5);
  uVar1 = puVar4[1];
  uVar2 = puVar4[2];
  uVar3 = puVar4[3];
  *param_1 = *puVar4;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  return;
}

