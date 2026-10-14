
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_1002f490(int *param_1)

{
  int iVar1;
  int iVar2;
  float fVar3;
  undefined1 uVar4;
  undefined1 unaff_BP;
  float unaff_EDI;
  int iVar5;
  float10 extraout_ST0;
  float10 fVar6;
  longlong lVar7;
  int iStack_8;
  undefined1 auStack_4 [4];
  
  (**(code **)(*param_1 + 0x58))
            (*(int *)(param_1[0xc] + 0x2dc) * 0xb0 + *(int *)(param_1[0x11] + 0xa8) + param_1[0x11],
             auStack_4,param_1[0xc] + 0xb54);
  *(undefined4 *)(param_1[0xc] + 0xb28) = *(undefined4 *)(param_1[0xc] + 0xb54);
  *(undefined1 *)(param_1[0xc] + 0x31c) = unaff_BP;
  *(undefined1 *)(param_1[0xc] + 0xb40) = *(undefined1 *)(param_1[0xc] + 0x31c);
  *(undefined1 *)(param_1[0xc] + 0xb18) = *(undefined1 *)(param_1[0xc] + 0x31c);
  (**(code **)(*param_1 + 0x5c))(iStack_8);
  iVar5 = param_1[0xe];
  lVar7 = __ftol();
  fVar6 = extraout_ST0 - (float10)((int)lVar7 * 0x168);
  if (fVar6 < (float10)_DAT_100601f0) {
    fVar6 = fVar6 + (float10)_DAT_1006015c;
  }
  if ((float10)_DAT_100601f4 < fVar6) {
    fVar6 = fVar6 - (float10)_DAT_1006015c;
  }
  if (fVar6 <= (float10)_DAT_10060374) {
    if (fVar6 < (float10)_DAT_10060370) {
      *(float *)(iVar5 + 0x184) = *(float *)(iVar5 + 0x184) + _DAT_100601f4;
      param_1[0x10] = (int)-(float)param_1[0x10];
    }
  }
  else {
    *(float *)(iVar5 + 0x184) = *(float *)(iVar5 + 0x184) - _DAT_100601f4;
    param_1[0x10] = (int)-(float)param_1[0x10];
  }
  lVar7 = __ftol();
  uVar4 = (undefined1)lVar7;
  *(undefined1 *)(param_1[0xc] + 0x318) = uVar4;
  *(undefined1 *)(param_1[0xc] + 0x319) = uVar4;
  *(undefined1 *)(param_1[0xc] + 0x31a) = uVar4;
  *(undefined1 *)(param_1[0xc] + 0x31b) = uVar4;
  *(undefined1 *)(param_1[0xc] + 0xb3c) = *(undefined1 *)(param_1[0xc] + 0x318);
  *(undefined1 *)(param_1[0xc] + 0xb3d) = *(undefined1 *)(param_1[0xc] + 0x319);
  *(undefined1 *)(param_1[0xc] + 0xb3e) = *(undefined1 *)(param_1[0xc] + 0x31a);
  *(undefined1 *)(param_1[0xc] + 0xb3f) = *(undefined1 *)(param_1[0xc] + 0x31b);
  *(undefined4 *)(param_1[0xc] + 0xb58) = *(undefined4 *)(param_1[0xe] + 0x184);
  iVar5 = param_1[0xc];
  if (*(float *)(iVar5 + 0xb58) < _DAT_10059a18) {
    *(float *)(iVar5 + 0xb58) = *(float *)(iVar5 + 0xb58) + _DAT_1006015c;
  }
  *(undefined4 *)(param_1[0xc] + 0xb2c) = *(undefined4 *)(param_1[0xc] + 0xb58);
  iVar5 = *(int *)(iStack_8 + 0xb8) * 0xb0 + *(int *)(param_1[0x11] + 0xa8) + param_1[0x11];
  if (*(float *)(iVar5 + 0x4c) <= _DAT_10059a18) {
    fVar3 = unaff_EDI * *(float *)(iVar5 + 0x20);
  }
  else {
    fVar3 = ((float)param_1[0x10] / *(float *)(iVar5 + 0x4c)) * (float)*(int *)(iVar5 + 0x38);
  }
  *(float *)(param_1[0xe] + 0x180) = fVar3 + *(float *)(param_1[0xe] + 0x180);
  iVar1 = *(int *)(iVar5 + 0x38);
  iVar2 = param_1[0xe];
  lVar7 = __ftol();
  *(float *)(iVar2 + 0x180) = *(float *)(iVar2 + 0x180) - (float)((int)lVar7 * iVar1);
  iVar1 = param_1[0xe];
  if (*(float *)(iVar1 + 0x180) < _DAT_10059a18) {
    *(float *)(iVar1 + 0x180) = (float)*(int *)(iVar5 + 0x38) + *(float *)(iVar1 + 0x180);
  }
  return;
}

