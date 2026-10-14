
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall
FUN_1005fc20(int *param_1,float param_2,float param_3,float param_4,float param_5,float param_6,
            float param_7,float param_8,float param_9)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  float10 fVar10;
  float10 fVar11;
  int iStack_64;
  int iStack_60;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
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
    (*DAT_10121efc)(2,s_Graph_not_ready_for_findcover__10111324);
  }
  else {
    iVar5 = FUN_1006c3e0(&DAT_10122780,(float *)(param_1[1] + 8),(int)param_1);
    iStack_64 = FUN_1006c3e0(&DAT_10122780,&param_2,(int)param_1);
    iVar6 = FUN_1006ba70((int)param_1);
    if (iVar5 == -1) {
      (*DAT_10121efc)(2,s_FindCover______s_has_no_nearest_n_10111344,
                      *(int *)(DAT_10122044 + 0x98) + *(int *)param_1[1]);
      return 0;
    }
    if (iStack_64 == -1) {
      iStack_64 = iVar5;
    }
    fStack_44 = param_5 + param_2;
    iStack_60 = 0;
    fStack_40 = param_3 + param_6;
    fStack_3c = param_4 + param_7;
    iVar9 = DAT_10122798;
    if (0 < DAT_10122798) {
      do {
        iVar8 = (iStack_60 + DAT_10124848) % iVar9;
        DAT_10124848 = iVar8 + 1;
        iVar7 = param_1[1];
        pfVar1 = (float *)(DAT_1012278c + iVar8 * 0x58);
        fVar2 = *(float *)(iVar7 + 8) - *pfVar1;
        fVar4 = *(float *)(iVar7 + 0xc) - pfVar1[1];
        fVar3 = *(float *)(iVar7 + 0x10) - pfVar1[2];
        fVar2 = SQRT(fVar2 * fVar2 + fVar4 * fVar4 + fVar3 * fVar3);
        if ((param_8 <= fVar2) && (fVar2 < param_9)) {
          fStack_50 = param_5 + *pfVar1;
          fStack_4c = param_6 + pfVar1[1];
          fStack_48 = param_7 + pfVar1[2];
          FUN_100afc20(&fStack_50,&fStack_44,1,1,*(undefined4 *)(iVar7 + 0x208),auStack_38);
          iVar9 = DAT_10122798;
          if (fStack_28 != (float)_DAT_100dd628) {
            if (iVar5 != iStack_64) {
              fVar10 = FUN_1006bb60(&DAT_10122780,iVar5,iVar8,iVar6,param_1[0xae]);
              fVar11 = FUN_1006bb60(&DAT_10122780,iStack_64,iVar8,iVar6,param_1[0xae]);
              iVar9 = DAT_10122798;
              if (fVar11 < (float10)(float)fVar10) goto LAB_1005fea7;
            }
            iVar7 = (**(code **)(*param_1 + 0x1c4))(pfVar1);
            iVar9 = DAT_10122798;
            if ((iVar7 != 0) &&
               (iVar7 = FUN_1005d4b0(param_1,4,0,pfVar1), iVar9 = DAT_10122798, iVar7 != 0)) {
              return 1;
            }
          }
        }
LAB_1005fea7:
        iStack_60 = iStack_60 + 1;
        if (iVar9 <= iStack_60) {
          return 0;
        }
      } while( true );
    }
  }
  return 0;
}

