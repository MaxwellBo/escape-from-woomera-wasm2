
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: void __thiscall CBaseDoor::DoorGoUp(void) */

void __thiscall CBaseDoor::DoorGoUp(CBaseDoor *this)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  undefined3 extraout_var;
  int iVar4;
  void *this_00;
  char *pcVar5;
  bool bVar6;
  float in_stack_ffffffb8;
  int *in_stack_ffffffbc;
  int in_stack_ffffffc0;
  undefined4 uVar7;
  float local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  float local_18;
  float local_14;
  float local_8;
  
                    /* 0x27900  77  ?DoorGoUp@CBaseDoor@@QAEXXZ */
  iVar3 = *(int *)(this + 4);
  if ((*(uint *)(iVar3 + 0x1a0) & 0x80000000) == 0) {
    in_stack_ffffffc0 = 0;
    in_stack_ffffffbc = (int *)0x3f4ccccd;
    this_00 = (void *)(*(int *)(iVar3 + 0x1ec) + *(int *)(DAT_10122044 + 0x98));
    in_stack_ffffffb8 = 1.0;
    FUN_10094b20(this_00,*(undefined4 *)(iVar3 + 0x208),6,this_00,0x3f800000,0x3f4ccccd,0,100);
  }
  *(undefined4 *)(this + 0xdc) = 2;
  *(code **)(this + 0x130) = DoorHitTop;
  if (*(int *)(this + 0x18c) != 0) {
    uVar7 = 0;
    if (*(int *)(this + 0x188) == 0) {
      in_stack_ffffffc0 = 3;
    }
    else {
      in_stack_ffffffc0 = 1;
    }
    in_stack_ffffffbc = (int *)FUN_10019410((uint *)(this + 0xc0));
    in_stack_ffffffb8 = 2.5731625e-29;
    FUN_10098e40(this,in_stack_ffffffbc,in_stack_ffffffc0,uVar7);
  }
  pcVar5 = s_func_door_rotating_101076a8;
  pbVar2 = (byte *)(*(int *)(DAT_10122044 + 0x98) + **(int **)(this + 4));
  do {
    bVar1 = *pbVar2;
    bVar6 = bVar1 < (byte)*pcVar5;
    if (bVar1 != *pcVar5) {
LAB_100279d0:
      iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
      goto LAB_100279d5;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    bVar6 = bVar1 < (byte)pcVar5[1];
    if (bVar1 != pcVar5[1]) goto LAB_100279d0;
    pbVar2 = pbVar2 + 2;
    pcVar5 = pcVar5 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_100279d5:
  if (iVar3 == 0) {
    local_28 = 1.0;
    bVar6 = FUN_10019450((uint *)(this + 0xc0));
    if (CONCAT31(extraout_var,bVar6) != 0) {
      iVar4 = FUN_10019460((uint *)(this + 0xc0));
      iVar3 = *(int *)(this + 4);
      iVar4 = *(int *)(iVar4 + 4);
      if (((*(byte *)(iVar3 + 0x1a0) & 0x10) == 0) && (*(float *)(iVar3 + 0x48) != _DAT_100dd5f8)) {
        local_18 = *(float *)(iVar4 + 8) - *(float *)(iVar3 + 8);
        local_20 = *(undefined4 *)(iVar4 + 0x54);
        in_stack_ffffffc0 = iVar4 + 0x50;
        local_14 = *(float *)(iVar4 + 0xc) - *(float *)(iVar3 + 0xc);
        local_24 = 0;
        local_1c = 0;
        FUN_100af200(&local_24);
        in_stack_ffffffbc = (int *)0x10027a66;
        FUN_100af200(in_stack_ffffffc0);
        local_8 = *(float *)(DAT_10122044 + 0x2c) * _DAT_100dd63c + *(float *)(iVar4 + 0xc);
        if ((local_8 - *(float *)(*(int *)(this + 4) + 0xc)) * local_18 -
            ((*(float *)(DAT_10122044 + 0x28) * _DAT_100dd63c + *(float *)(iVar4 + 8)) -
            *(float *)(*(int *)(this + 4) + 8)) * local_14 < _DAT_100dd5f8) {
          local_28 = -1.0;
        }
      }
    }
    iVar3 = *(int *)(*(int *)(this + 4) + 0x1f8);
    FUN_10002280(this + 0x11c,(float *)&stack0xffffffb8,local_28);
    FUN_10099620(this,(int)in_stack_ffffffb8,(int)in_stack_ffffffbc,in_stack_ffffffc0,iVar3);
    return;
  }
  iVar3 = (*(int **)(this + 4))[0x7e];
  FUN_10003850(&stack0xffffffb8,(undefined4 *)(this + 0x104));
  FUN_10099340(this,(int)in_stack_ffffffb8,(int)in_stack_ffffffbc,in_stack_ffffffc0,iVar3);
  return;
}

