
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FUN_100211f0(int *param_1,float param_2,float param_3,float param_4,float param_5,int param_6,
            uint param_7)

{
  float fVar1;
  int iVar2;
  float10 fVar3;
  float10 fVar4;
  float10 fVar5;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  undefined1 auStack_38 [16];
  float fStack_28;
  
  iVar2 = (**(code **)(*param_1 + 0x6c))();
  if (((iVar2 != -1) && (param_2 != _DAT_100dd5f8)) && ((param_7 & 0x8000c7) != 0)) {
    if (_DAT_100dd63c <= param_2) {
      if (_DAT_100e0eec <= param_2) {
        param_2 = 0.3;
        param_7 = 4;
      }
      else {
        param_2 = 0.2;
        param_7 = 2;
      }
    }
    else {
      param_2 = 0.1;
      param_7 = 1;
    }
    if (param_7 != 0) {
      param_3 = param_3 * _DAT_100df2b0;
      param_4 = param_4 * _DAT_100df2b0;
      param_5 = param_5 * _DAT_100df2b0;
      fVar1 = -param_2;
      do {
        fVar3 = (float10)(*DAT_10121f74)(fVar1,param_2);
        fVar4 = (float10)(*DAT_10121f74)(fVar1,param_2);
        fVar5 = (float10)(*DAT_10121f74)(fVar1,param_2);
        fStack_44 = (float)(fVar3 + (float10)param_3) * _DAT_100e0ee8 + *(float *)(param_6 + 0x14);
        fStack_40 = (float)(fVar4 + (float10)param_4) * _DAT_100e0ee8 + *(float *)(param_6 + 0x18);
        fStack_3c = (float)((fVar5 + (float10)param_5) * (float10)_DAT_100e0ee8 +
                           (float10)*(float *)(param_6 + 0x1c));
        FUN_100afc60((float *)(param_6 + 0x14),&fStack_44,1,*(undefined4 *)(param_1[1] + 0x208),
                     auStack_38);
        if (fStack_28 != (float)_DAT_100dd628) {
          iVar2 = (**(code **)(*param_1 + 0x6c))();
          FUN_100b0400((int)auStack_38,iVar2);
        }
        param_7 = param_7 + -1;
      } while (param_7 != 0);
    }
  }
  return;
}

