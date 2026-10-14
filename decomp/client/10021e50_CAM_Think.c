
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void CAM_Think(void)

{
  float fVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  float10 fVar5;
  longlong lVar6;
  float local_28;
  float local_18;
  float local_14;
  float fStack_c;
  float fStack_8;
  
                    /* 0x21e50  471  CAM_Think */
  lVar6 = __ftol();
  if ((int)lVar6 == 1) {
    FUN_100224f0();
  }
  else if ((int)lVar6 == 2) {
    FUN_10022560();
  }
  if (DAT_100a97b0 != 0) {
    local_18 = *(float *)(DAT_100a9784 + 0xc);
    local_14 = *(float *)(DAT_100a9714 + 0xc);
    local_28 = *(float *)(DAT_100a9720 + 0xc);
    if ((DAT_100a96fc != 0) && (GetCursorPos((LPPOINT)&DAT_100a9728), DAT_100a9774 == 0)) {
      iVar3 = (*DAT_100a5070)();
      if (iVar3 < DAT_100a9728) {
        if (local_14 < *(float *)(DAT_100a9730 + 0xc)) {
          iVar3 = (*DAT_100a5070)();
          local_14 = (float)((DAT_100a9728 - iVar3) / 2) * (float)_DAT_100599f0 + local_14;
        }
        if (*(float *)(DAT_100a9730 + 0xc) < local_14) {
          local_14 = *(float *)(DAT_100a9730 + 0xc);
        }
      }
      else {
        iVar3 = (*DAT_100a5070)();
        if (DAT_100a9728 < iVar3) {
          if (*(float *)(DAT_100a96f0 + 0xc) < local_14) {
            iVar3 = (*DAT_100a5070)();
            local_14 = local_14 - (float)((iVar3 - DAT_100a9728) / 2) * (float)_DAT_100599f0;
          }
          if (local_14 < *(float *)(DAT_100a96f0 + 0xc)) {
            local_14 = *(float *)(DAT_100a96f0 + 0xc);
          }
        }
      }
      iVar3 = (*DAT_100a5074)();
      if (iVar3 < DAT_100a972c) {
        if (local_18 < *(float *)(DAT_100a9744 + 0xc)) {
          iVar3 = (*DAT_100a5074)();
          local_18 = (float)((DAT_100a972c - iVar3) / 2) * (float)_DAT_100599f0 + local_18;
        }
        if (*(float *)(DAT_100a9744 + 0xc) < local_18) {
          local_18 = *(float *)(DAT_100a9744 + 0xc);
        }
      }
      else {
        iVar3 = (*DAT_100a5074)();
        if (DAT_100a972c < iVar3) {
          if (*(float *)(DAT_100a971c + 0xc) < local_18) {
            iVar3 = (*DAT_100a5074)();
            local_18 = local_18 - (float)((iVar3 - DAT_100a972c) / 2) * (float)_DAT_100599f0;
          }
          if (local_18 < *(float *)(DAT_100a971c + 0xc)) {
            local_18 = *(float *)(DAT_100a971c + 0xc);
          }
        }
      }
      fVar5 = FUN_1001c580(0x100a3a40);
      if (fVar5 == (float10)_DAT_10059a18) {
        _DAT_100a9704 = DAT_100a9728;
        _DAT_100a9700 = DAT_100a972c;
      }
      else {
        lVar6 = __ftol();
        _DAT_100a9704 = (int)lVar6;
        lVar6 = __ftol();
        _DAT_100a9700 = (int)lVar6;
      }
      iVar3 = (*DAT_100a5074)();
      iVar4 = (*DAT_100a5070)();
      SetCursorPos(iVar4,iVar3);
    }
    fVar5 = FUN_100231a0(0x100a9758);
    if (fVar5 == (float10)_DAT_10059a18) {
      fVar5 = FUN_100231a0(0x100a9790);
      if (fVar5 != (float10)_DAT_10059a18) {
        local_18 = local_18 - (float)_DAT_1005ac90;
      }
    }
    else {
      local_18 = local_18 + (float)_DAT_1005ac90;
    }
    fVar5 = FUN_100231a0(0x100a9708);
    if (fVar5 == (float10)_DAT_10059a18) {
      fVar5 = FUN_100231a0(0x100a9768);
      if (fVar5 != (float10)_DAT_10059a18) {
        local_14 = local_14 + (float)_DAT_1005ac90;
      }
    }
    else {
      local_14 = local_14 - (float)_DAT_1005ac90;
    }
    fVar5 = FUN_100231a0(0x100a97a0);
    if (fVar5 == (float10)_DAT_10059a18) {
      fVar5 = FUN_100231a0(0x100a9748);
      if (fVar5 != (float10)_DAT_10059a18) {
        local_28 = local_28 + (float)_DAT_10059a10;
      }
    }
    else {
      local_28 = local_28 - (float)_DAT_10059a10;
      if (local_28 < (float)_DAT_1005f9d0) {
        local_18 = 0.0;
        local_14 = 0.0;
        local_28 = 30.0;
      }
    }
    if (DAT_100a9774 != 0) {
      iVar3 = (*DAT_100a5074)();
      if (iVar3 < DAT_100a972c) {
        if (local_28 < *(float *)(DAT_100a9718 + 0xc)) {
          iVar3 = (*DAT_100a5074)();
          local_28 = (float)((DAT_100a972c - iVar3) / 2) + local_28;
        }
        if (*(float *)(DAT_100a9718 + 0xc) < local_28) {
          local_28 = *(float *)(DAT_100a9718 + 0xc);
        }
      }
      else {
        iVar3 = (*DAT_100a5074)();
        if (DAT_100a972c < iVar3) {
          if (*(float *)(DAT_100a97ac + 0xc) < local_28) {
            iVar3 = (*DAT_100a5074)();
            local_28 = local_28 - (float)((iVar3 - DAT_100a972c) / 2);
          }
          if (local_28 < *(float *)(DAT_100a97ac + 0xc)) {
            local_28 = *(float *)(DAT_100a97ac + 0xc);
          }
        }
      }
      FUN_1001c580(0x100a3a40);
      lVar6 = __ftol();
      _DAT_100a9704 = (int)lVar6;
      FUN_1001c580(0x100a3a40);
      lVar6 = __ftol();
      _DAT_100a9700 = (int)lVar6;
      iVar3 = (*DAT_100a5074)();
      iVar4 = (*DAT_100a5070)();
      SetCursorPos(iVar4,iVar3);
    }
    *(float *)(DAT_100a9784 + 0xc) = local_18;
    *(float *)(DAT_100a9714 + 0xc) = local_14;
    *(float *)(DAT_100a9720 + 0xc) = local_28;
    fVar2 = DAT_100a973c;
    fVar1 = DAT_100a9738;
    local_14 = DAT_100a973c;
    (*DAT_100a5078)(&fStack_c);
    if (*(float *)(DAT_100a96f8 + 0xc) == _DAT_10059a18) {
      if (fVar2 - fStack_8 != *(float *)(DAT_100a9714 + 0xc)) {
        fVar5 = FUN_10021d70(fVar2,fStack_8 + *(float *)(DAT_100a9714 + 0xc));
        local_14 = (float)fVar5;
      }
      fVar5 = (float10)fVar1;
      if (fVar5 - (float10)fStack_c != (float10)*(float *)(DAT_100a9784 + 0xc)) {
        fVar5 = FUN_10021d70(fVar1,fStack_c + *(float *)(DAT_100a9784 + 0xc));
      }
    }
    else {
      local_14 = fStack_8 + *(float *)(DAT_100a9714 + 0xc);
      fVar5 = (float10)fStack_c + (float10)*(float *)(DAT_100a9784 + 0xc);
    }
    DAT_100a9738 = (float)fVar5;
    DAT_100a973c = local_14;
    DAT_100a9740 = local_28;
  }
  return;
}

