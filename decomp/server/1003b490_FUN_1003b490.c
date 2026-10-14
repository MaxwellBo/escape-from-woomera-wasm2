
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_1003b490(void *param_1,float *param_2,float *param_3)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  longlong lVar4;
  float *pfVar5;
  float *pfVar6;
  float *pfVar7;
  undefined1 *puVar8;
  undefined1 auStack_38 [56];
  
  if ((*(float *)((int)param_1 + 0xcc) == _DAT_100dd5f8) ||
     (iVar2 = FUN_1003b3a0((int)param_1), iVar2 == 0)) {
    FUN_1003ab70(param_1,param_2);
  }
  else {
    FUN_100af210((float *)(*(int *)((int)param_1 + 4) + 0x50));
    lVar4 = __ftol();
    iVar2 = (int)lVar4;
    if (iVar2 != 0) {
      if (0 < iVar2) {
        do {
          iVar1 = *(int *)(*(int *)((int)param_1 + 0x148) + 4);
          *(float *)(iVar1 + 8) = *param_2;
          *(float *)(iVar1 + 0xc) = param_2[1];
          *(float *)(iVar1 + 0x10) = param_2[2];
          pfVar7 = (float *)(&DAT_10121d70 + *(int *)((int)param_1 + 0x130) * 0xc);
          pfVar5 = param_2;
          pfVar6 = param_3;
          FUN_1003ade0(param_1,param_2,param_3,pfVar7,auStack_38);
          *(float *)((int)param_1 + 0x14c) = *DAT_10122044;
          FUN_1002bf70(*(int **)((int)param_1 + 0x148));
          puVar8 = auStack_38;
          *(float *)(*(int *)(*(int *)((int)param_1 + 0x148) + 4) + 0x1e4) =
               *DAT_10122044 - (float)_DAT_100dd628;
          FUN_10003850(&stack0xffffffa8,param_2);
          FUN_1002c070(*(void **)((int)param_1 + 0x148),pfVar5,pfVar6,pfVar7,(int)puVar8);
          if ((*(int *)(*(int *)((int)*(void **)((int)param_1 + 0x148) + 4) + 0x1c8) != 0) &&
             (piVar3 = (int *)FUN_1002a9d0(*(void **)((int)param_1 + 0x148),(int)auStack_38),
             piVar3 != (int *)0x0)) {
            FUN_10098c10((uint *)(*(int *)(*(int *)(*(int *)((int)param_1 + 0x148) + 4) + 0x1c8) +
                                 (int)DAT_10122044[0x26]),piVar3,*(int *)((int)param_1 + 0x148),3,0)
            ;
          }
          FUN_10019680(*(int *)((int)param_1 + 0x148));
          iVar2 = iVar2 + -1;
        } while (iVar2 != 0);
      }
      FUN_1003ab70(param_1,param_2);
      return;
    }
  }
  return;
}

