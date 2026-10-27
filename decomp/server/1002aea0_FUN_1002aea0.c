
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_1002aea0(void *this,float *param_1)

{
  float fVar1;
  float fVar2;
  int iVar3;
  float10 fVar4;
  float10 fVar5;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  undefined1 auStack_38 [16];
  float fStack_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  
  iVar3 = 0;
  while( true ) {
    fVar4 = (float10)(*DAT_10121f74)(0xbf800000,0x3f800000);
    fVar1 = (float)fVar4;
    fVar4 = (float10)(*DAT_10121f74)(0xbf800000,0x3f800000);
    fVar2 = (float)fVar4;
    fVar4 = (float10)(*DAT_10121f74)(0xbf800000,0x3f800000);
    fVar5 = SQRT((float10)fVar1 * (float10)fVar1 + (float10)fVar2 * (float10)fVar2 + fVar4 * fVar4);
    if (fVar5 == (float10)_DAT_100dd5f8) {
      fStack_5c = 0.0;
      fStack_58 = 0.0;
      fStack_54 = 1.0;
    }
    else {
      fVar5 = (float10)_DAT_100dd618 / fVar5;
      FUN_10001d60(&fStack_5c,(float)(fVar5 * fVar4),(float)(fVar5 * (float10)fVar2),
                   (float)(fVar5 * (float10)fVar1));
    }
    fVar1 = *(float *)((int)this + 0xe8);
    fStack_50 = fStack_5c * fVar1;
    fStack_4c = fVar1 * fStack_58;
    fStack_44 = fStack_50 + *param_1;
    fStack_40 = fStack_4c + param_1[1];
    fStack_3c = fVar1 * fStack_54 + param_1[2];
    FUN_100afc60(param_1,&fStack_44,1,*(undefined4 *)(*(int *)((int)this + 4) + 0x208),auStack_38);
    if ((*(float *)((int)this + 0xe8) * (float)_DAT_100dfb80 <=
         SQRT((fStack_24 - *param_1) * (fStack_24 - *param_1) +
              (fStack_20 - param_1[1]) * (fStack_20 - param_1[1]) +
              (fStack_1c - param_1[2]) * (fStack_1c - param_1[2]))) &&
       (fStack_28 != (float)_DAT_100dd628)) break;
    iVar3 = iVar3 + 1;
    if (9 < iVar3) {
      return;
    }
  }
  FUN_1002ad50(this,param_1,&fStack_24);
  return;
}

