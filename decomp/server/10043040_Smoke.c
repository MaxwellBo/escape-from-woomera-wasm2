
/* public: void __thiscall CGrenade::Smoke(void) */

void __thiscall CGrenade::Smoke(CGrenade *this)

{
  int iVar1;
  float *pfVar2;
  longlong lVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined4 uVar10;
  undefined1 local_18 [12];
  undefined1 local_c [12];
  
                    /* 0x43040  205  ?Smoke@CGrenade@@QAEXXZ */
  iVar1 = FUN_100b01e0(*(int *)(this + 4) + 8);
  if (iVar1 == -3) {
    uVar10 = 100;
    fVar9 = 64.0;
    fVar8 = 64.0;
    fVar7 = 64.0;
    pfVar2 = (float *)FUN_10001d60(local_18,0x42800000,0x42800000,0x42800000);
    FUN_1000b550((void *)(*(int *)(this + 4) + 8),(float *)&stack0xffffffd4,pfVar2);
    fVar6 = 64.0;
    fVar5 = 64.0;
    fVar4 = 64.0;
    pfVar2 = (float *)FUN_10001d60(local_c,0x42800000,0x42800000,0x42800000);
    FUN_10002250((void *)(*(int *)(this + 4) + 8),(float *)&stack0xffffffc8,pfVar2);
    FUN_100b0cc0(fVar4,fVar5,fVar6,fVar7,fVar8,fVar9,uVar10);
    FUN_100b0ef0((int)this);
    return;
  }
  (*DAT_10121ec0)();
  (*DAT_10121ec8)();
  (*DAT_10121edc)();
  (*DAT_10121edc)();
  (*DAT_10121edc)(*(undefined4 *)(*(int *)(this + 4) + 0x10));
  (*DAT_10121ed0)((int)DAT_10131cf2);
  lVar3 = __ftol();
  (*DAT_10121ec8)((int)lVar3);
  (*DAT_10121ec8)(0xc);
  (*DAT_10121ec4)();
  FUN_100b0ef0((int)this);
  return;
}

