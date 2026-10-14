
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_10096a90(void *this,int param_1)

{
  float fVar1;
  bool bVar2;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  int *piVar3;
  undefined4 uVar4;
  void *pvVar5;
  int iVar6;
  int iVar7;
  uint *puVar8;
  float *pfVar9;
  int unaff_retaddr;
  void *pvStack_80;
  float local_78 [2];
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  float fStack_50;
  undefined1 auStack_4c [4];
  undefined1 local_48 [16];
  undefined1 auStack_38 [4];
  undefined1 local_34 [16];
  undefined1 auStack_24 [4];
  undefined1 local_20 [16];
  undefined4 auStack_10 [4];
  
  if ((param_1 == 0) &&
     (bVar2 = FUN_10019450((uint *)((int)this + 0x308)), CONCAT31(extraout_var,bVar2) == 0)) {
    return 1;
  }
  FUN_10073f20((int)local_34);
  FUN_10073f20((int)local_20);
  FUN_10073f20((int)local_48);
  bVar2 = FUN_10019450((uint *)((int)this + 0x160));
  if (CONCAT31(extraout_var_00,bVar2) == 0) {
    return 0;
  }
  piVar3 = (int *)FUN_10019460((uint *)((int)this + 0x160));
  (**(code **)(*piVar3 + 0xf8))(local_78);
  uVar4 = FUN_100ae830(auStack_10,&stack0xffffff74);
  FUN_100af200(uVar4);
  iVar7 = *(int *)((int)this + 4);
  fVar1 = *(float *)(iVar7 + 0xf4) * (float)_DAT_100dd650;
  pfVar9 = (float *)(DAT_10122044 + 0x40);
  fStack_64 = *(float *)(iVar7 + 8) - fVar1 * *pfVar9;
  fStack_60 = *(float *)(iVar7 + 0xc) - fVar1 * *(float *)(DAT_10122044 + 0x44);
  fStack_5c = *(float *)(iVar7 + 0x10) - fVar1 * *(float *)(DAT_10122044 + 0x48);
  fVar1 = *(float *)(iVar7 + 0xf4) * (float)_DAT_100dd650;
  local_78[0] = fVar1 * *(float *)(DAT_10122044 + 0x44);
  fStack_70 = fVar1 * *pfVar9 + *(float *)(iVar7 + 8);
  fStack_6c = local_78[0] + *(float *)(iVar7 + 0xc);
  fStack_68 = fVar1 * *(float *)(DAT_10122044 + 0x48) + *(float *)(iVar7 + 0x10);
  fStack_58 = *pfVar9 * _DAT_100df2b0;
  fStack_54 = *(float *)(DAT_10122044 + 0x44) * _DAT_100df2b0;
  fStack_50 = *(float *)(DAT_10122044 + 0x48) * _DAT_100df2b0;
  FUN_10073f30(auStack_24,pfVar9,&fStack_64);
  FUN_10073f30(auStack_4c,&fStack_58,&fStack_70);
  FUN_10073f30(auStack_38,(float *)(DAT_10122044 + 0x28),(float *)(*(int *)((int)this + 4) + 8));
  pvStack_80 = (void *)FUN_10019410((uint *)((int)this + 0x308));
  if (pvStack_80 == (void *)0x0) {
    pvStack_80 = this;
  }
  iVar7 = 0;
  puVar8 = (uint *)((int)pvStack_80 + 0x310);
  while( true ) {
    pvVar5 = pvStack_80;
    if (iVar7 < 4) {
      pvVar5 = (void *)FUN_10019410(puVar8);
    }
    if ((((pvVar5 != (void *)0x0) && (pvVar5 != this)) &&
        (iVar6 = FUN_10073f70(auStack_38,(float *)(*(int *)((int)pvVar5 + 4) + 8)), iVar6 != 0)) &&
       ((iVar6 = FUN_10073f70(auStack_24,(float *)(*(int *)((int)pvVar5 + 4) + 8)), iVar6 != 0 &&
        (iVar6 = FUN_10073f70(auStack_4c,(float *)(*(int *)((int)pvVar5 + 4) + 8)), iVar6 != 0))))
    break;
    iVar7 = iVar7 + 1;
    puVar8 = puVar8 + 2;
    if (4 < iVar7) {
      if (((unaff_retaddr != 0) &&
          (iVar7 = (*DAT_10121e4c)(*(undefined4 *)(*(int *)((int)this + 4) + 0x208)), iVar7 != 0))
         && (iVar6 = (*DAT_10121f20)(iVar7), iVar6 != 0)) {
        pfVar9 = (float *)(iVar7 + 0x88);
        iVar7 = FUN_10073f70(auStack_38,pfVar9);
        if (((iVar7 != 0) && (iVar7 = FUN_10073f70(auStack_24,pfVar9), iVar7 != 0)) &&
           (iVar7 = FUN_10073f70(auStack_4c,pfVar9), iVar7 != 0)) {
          return 0;
        }
      }
      return 1;
    }
  }
  return 0;
}

