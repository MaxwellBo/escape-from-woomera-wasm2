
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_10056010(void *param_1,int *param_2)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  int *piVar8;
  float fStack_18;
  float fStack_14;
  float fStack_10;
  float fStack_c;
  float fStack_8;
  float fStack_4;
  
  if (*param_2 == 1) {
    FUN_10055de0((int)param_1);
    piVar8 = (int *)FUN_10019410((uint *)((int)param_1 + 0x160));
    if (piVar8 != (int *)0x0) {
      (*DAT_10121e58)(*(int *)((int)param_1 + 4) + 0x50,&fStack_c,0,0);
      iVar1 = *(int *)((int)param_1 + 4);
      fVar2 = *(float *)(piVar8[1] + 8) - *(float *)(iVar1 + 8);
      fVar7 = *(float *)(piVar8[1] + 0xc) - *(float *)(iVar1 + 0xc);
      fVar6 = SQRT(fVar2 * fVar2 + fVar7 * fVar7);
      fVar3 = _DAT_100dd5f8;
      fVar4 = _DAT_100dd618;
      fVar5 = _DAT_100dd5f8;
      if (fVar6 != _DAT_100dd5f8) {
        fVar6 = _DAT_100dd618 / fVar6;
        fVar3 = fVar2 * fVar6;
        fVar4 = _DAT_100dd5f8;
        fVar5 = fVar7 * fVar6;
      }
      fStack_14 = SQRT(fStack_c * fStack_c + fStack_8 * fStack_8);
      if (fStack_14 == _DAT_100dd5f8) {
        fStack_18 = 0.0;
        fStack_14 = 0.0;
        fStack_10 = 1.0;
      }
      else {
        fStack_14 = _DAT_100dd618 / fStack_14;
        fStack_10 = 0.0;
        fStack_18 = fStack_c * fStack_14;
        fStack_14 = fStack_8 * fStack_14;
      }
      fStack_8 = fStack_14;
      fStack_c = fStack_18;
      fStack_4 = fStack_10;
      if ((float)_DAT_100ea5c8 < fStack_18 * fVar3 + fStack_14 * fVar5 + fStack_10 * fVar4) {
        (**(code **)(*piVar8 + 0x60))(iVar1,iVar1,DAT_10126ad4,4);
      }
    }
    *(float *)((int)param_1 + 0x330) = *(float *)((int)param_1 + 0x330) - _DAT_100de4ac;
  }
  else if (*param_2 != 2) {
    FUN_10060620(param_1,param_2);
    return;
  }
  return;
}

