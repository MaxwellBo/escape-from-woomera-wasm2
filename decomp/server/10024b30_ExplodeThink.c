
/* private: void __thiscall CCrossbowBolt::ExplodeThink(void) */

void __thiscall CCrossbowBolt::ExplodeThink(CCrossbowBolt *this)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  int iVar8;
  undefined4 uVar9;
  
                    /* 0x24b30  91  ?ExplodeThink@CCrossbowBolt@@AAEXXZ */
  FUN_100b01e0(*(int *)(this + 4) + 8);
  *(undefined4 *)(*(int *)(this + 4) + 0x1e0) = 0x42200000;
  (*DAT_10121ec0)();
  (*DAT_10121ec8)();
  fVar4 = *(float *)(*(int *)(this + 4) + 8);
  (*DAT_10121edc)();
  fVar3 = *(float *)(*(int *)(this + 4) + 0xc);
  (*DAT_10121edc)();
  fVar2 = *(float *)(*(int *)(this + 4) + 0x10);
  (*DAT_10121edc)();
  (*DAT_10121ed0)();
  (*DAT_10121ec8)();
  (*DAT_10121ec8)();
  (*DAT_10121ec8)();
  (*DAT_10121ec4)();
  iVar8 = *(int *)(*(int *)(this + 4) + 0x198);
  if (iVar8 == 0) {
    fVar1 = 0.0;
  }
  else {
    fVar1 = (float)(iVar8 + 0x80);
  }
  *(undefined4 *)(*(int *)(this + 4) + 0x198) = 0;
  fVar5 = *(float *)(this + 4);
  uVar9 = 0x2040;
  iVar8 = 0;
  fVar6 = *(float *)((int)fVar5 + 0x1e0);
  fVar7 = 128.0;
  FUN_10003850(&stack0xffffffd4,(undefined4 *)((int)fVar5 + 8));
  FUN_1001fb30(fVar2,fVar3,fVar4,fVar5,fVar1,fVar6,fVar7,iVar8,uVar9);
  FUN_100b0ef0((int)this);
  return;
}

