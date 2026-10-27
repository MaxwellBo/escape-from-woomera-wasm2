
int * __thiscall FUN_100da439(void *this,uint param_1)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  iVar2 = FUN_100da4b5(this);
  if (iVar2 != 0) {
    if (*(int *)((int)this + *(int *)(*(int *)this + 4) + 0x30) == 0) {
      uVar4 = param_1 & 0xff;
      uVar3 = FUN_100da3d4(*(void **)((int)this + *(int *)(*(int *)this + 4) + 4),uVar4);
      if (uVar3 == 0xffffffff) {
        iVar2 = (**(code **)(**(int **)(*(int *)(*(int *)this + 4) + 4 + (int)this) + 0x1c))(uVar4);
        if (iVar2 == -1) {
          puVar1 = (uint *)(*(int *)(*(int *)this + 4) + 8 + (int)this);
          *puVar1 = *puVar1 | 6;
        }
      }
    }
    else {
      param_1 = (uint)CONCAT12((undefined1)param_1,(short)param_1);
      FUN_100da94a(this,&DAT_10121c38,(char *)((int)&param_1 + 2));
    }
    FUN_100da529(this);
  }
  return this;
}

