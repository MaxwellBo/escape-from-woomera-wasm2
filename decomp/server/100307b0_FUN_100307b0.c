
uint __thiscall FUN_100307b0(void *this,int *param_1)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  
  if ((*(byte *)(*(int *)((int)this + 4) + 0x1a0) & 1) != 0) {
    return 0;
  }
  iVar2 = (**(code **)(*param_1 + 0xcc))();
  if (iVar2 != 0) {
    cVar1 = (*DAT_10121f24)(*(undefined4 *)(param_1[1] + 0x208));
    return -(uint)((*(uint *)(*(int *)((int)this + 4) + 0x184) & 1 << (cVar1 - 1U & 0x1f)) != 0) & 2
    ;
  }
  uVar3 = (**(code **)(*(int *)this + 0x58))();
  return uVar3;
}

