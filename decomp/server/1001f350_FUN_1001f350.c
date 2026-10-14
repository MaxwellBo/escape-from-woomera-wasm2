
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_1001f350(void *this,int param_1,int param_2,float param_3,uint param_4)

{
  float fVar1;
  bool bVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  float *pfVar6;
  undefined3 extraout_var;
  uint uVar7;
  undefined3 extraout_var_00;
  float10 fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fStack_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  undefined1 auStack_18 [8];
  undefined1 auStack_10 [16];
  
  if (*(float *)(*(int *)((int)this + 4) + 0x16c) == _DAT_100dd5f8) {
    return 0;
  }
  iVar3 = (**(code **)(*(int *)this + 0xb8))();
  if (iVar3 == 0) {
    uVar4 = FUN_1001f8e0(this,param_1,param_2,param_3,param_4);
    return uVar4;
  }
  if (*(int *)(*(int *)((int)this + 4) + 0x170) == 0) {
    (**(code **)(*(int *)this + 0x224))();
  }
  *(uint *)((int)this + 0x2c0) = *(uint *)((int)this + 0x2c0) | param_4;
  fStack_30 = 0.0;
  fStack_2c = 0.0;
  fStack_28 = 0.0;
  fStack_3c = 0.0;
  fStack_38 = 0.0;
  fStack_34 = 0.0;
  if ((((param_1 != 0) && (iVar3 = (*DAT_10121f20)(*(undefined4 *)(param_1 + 0x208)), iVar3 != 0))
      && ((iVar3 = *(int *)(param_1 + 0x208), iVar3 != 0 || (iVar3 = (*DAT_10121f1c)(0), iVar3 != 0)
          ))) && (*(int **)(iVar3 + 0x7c) != (int *)0x0)) {
    puVar5 = (undefined4 *)(**(code **)(**(int **)(iVar3 + 0x7c) + 0xf8))(auStack_18);
    fStack_28 = (float)*puVar5;
    fStack_24 = (float)puVar5[1];
    fStack_20 = (float)puVar5[2] - _DAT_100dd63c;
    pfVar6 = (float *)(**(code **)(*(int *)this + 0xf8))(auStack_10);
    fVar9 = fStack_24 - *pfVar6;
    fStack_2c = fStack_20 - pfVar6[1];
    fStack_28 = fStack_1c - pfVar6[2];
    fVar1 = SQRT(fVar9 * fVar9 + fStack_2c * fStack_2c + fStack_28 * fStack_28);
    if (fVar1 == _DAT_100dd5f8) {
      fVar11 = 1.0;
      fVar10 = 0.0;
      fVar9 = 0.0;
    }
    else {
      fVar1 = _DAT_100dd618 / fVar1;
      fVar11 = fStack_28 * fVar1;
      fVar10 = fStack_2c * fVar1;
      fVar9 = fVar9 * fVar1;
    }
    FUN_10001d60(&fStack_48,fVar9,fVar10,fVar11);
    fVar9 = SQRT(fStack_40 * fStack_40 + fStack_44 * fStack_44 + fStack_48 * fStack_48);
    if (fVar9 == _DAT_100dd5f8) {
      fStack_40 = 1.0;
      fStack_44 = 0.0;
      fStack_48 = 0.0;
    }
    else {
      fVar9 = _DAT_100dd618 / fVar9;
      fStack_40 = fStack_40 * fVar9;
      fStack_44 = fStack_44 * fVar9;
      fStack_48 = fStack_48 * fVar9;
    }
    FUN_10001d60(&fStack_24,fStack_48,fStack_44,fStack_40);
    _DAT_10121df8 = fStack_24;
    _DAT_10121dfc = fStack_20;
    _DAT_10121e00 = fStack_1c;
    fStack_3c = fStack_24;
    fStack_38 = fStack_20;
    fStack_34 = fStack_1c;
  }
  iVar3 = (**(code **)(*(int *)this + 0xcc))();
  if (iVar3 != 0) {
    if (param_1 != 0) {
      *(undefined4 *)(*(int *)((int)this + 4) + 0x18c) = *(undefined4 *)(param_1 + 0x208);
    }
    *(float *)(*(int *)((int)this + 4) + 0x1d8) =
         param_3 + *(float *)(*(int *)((int)this + 4) + 0x1d8);
    if ((*(byte *)(*(int *)((int)this + 4) + 0x1a4) & 0x40) != 0) {
      return 0;
    }
  }
  if ((((param_1 != 0) && (iVar3 = (*DAT_10121f20)(*(undefined4 *)(param_1 + 0x208)), iVar3 != 0))
      && (*(int *)(*(int *)((int)this + 4) + 0x108) == 3)) &&
     ((param_2 == 0 || (*(int *)(param_2 + 0x10c) != 1)))) {
    fVar8 = FUN_1001faf0((int)this,param_3);
    fVar8 = -fVar8;
    iVar3 = *(int *)((int)this + 4);
    fStack_30 = (float)(fVar8 * (float10)fStack_3c);
    fStack_2c = (float)((float10)fStack_38 * fVar8);
    fStack_24 = fStack_30 + *(float *)(iVar3 + 0x20);
    fStack_20 = fStack_2c + *(float *)(iVar3 + 0x24);
    *(float *)(iVar3 + 0x20) = fStack_24;
    *(float *)(iVar3 + 0x24) = fStack_20;
    fStack_1c = (float)(fVar8 * (float10)fStack_34 + (float10)*(float *)(iVar3 + 0x28));
    *(float *)(iVar3 + 0x28) = fStack_1c;
  }
  *(float *)(*(int *)((int)this + 4) + 0x160) =
       *(float *)(*(int *)((int)this + 4) + 0x160) - param_3;
  if (*(int *)((int)this + 0x1d8) == 6) {
    *(uint *)((int)this + 0x15c) = *(uint *)((int)this + 0x15c) | 0x100;
    return 0;
  }
  if (*(float *)(*(int *)((int)this + 4) + 0x160) <= _DAT_100dd5f8) {
    DAT_1012484c = param_1;
    if ((param_4 & 0x2000) == 0) {
      if ((param_4 & 0x1000) != 0) {
        (**(code **)(*(int *)this + 0x68))(param_2,1);
        DAT_1012484c = 0;
        return 0;
      }
      iVar3 = *(int *)this;
      uVar4 = 0;
    }
    else {
      iVar3 = *(int *)this;
      uVar4 = 2;
    }
    (**(code **)(iVar3 + 0x68))(param_2,uVar4);
    DAT_1012484c = 0;
    return 0;
  }
  if ((*(byte *)(*(int *)((int)this + 4) + 0x1a4) & 0x20) == 0) {
    return 1;
  }
  if (param_2 == 0) {
    return 1;
  }
  iVar3 = (*DAT_10121f20)(*(undefined4 *)(param_2 + 0x208));
  if (iVar3 == 0) {
    return 1;
  }
  if ((*(byte *)(param_2 + 0x1a4) & 8) == 0) goto LAB_1001f7a7;
  if (*(int *)((int)this + 0x304) == 2) {
LAB_1001f799:
    uVar7 = *(uint *)((int)this + 0x2a0) | 1;
  }
  else {
    if ((*(int *)((int)this + 0x304) != 3) ||
       (bVar2 = FUN_10019450((uint *)((int)this + 0x160)), CONCAT31(extraout_var,bVar2) != 0))
    goto LAB_1001f7a7;
    if (((*(byte *)((int)this + 0x2a0) & 4) != 0) ||
       (iVar3 = FUN_100b0790(param_2,(float *)(*(int *)((int)this + 4) + 8)), iVar3 != 0))
    goto LAB_1001f799;
    uVar7 = *(uint *)((int)this + 0x2a0) | 4;
  }
  *(uint *)((int)this + 0x2a0) = uVar7;
LAB_1001f7a7:
  if ((*(byte *)(param_2 + 0x1a4) & 0x28) != 0) {
    if (param_1 == 0) {
      fStack_2c = _DAT_10121dfc * _DAT_100ddb10;
      iVar3 = *(int *)((int)this + 4);
      fStack_28 = _DAT_10121e00 * _DAT_100ddb10;
      fStack_24 = _DAT_10121df8 * _DAT_100ddb10 + *(float *)(iVar3 + 8);
      fStack_20 = fStack_2c + *(float *)(iVar3 + 0xc);
      fStack_1c = fStack_28 + *(float *)(iVar3 + 0x10);
      *(float *)((int)this + 0x2a8) = fStack_24;
      *(float *)((int)this + 0x2ac) = fStack_20;
      *(float *)((int)this + 0x2b0) = fStack_1c;
    }
    else {
      bVar2 = FUN_10019450((uint *)((int)this + 0x160));
      if (((CONCAT31(extraout_var_00,bVar2) == 0) ||
          (iVar3 = FUN_10019460((uint *)((int)this + 0x160)), param_1 == *(int *)(iVar3 + 4))) ||
         ((*(byte *)((int)this + 0x15c) & 0x10) == 0)) {
        *(undefined4 *)((int)this + 0x2a8) = *(undefined4 *)(param_1 + 8);
        *(undefined4 *)((int)this + 0x2ac) = *(undefined4 *)(param_1 + 0xc);
        *(undefined4 *)((int)this + 0x2b0) = *(undefined4 *)(param_1 + 0x10);
      }
    }
    FUN_10060260(this,*(float *)((int)this + 0x2a8),*(float *)((int)this + 0x2ac),
                 *(float *)((int)this + 0x2b0));
    if (_DAT_100dd5f8 < param_3) {
      *(uint *)((int)this + 0x15c) = *(uint *)((int)this + 0x15c) | 0x100;
    }
    if (_DAT_100ddacc <= param_3) {
      *(uint *)((int)this + 0x15c) = *(uint *)((int)this + 0x15c) | 0x200;
    }
    return 1;
  }
  return 1;
}

