
undefined4 __thiscall FUN_1005b8b0(void *this,int *param_1)

{
  byte *pbVar1;
  char *pcVar2;
  undefined4 uVar3;
  
  if ((*(int *)((int)this + 0xbc) < 0) && ((*(byte *)(*(int *)((int)this + 4) + 0x1a0) & 2) != 0)) {
    return 1;
  }
  if (param_1 == (int *)0x0) {
    return 0;
  }
  pbVar1 = (byte *)(**(code **)(*(int *)this + 0xd4))();
  pcVar2 = (char *)(**(code **)(*param_1 + 0xd4))();
  uVar3 = FUN_100b0750(pcVar2,pbVar1);
  return uVar3;
}

