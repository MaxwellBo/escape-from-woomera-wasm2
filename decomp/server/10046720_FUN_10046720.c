
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_10046720(int *param_1)

{
  int iVar1;
  uint uVar2;
  float fStack_8;
  float fStack_4;
  
  uVar2 = *(int *)(param_1[1] + 0x128) + 1U & 0x80000007;
  if ((int)uVar2 < 0) {
    uVar2 = (uVar2 - 1 | 0xfffffff8) + 1;
  }
  *(uint *)(param_1[1] + 0x128) = uVar2;
  *(int *)(param_1[1] + 0xb4) = param_1[0x49];
  iVar1 = (*DAT_10121f30)(*(undefined4 *)(param_1[1] + 0x208));
  FUN_10008a50(iVar1,param_1[1],&fStack_8,&fStack_4);
  *(undefined4 *)(param_1[1] + 0xb4) = 0;
  if (fStack_8 == (float)_DAT_100de1e8) {
    *(undefined4 *)(param_1[1] + 0x128) = 0;
  }
  (**(code **)(*param_1 + 0x17c))(*(undefined4 *)(param_1[1] + 0x128),1,0);
  param_1[0x3f] = (int)(*DAT_10122044 + (float)_DAT_100e0eb8);
  return;
}

