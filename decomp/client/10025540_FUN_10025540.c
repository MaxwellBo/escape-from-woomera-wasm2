
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_10025540(int param_1)

{
  int *piVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  uint local_14;
  uint local_c;
  uint local_8;
  uint local_4;
  
  piVar1 = *(int **)(param_1 + 0x94);
  local_8 = (uint)*(byte *)((int)piVar1 + 5);
  local_4 = (uint)*(byte *)((int)piVar1 + 6);
  local_c = (uint)*(byte *)(piVar1 + 1);
  iVar3 = *piVar1;
  if (-1 < iVar3) {
    if (iVar3 < 2) {
LAB_100256f3:
      local_14 = 0;
      uVar6 = 0;
      uVar5 = 0;
      iVar3 = *(int *)(param_1 + 0xcc);
LAB_100256f9:
      if (iVar3 < 0x100) {
        if (iVar3 < 0) {
          iVar3 = 0;
        }
      }
      else {
        iVar3 = 0xff;
      }
      goto LAB_100255ba;
    }
    if (iVar3 == 2) {
      fVar2 = (float)piVar1[5] + *(float *)(param_1 + 0xd0);
      *(float *)(param_1 + 0xd0) = fVar2;
      if (fVar2 <= *(float *)(param_1 + 0x98)) {
        uVar6 = 0;
        uVar5 = 0;
        local_14 = 0;
        if (*(float *)(param_1 + 0xd4) < *(float *)(param_1 + 0x98)) goto LAB_100256f3;
        if ((float)piVar1[8] < *(float *)(param_1 + 0x98) - fVar2) {
          iVar3 = 0;
          goto LAB_100255ba;
        }
        uVar6 = (uint)*(byte *)((int)piVar1 + 9);
        local_14 = (uint)*(byte *)((int)piVar1 + 10);
        uVar5 = (uint)*(byte *)(piVar1 + 2);
        lVar7 = __ftol();
        iVar3 = (int)lVar7;
        goto LAB_100256f9;
      }
      local_4 = 0;
      local_8 = 0;
      local_c = 0;
    }
  }
  iVar3 = 0;
  uVar5 = local_4;
  uVar6 = local_4;
LAB_100255ba:
  iVar4 = 0xff - iVar3;
  *(int *)(param_1 + 0xbc) = (int)(iVar4 * local_c + uVar5 * iVar3) >> 8;
  *(int *)(param_1 + 0xc0) = (int)(iVar4 * local_8 + uVar6 * iVar3) >> 8;
  *(int *)(param_1 + 0xc4) = (int)(iVar4 * local_4 + local_14 * iVar3) >> 8;
  if ((((*piVar1 == 1) && (*(float *)(param_1 + 0xd0) != _DAT_10059a18)) &&
      (iVar3 = *(int *)(param_1 + 0x9c), -1 < iVar3)) &&
     ((-1 < *(int *)(param_1 + 0xa0) &&
      (*(short *)(&DAT_100a4ddc + *(int *)(param_1 + 200) * 2) + iVar3 <= DAT_100a4dcc)))) {
    (*DAT_100a5058)(iVar3,*(int *)(param_1 + 0xa0),*(int *)(param_1 + 200),(char)piVar1[2],
                    *(undefined1 *)((int)piVar1 + 9),*(undefined1 *)((int)piVar1 + 10));
  }
  return;
}

