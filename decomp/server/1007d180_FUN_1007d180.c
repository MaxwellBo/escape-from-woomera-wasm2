
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_1007d180(void *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  float local_44;
  undefined4 local_40;
  float local_3c;
  undefined1 local_38 [20];
  undefined4 local_24 [9];
  
  iVar1 = *(int *)((int)param_1 + 4);
  if (((*(float *)(iVar1 + 0x174) != DAT_10121dd8) || (*(float *)(iVar1 + 0x178) != DAT_10121ddc))
     || (*(float *)(iVar1 + 0x17c) != DAT_10121de0)) {
    iVar1 = FUN_100aec40(0,s_info_intermission_10114e40);
    if (iVar1 != 0) {
      iVar2 = (*DAT_10121f70)();
      if (0 < iVar2) {
        do {
          iVar3 = FUN_100af030(iVar1,(byte *)s_info_intermission_10114e40);
          if (iVar3 != 0) {
            iVar1 = iVar3;
          }
          iVar2 = iVar2 + -1;
        } while (iVar2 != 0);
      }
      FUN_100b5770(*(int *)((int)param_1 + 4));
      FUN_10003850(&stack0xffffff98,(undefined4 *)(*(int *)(iVar1 + 4) + 8));
      FUN_1007d2d0(param_1);
      return;
    }
    FUN_100b5770(*(int *)((int)param_1 + 4));
    iVar1 = *(int *)((int)param_1 + 4);
    local_3c = *(float *)(iVar1 + 0x10) + _DAT_100ddaf4;
    local_40 = *(undefined4 *)(iVar1 + 0xc);
    local_44 = *(float *)(iVar1 + 8);
    FUN_100afc60((float *)(iVar1 + 8),&local_44,1,*(undefined4 *)(iVar1 + 0x208),local_38);
    uVar4 = FUN_10002250(local_24,&local_44,(float *)(*(int *)((int)param_1 + 4) + 8));
    FUN_100ae830((undefined4 *)&stack0xffffffa4,uVar4);
    FUN_10003850(&stack0xffffff98,local_24);
    FUN_1007d2d0(param_1);
  }
  return;
}

