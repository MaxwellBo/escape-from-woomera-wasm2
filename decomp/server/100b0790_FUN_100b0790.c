
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __cdecl FUN_100b0790(int param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float local_24;
  float local_20;
  float local_1c;
  undefined4 local_18;
  float local_14;
  undefined4 local_10;
  float local_c;
  float fStack_8;
  float fStack_4;
  
  fVar1 = *param_2 - *(float *)(param_1 + 8);
  local_14 = param_2[1] - *(float *)(param_1 + 0xc);
  fVar2 = SQRT(fVar1 * fVar1 + local_14 * local_14);
  if (fVar2 == _DAT_100dd5f8) {
    local_24 = 0.0;
    local_20 = 0.0;
    local_1c = 1.0;
  }
  else {
    fVar2 = _DAT_100dd618 / fVar2;
    FUN_10001d60(&local_24,fVar1 * fVar2,local_14 * fVar2,0);
  }
  local_14 = *(float *)(param_1 + 0x78);
  local_10 = *(undefined4 *)(param_1 + 0x7c);
  local_18 = 0;
  (*DAT_10121e58)(&local_18,&local_c,0,0);
  if ((float)_DAT_100f60e0 < local_24 * local_c + fStack_8 * local_20 + fStack_4 * local_1c) {
    return 1;
  }
  return 0;
}

