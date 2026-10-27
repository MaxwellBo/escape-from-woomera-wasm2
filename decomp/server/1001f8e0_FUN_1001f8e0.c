
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall
FUN_1001f8e0(void *this,int param_1,undefined4 param_2,float param_3,uint param_4)

{
  float fVar1;
  float fVar2;
  int iVar3;
  float *pfVar4;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  undefined1 auStack_18 [8];
  undefined1 auStack_10 [16];
  
  if (param_1 != 0) {
    iVar3 = (*DAT_10121f20)(*(undefined4 *)(param_1 + 0x208));
    if (iVar3 != 0) {
      iVar3 = *(int *)(param_1 + 0x208);
      if (iVar3 == 0) {
        iVar3 = (*DAT_10121f1c)(0);
        if (iVar3 == 0) goto LAB_1001fa81;
      }
      if (*(int **)(iVar3 + 0x7c) != (int *)0x0) {
        iVar3 = (**(code **)(**(int **)(iVar3 + 0x7c) + 0xf8))(auStack_18);
        fStack_24 = *(float *)(iVar3 + 4);
        fStack_2c = *(float *)(iVar3 + 8) - _DAT_100dd63c;
        pfVar4 = (float *)(**(code **)(*(int *)this + 0xf8))(auStack_10);
        fStack_24 = fStack_24 - *pfVar4;
        fStack_2c = fStack_2c - pfVar4[1];
        fVar2 = fStack_28 - pfVar4[2];
        fVar1 = SQRT(fStack_24 * fStack_24 + fStack_2c * fStack_2c + fVar2 * fVar2);
        if (fVar1 == _DAT_100dd5f8) {
          fStack_2c = 0.0;
          fStack_28 = 1.0;
          fStack_24 = _DAT_100dd5f8;
        }
        else {
          fVar1 = _DAT_100dd618 / fVar1;
          fStack_24 = fStack_24 * fVar1;
          fStack_2c = fStack_2c * fVar1;
          fStack_28 = fVar2 * fVar1;
        }
        fStack_1c = SQRT(fStack_24 * fStack_24 + fStack_2c * fStack_2c + fStack_28 * fStack_28);
        if (fStack_1c == _DAT_100dd5f8) {
          fStack_24 = 0.0;
          fStack_20 = 0.0;
          fStack_1c = 1.0;
        }
        else {
          fStack_1c = _DAT_100dd618 / fStack_1c;
          fStack_24 = fStack_1c * fStack_24;
          fStack_20 = fStack_2c * fStack_1c;
          fStack_1c = fStack_28 * fStack_1c;
        }
        _DAT_10121df8 = fStack_24;
        _DAT_10121dfc = fStack_20;
        _DAT_10121e00 = fStack_1c;
      }
    }
  }
LAB_1001fa81:
  if ((param_4 & 0x2e1) != 0) {
    iVar3 = *(int *)((int)this + 4);
    if (*(float *)(iVar3 + 0x160) <= param_3) {
      *(undefined4 *)(iVar3 + 0x160) = 0xc2480000;
      (**(code **)(*(int *)this + 0x68))(param_2,2);
      return 0;
    }
    *(float *)(iVar3 + 0x160) = *(float *)(iVar3 + 0x160) - param_3 * (float)_DAT_100dfb80;
  }
  return 1;
}

