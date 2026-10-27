
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_10021cd0(void *this,undefined4 *param_1)

{
  uint uVar1;
  
  *(undefined4 *)((int)this + 0x38) = *param_1;
  *(undefined4 *)((int)this + 0x3c) = param_1[1];
  *(undefined4 *)((int)this + 0x40) = param_1[2];
  *(undefined4 *)((int)this + 0x44) = param_1[3];
  *(undefined4 *)((int)this + 0x48) = param_1[4];
  *(undefined4 *)((int)this + 0x4c) = param_1[5];
  uVar1 = FUN_100236c0(0);
  *(uint *)((int)this + 0x50) = uVar1;
  *(undefined4 *)((int)this + 0x159c) = param_1[6];
  _DAT_100a96e8 = param_1[7];
  FUN_1001d690(this);
  param_1[7] = (float)*(int *)((int)this + 0x58);
  DAT_100b6f9c = (float)*(int *)((int)this + 0x1c);
  FUN_10023880(*(uint *)((int)this + 0x50));
  return 1;
}

