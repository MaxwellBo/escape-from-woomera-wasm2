
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_1003b7f0(void *param_1,float *param_2,float *param_3)

{
  int iVar1;
  longlong lVar2;
  undefined1 auStack_38 [20];
  undefined4 auStack_24 [9];
  
  if (*(float *)((int)param_1 + 0xcc) == _DAT_100dd5f8) {
    FUN_1003ab70(param_1,param_2);
  }
  else {
    lVar2 = __ftol();
    if (0 < (int)lVar2) {
      FUN_100af210((float *)(*(int *)((int)param_1 + 4) + 0x50));
      FUN_1003ade0(param_1,param_2,param_3,
                   (float *)(&DAT_10121d70 + *(int *)((int)param_1 + 0x130) * 0xc),auStack_38);
      iVar1 = *(int *)((int)param_1 + 4);
      FUN_100359b0(auStack_24,(undefined4 *)(iVar1 + 0x50),*(undefined4 *)(iVar1 + 0x208),
                   *(int *)(iVar1 + 0x184));
      FUN_1003ab70(param_1,param_2);
      return;
    }
  }
  return;
}

