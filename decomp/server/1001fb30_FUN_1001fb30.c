
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
FUN_1001fb30(float param_1,float param_2,float param_3,float param_4,float param_5,float param_6,
            float param_7,int param_8,undefined4 param_9)

{
  float fVar1;
  int iVar2;
  float *pfVar3;
  int iVar4;
  undefined4 *puVar5;
  void *this;
  float fVar6;
  float *pfVar7;
  float local_64;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  float afStack_44 [3];
  undefined1 auStack_38 [4];
  int iStack_34;
  float fStack_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  int iStack_8;
  
  if (param_7 == _DAT_100dd5f8) {
    local_64 = 1.0;
  }
  else {
    local_64 = param_6 / param_7;
  }
  iVar2 = FUN_100b01e0(&param_1);
  fVar1 = param_4;
  param_3 = param_3 + _DAT_100dd618;
  fVar6 = param_5;
  if (param_5 == 0.0) {
    fVar6 = param_4;
  }
  pfVar3 = (float *)FUN_100aeba0(0,&param_1,param_7);
  do {
    if (pfVar3 == (float *)0x0) {
      return;
    }
    if ((*(float *)((int)pfVar3[1] + 0x16c) != _DAT_100dd5f8) &&
       ((param_8 == 0 || (iVar4 = (**(code **)((int)*pfVar3 + 0x4c))(), iVar4 != param_8)))) {
      if (iVar2 == -3) {
        if (*(int *)((int)pfVar3[1] + 0x1c0) != 0) {
LAB_1001fc2b:
          puVar5 = (undefined4 *)(**(code **)((int)*pfVar3 + 0x104))();
          uStack_5c = *puVar5;
          uStack_58 = puVar5[1];
          uStack_54 = puVar5[2];
          FUN_100afc60(&param_1,&uStack_5c,0,*(undefined4 *)((int)fVar1 + 0x208),auStack_38);
          if ((fStack_28 == (float)_DAT_100dd628) || (iStack_8 == *(int *)((int)pfVar3[1] + 0x208)))
          {
            if (iStack_34 != 0) {
              fStack_24 = param_1;
              fStack_20 = param_2;
              fStack_1c = param_3;
              fStack_28 = 0.0;
            }
            param_5 = param_6 - SQRT((param_1 - fStack_24) * (param_1 - fStack_24) +
                                     (param_2 - fStack_20) * (param_2 - fStack_20) +
                                     (param_3 - fStack_1c) * (param_3 - fStack_1c)) * local_64;
            if (param_5 < _DAT_100dd5f8) {
              param_5 = 0.0;
            }
            if (fStack_28 == (float)_DAT_100dd628) {
              (**(code **)((int)*pfVar3 + 0x60))();
            }
            else {
              FUN_100b2bd0();
              param_4 = *pfVar3;
              pfVar7 = (float *)&stack0xffffff78;
              this = (void *)FUN_10002250(&fStack_24,afStack_44,&param_1);
              FUN_1001fdd0(this,pfVar7);
              (**(code **)((int)param_4 + 0x5c))(fVar1,param_5);
              FUN_100b2bf0(fVar1,fVar6);
            }
          }
        }
      }
      else if (*(int *)((int)pfVar3[1] + 0x1c0) != 3) goto LAB_1001fc2b;
    }
    pfVar3 = (float *)FUN_100aeba0((int)pfVar3,&param_1,param_7);
  } while( true );
}

