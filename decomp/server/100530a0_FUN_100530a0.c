
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float * __thiscall FUN_100530a0(void *this,float *param_1,float *param_2)

{
  undefined4 uVar1;
  float fVar2;
  bool bVar3;
  int iVar4;
  undefined3 extraout_var;
  float10 fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float local_6c;
  float local_68;
  float local_64;
  float local_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  int local_38 [4];
  float fStack_28;
  float fStack_14;
  float fStack_10;
  float fStack_c;
  int iStack_8;
  
  local_68 = 0.0;
  local_64 = 0.0;
  local_60 = -1.0;
  iVar4 = FUN_10036210(this,(float *)(*(int *)((int)this + 4) + 8),param_2,&local_6c);
  uVar1 = *(undefined4 *)(*(int *)((int)this + 4) + 0x208);
  (*DAT_10121e8c)(uVar1,*(int *)((int)this + 4) + 8,param_2,0,uVar1,local_38);
  if ((local_38[0] != 0) || (fStack_28 < (float)_DAT_100e9ac0)) {
    if (fStack_28 < (float)_DAT_100de1e8) {
      fStack_28 = 0.0;
    }
    if ((float)_DAT_100dd628 < fStack_28) {
      fStack_28 = 1.0;
    }
    if (local_6c <= fStack_28) goto LAB_10053179;
    local_6c = fStack_28;
    local_68 = fStack_14;
    local_64 = fStack_10;
    local_60 = fStack_c;
  }
  else {
LAB_10053179:
    if (iVar4 == 0) goto LAB_100533a9;
  }
  bVar3 = FUN_10019450((uint *)((int)this + 0x160));
  if (CONCAT31(extraout_var,bVar3) != 0) {
    iVar4 = FUN_10019460((uint *)((int)this + 0x160));
    if (iStack_8 == *(int *)(*(int *)(iVar4 + 4) + 0x208)) {
LAB_100533a9:
      FUN_10001d60(param_1,0,0,0);
      return param_1;
    }
  }
  iVar4 = *(int *)((int)this + 4);
  fVar8 = *param_2 - *(float *)(iVar4 + 8);
  fVar6 = param_2[1] - *(float *)(iVar4 + 0xc);
  fVar2 = param_2[2] - *(float *)(iVar4 + 0x10);
  fStack_5c = local_60 * fVar6 - local_64 * fVar2;
  fStack_58 = fVar2 * local_68 - local_60 * fVar8;
  fVar7 = local_64 * fVar8 - fVar6 * local_68;
  fStack_50 = fStack_58 * fVar2 - fVar7 * fVar6;
  fStack_4c = fVar7 * fVar8 - fVar2 * fStack_5c;
  fStack_48 = fVar6 * fStack_5c - fStack_58 * fVar8;
  fVar5 = FUN_1000a9b0((float *)((int)this + 0x324));
  if (fVar5 == (float10)_DAT_100dd5f8) {
    fStack_5c = 0.0;
    fStack_58 = 0.0;
    fStack_54 = 1.0;
  }
  else {
    fVar5 = (float10)_DAT_100dd618 / fVar5;
    FUN_10001d60(&fStack_5c,(float)(fVar5 * (float10)*(float *)((int)this + 0x324)),
                 (float)(fVar5 * (float10)*(float *)((int)this + 0x328)),
                 (float)(fVar5 * (float10)*(float *)((int)this + 0x32c)));
  }
  fVar5 = FUN_1000a9b0(&local_68);
  if (fVar5 == (float10)_DAT_100dd5f8) {
    fVar8 = 1.0;
    fVar7 = 0.0;
    fVar6 = 0.0;
  }
  else {
    fVar5 = (float10)_DAT_100dd618 / fVar5;
    fVar8 = (float)((float10)local_60 * fVar5);
    fVar7 = (float)((float10)local_64 * fVar5);
    fVar6 = (float)(fVar5 * (float10)local_68);
  }
  FUN_10001d60(&fStack_44,fVar6,fVar7,fVar8);
  param_2 = (float *)((_DAT_100dd618 - local_6c) *
                      (fStack_44 * fStack_5c + fStack_40 * fStack_58 + fStack_3c * fStack_54) *
                     *(float *)((int)this + 0x314));
  if ((float)param_2 < (float)_DAT_100de1e8) {
    param_2 = (float *)-(float)param_2;
  }
  fVar5 = FUN_1000a9b0(&fStack_50);
  if (fVar5 == (float10)_DAT_100dd5f8) {
    fVar8 = 1.0;
    fVar7 = 0.0;
    fVar6 = 0.0;
  }
  else {
    fVar5 = (float10)_DAT_100dd618 / fVar5;
    fVar8 = (float)((float10)fStack_48 * fVar5);
    fVar7 = (float)((float10)fStack_4c * fVar5);
    fVar6 = (float)(fVar5 * (float10)fStack_50);
  }
  FUN_10001d60(&fStack_5c,fVar6,fVar7,fVar8);
  FUN_10002280(&fStack_5c,&fStack_44,(float)param_2);
  *param_1 = fStack_44;
  param_1[1] = fStack_40;
  param_1[2] = fStack_3c;
  return param_1;
}

