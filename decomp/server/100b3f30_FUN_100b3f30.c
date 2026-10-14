
bool __thiscall
FUN_100b3f30(void *this,int param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  void *this_00;
  int iVar1;
  int iVar2;
  
  if (param_3 < 1) {
    *(undefined4 *)((int)this + 0x10c) = 0xffffffff;
  }
  else if (*(int *)((int)this + 0x10c) == 0) {
    if (param_1 < param_3) {
      param_3 = param_1;
    }
    *(int *)((int)this + 0x10c) = param_3;
    iVar1 = (**(code **)(**(int **)((int)this + 0xdc) + 0x90))(param_1 - param_3,param_2,param_4);
    goto LAB_100b3f66;
  }
  iVar1 = (**(code **)(**(int **)((int)this + 0xdc) + 0x90))(param_1,param_2,param_4);
LAB_100b3f66:
  if (0 < iVar1) {
    *(int *)((int)this + 0x104) = iVar1;
    iVar2 = FUN_10082230(*(void **)((int)this + 0xdc),this);
    if (iVar2 != 0) {
      this_00 = *(void **)(*(int *)((int)this + 4) + 0x208);
      FUN_10094b20(this_00,this_00,3,s_items_9mmclip1_wav_10106684,0x3f800000,0x3f4ccccd,0,100);
    }
  }
  return 0 < iVar1;
}

