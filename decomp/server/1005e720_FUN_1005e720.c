
undefined4 __thiscall FUN_1005e720(void *this,float *param_1,uint param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 unaff_EBX;
  undefined4 unaff_EBP;
  float unaff_ESI;
  undefined4 unaff_EDI;
  undefined1 local_10 [8];
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  FUN_1005d2c0((int)this);
  uVar1 = FUN_1005e6d0((byte)param_2);
  *(undefined4 *)((int)this + 0x26c) = uVar1;
  *(float *)((int)this + 0x1ec) = *param_1;
  *(float *)((int)this + 0x1f0) = param_1[1];
  *(float *)((int)this + 500) = param_1[2];
  *(uint *)((int)this + 0x1f8) = param_2 | 0x80;
  iVar2 = (**(code **)(*(int *)this + 0x150))(*(int *)((int)this + 4) + 8,param_1,param_3,local_10);
  if (iVar2 == 2) {
    return 1;
  }
  if (iVar2 != 1) {
    iVar2 = (**(code **)(*(int *)this + 0x1b4))
                      (*(int *)((int)this + 4) + 8,param_1,unaff_EDI,uStack_4,&stack0xffffffe4);
    if (iVar2 != 0) {
      *(float *)((int)this + 0x1ec) = unaff_ESI;
      *(undefined4 *)((int)this + 0x1f0) = unaff_EBP;
      *(undefined4 *)((int)this + 500) = unaff_EBX;
      *(uint *)((int)this + 0x1f8) = param_2 | 8;
      *(float *)((int)this + 0x1fc) = *param_1;
      *(float *)((int)this + 0x200) = param_1[1];
      *(float *)((int)this + 0x204) = param_1[2];
      *(undefined4 *)((int)this + 0x208) = uStack_8;
      FUN_1005d5a0(this,uStack_4);
      return 1;
    }
  }
  iVar2 = FUN_100609d0(this,*param_1,param_1[1],param_1[2]);
  if (iVar2 != 0) {
    *(float *)((int)this + 0x278) = *param_1;
    *(float *)((int)this + 0x27c) = param_1[1];
    *(float *)((int)this + 0x280) = param_1[2];
    FUN_1005d5a0(this,uStack_4);
    return 1;
  }
  return 0;
}

