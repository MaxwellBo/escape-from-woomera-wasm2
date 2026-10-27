
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_100a1b30(void *this,int *param_1,int param_2,int param_3)

{
  float fVar1;
  int iVar2;
  undefined1 *puVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  float10 fVar7;
  longlong lVar8;
  float local_4;
  
  local_4 = 1.0;
  iVar2 = param_1[1];
  puVar3 = *(undefined1 **)(*(int *)((int)this + 4) + 0x1d4);
  if ((puVar3 != (undefined1 *)0x0) && ((*(byte *)(*(int *)((int)this + 4) + 0x1a0) & 2) == 0)) {
    fVar7 = FUN_100588f0(puVar3,param_3,puVar3 + DAT_10122044[0x26]);
    local_4 = (float)fVar7;
  }
  if ((*(byte *)(*(int *)((int)this + 4) + 0x1a0) & 1) == 0) {
    *(undefined4 *)(iVar2 + 0x15c) = *(undefined4 *)(*(int *)((int)this + 4) + 0x15c);
  }
  if ((*(byte *)(*(int *)((int)this + 4) + 0x1a0) & 4) == 0) {
    if (((*(float *)(*(int *)((int)this + 4) + 0x164) != _DAT_100dd5f8) &&
        (*(float *)(iVar2 + 0x14c) == _DAT_100dd5f8)) && (*(int *)(iVar2 + 0x148) == 0)) {
      *(undefined4 *)(iVar2 + 0x14c) = 0x437f0000;
    }
    *(undefined4 *)(iVar2 + 0x148) = *(undefined4 *)(*(int *)((int)this + 4) + 0x148);
  }
  iVar5 = *(int *)((int)this + 4);
  if (*(float *)(iVar5 + 0x164) == _DAT_100dd5f8) {
    if ((*(byte *)(iVar5 + 0x1a0) & 2) == 0) {
      *(float *)(iVar2 + 0x14c) = local_4 * *(float *)(iVar5 + 0x14c);
    }
    iVar5 = *(int *)((int)this + 4);
    if ((*(byte *)(iVar5 + 0x1a0) & 8) == 0) {
      *(undefined4 *)(iVar2 + 0x150) = *(undefined4 *)(iVar5 + 0x150);
      *(undefined4 *)(iVar2 + 0x154) = *(undefined4 *)(iVar5 + 0x154);
      *(undefined4 *)(iVar2 + 0x158) = *(undefined4 *)(iVar5 + 0x158);
    }
    if (*(float *)(*(int *)((int)this + 4) + 0x144) != _DAT_100dd5f8) {
      *(undefined4 *)(iVar2 + 0x144) = *(undefined4 *)(*(int *)((int)this + 4) + 0x144);
    }
    if (param_2 != 0) {
      FUN_10098c10((uint *)(*(int *)(*(int *)((int)this + 4) + 0x1d0) + DAT_10122044[0x26]),param_1,
                   this,3,0);
      return;
    }
  }
  else {
    iVar5 = (*DAT_10121e5c)();
    if (iVar5 == 0) {
      iVar5 = 0;
    }
    else {
      iVar5 = iVar5 + 0x80;
    }
    iVar4 = *(int *)(iVar5 + 0x208);
    if ((iVar4 == 0) || (piVar6 = *(int **)(iVar4 + 0x7c), piVar6 == (int *)0x0)) {
      piVar6 = (int *)(*DAT_10121f04)(iVar4,0xf8);
      if (piVar6 == (int *)0x0) {
        piVar6 = (int *)0x0;
      }
      else {
        *piVar6 = (int)&PTR_FUN_100f31a8;
      }
      piVar6[1] = iVar5;
    }
    FUN_10019420(piVar6 + 0x3b,(int)param_1);
    lVar8 = __ftol();
    piVar6[0x31] = (int)lVar8;
    piVar6[0x33] = (int)*(float *)(iVar2 + 0x150);
    piVar6[0x34] = *(int *)(iVar2 + 0x154);
    piVar6[0x35] = *(int *)(iVar2 + 0x158);
    fVar1 = *(float *)(iVar2 + 0x144);
    piVar6[0x39] = (int)fVar1;
    if (fVar1 == _DAT_100dd5f8) {
      piVar6[0x39] = 0x3f800000;
    }
    *(undefined4 *)(piVar6[1] + 0x1a0) = *(undefined4 *)(*(int *)((int)this + 4) + 0x1a0);
    if (param_2 != 0) {
      *(undefined4 *)(piVar6[1] + 0x1c8) = *(undefined4 *)(*(int *)((int)this + 4) + 0x1d0);
    }
    if ((*(byte *)(*(int *)((int)this + 4) + 0x1a0) & 2) == 0) {
      lVar8 = __ftol();
      piVar6[0x32] = (int)lVar8;
    }
    else {
      piVar6[0x32] = 0;
    }
    if ((*(byte *)(*(int *)((int)this + 4) + 0x1a0) & 8) == 0) {
      piVar6[0x36] = (int)(*(float *)(*(int *)((int)this + 4) + 0x150) - *(float *)(iVar2 + 0x150));
      piVar6[0x37] = (int)(*(float *)(*(int *)((int)this + 4) + 0x154) - *(float *)(iVar2 + 0x154));
      piVar6[0x38] = (int)(*(float *)(*(int *)((int)this + 4) + 0x158) - *(float *)(iVar2 + 0x158));
    }
    else {
      piVar6[0x36] = DAT_10121dd8;
      piVar6[0x37] = DAT_10121ddc;
      piVar6[0x38] = DAT_10121de0;
    }
    if (*(float *)(*(int *)((int)this + 4) + 0x144) == _DAT_100dd5f8) {
      piVar6[0x3a] = 0;
    }
    else {
      piVar6[0x3a] = (int)(*(float *)(*(int *)((int)this + 4) + 0x144) - *(float *)(iVar2 + 0x144));
    }
    piVar6[0x2e] = *DAT_10122044;
    piVar6[0x2f] = *(int *)(*(int *)((int)this + 4) + 0x164);
    piVar6[0x30] = *(int *)(*(int *)((int)this + 4) + 0x1bc);
    (**(code **)(*piVar6 + 8))(0);
    (**(code **)(*piVar6 + 0x28))();
  }
  return;
}

