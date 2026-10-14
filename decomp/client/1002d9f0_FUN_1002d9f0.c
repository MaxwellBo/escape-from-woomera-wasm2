
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FUN_1002d9f0(void *this,int param_1,int param_2,float *param_3,float *param_4,float param_5)

{
  float fVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  undefined4 *puVar5;
  int local_18;
  float local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  pfVar2 = param_4;
  if (_DAT_10059a18 <= param_5) {
    if ((float)_DAT_10059a10 < param_5) {
      param_5 = 1.0;
    }
  }
  else {
    param_5 = 0.0;
  }
  local_18 = 0;
  fVar1 = (float)_DAT_10059a10 - param_5;
  if (0 < *(int *)(*(int *)((int)this + 0x44) + 0x8c)) {
    param_4 = param_3;
    puVar5 = (undefined4 *)(param_1 + 8);
    pfVar3 = pfVar2;
    pfVar4 = (float *)(param_2 + 4);
    do {
      FUN_1002d100((float *)(puVar5 + -2),param_4,param_5,&local_10);
      puVar5[-2] = local_10;
      puVar5[-1] = local_c;
      *puVar5 = local_8;
      puVar5[1] = local_4;
      local_18 = local_18 + 1;
      param_4 = param_4 + 4;
      puVar5 = puVar5 + 4;
      pfVar4[-1] = param_5 * *pfVar3 + fVar1 * pfVar4[-1];
      *pfVar4 = fVar1 * *pfVar4 + param_5 * *(float *)(((int)pfVar2 - param_2) + (int)pfVar4);
      pfVar4[1] = fVar1 * pfVar4[1] + param_5 * pfVar3[2];
      pfVar3 = pfVar3 + 3;
      pfVar4 = pfVar4 + 3;
    } while (local_18 < *(int *)(*(int *)((int)this + 0x44) + 0x8c));
  }
  return;
}

