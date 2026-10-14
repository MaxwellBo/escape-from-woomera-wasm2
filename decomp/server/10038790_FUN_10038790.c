
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_10038790(int *param_1)

{
  float fVar1;
  int iVar2;
  void *this;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  float *pfVar6;
  float *pfVar7;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  int iStack_20;
  int iStack_1c;
  undefined1 auStack_18 [12];
  float afStack_c [3];
  
  (**(code **)(*param_1 + 0x2c))();
  *(undefined4 *)(param_1[1] + 0x108) = 7;
  *(undefined4 *)(param_1[1] + 0x10c) = 4;
  (*DAT_10121e10)(*(undefined4 *)(param_1[1] + 0x208),
                  *(int *)(param_1[1] + 0xb8) + *(int *)(DAT_10122044 + 0x98));
  if ((*(byte *)(param_1[1] + 0x1a0) & 1) != 0) {
    (**(code **)(*param_1 + 8))(0x3f800000);
  }
  (*DAT_10121e58)(param_1[1] + 0x50,&fStack_54,&fStack_60,&fStack_6c);
  fStack_34 = (float)param_1[0x43];
  fStack_3c = fStack_6c * fStack_34;
  fStack_38 = fStack_68 * fStack_34;
  fStack_34 = fStack_64 * fStack_34;
  fStack_28 = (float)param_1[0x42];
  fStack_30 = fStack_60 * fStack_28;
  fStack_2c = fStack_5c * fStack_28;
  fStack_28 = fStack_58 * fStack_28;
  fVar1 = (float)param_1[0x41];
  FUN_10001d60(&fStack_48,fStack_54 * fVar1,fStack_50 * fVar1,fStack_4c * fVar1);
  iVar3 = param_1[1];
  FUN_10001d60(auStack_18,fStack_48 + *(float *)(iVar3 + 8),fStack_44 + *(float *)(iVar3 + 0xc),
               fStack_40 + *(float *)(iVar3 + 0x10));
  pfVar7 = &fStack_3c;
  pfVar6 = &fStack_24;
  this = (void *)FUN_1000b550(auStack_18,afStack_c,&fStack_30);
  FUN_1000b550(this,pfVar6,pfVar7);
  fVar1 = _DAT_100dd5f8;
  param_1[0x49] = (int)fStack_24;
  param_1[0x4a] = iStack_20;
  param_1[0x4b] = iStack_1c;
  if ((float)param_1[0x34] <= fVar1) {
    param_1[0x34] = 0x3f800000;
  }
  if (5 < (uint)param_1[0x4c]) {
    param_1[0x4c] = 0;
  }
  iVar3 = param_1[1];
  *(undefined4 *)(iVar3 + 0x14) = *(undefined4 *)(iVar3 + 8);
  *(undefined4 *)(iVar3 + 0x18) = *(undefined4 *)(iVar3 + 0xc);
  *(undefined4 *)(iVar3 + 0x1c) = *(undefined4 *)(iVar3 + 0x10);
  if (param_1[0x51] != 0) {
    iVar3 = (*DAT_10121e5c)();
    if (iVar3 == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = iVar3 + 0x80;
    }
    iVar2 = *(int *)(iVar3 + 0x208);
    if ((iVar2 == 0) || (iVar5 = *(int *)(iVar2 + 0x7c), iVar5 == 0)) {
      puVar4 = (undefined4 *)(*DAT_10121f04)(iVar2,0xb8);
      if (puVar4 != (undefined4 *)0x0) {
        *puVar4 = &PTR_FUN_100e46d8;
        puVar4[1] = iVar3;
        param_1[0x50] = (int)puVar4;
        return;
      }
      iVar5 = 0;
      iRam00000004 = iVar3;
    }
    param_1[0x50] = iVar5;
  }
  return;
}

