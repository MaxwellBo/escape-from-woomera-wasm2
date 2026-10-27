
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_10008240(int *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  int iVar5;
  undefined4 auStack_8 [2];
  
  iVar4 = (*DAT_10121f30)(*(undefined4 *)(param_1[1] + 0x208));
  if (iVar4 != 0) {
    iVar5 = param_1[1];
    fVar1 = ((float)param_1[0x34] - *(float *)(iVar5 + 0x134)) * *(float *)(iVar5 + 0x138) *
            (float)param_1[0x32] + *(float *)(iVar5 + 0x130);
    fVar2 = *(float *)(iVar5 + 0x138) * (float)param_1[0x32] * _DAT_100de1f0 +
            *(float *)(iVar5 + 0x130);
    fVar3 = *(float *)(iVar5 + 0x134) + _DAT_100de1f0;
    param_1[0x35] = 0;
    param_1[0x34] = (int)fVar3;
    if ((_DAT_100dd658 <= fVar2) || (fVar2 <= (float)_DAT_100de1e8)) {
      param_1[0x35] = 1;
    }
    for (iVar5 = FUN_10008b50(iVar4,iVar5,auStack_8,fVar1,fVar2,0); iVar5 != 0;
        iVar5 = FUN_10008b50(iVar4,param_1[1],auStack_8,fVar1,fVar2,iVar5)) {
      (**(code **)(*param_1 + 0x118))(auStack_8);
    }
    return;
  }
  (*DAT_10121efc)(2,s_Gibbed_monster_is_thinking__10102224);
  return;
}

