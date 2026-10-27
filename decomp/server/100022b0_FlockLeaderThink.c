
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: void __thiscall CFlockingFlyer::FlockLeaderThink(void) */

void __thiscall CFlockingFlyer::FlockLeaderThink(CFlockingFlyer *this)

{
  float fVar1;
  float fVar2;
  float fVar3;
  bool bVar4;
  undefined3 extraout_var;
  int iVar5;
  float10 fVar6;
  float fStack_48;
  float fStack_44;
  float fStack_40;
  undefined1 auStack_3c [16];
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  float fStack_20;
  
                    /* 0x22b0  108  ?FlockLeaderThink@CFlockingFlyer@@QAEXXZ */
  (**(code **)(*(int *)this + 8))(0x3dcccccd);
  FUN_100af200(*(int *)(this + 4) + 0x50);
  bVar4 = FUN_10001eb0((int)this);
  if (CONCAT31(extraout_var,bVar4) == 0) {
    if (*(int *)(this + 0x310) != 0) {
      *(undefined4 *)(this + 0x310) = 0;
      *(undefined4 *)(*(int *)(this + 4) + 0x60) = 0;
    }
    iVar5 = *(int *)(this + 4);
    *(undefined4 *)(this + 0x318) = 0;
    if (*(float *)(iVar5 + 0x1f8) <= _DAT_100dd638) {
      *(float *)(iVar5 + 0x1f8) = *(float *)(iVar5 + 0x1f8) + _DAT_100dd5d8;
    }
    iVar5 = *(int *)(this + 4);
    fStack_40 = *(float *)(iVar5 + 0x1f8);
    fStack_48 = fStack_40 * DAT_10122044[10];
    fStack_44 = fStack_40 * DAT_10122044[0xb];
    fStack_40 = fStack_40 * DAT_10122044[0xc];
    *(float *)(iVar5 + 0x20) = fStack_48;
    *(float *)(iVar5 + 0x24) = fStack_44;
    *(float *)(iVar5 + 0x28) = fStack_40;
    FUN_100018e0((int)this);
    return;
  }
  *(undefined4 *)(this + 0x318) = 1;
  if (*(int *)(this + 0x310) == 0) {
    iVar5 = *(int *)(this + 4);
    fStack_40 = DAT_10122044[0x12] * _DAT_100dd630 + *(float *)(iVar5 + 0x10);
    fStack_44 = DAT_10122044[0x11] * _DAT_100dd630 + *(float *)(iVar5 + 0xc);
    fStack_48 = DAT_10122044[0x10] * _DAT_100dd630 + *(float *)(iVar5 + 8);
    FUN_100afc60((float *)(iVar5 + 8),&fStack_48,1,*(undefined4 *)(iVar5 + 0x208),auStack_3c);
    iVar5 = *(int *)(this + 4);
    fVar1 = fStack_28 - *(float *)(iVar5 + 8);
    fVar3 = fStack_24 - *(float *)(iVar5 + 0xc);
    fVar2 = fStack_20 - *(float *)(iVar5 + 0x10);
    fVar1 = SQRT(fVar1 * fVar1 + fVar3 * fVar3 + fVar2 * fVar2);
    fStack_40 = *(float *)(iVar5 + 0x10) - DAT_10122044[0x12] * _DAT_100dd630;
    fStack_44 = *(float *)(iVar5 + 0xc) - DAT_10122044[0x11] * _DAT_100dd630;
    fStack_48 = *(float *)(iVar5 + 8) - DAT_10122044[0x10] * _DAT_100dd630;
    FUN_100afc60((float *)(iVar5 + 8),&fStack_48,1,*(undefined4 *)(iVar5 + 0x208),auStack_3c);
    iVar5 = *(int *)(this + 4);
    fStack_28 = fStack_28 - *(float *)(iVar5 + 8);
    fStack_24 = fStack_24 - *(float *)(iVar5 + 0xc);
    fStack_20 = fStack_20 - *(float *)(iVar5 + 0x10);
    fVar2 = SQRT(fStack_28 * fStack_28 + fStack_24 * fStack_24 + fStack_20 * fStack_20);
    if (fVar1 <= fVar2) {
      if (fVar2 <= fVar1) {
        *(undefined4 *)(this + 0x310) = 1;
        iVar5 = (*DAT_10121f70)(0,1);
        if (iVar5 == 0) {
          *(undefined4 *)(*(int *)(this + 4) + 0x60) = 0x42960000;
        }
        else {
          *(undefined4 *)(*(int *)(this + 4) + 0x60) = 0xc2960000;
        }
      }
      else {
        *(undefined4 *)(iVar5 + 0x60) = 0x42960000;
        *(undefined4 *)(this + 0x310) = 1;
      }
    }
    else {
      *(undefined4 *)(iVar5 + 0x60) = 0xc2960000;
      *(undefined4 *)(this + 0x310) = 1;
    }
  }
  FUN_10001b20((int)this);
  iVar5 = *(int *)(this + 4);
  fVar1 = *(float *)(iVar5 + 0x1f8);
  fVar2 = DAT_10122044[0xb];
  fVar3 = DAT_10122044[0xc];
  *(float *)(iVar5 + 0x20) = fVar1 * DAT_10122044[10];
  *(float *)(iVar5 + 0x24) = fVar1 * fVar2;
  *(float *)(iVar5 + 0x28) = fVar1 * fVar3;
  iVar5 = *(int *)(this + 4);
  fStack_40 = *(float *)(iVar5 + 0x10) - DAT_10122044[0xf] * _DAT_100dd634;
  fStack_44 = *(float *)(iVar5 + 0xc) - DAT_10122044[0xe] * _DAT_100dd634;
  fStack_48 = *(float *)(iVar5 + 8) - DAT_10122044[0xd] * _DAT_100dd634;
  FUN_100afc60((float *)(iVar5 + 8),&fStack_48,1,*(undefined4 *)(iVar5 + 0x208),auStack_3c);
  if ((fStack_2c != (float)_DAT_100dd628) && (*(float *)(*(int *)(this + 4) + 0x28) < _DAT_100dd5f8)
     ) {
    *(undefined4 *)(*(int *)(this + 4) + 0x28) = 0;
  }
  iVar5 = *(int *)(this + 4);
  if ((*(uint *)(iVar5 + 0x1a4) & 0x200) != 0) {
    fStack_40 = *(float *)(iVar5 + 0x10) + _DAT_100dd618;
    fStack_44 = *(float *)(iVar5 + 0xc);
    fStack_48 = *(float *)(iVar5 + 8);
    FUN_100afe10((int)this,&fStack_48);
    *(undefined4 *)(*(int *)(this + 4) + 0x28) = 0;
  }
  if (*(float *)(this + 0x344) < *DAT_10122044) {
    FUN_100015a0((int)this);
    fVar6 = (float10)(*DAT_10121f74)(0x3f800000,0x40400000);
    *(float *)(this + 0x344) = (float)(fVar6 + (float10)*DAT_10122044);
  }
  FUN_100018e0((int)this);
  return;
}

