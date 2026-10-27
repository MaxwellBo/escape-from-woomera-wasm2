
uint __thiscall FUN_10033b30(void *this,int param_1,int param_2)

{
  undefined4 *puVar1;
  int *piVar2;
  undefined4 *puVar3;
  uint uVar4;
  int iVar5;
  void *local_c;
  code *pcStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  pcStack_8 = FUN_10057afb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_10033c40((int)this);
  iVar5 = param_1 * param_2;
  piVar2 = operator_new(iVar5 * 0x14 + 4);
  local_4 = 0;
  if (piVar2 == (int *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    *piVar2 = iVar5;
    piVar2 = piVar2 + 1;
    FUN_1004b7bf(piVar2,0x14,iVar5,FUN_10033ad0);
  }
  local_4 = 0xffffffff;
  *(int **)((int)this + 0xe0) = piVar2;
  puVar3 = operator_new((param_2 + param_1) * 8);
  *(undefined4 **)((int)this + 0xd0) = puVar3;
  puVar1 = puVar3 + param_1;
  *(undefined4 **)((int)this + 0xd4) = puVar1;
  *(undefined4 **)((int)this + 0xd8) = puVar1 + param_2;
  *(undefined4 **)((int)this + 0xdc) = puVar1 + param_2 + param_1;
  if ((*(int *)((int)this + 0xe0) == 0) || (puVar3 == (undefined4 *)0x0)) {
    uVar4 = FUN_10033c40((int)this);
    uVar4 = uVar4 & 0xffffff00;
  }
  else {
    for (iVar5 = (param_2 + param_1 & 0x1fffffffU) << 1; iVar5 != 0; iVar5 = iVar5 + -1) {
      *puVar3 = 0;
      puVar3 = puVar3 + 1;
    }
    for (iVar5 = 0; iVar5 != 0; iVar5 = iVar5 + -1) {
      *(undefined1 *)puVar3 = 0;
      puVar3 = (undefined4 *)((int)puVar3 + 1);
    }
    *(int *)((int)this + 0xc0) = param_1;
    *(int *)((int)this + 0xc4) = param_2;
    uVar4 = 1;
  }
  ExceptionList = local_c;
  return uVar4;
}

