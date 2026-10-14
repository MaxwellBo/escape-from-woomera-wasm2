
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: void __thiscall COsprey::DyingThink(void) */

void __thiscall COsprey::DyingThink(COsprey *this)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  void *this_00;
  undefined4 uStack_58;
  
                    /* 0x726b0  86  ?DyingThink@COsprey@@QAEXXZ */
  FUN_10007fc0((int)this,0.0);
  (**(code **)(*(int *)this + 8))();
  iVar4 = *(int *)(this + 4);
  fVar1 = *(float *)(iVar4 + 0x60) * _DAT_100de480;
  fVar2 = *(float *)(iVar4 + 100) * _DAT_100de480;
  *(float *)(iVar4 + 0x5c) = *(float *)(iVar4 + 0x5c) * _DAT_100de480;
  *(float *)(iVar4 + 0x60) = fVar1;
  *(float *)(iVar4 + 100) = fVar2;
  if (*DAT_10122044 < *(float *)(this + 0x354)) {
    FUN_100af210((float *)(*(int *)(this + 4) + 0x50));
    FUN_10072da0((int)this);
    (*DAT_10121ec0)();
    (*DAT_10121ec8)();
    uStack_58 = 0x100727a6;
    (*DAT_10121f74)();
    (*DAT_10121edc)();
    (*DAT_10121f74)();
    (*DAT_10121edc)();
    (*DAT_10121f74)();
    (*DAT_10121edc)();
    (*DAT_10121ed0)();
    (*DAT_10121f70)();
    (*DAT_10121ec8)();
    (*DAT_10121ec8)();
    uStack_58 = 0x10072828;
    (*DAT_10121ec8)();
    uStack_58 = 0x1007282e;
    (*DAT_10121ec4)();
    uStack_58 = 0;
    (*DAT_10121ec0)(4,0x17,&stack0xffffffcc);
    (*DAT_10121ec8)(5);
    (*DAT_10121f74)(0xc3160000,0x43160000);
    (*DAT_10121edc)();
    (*DAT_10121f74)();
    (*DAT_10121edc)();
    (*DAT_10121f74)();
    (*DAT_10121edc)();
    (*DAT_10121ed0)();
    (*DAT_10121ec8)();
    (*DAT_10121ec8)();
    (*DAT_10121ec4)();
    iVar4 = *(int *)(this + 4);
    fVar5 = (*(float *)(iVar4 + 0xdc) + *(float *)(iVar4 + 0xe8)) * _DAT_100dd614;
    fVar6 = (*(float *)(iVar4 + 0xec) + *(float *)(iVar4 + 0xe0)) * _DAT_100dd614;
    fVar7 = (*(float *)(iVar4 + 0xf0) + *(float *)(iVar4 + 0xe4)) * _DAT_100dd614;
    fVar1 = *(float *)(iVar4 + 8);
    fVar2 = *(float *)(iVar4 + 0xc);
    fVar3 = *(float *)(iVar4 + 0x10);
    uStack_58 = 4;
    (*DAT_10121ec0)();
    (*DAT_10121ec8)(0x6c);
    (*DAT_10121edc)(fVar5 + fVar1);
    (*DAT_10121edc)(fVar6 + fVar2);
    (*DAT_10121edc)(fVar7 + fVar3);
    (*DAT_10121edc)(0x44480000);
    (*DAT_10121edc)(0x44480000);
    (*DAT_10121edc)(0x43040000);
    (*DAT_10121edc)(*(undefined4 *)(*(int *)(this + 4) + 0x20));
    (*DAT_10121edc)();
    (*DAT_10121edc)();
    (*DAT_10121ec8)();
    (*DAT_10121ed0)();
    (*DAT_10121ec8)();
    (*DAT_10121ec8)();
    uStack_58 = 0x10072a06;
    (*DAT_10121ec8)();
    (*DAT_10121ec4)();
    *(uint *)(*(int *)(this + 4) + 0x1a4) = *(uint *)(*(int *)(this + 4) + 0x1a4) & 0xfffffdff;
    (**(code **)(*(int *)this + 8))();
    return;
  }
  (*DAT_10121ec0)();
  (*DAT_10121ec8)();
  (*DAT_10121edc)();
  uStack_58 = 0x10072acc;
  (*DAT_10121edc)();
  (*DAT_10121edc)();
  (*DAT_10121ed0)();
  (*DAT_10121ec8)();
  (*DAT_10121ec8)();
  (*DAT_10121ec4)();
  uStack_58 = 5;
  (*DAT_10121ec0)();
  (*DAT_10121ec8)(0x15);
  (*DAT_10121edc)(*(undefined4 *)(*(int *)(this + 4) + 8));
  (*DAT_10121edc)(*(undefined4 *)(*(int *)(this + 4) + 0xc));
  (*DAT_10121edc)(*(undefined4 *)(*(int *)(this + 4) + 0x10));
  (*DAT_10121edc)(*(undefined4 *)(*(int *)(this + 4) + 8));
  (*DAT_10121edc)(*(undefined4 *)(*(int *)(this + 4) + 0xc));
  (*DAT_10121edc)();
  (*DAT_10121ed0)();
  (*DAT_10121ec8)();
  (*DAT_10121ec8)();
  (*DAT_10121ec8)();
  (*DAT_10121ec8)();
  uStack_58 = 0x10072bb4;
  (*DAT_10121ec8)();
  uStack_58 = 0xff;
  (*DAT_10121ec8)();
  (*DAT_10121ec8)(0xff);
  (*DAT_10121ec8)(0xc0);
  (*DAT_10121ec8)(0x80);
  (*DAT_10121ec8)(0);
  (*DAT_10121ec4)();
  FUN_10094b20(this_00,*(undefined4 *)(*(int *)(this + 4) + 0x208),6,
               s_weapons_mortarhit_wav_10102c48,0x3f800000,0x3e99999a,0,100);
  FUN_10003850(&uStack_58,(undefined4 *)(*(int *)(this + 4) + 8));
  FUN_1001fea0();
  (*DAT_10121ec0)();
  (*DAT_10121ec8)();
  (*DAT_10121edc)();
  uStack_58 = 0x10072ced;
  (*DAT_10121edc)();
  (*DAT_10121edc)();
  (*DAT_10121edc)();
  (*DAT_10121edc)();
  (*DAT_10121edc)();
  (*DAT_10121edc)();
  (*DAT_10121edc)();
  (*DAT_10121edc)();
  (*DAT_10121ec8)();
  (*DAT_10121ed0)();
  (*DAT_10121ec8)();
  (*DAT_10121ec8)();
  (*DAT_10121ec8)();
  (*DAT_10121ec4)();
  uStack_58 = 0x10072d97;
  FUN_100b0ef0((int)this);
  return;
}

