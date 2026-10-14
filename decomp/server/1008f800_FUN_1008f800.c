
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_1008f800(void *this,int param_1)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)FUN_10019410((uint *)((int)this + 0x168));
  if ((piVar1 != (int *)0x0) && (iVar2 = (**(code **)(*piVar1 + 0x74))(), iVar2 != 0)) {
    if (*(int *)(iVar2 + 0x2f8) == 0) {
      return;
    }
    *(float *)((int)this + 0x34c) = *DAT_10122044 + (float)_DAT_100de4f0;
    return;
  }
  FUN_10019420((void *)((int)this + 0xc0),param_1);
  *(code **)((int)this + 0x74) = CCineMonster::CineThink;
  CCineMonster::CineThink(this);
  return;
}

