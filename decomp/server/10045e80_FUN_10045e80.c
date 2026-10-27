
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_10045e80(void *param_1)

{
  int iVar1;
  float fVar2;
  undefined1 auStack_28 [12];
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  iVar1 = *(int *)((int)param_1 + 4);
  fVar2 = *(float *)(iVar1 + 0x10) + _DAT_100dd634;
  *(undefined4 *)(iVar1 + 8) = *(undefined4 *)(iVar1 + 8);
  *(undefined4 *)(iVar1 + 0xc) = *(undefined4 *)(iVar1 + 0xc);
  *(float *)(iVar1 + 0x10) = fVar2;
  uStack_1c = 0x41800000;
  uStack_18 = 0x41800000;
  uStack_14 = 0x41800000;
  FUN_10001d60(auStack_28,0xc1800000,0xc1800000,0xc1800000);
  FUN_10045f00(param_1,s_models_prdroid_mdl_1010d64c);
  return;
}

