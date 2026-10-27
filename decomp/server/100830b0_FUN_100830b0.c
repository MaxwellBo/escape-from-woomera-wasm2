
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_100830b0(void *this,void *param_1,undefined4 param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  
  if ((*(byte *)(*(int *)((int)this + 4) + 0x1a0) & 1) == 0) {
    param_1 = (void *)FUN_100aec40(0,s_player_10101c54);
  }
  if (((param_1 != (void *)0x0) &&
      (uVar1 = *(uint *)(*(int *)((int)param_1 + 4) + 0x1a4), (uVar1 & 8) != 0)) &&
     (iVar2 = FUN_1001a140(param_3,uVar1 & 0x1000), iVar2 != 0)) {
    if ((*(uint *)(*(int *)((int)param_1 + 4) + 0x1a4) & 0x1000) != 0) {
      FUN_100814e0(param_1,1);
      FUN_10019420((void *)((int)this + 0xc0),0);
      FUN_10019680((int)this);
      return;
    }
    FUN_100814e0(param_1,0);
    if (*(float *)((int)this + 0xb8) != _DAT_100dd5f8) {
      FUN_10019420((void *)((int)this + 0xc0),(int)param_1);
      (**(code **)(*(int *)this + 8))(*(undefined4 *)((int)this + 0xb8));
    }
  }
  return;
}

