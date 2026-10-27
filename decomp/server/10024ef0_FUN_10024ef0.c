
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_10024ef0(int *param_1)

{
  float fVar1;
  float fVar2;
  int iVar3;
  float *pfVar4;
  int *piVar5;
  float10 fVar6;
  float fStack_6c;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  float fStack_40;
  undefined1 auStack_3c [48];
  int iStack_c;
  
  fVar6 = FUN_100ae400();
  param_1[0x3e] = (int)(float)(fVar6 + (float10)_DAT_100e1860);
  if (param_1[0x43] == 0) {
    (**(code **)(*param_1 + 0x174))();
    return;
  }
  *(undefined4 *)(param_1[0x37] + 0x314) = 200;
  iVar3 = param_1[0x43];
  param_1[0x43] = iVar3 + -1;
  (*DAT_10121ff4)(1,*(undefined4 *)(*(int *)(param_1[0x37] + 4) + 0x208),
                  CONCAT22((short)((uint)(iVar3 + -1) >> 0x10),*(undefined2 *)((int)param_1 + 0x126)
                          ),0,&DAT_10121dd8,&DAT_10121dd8);
  FUN_1007c580((void *)param_1[0x37],5);
  iVar3 = *(int *)(param_1[0x37] + 4);
  fStack_48 = *(float *)(iVar3 + 0x70) + *(float *)(iVar3 + 0x7c);
  fStack_4c = *(float *)(iVar3 + 0x6c) + *(float *)(iVar3 + 0x78);
  fStack_50 = *(float *)(iVar3 + 0x68) + *(float *)(iVar3 + 0x74);
  FUN_100af200(&fStack_50);
  fVar1 = *(float *)(DAT_10122044 + 0x34);
  fVar2 = *(float *)(DAT_10122044 + 0x38);
  fStack_60 = *(float *)(DAT_10122044 + 0x3c) + *(float *)(DAT_10122044 + 0x3c);
  pfVar4 = (float *)(**(code **)(*(int *)param_1[0x37] + 0x214))();
  fStack_58 = pfVar4[2] - (fVar2 + fVar2);
  fStack_5c = pfVar4[1] - (fVar1 + fVar1);
  fStack_60 = *pfVar4 - fStack_6c;
  fStack_48 = *(float *)(DAT_10122044 + 0x28) * _DAT_100e185c + fStack_60;
  fStack_44 = *(float *)(DAT_10122044 + 0x2c) * _DAT_100e185c + fStack_5c;
  fStack_40 = *(float *)(DAT_10122044 + 0x30) * _DAT_100e185c + fStack_58;
  FUN_100afc60(&fStack_60,&fStack_48,0,*(undefined4 *)(*(int *)(param_1[0x37] + 4) + 0x208),
               auStack_3c);
  if (*(float *)(iStack_c + 0x1ec) != _DAT_100dd5f8) {
    FUN_100b2bd0();
    piVar5 = (int *)FUN_10025770(iStack_c);
    iVar3 = *piVar5;
    FUN_10003850(&stack0xffffff68,(undefined4 *)&stack0xffffff88);
    (**(code **)(iVar3 + 0x5c))(*(undefined4 *)(param_1[0x37] + 4),0x42f00000);
    FUN_100b2bf0(param_1[1],*(undefined4 *)(param_1[0x37] + 4));
  }
  return;
}

