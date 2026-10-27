
/* public: void __thiscall CGunTarget::Next(void) */

void __thiscall CGunTarget::Next(CGunTarget *this)

{
  int iVar1;
  int iVar2;
  void *this_00;
  float *pfVar3;
  float fVar4;
  float *pfVar5;
  float fVar6;
  int iVar7;
  float afStack_18 [3];
  float afStack_c [3];
  
                    /* 0x7a050  158  ?Next@CGunTarget@@QAEXXZ */
  *(undefined4 *)(this + 0x74) = 0;
  iVar2 = (**(code **)(*(int *)this + 0xd8))();
  FUN_10019420(this + 0x168,iVar2);
  iVar2 = FUN_10019410((uint *)(this + 0x168));
  if (iVar2 == 0) {
    (**(code **)(*(int *)this + 0x164))();
    return;
  }
  iVar1 = *(int *)(this + 4);
  *(code **)(this + 0x130) = Wait;
  pfVar5 = afStack_18;
  iVar7 = *(int *)(iVar1 + 0x1f8);
  fVar6 = 0.5;
  this_00 = (void *)FUN_1000b550((void *)(iVar1 + 0xdc),afStack_c,(float *)(iVar1 + 0xe8));
  fVar4 = 2.6747932e-29;
  pfVar3 = (float *)FUN_10002280(this_00,pfVar5,fVar6);
  FUN_10002250((void *)(*(int *)(iVar2 + 4) + 8),(float *)&stack0xffffffd0,pfVar3);
  FUN_10099340(this,(int)fVar4,(int)pfVar5,(int)fVar6,iVar7);
  return;
}

