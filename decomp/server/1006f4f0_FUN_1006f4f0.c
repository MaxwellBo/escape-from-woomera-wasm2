
void __thiscall FUN_1006f4f0(void *this,undefined4 param_1,undefined2 param_2,undefined2 param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  short *psVar5;
  undefined4 local_4;
  
  local_4 = CONCAT22(param_2,(short)param_1);
  (*DAT_10121f60)(&param_1);
  (*DAT_10121f64)(&param_1,&local_4,4);
  uVar4 = (*DAT_10121f6c)(param_1);
  iVar1 = *(int *)((int)this + (uVar4 & 0xf) * 4 + 0x207c);
  uVar2 = *(uint *)((int)this + 0x20c0);
  uVar4 = (uVar4 >> 4) % uVar2;
  iVar3 = *(int *)((int)this + 0x20bc);
  psVar5 = (short *)(iVar3 + uVar4 * 2);
  if (*(short *)(iVar3 + uVar4 * 2) == -1) {
    *(undefined2 *)(iVar3 + uVar4 * 2) = param_3;
    return;
  }
  do {
    uVar4 = uVar4 + iVar1;
    psVar5 = psVar5 + iVar1;
    if ((int)uVar2 <= (int)uVar4) {
      uVar4 = uVar4 - uVar2;
      psVar5 = psVar5 + -uVar2;
    }
  } while (*psVar5 != -1);
  *(undefined2 *)(iVar3 + uVar4 * 2) = param_3;
  return;
}

