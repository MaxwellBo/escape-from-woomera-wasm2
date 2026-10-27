
void __fastcall FUN_10059549(int *param_1,undefined4 param_2)

{
  int iVar1;
  uint in_EAX;
  byte bVar2;
  char *pcVar3;
  
  bVar2 = (byte)param_2 & *(byte *)((int)param_1 + -0x6e34effb);
  pcVar3 = (char *)CONCAT31((int3)((uint)param_2 >> 8),bVar2);
  *pcVar3 = *pcVar3 + bVar2 + (0xfa6d89ef < in_EAX);
  (**(code **)(*param_1 + 0x2c))();
  iVar1 = param_1[1];
  param_1[0x39] = 0;
  if ((*(byte *)(iVar1 + 0x1a0) & 0x80) != 0) {
    param_1[0x39] = 0x40;
  }
  if ((*(uint *)(iVar1 + 0x1a0) & 0x100) != 0) {
    param_1[0x39] = param_1[0x39] | 0x80;
  }
  if ((*(uint *)(iVar1 + 0x1a0) & 0x400) != 0) {
    param_1[0x39] = param_1[0x39] | 0x10;
  }
  if ((*(uint *)(iVar1 + 0x1a0) & 0x200) != 0) {
    param_1[0x39] = param_1[0x39] | 0x20;
  }
  return;
}

