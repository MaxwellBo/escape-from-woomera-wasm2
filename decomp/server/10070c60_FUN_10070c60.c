
void __thiscall FUN_10070c60(void *this,int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar2 = FUN_1006bc40(&DAT_10122780,param_1,*(int *)((int)this + 0xb8),*(int *)((int)this + 0x4c4),
                       0);
  FUN_10070d00(this,param_1,iVar2);
  iVar2 = 0;
  iVar4 = param_1 * 0x58;
  if (0 < *(int *)(iVar4 + 0x20 + DAT_1012278c)) {
    do {
      iVar1 = DAT_10122790 + (*(int *)(iVar4 + 0x24 + DAT_1012278c) + iVar2) * 0x18;
      iVar3 = FUN_1006bc40(&DAT_10122780,*(int *)(iVar1 + 4),*(int *)((int)this + 0xb8),
                           *(int *)((int)this + 0x4c4),0);
      FUN_10070d00(this,*(int *)(iVar1 + 4),iVar3);
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)(iVar4 + 0x20 + DAT_1012278c));
  }
  return;
}

