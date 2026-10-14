
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: void __thiscall CRefugee::IdleThink(void) */

void __thiscall CRefugee::IdleThink(CRefugee *this)

{
  float fVar1;
  float fVar2;
  float fVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
                    /* 0xc6440  129  ?IdleThink@CRefugee@@QAEXXZ */
  *(undefined4 *)(*(int *)(this + 4) + 0x138) = 0x3f800000;
  if (*(int *)(*(int *)(this + 4) + 0x170) == 2) {
    local_18 = 0;
    local_14 = 0;
    local_10 = 0;
    local_c = 0;
    local_8 = 0;
    local_4 = 0;
    FUN_100afdc0(*(int *)(this + 4),&local_c,&local_18);
  }
  else {
    FUN_100aec40(0,s_mad_scientist_entity_1011d110);
    FUN_100af1c0(0);
    FUN_100c6980();
  }
  local_c = 0x41800000;
  local_8 = 0x41800000;
  local_4 = 0x42900000;
  local_18 = 0xc1800000;
  local_14 = 0xc1800000;
  local_10 = 0;
  FUN_100afdc0(*(int *)(this + 4),&local_18,&local_c);
  bVar4 = FUN_100c8160((uint *)(*(int *)(DAT_10122044 + 0x98) + *(int *)(*(int *)(this + 4) + 0x1cc)
                               ),s_queue_1011d108);
  iVar5 = FUN_100c6980();
  if ((iVar5 != 0) && (!bVar4)) {
    iVar5 = *(int *)(this + 4);
    iVar6 = FUN_100c6980();
    iVar6 = *(int *)(iVar6 + 4);
    DAT_10132ca8 = DAT_10132ca8 + 1;
    fVar1 = *(float *)(iVar6 + 8) - *(float *)(iVar5 + 8);
    fVar3 = *(float *)(iVar6 + 0xc) - *(float *)(iVar5 + 0xc);
    fVar2 = *(float *)(iVar6 + 0x10) - *(float *)(iVar5 + 0x10);
    fVar1 = SQRT(fVar1 * fVar1 + fVar3 * fVar3 + fVar2 * fVar2);
    (**(code **)(*(int *)this + 8))(0x40400000);
    *(undefined4 *)(*(int *)(this + 4) + 0x108) = 4;
    if ((DAT_10132ca8 % 0x52 == 0) && ((_DAT_100dd61c < fVar1 && (fVar1 < _DAT_100ddae4)))) {
      (**(code **)(*(int *)this + 0x1a8))(3);
      FUN_1005d290((int)this);
      *(undefined4 *)(this + 0x26c) = 1;
      *(undefined4 *)(this + 0x284) = 3;
      *(uint *)(this + 0x2a0) = *(uint *)(this + 0x2a0) & 0xffffffdf;
      iVar5 = FUN_100c6980();
      FUN_10019420(this + 0x168,iVar5);
      FUN_1005d500(this,3,0);
      FUN_100c80d0();
    }
    if ((*(int *)(this + 0x284) == 3) && (fVar1 < _DAT_100dd61c)) {
      (**(code **)(*(int *)this + 0x1a8))(1);
    }
  }
  FUN_1005d160((int *)this);
  return;
}

