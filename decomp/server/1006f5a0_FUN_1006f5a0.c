
void __thiscall FUN_1006f5a0(void *this,int param_1,int param_2,int *param_3)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  short *psVar6;
  undefined4 local_c;
  undefined2 local_8;
  undefined2 local_6;
  
  local_8 = (undefined2)param_1;
  local_6 = (undefined2)param_2;
  (*DAT_10121f60)(&local_c);
  (*DAT_10121f64)(&local_c,&local_8,4);
  uVar5 = (*DAT_10121f6c)(local_c);
  iVar2 = *(int *)((int)this + (uVar5 & 0xf) * 4 + 0x207c);
  uVar3 = *(uint *)((int)this + 0x20c0);
  uVar5 = (uVar5 >> 4) % uVar3;
  iVar4 = *(int *)((int)this + 0x20bc);
  psVar6 = (short *)(iVar4 + uVar5 * 2);
  if (*(short *)(iVar4 + uVar5 * 2) == -1) {
    *param_3 = (int)*(short *)(iVar4 + uVar5 * 2);
    return;
  }
  do {
    piVar1 = (int *)(*(int *)((int)this + 0x10) + *psVar6 * 0x18);
    if ((param_1 == *piVar1) && (param_2 == piVar1[1])) {
      *param_3 = (int)*(short *)(iVar4 + uVar5 * 2);
      return;
    }
    uVar5 = uVar5 + iVar2;
    psVar6 = psVar6 + iVar2;
    if ((int)uVar3 <= (int)uVar5) {
      uVar5 = uVar5 - uVar3;
      psVar6 = psVar6 + -uVar3;
    }
  } while (*psVar6 != -1);
  *param_3 = (int)*(short *)(iVar4 + uVar5 * 2);
  return;
}

