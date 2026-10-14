
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall
FUN_1005fef0(void *param_1,float param_2,float param_3,float param_4,float param_5,float param_6,
            float param_7,float param_8,float param_9)

{
  float *pfVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  undefined1 auStack_38 [16];
  float fStack_28;
  
  if (param_9 == _DAT_100dd5f8) {
    param_9 = 784.0;
  }
  if (param_9 * (float)_DAT_100dd648 < param_8) {
    param_8 = param_9 * (float)_DAT_100dd648;
  }
  if ((DAT_10122780 == 0) || (DAT_10122784 == 0)) {
    (*DAT_10121efc)(2,s_Graph_not_ready_for_BuildNearest_1011136c);
  }
  else {
    iVar3 = FUN_1006c3e0(&DAT_10122780,(float *)(*(int *)((int)param_1 + 4) + 8),(int)param_1);
    iVar4 = FUN_1006ba70((int)param_1);
    if (iVar3 == -1) {
      (*DAT_10121efc)(2,s_BuildNearestRoute______s_has_no_n_10111394,
                      *(int *)(DAT_10122044 + 0x98) + **(int **)((int)param_1 + 4));
      return 0;
    }
    fStack_44 = param_5 + param_2;
    iVar6 = 0;
    fStack_40 = param_3 + param_6;
    fStack_3c = param_4 + param_7;
    if (0 < DAT_10122798) {
      do {
        iVar5 = (DAT_10124848 + iVar6) % DAT_10122798;
        pfVar1 = (float *)(DAT_1012278c + iVar5 * 0x58);
        DAT_10124848 = iVar5 + 1;
        iVar5 = FUN_1006bc40(&DAT_10122780,iVar3,iVar5,iVar4,0);
        if (((iVar5 != iVar3) &&
            (fVar2 = SQRT((param_2 - *pfVar1) * (param_2 - *pfVar1) +
                          (param_3 - pfVar1[1]) * (param_3 - pfVar1[1]) +
                          (param_4 - pfVar1[2]) * (param_4 - pfVar1[2])), param_8 < fVar2)) &&
           (fVar2 < param_9)) {
          iVar5 = *(int *)((int)param_1 + 4);
          param_7 = *(float *)(iVar5 + 0x17c) + pfVar1[2];
          param_6 = *(float *)(iVar5 + 0x178) + pfVar1[1];
          param_5 = *pfVar1 + *(float *)(iVar5 + 0x174);
          FUN_100afc60(&param_5,&fStack_44,1,*(undefined4 *)(iVar5 + 0x208),auStack_38);
          if ((fStack_28 == (float)_DAT_100dd628) &&
             (iVar5 = FUN_1005e720(param_1,pfVar1,0x40,0), iVar5 != 0)) {
            *(float *)((int)param_1 + 0x278) = *pfVar1;
            *(float *)((int)param_1 + 0x27c) = pfVar1[1];
            *(float *)((int)param_1 + 0x280) = pfVar1[2];
            return 1;
          }
        }
        iVar6 = iVar6 + 1;
        if (DAT_10122798 <= iVar6) {
          return 0;
        }
      } while( true );
    }
  }
  return 0;
}

