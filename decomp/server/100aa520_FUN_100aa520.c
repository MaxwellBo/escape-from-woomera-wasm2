
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_100aa520(int *param_1)

{
  float fVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  float10 fVar6;
  undefined4 uStack_24;
  float fStack_20;
  float fStack_1c;
  
  if (param_1[0x36] != 0) {
    fVar1 = (float)param_1[0x3b] - *(float *)(param_1[1] + 0x1f8) * DAT_10122044[1];
    param_1[0x3b] = (int)fVar1;
    if (fVar1 <= _DAT_100dd5f8) {
      iVar5 = *(int *)(*(int *)(param_1[0x36] + 4) + 0x1d4);
      if (iVar5 != 0) {
        FUN_10098c10((uint *)((int)DAT_10122044[0x26] + iVar5),param_1,param_1,3,0);
        if ((*(byte *)(*(int *)(param_1[0x36] + 4) + 0x1a0) & 4) != 0) {
          *(undefined4 *)(*(int *)(param_1[0x36] + 4) + 0x1d4) = 0;
        }
      }
      iVar5 = (**(code **)(*(int *)param_1[0x36] + 0xd8))();
      param_1[0x36] = iVar5;
      if (iVar5 == 0) {
        iVar5 = param_1[1];
        *(undefined4 *)(iVar5 + 0x20) = DAT_10121dd8;
        *(undefined4 *)(iVar5 + 0x24) = DAT_10121ddc;
        *(undefined4 *)(iVar5 + 0x28) = DAT_10121de0;
      }
      else {
        if (*(float *)(*(int *)(iVar5 + 4) + 0x1f8) != _DAT_100dd5f8) {
          param_1[0x3c] = *(int *)(*(int *)(iVar5 + 4) + 0x1f8);
        }
        iVar5 = *(int *)(iVar5 + 4);
        iVar2 = param_1[1];
        fVar1 = *(float *)(iVar5 + 8) - *(float *)(iVar2 + 8);
        fStack_20 = *(float *)(iVar5 + 0xc) - *(float *)(iVar2 + 0xc);
        fStack_1c = *(float *)(iVar5 + 0x10) - *(float *)(iVar2 + 0x10);
        param_1[0x3b] = (int)SQRT(fStack_1c * fStack_1c + fStack_20 * fStack_20 + fVar1 * fVar1);
        fVar3 = SQRT(fStack_20 * fStack_20 + fStack_1c * fStack_1c + fVar1 * fVar1);
        if (fVar3 == _DAT_100dd5f8) {
          uStack_24 = 0;
          fStack_20 = 0.0;
          fStack_1c = 1.0;
        }
        else {
          fVar3 = _DAT_100dd618 / fVar3;
          FUN_10001d60(&uStack_24,fVar3 * fVar1,fStack_20 * fVar3,fStack_1c * fVar3);
        }
        iVar5 = param_1[1];
        *(undefined4 *)(iVar5 + 0x44) = uStack_24;
        *(float *)(iVar5 + 0x48) = fStack_20;
        *(float *)(iVar5 + 0x4c) = fStack_1c;
        fVar6 = (float10)(**(code **)(*(int *)param_1[0x36] + 0x94))();
        param_1[0x3a] = (int)(float)(fVar6 + (float10)*DAT_10122044);
      }
    }
    if ((float)param_1[0x3a] <= *DAT_10122044) {
      fVar6 = FUN_100afe80((float)param_1[0x3c],*(float *)(param_1[1] + 0x1f8),
                           DAT_10122044[1] * (float)param_1[0x3e]);
      *(float *)(param_1[1] + 0x1f8) = (float)fVar6;
    }
    else {
      fVar6 = FUN_100afe80(0.0,*(float *)(param_1[1] + 0x1f8),DAT_10122044[1] * (float)param_1[0x3f]
                          );
      *(float *)(param_1[1] + 0x1f8) = (float)fVar6;
    }
    iVar5 = param_1[1];
    fVar3 = DAT_10122044[1] + DAT_10122044[1];
    fVar4 = _DAT_100dd618 - fVar3;
    fVar1 = *(float *)(iVar5 + 0x1f8);
    *(float *)(iVar5 + 0x20) =
         fVar1 * *(float *)(iVar5 + 0x44) * fVar3 + fVar4 * *(float *)(iVar5 + 0x20);
    *(float *)(iVar5 + 0x24) =
         fVar1 * *(float *)(iVar5 + 0x48) * fVar3 + fVar4 * *(float *)(iVar5 + 0x24);
    *(float *)(iVar5 + 0x28) =
         fVar1 * *(float *)(iVar5 + 0x4c) * fVar3 + fVar4 * *(float *)(iVar5 + 0x28);
  }
  return;
}

