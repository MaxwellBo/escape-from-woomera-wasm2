
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __thiscall
FUN_1006bcd0(void *this,int *param_1,int param_2,int param_3,int param_4,uint param_5)

{
  int iVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int *local_338;
  uint local_334;
  float local_328;
  int local_324 [201];
  
  if ((*(int *)this == 0) || (*(int *)((int)this + 4) == 0)) {
    (*DAT_10121efc)(2,s_Graph_not_ready__101128c4);
  }
  else {
    if ((param_2 < 0) || (*(int *)((int)this + 0x18) < param_2)) {
      (*DAT_10121efc)(2,s_Can_t_build_a_path__iStart_is__d_10112938,param_2);
      return 0;
    }
    if (param_2 == param_3) {
      *param_1 = param_2;
      param_1[1] = param_3;
      return 2;
    }
    if (*(int *)((int)this + 8) == 0) {
      FUN_1006eb00(local_324);
      switch(param_4) {
      case 0:
        local_334 = 1;
        break;
      case 1:
        local_334 = 2;
        break;
      case 2:
        local_334 = 4;
        break;
      case 3:
        local_334 = 8;
      }
      iVar9 = 0;
      if (0 < *(int *)((int)this + 0x18)) {
        iVar3 = 0;
        do {
          iVar9 = iVar9 + 1;
          *(undefined4 *)(iVar3 + 0x48 + *(int *)((int)this + 0xc)) = 0xbf800000;
          iVar3 = iVar3 + 0x58;
        } while (iVar9 < *(int *)((int)this + 0x18));
      }
      *(undefined4 *)(param_2 * 0x58 + 0x48 + *(int *)((int)this + 0xc)) = 0;
      *(int *)(param_2 * 0x58 + 0x4c + *(int *)((int)this + 0xc)) = param_2;
      FUN_1006eb10(local_324,param_2,0);
      while ((local_324[0] != 0 &&
             (iVar9 = FUN_1006eb50(local_324,(int *)&local_328), iVar9 != param_3))) {
        iVar8 = 0;
        iVar7 = iVar9 * 0x58;
        iVar3 = iVar7 + *(int *)((int)this + 0xc);
        if (0 < *(int *)(iVar3 + 0x20)) {
          do {
            iVar4 = *(int *)(iVar7 + 0x24 + *(int *)((int)this + 0xc)) + iVar8;
            iVar5 = *(int *)((int)this + 0x10) + iVar4 * 0x18;
            iVar1 = *(int *)(iVar5 + 4);
            if (((*(uint *)(*(int *)((int)this + 0x10) + 0x10 + iVar4 * 0x18) & local_334) ==
                 local_334) &&
               ((piVar6 = *(int **)(iVar5 + 8), piVar6 == (int *)0x0 ||
                (iVar5 = FUN_1006b870(this,iVar9,piVar6,param_5,1), iVar5 != 0)))) {
              iVar5 = *(int *)((int)this + 0xc);
              fVar2 = local_328 +
                      *(float *)(*(int *)((int)this + 0x10) + 0x14 +
                                (*(int *)(iVar7 + 0x24 + iVar5) + iVar8) * 0x18);
              iVar4 = iVar1 * 0x58;
              if ((*(float *)(iVar4 + 0x48 + iVar5) < (float)_DAT_100ed3b0) ||
                 (fVar2 < *(float *)(iVar4 + 0x48 + iVar5) - (float)_DAT_100de1e0)) {
                *(float *)(iVar4 + 0x48 + iVar5) = fVar2;
                *(int *)(iVar4 + 0x4c + *(int *)((int)this + 0xc)) = iVar9;
                FUN_1006eb10(local_324,iVar1,(int)fVar2);
              }
            }
            iVar8 = iVar8 + 1;
          } while (iVar8 < *(int *)(iVar3 + 0x20));
        }
      }
      if ((float)_DAT_100ed3b0 <= *(float *)(*(int *)((int)this + 0xc) + 0x48 + param_3 * 0x58)) {
        iVar9 = param_3;
        iVar3 = 1;
        do {
          iVar7 = iVar3;
          iVar9 = *(int *)(*(int *)((int)this + 0xc) + 0x4c + iVar9 * 0x58);
          iVar3 = iVar7 + 1;
        } while (iVar9 != param_2);
        if (-1 < iVar7) {
          piVar6 = param_1 + iVar7;
          iVar9 = iVar7 + 1;
          do {
            *piVar6 = param_3;
            piVar6 = piVar6 + -1;
            iVar9 = iVar9 + -1;
            param_3 = *(int *)(*(int *)((int)this + 0xc) + 0x4c + param_3 * 0x58);
          } while (iVar9 != 0);
        }
        return iVar7 + 1;
      }
    }
    else {
      iVar9 = 1;
      *param_1 = param_2;
      while( true ) {
        local_338 = param_1 + 1;
        iVar3 = FUN_1006bc40(this,param_2,param_3,param_4,(uint)((param_5 & 0x340) != 0));
        if (param_2 == iVar3) break;
        if (9 < iVar9) {
          return iVar9;
        }
        iVar9 = iVar9 + 1;
        *local_338 = iVar3;
        param_2 = iVar3;
        param_1 = local_338;
        if (iVar3 == param_3) {
          return iVar9;
        }
      }
    }
  }
  return 0;
}

