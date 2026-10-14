
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_100442d0(void *param_1,int *param_2)

{
  int iVar1;
  bool bVar2;
  undefined3 extraout_var;
  int iVar3;
  undefined3 extraout_var_00;
  float10 fVar4;
  undefined4 uStack_4;
  
  if (*param_2 != 1) {
    FUN_10008360(param_1,0,0.0);
    FUN_10005140(param_1,param_2);
    return;
  }
  if (*DAT_10122044 < *(float *)((int)param_1 + 0x318)) {
    bVar2 = FUN_10019450((uint *)((int)param_1 + 0x310));
    if (CONCAT31(extraout_var,bVar2) != 0) {
      iVar1 = *(int *)((int)param_1 + 4);
      iVar3 = FUN_10019460((uint *)((int)param_1 + 0x310));
      iVar3 = *(int *)(iVar3 + 4);
      fVar4 = FUN_10060520((int)param_1,*(float *)(iVar3 + 8) - *(float *)(iVar1 + 8),
                           *(float *)(iVar3 + 0xc) - *(float *)(iVar1 + 0xc),
                           *(float *)(iVar3 + 0x10) - *(float *)(iVar1 + 0x10));
      fVar4 = fVar4 - (float10)*(float *)(*(int *)((int)param_1 + 4) + 0x54);
      uStack_4 = (float)fVar4;
      if ((float10)_DAT_100ddaec < fVar4) {
        uStack_4 = uStack_4 - _DAT_100ddae8;
      }
      if (uStack_4 < _DAT_100de530) {
        uStack_4 = uStack_4 + _DAT_100ddae8;
      }
      goto LAB_1004444e;
    }
  }
  bVar2 = FUN_10019450((uint *)((int)param_1 + 0x308));
  if ((CONCAT31(extraout_var_00,bVar2) == 0) ||
     (iVar1 = *(int *)((int)param_1 + 4), *(int *)(iVar1 + 0x128) != 0)) {
    uStack_4 = 0.0;
  }
  else {
    iVar3 = FUN_10019460((uint *)((int)param_1 + 0x308));
    iVar3 = *(int *)(iVar3 + 4);
    fVar4 = FUN_10060520((int)param_1,*(float *)(iVar3 + 8) - *(float *)(iVar1 + 8),
                         *(float *)(iVar3 + 0xc) - *(float *)(iVar1 + 0xc),
                         *(float *)(iVar3 + 0x10) - *(float *)(iVar1 + 0x10));
    fVar4 = fVar4 - (float10)*(float *)(*(int *)((int)param_1 + 4) + 0x54);
    uStack_4 = (float)fVar4;
    if ((float10)_DAT_100ddaec < fVar4) {
      uStack_4 = uStack_4 - _DAT_100ddae8;
    }
    if (uStack_4 < _DAT_100de530) {
      uStack_4 = uStack_4 + _DAT_100ddae8;
    }
  }
LAB_1004444e:
  FUN_10008360(param_1,0,uStack_4);
  FUN_10005140(param_1,param_2);
  return;
}

