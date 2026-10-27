
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_10023ea0(int param_1)

{
  float fVar1;
  float fVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined4 uVar7;
  float10 fVar8;
  float10 fVar9;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  float fStack_14;
  float fStack_10;
  float fStack_8;
  float fStack_4;
  
  fVar8 = (float10)(*DAT_10121f74)(0xbf800000,0x3f800000);
  fVar1 = (float)fVar8;
  fVar8 = (float10)(*DAT_10121f74)(0xbf800000,0x3f800000);
  fVar2 = (float)fVar8;
  fVar8 = (float10)(*DAT_10121f74)(0xbf800000,0x3f800000);
  fVar9 = SQRT((float10)fVar1 * (float10)fVar1 + (float10)fVar2 * (float10)fVar2 + fVar8 * fVar8);
  if (fVar9 == (float10)_DAT_100dd5f8) {
    fStack_24 = 0.0;
    fStack_20 = 0.0;
    fStack_1c = 1.0;
  }
  else {
    fVar9 = (float10)_DAT_100dd618 / fVar9;
    FUN_10001d60(&fStack_24,(float)(fVar9 * (float10)fVar1),(float)((float10)fVar2 * fVar9),
                 (float)(fVar8 * fVar9));
  }
  fVar5 = fStack_24 * _DAT_100ddb10;
  fStack_8 = fStack_20 * _DAT_100ddb10;
  iVar3 = *(int *)(param_1 + 4);
  fStack_4 = fStack_1c * _DAT_100ddb10;
  fVar6 = *(float *)(iVar3 + 0x20) * _DAT_100e1374;
  fVar1 = *(float *)(iVar3 + 8);
  fStack_14 = *(float *)(iVar3 + 0x24) * _DAT_100e1374 + *(float *)(iVar3 + 0xc);
  fStack_10 = *(float *)(iVar3 + 0x28) * _DAT_100e1374 + *(float *)(iVar3 + 0x10);
  fVar2 = fStack_14 + fStack_8;
  fVar4 = fStack_10 + fStack_4;
  (*DAT_10121ec0)(0,0x17,0,0);
  (*DAT_10121ec8)(1);
  uVar7 = (*DAT_10121f24)(*(undefined4 *)(*(int *)(param_1 + 4) + 0x208));
  (*DAT_10121ed0)(uVar7);
  (*DAT_10121edc)(fVar6 + fVar1 + fVar5);
  (*DAT_10121edc)(fVar2);
  (*DAT_10121edc)(fVar4);
  (*DAT_10121ed0)((int)DAT_10131d06);
  (*DAT_10121ec8)(0);
  (*DAT_10121ec8)(10);
  (*DAT_10121ec8)(3);
  (*DAT_10121ec8)(0x14);
  (*DAT_10121ec8)(0);
  (*DAT_10121ec8)(0xff);
  (*DAT_10121ec8)(0xff);
  (*DAT_10121ec8)(0xff);
  (*DAT_10121ec8)(0xff);
  (*DAT_10121ec8)(10);
  (*DAT_10121ec4)();
  return;
}

