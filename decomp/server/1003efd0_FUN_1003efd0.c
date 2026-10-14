
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1003efd0(float param_1,float param_2,float param_3,float param_4,float param_5,
                 float param_6,undefined4 param_7,undefined4 param_8,float param_9,int param_10)

{
  float fVar1;
  int *piVar2;
  int iVar3;
  float *pfVar4;
  void *this;
  float10 fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fStack_b0;
  float local_ac;
  float local_a8;
  float local_a4;
  float local_a0;
  float local_9c;
  float local_98;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  float local_78;
  float fStack_74;
  float fStack_70;
  int local_6c;
  float fStack_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  undefined1 auStack_50 [16];
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  int iStack_20;
  float afStack_c [3];
  
  local_a8 = param_2 + param_5;
  local_a4 = param_3 + param_6;
  local_a0 = (param_4 + param_1) * _DAT_100dd614;
  local_9c = local_a8 * _DAT_100dd614;
  local_98 = local_a4 * _DAT_100dd614;
  fVar1 = SQRT((param_1 - local_a0) * (param_1 - local_a0) +
               (param_2 - local_9c) * (param_2 - local_9c) +
               (param_3 - local_98) * (param_3 - local_98));
  FUN_10001d60(&local_ac,param_4 - param_1,param_5 - param_2,param_6 - param_3);
  fVar5 = FUN_1000a9b0(&local_ac);
  if (fVar5 == (float10)_DAT_100dd5f8) {
    fVar8 = 1.0;
    fVar7 = 0.0;
    fVar6 = 0.0;
  }
  else {
    fVar5 = (float10)_DAT_100dd618 / fVar5;
    fVar8 = (float)((float10)local_a4 * fVar5);
    fVar7 = (float)((float10)local_a8 * fVar5);
    fVar6 = (float)((float10)local_ac * fVar5);
  }
  FUN_10001d60(&local_78,fVar6,fVar7,fVar8);
  piVar2 = (int *)FUN_100aeba0(0,&local_a0,fVar1);
  do {
    if (piVar2 == (int *)0x0) {
      return;
    }
    if ((*(float *)(piVar2[1] + 0x16c) != _DAT_100dd5f8) &&
       ((param_10 == 0 || (iVar3 = (**(code **)(*piVar2 + 0x4c))(), iVar3 != param_10)))) {
      pfVar4 = (float *)(**(code **)(*piVar2 + 0x104))();
      fStack_84 = *pfVar4;
      fStack_80 = pfVar4[1];
      fStack_7c = pfVar4[2];
      FUN_10001d60(&fStack_68,fStack_84 - local_a0,fStack_80 - local_9c,fStack_7c - local_98);
      fVar8 = fStack_68 * local_78 + fStack_64 * fStack_74 + fStack_60 * fStack_70;
      fStack_b0 = fVar1;
      if ((fVar8 <= fVar1) && (fStack_b0 = fVar8, fVar8 < -fVar1)) {
        fStack_b0 = fVar1;
      }
      FUN_10002280(&local_78,&fStack_5c,fStack_b0);
      FUN_10001d60(&local_ac,fStack_5c + local_a0,fStack_58 + local_9c,fStack_54 + local_98);
      FUN_100afc60(&local_ac,&fStack_84,0,*(undefined4 *)(*(int *)(local_6c + 4) + 0x208),auStack_50
                  );
      if ((fStack_40 == (float)_DAT_100dd628) || (iStack_20 == *(int *)(piVar2[1] + 0x208))) {
        FUN_10001d60(&fStack_90,local_ac - fStack_3c,local_a8 - fStack_38,local_a4 - fStack_34);
        fVar8 = SQRT(fStack_90 * fStack_90 + fStack_8c * fStack_8c + fStack_88 * fStack_88);
        if (fVar8 <= _DAT_100ddb10) {
          fStack_94 = param_9;
        }
        else {
          fStack_94 = param_9 - (fVar8 - _DAT_100ddb10) * (float)_DAT_100df2a8;
          if (fStack_94 <= _DAT_100dd5f8) goto LAB_1003f3b5;
        }
        if (fStack_40 == (float)_DAT_100dd628) {
          (**(code **)(*piVar2 + 0x60))();
        }
        else {
          FUN_100b2bd0();
          iVar3 = *piVar2;
          pfVar4 = (float *)&stack0xffffff28;
          this = (void *)FUN_10002250(&fStack_3c,afStack_c,&local_ac);
          FUN_1001fdd0(this,pfVar4);
          (**(code **)(iVar3 + 0x5c))(param_7,fStack_94);
          FUN_100b2bf0(param_7,param_8);
        }
      }
    }
LAB_1003f3b5:
    piVar2 = (int *)FUN_100aeba0((int)piVar2,&local_a0,fVar1);
  } while( true );
}

