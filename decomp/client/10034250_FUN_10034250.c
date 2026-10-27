
uint __thiscall
FUN_10034250(void *this,undefined4 param_1,undefined4 param_2,int *param_3,int *param_4)

{
  char cVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  *param_3 = -1;
  iVar4 = 0;
  *param_4 = -1;
  uVar3 = *(uint *)((int)this + 0xc0);
  if (0 < (int)uVar3) {
    do {
      iVar5 = 0;
      if (0 < *(int *)((int)this + 0xc4)) {
        do {
          piVar2 = (int *)FUN_10034150(this,iVar4,iVar5);
          if (((int *)*piVar2 != (int *)0x0) &&
             (cVar1 = (**(code **)(*(int *)*piVar2 + 0x80))(param_1,param_2), cVar1 != '\0')) {
            *param_4 = iVar4;
            *param_3 = iVar5;
            return CONCAT31((int3)((uint)param_3 >> 8),1);
          }
          iVar5 = iVar5 + 1;
        } while (iVar5 < *(int *)((int)this + 0xc4));
      }
      uVar3 = *(uint *)((int)this + 0xc0);
      iVar4 = iVar4 + 1;
    } while (iVar4 < (int)uVar3);
  }
  return uVar3 & 0xffffff00;
}

