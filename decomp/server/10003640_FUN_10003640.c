
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FUN_10003640(int *param_1,undefined4 param_2,float param_3,float param_4,float param_5,
            undefined4 param_6,int param_7,uint param_8)

{
  float fVar1;
  float fVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  float10 fVar6;
  float10 fVar7;
  undefined4 uStack_3c;
  
  uVar4 = param_8;
  iVar3 = param_7;
  if ((*(int *)(param_7 + 0x34) != 10) || ((param_8 & 0x86) == 0)) {
    (**(code **)(*param_1 + 0x6c))();
    FUN_10003850(&uStack_3c,(undefined4 *)(iVar3 + 0x14));
    FUN_100b2c80();
    param_7 = *param_1;
    FUN_10003850(&uStack_3c,&param_4);
    (**(code **)(param_7 + 0x70))(param_3);
    goto LAB_10003825;
  }
  if (*(float *)(param_1[1] + 0x1e4) == *DAT_10122044) {
    iVar5 = (*DAT_10121f70)();
    if (iVar5 < 1) goto LAB_1000368e;
  }
  else {
LAB_1000368e:
    (*DAT_10121f74)();
    FUN_100b06f0((undefined4 *)(iVar3 + 0x14));
    *(float *)(param_1[1] + 0x1e4) = *DAT_10122044;
  }
  iVar5 = (*DAT_10121f70)();
  fVar2 = param_5;
  fVar1 = param_4;
  if (iVar5 == 0) {
    fVar6 = (float10)(*DAT_10121f74)();
    uStack_3c = 0x10003717;
    fVar7 = (float10)(*DAT_10121f74)();
    uStack_3c = 0x3e99999a;
    (*DAT_10121f74)(0xbe99999a);
    fVar1 = (float)(fVar6 + (float10)fVar1) * _DAT_100ddad0;
    fVar2 = (float)(fVar7 + (float10)fVar2) * _DAT_100ddad0;
    (*DAT_10121ec0)(4,0x17,(undefined4 *)(iVar3 + 0x14),0);
    (*DAT_10121ec8)(6);
    (*DAT_10121edc)(*(undefined4 *)(iVar3 + 0x14));
    (*DAT_10121edc)(*(undefined4 *)(iVar3 + 0x18));
    (*DAT_10121edc)(*(undefined4 *)(iVar3 + 0x1c));
    (*DAT_10121edc)(fVar1);
    (*DAT_10121edc)(fVar2);
    (*DAT_10121edc)();
    (*DAT_10121ec4)();
  }
  param_3 = param_3 - _DAT_100ddacc;
  if (param_3 <= _DAT_100dd5f8) {
    param_3 = 0.1;
  }
LAB_10003825:
  uStack_3c = 0x10003836;
  FUN_100b2c20(param_2,(int)param_1,param_3,uVar4);
  return;
}

