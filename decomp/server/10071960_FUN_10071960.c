
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * __thiscall FUN_10071960(void *this,undefined4 param_1,float param_2,float param_3)

{
  bool bVar1;
  undefined3 extraout_var;
  int *piVar2;
  int iVar3;
  undefined3 extraout_var_00;
  CBaseEntity *this_00;
  int *this_01;
  uint uVar4;
  void *unaff_EBP;
  int iVar5;
  uint *puVar6;
  float10 fVar7;
  uint *local_48;
  undefined4 local_44;
  float local_40;
  float local_3c;
  undefined1 local_38 [12];
  float fStack_2c;
  int local_8;
  
  local_44 = param_1;
  local_40 = param_2;
  local_3c = param_3 - _DAT_100de488;
  FUN_100afc60(&param_1,&local_44,0,*(undefined4 *)(*(int *)((int)this + 4) + 0x208),local_38);
  if (((local_8 == 0) || (*(int *)(*(int *)(*(int *)(local_8 + 0x7c) + 4) + 0x10c) == 4)) &&
     (iVar5 = 0, 0 < *(int *)((int)this + 0x378))) {
    puVar6 = (uint *)((int)this + 0x37c);
    do {
      bVar1 = FUN_10019450(puVar6);
      if (CONCAT31(extraout_var,bVar1) == 0) {
LAB_10071a0b:
        puVar6 = (uint *)((int)this + iVar5 * 8 + 0x37c);
        local_48 = puVar6;
        bVar1 = FUN_10019450(puVar6);
        if (CONCAT31(extraout_var_00,bVar1) != 0) {
          iVar3 = FUN_10019460(puVar6);
          if (*(int *)(*(int *)(iVar3 + 4) + 0x148) == 0) {
            this_00 = (CBaseEntity *)FUN_10019460(puVar6);
            CBaseEntity::SUB_StartFadeOut(this_00);
          }
        }
        piVar2 = (int *)FUN_1001a1f0(0x10101a08,&param_1,
                                     (undefined4 *)(*(int *)((int)this + 4) + 0x50),0);
        piVar2 = (int *)(**(code **)(*piVar2 + 0x74))();
        local_44 = 0;
        local_40 = 0.0;
        *(undefined4 *)(piVar2[1] + 0x108) = 5;
        fVar7 = (float10)(*DAT_10121f74)(0xc3440000,0xc3000000);
        iVar3 = piVar2[1];
        local_3c = (float)fVar7;
        *(undefined4 *)(iVar3 + 0x20) = local_44;
        *(float *)(iVar3 + 0x24) = local_40;
        *(float *)(iVar3 + 0x28) = local_3c;
        (**(code **)(*piVar2 + 0x1a8))(0x33);
        this_01 = FUN_100295c0(0x1010eb94,10);
        local_44 = param_1;
        local_40 = param_2 + _DAT_100e8d30;
        uVar4 = (*DAT_10121f24)(*(undefined4 *)(piVar2[1] + 0x208));
        FUN_10029800(this_01,&local_48,uVar4);
        *(uint *)(this_01[1] + 0x148) = *(uint *)(this_01[1] + 0x148) & 0xf | 0x20;
        *(undefined4 *)(this_01[1] + 0x150) = 0x437f0000;
        *(undefined4 *)(this_01[1] + 0x154) = 0x437f0000;
        *(undefined4 *)(this_01[1] + 0x158) = 0x437f0000;
        this_01[0x1d] = (int)CBaseEntity::SUB_Remove;
        (**(code **)(*this_01 + 8))
                  ((float)_DAT_100dd648 -
                   (fStack_2c * (float)_DAT_100e45b8) / *(float *)(piVar2[1] + 0x28));
        piVar2[0xa4] = *(int *)((int)this + iVar5 * 0xc + 0x43c);
        piVar2[0xa5] = *(int *)((int)this + iVar5 * 0xc + 0x440);
        piVar2[0xa6] = *(int *)((int)this + iVar5 * 0xc + 0x444);
        FUN_10019420(unaff_EBP,(int)piVar2);
        return piVar2;
      }
      piVar2 = (int *)FUN_10019460(puVar6);
      iVar3 = (**(code **)(*piVar2 + 0xb8))();
      if (iVar3 == 0) goto LAB_10071a0b;
      iVar5 = iVar5 + 1;
      puVar6 = puVar6 + 2;
    } while (iVar5 < *(int *)((int)this + 0x378));
  }
  return (int *)0x0;
}

