
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_100342e0(void *this,float *param_1,float *param_2)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  float10 fVar4;
  float in_stack_ffffff64;
  float in_stack_ffffff68;
  float in_stack_ffffff6c;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined4 uVar9;
  float local_68;
  float local_64;
  float local_60;
  float local_58;
  float local_54;
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  int local_38 [5];
  float afStack_24 [7];
  int local_8;
  
  local_44 = *param_2 * _DAT_100de9b8 + *param_1;
  local_40 = param_2[1] * _DAT_100de9b8 + param_1[1];
  local_3c = param_2[2] * _DAT_100de9b8 + param_1[2];
  local_4c = DAT_10122044[0x11] * _DAT_100ddad4;
  local_48 = DAT_10122044[0x12] * _DAT_100ddad4;
  local_58 = DAT_10122044[0xe] * _DAT_100e4120 + param_1[1];
  local_54 = DAT_10122044[0xf] * _DAT_100e4120 + param_1[2];
  local_68 = DAT_10122044[0xd] * _DAT_100e4120 + *param_1 + DAT_10122044[0x10] * _DAT_100ddad4;
  local_64 = local_58 + local_4c;
  local_60 = local_54 + local_48;
  FUN_100afc60(param_1,&local_44,0,*(undefined4 *)(*(int *)(*(int *)((int)this + 0xdc) + 4) + 0x208)
               ,local_38);
  if (local_38[0] != 0) {
    return;
  }
  if ((local_8 == 0) && (local_8 = (*DAT_10121f1c)(), local_8 == 0)) {
    return;
  }
  piVar1 = *(int **)(local_8 + 0x7c);
  if (piVar1 == (int *)0x0) {
    return;
  }
  iVar2 = (**(code **)(*DAT_10121db8 + 0x18))();
  if ((iVar2 != 0) && (iVar2 = *(int *)((int)this + 300), iVar2 != 0)) {
    if (*(float *)(piVar1[1] + 0x16c) == _DAT_100dd5f8) {
      if (iVar2 == 0) goto LAB_1003445a;
      iVar2 = *(int *)(iVar2 + 4);
      uVar3 = *(uint *)(iVar2 + 0x118) | 0x80;
    }
    else {
      iVar2 = *(int *)(iVar2 + 4);
      uVar3 = *(uint *)(iVar2 + 0x118) & 0xffffff7f;
    }
    *(uint *)(iVar2 + 0x118) = uVar3;
  }
LAB_1003445a:
  if (*(int *)((int)this + 0x138) != 0) {
    if (*(int *)((int)this + 0x138) != 1) goto LAB_10034772;
    if (*(float *)(*(int *)((int)this + 4) + 0x1e4) < *DAT_10122044) {
      FUN_100b2bd0();
      if (*(float *)(piVar1[1] + 0x16c) != _DAT_100dd5f8) {
        iVar2 = *piVar1;
        FUN_10003850(&stack0xffffff74,param_2);
        in_stack_ffffff6c = *(float *)(*(int *)((int)this + 0xdc) + 4);
        in_stack_ffffff68 = 2.5888218e-29;
        (**(code **)(iVar2 + 0x5c))();
      }
      uVar9 = *(undefined4 *)(*(int *)((int)this + 0xdc) + 4);
      FUN_100b2bf0(uVar9,uVar9);
      iVar2 = (**(code **)(*DAT_10121db8 + 0x18))();
      if (iVar2 != 0) {
        fVar7 = DAT_10126b44 * _DAT_100dd5e8;
        fVar5 = *(float *)((int)this + 4);
        uVar9 = 0x2440;
        iVar2 = 0;
        fVar8 = 128.0;
        fVar6 = *(float *)(*(int *)((int)this + 0xdc) + 4);
        FUN_10003850(&stack0xffffff64,afStack_24);
        FUN_1001fb30(in_stack_ffffff64,in_stack_ffffff68,in_stack_ffffff6c,fVar5,fVar6,fVar7,fVar8,
                     iVar2,uVar9);
      }
      iVar2 = (**(code **)(**(int **)((int)this + 0xdc) + 0xb8))();
      if (iVar2 == 0) {
        return;
      }
      iVar2 = (**(code **)(*DAT_10121db8 + 0x18))();
      if (iVar2 == 0) {
        if (*(float *)((int)this + 0x120) <= *DAT_10122044) {
          FUN_10034030(this,1);
          fVar5 = *DAT_10122044 + (float)_DAT_100dfb80;
          goto LAB_100345b5;
        }
      }
      else if (*(float *)((int)this + 0x120) <= *DAT_10122044) {
        FUN_10034030(this,1);
        fVar5 = *DAT_10122044 + (float)_DAT_100dd608;
LAB_100345b5:
        *(float *)((int)this + 0x120) = fVar5;
      }
      fVar4 = FUN_10034000();
      *(float *)(*(int *)((int)this + 4) + 0x1e4) = (float)(fVar4 + (float10)*DAT_10122044);
      if (*(float *)((int)this + 0x13c) < *DAT_10122044) {
        FUN_100af360(afStack_24,5.0,0x43160000,0x3f400000,250.0);
        *(float *)((int)this + 0x13c) = *DAT_10122044 + (float)_DAT_100dd650;
      }
    }
    FUN_10034000();
    goto LAB_10034772;
  }
  if (*(float *)(*(int *)((int)this + 4) + 0x1e4) < *DAT_10122044) {
    FUN_100b2bd0();
    if (*(float *)(piVar1[1] + 0x16c) != _DAT_100dd5f8) {
      iVar2 = *piVar1;
      FUN_10003850(&stack0xffffff74,param_2);
      (**(code **)(iVar2 + 0x5c))();
    }
    uVar9 = *(undefined4 *)(*(int *)((int)this + 0xdc) + 4);
    FUN_100b2bf0(uVar9,uVar9);
    iVar2 = (**(code **)(*DAT_10121db8 + 0x18))();
    if (iVar2 == 0) {
      if (*(float *)((int)this + 0x120) <= *DAT_10122044) {
        FUN_10034030(this,1);
        fVar5 = *DAT_10122044 + (float)_DAT_100e4118;
        goto LAB_10034725;
      }
    }
    else if (*(float *)((int)this + 0x120) <= *DAT_10122044) {
      FUN_10034030(this,1);
      fVar5 = *DAT_10122044 + (float)_DAT_100dfb80;
LAB_10034725:
      *(float *)((int)this + 0x120) = fVar5;
    }
    fVar4 = FUN_10033ff0();
    *(float *)(*(int *)((int)this + 4) + 0x1e4) = (float)(fVar4 + (float10)*DAT_10122044);
  }
  FUN_10033ff0();
LAB_10034772:
  FUN_100347d0(this,&local_68,afStack_24);
  return;
}

