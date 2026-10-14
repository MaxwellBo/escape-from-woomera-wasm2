
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_10040890(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  float10 fVar3;
  longlong lVar4;
  
  (*DAT_10121ec0)(4,0x17,param_1[1] + 8,0);
  (*DAT_10121ec8)(5);
  fVar3 = (float10)(*DAT_10121f74)(-*(float *)(param_1[1] + 0x1e0),
                                   *(undefined4 *)(param_1[1] + 0x1e0));
  (*DAT_10121edc)((float)(fVar3 + (float10)*(float *)(param_1[1] + 8)));
  fVar3 = (float10)(*DAT_10121f74)(-*(float *)(param_1[1] + 0x1e0),
                                   *(undefined4 *)(param_1[1] + 0x1e0));
  (*DAT_10121edc)((float)(fVar3 + (float10)*(float *)(param_1[1] + 0xc)));
  (*DAT_10121edc)(*(undefined4 *)(param_1[1] + 0x10));
  (*DAT_10121ed0)((int)DAT_10131cf2);
  lVar4 = __ftol();
  uVar2 = (undefined4)lVar4;
  lVar4 = __ftol();
  uVar2 = (*DAT_10121f70)((int)lVar4,uVar2);
  (*DAT_10121ec8)(uVar2);
  uVar2 = (*DAT_10121f70)(8,0xe);
  (*DAT_10121ec8)(uVar2);
  (*DAT_10121ec4)();
  *(float *)(param_1[1] + 0x160) = *(float *)(param_1[1] + 0x160) - _DAT_100dd618;
  if (_DAT_100dd5f8 < *(float *)(param_1[1] + 0x160)) {
    iVar1 = *param_1;
    fVar3 = (float10)(*DAT_10121f74)(0x3dcccccd,0x3e4ccccd);
    (**(code **)(iVar1 + 8))((float)fVar3);
    return;
  }
  FUN_100b0ef0((int)param_1);
  return;
}

