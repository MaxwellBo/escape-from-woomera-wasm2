
/* public: void __thiscall CBaseDoor::DoorGoDown(void) */

void __thiscall CBaseDoor::DoorGoDown(CBaseDoor *this)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  void *this_00;
  char *pcVar4;
  bool bVar5;
  int in_stack_ffffffe4;
  int *in_stack_ffffffe8;
  int in_stack_ffffffec;
  undefined4 uVar6;
  
                    /* 0x27ca0  76  ?DoorGoDown@CBaseDoor@@QAEXXZ */
  iVar3 = *(int *)(this + 4);
  if ((*(uint *)(iVar3 + 0x1a0) & 0x80000000) == 0) {
    in_stack_ffffffec = 0;
    in_stack_ffffffe8 = (int *)0x3f4ccccd;
    this_00 = (void *)(*(int *)(iVar3 + 0x1ec) + *(int *)(DAT_10122044 + 0x98));
    in_stack_ffffffe4 = 0x3f800000;
    FUN_10094b20(this_00,*(undefined4 *)(iVar3 + 0x208),6,this_00,0x3f800000,0x3f4ccccd,0,100);
  }
  *(undefined4 *)(this + 0xdc) = 3;
  *(code **)(this + 0x130) = DoorHitBottom;
  pcVar4 = s_func_door_rotating_101076a8;
  pbVar2 = (byte *)(*(int *)(DAT_10122044 + 0x98) + **(int **)(this + 4));
  do {
    bVar1 = *pbVar2;
    bVar5 = bVar1 < (byte)*pcVar4;
    if (bVar1 != *pcVar4) {
LAB_10027d3c:
      iVar3 = (1 - (uint)bVar5) - (uint)(bVar5 != 0);
      goto LAB_10027d41;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    bVar5 = bVar1 < (byte)pcVar4[1];
    if (bVar1 != pcVar4[1]) goto LAB_10027d3c;
    pbVar2 = pbVar2 + 2;
    pcVar4 = pcVar4 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_10027d41:
  if (iVar3 == 0) {
    if (*(int *)(this + 0x18c) != 0) {
      uVar6 = 0;
      if (*(int *)(this + 0x188) == 0) {
        in_stack_ffffffec = 3;
      }
      else {
        in_stack_ffffffec = 0;
      }
      in_stack_ffffffe8 = (int *)FUN_10019410((uint *)(this + 0xc0));
      in_stack_ffffffe4 = 0x10027d74;
      FUN_10098e40(this,in_stack_ffffffe8,in_stack_ffffffec,uVar6);
    }
    iVar3 = *(int *)(*(int *)(this + 4) + 0x1f8);
    FUN_10003850(&stack0xffffffe4,(undefined4 *)(this + 0x110));
    FUN_10099620(this,in_stack_ffffffe4,(int)in_stack_ffffffe8,in_stack_ffffffec,iVar3);
    return;
  }
  if (*(int *)(this + 0x18c) != 0) {
    uVar6 = 0;
    in_stack_ffffffec = 0;
    in_stack_ffffffe8 = (int *)FUN_10019410((uint *)(this + 0xc0));
    in_stack_ffffffe4 = 0x10027db5;
    FUN_10098e40(this,in_stack_ffffffe8,in_stack_ffffffec,uVar6);
  }
  iVar3 = *(int *)(*(int *)(this + 4) + 0x1f8);
  FUN_10003850(&stack0xffffffe4,(undefined4 *)(this + 0xf8));
  FUN_10099340(this,in_stack_ffffffe4,(int)in_stack_ffffffe8,in_stack_ffffffec,iVar3);
  return;
}

