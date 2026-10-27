
int __thiscall FUN_10033de0(void *this,int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  void *local_4;
  
  iVar1 = param_1;
  if ((-1 < param_1) && (param_1 < *(int *)((int)this + 0xc4))) {
    iVar3 = 0;
    iVar4 = 0;
    local_4 = this;
    if (0 < *(int *)((int)this + 0xc0)) {
      do {
        piVar2 = (int *)FUN_10034150(this,iVar4,iVar1);
        if ((int *)*piVar2 != (int *)0x0) {
          (**(code **)(*(int *)*piVar2 + 0xc))(&local_4,&param_1);
          if (iVar3 < param_1) {
            iVar3 = param_1;
          }
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 < *(int *)((int)this + 0xc0));
    }
    return iVar3;
  }
  return 0;
}

