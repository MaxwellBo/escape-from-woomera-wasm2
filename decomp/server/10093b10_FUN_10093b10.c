
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __cdecl FUN_10093b10(int param_1,int param_2,float *param_3)

{
  float fVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  undefined1 auStack_38 [8];
  int iStack_30;
  int iStack_2c;
  float fStack_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  
  iVar4 = param_1;
  if (param_1 == 0) {
    iVar2 = (*DAT_10121e5c)();
    if (iVar2 != 0) {
      iVar4 = iVar2 + 0x80;
    }
  }
  iVar2 = *(int *)(iVar4 + 0x208);
  if ((iVar2 == 0) || (puVar3 = *(undefined4 **)(iVar2 + 0x7c), puVar3 == (undefined4 *)0x0)) {
    puVar3 = (undefined4 *)(*DAT_10121f04)(iVar2,0xc0);
    if (puVar3 == (undefined4 *)0x0) {
      puVar3 = (undefined4 *)0x0;
    }
    else {
      *puVar3 = &PTR_FUN_100f17d8;
    }
    puVar3[1] = iVar4;
  }
  fStack_50 = *(float *)(param_1 + 0x174) + *(float *)(param_1 + 8);
  fStack_4c = *(float *)(param_1 + 0x178) + *(float *)(param_1 + 0xc);
  fStack_48 = *(float *)(param_1 + 0x17c) + *(float *)(param_1 + 0x10);
  fStack_44 = *(float *)(param_2 + 0x174) + *(float *)(param_2 + 8);
  fStack_40 = *(float *)(param_2 + 0x178) + *(float *)(param_2 + 0xc);
  fStack_3c = *(float *)(param_2 + 0x17c) + *(float *)(param_2 + 0x10);
  FUN_100afc60(&fStack_50,&fStack_44,1,*(undefined4 *)(param_1 + 0x208),auStack_38);
  if (((iStack_30 != 0) && (iStack_2c != 0)) || (fStack_28 != _DAT_100dd618)) {
    return 0;
  }
  fVar1 = SQRT((fStack_24 - fStack_50) * (fStack_24 - fStack_50) +
               (fStack_20 - fStack_4c) * (fStack_20 - fStack_4c) +
               (fStack_1c - fStack_48) * (fStack_1c - fStack_48));
  if ((float)puVar3[0x2e] < fVar1) {
    return 0;
  }
  if (param_3 != (float *)0x0) {
    *param_3 = fVar1;
    return 1;
  }
  return 1;
}

