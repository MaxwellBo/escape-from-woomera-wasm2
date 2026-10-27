
uint __thiscall FUN_10038f90(void *this,int param_1)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  int *piVar7;
  
  uVar4 = *(uint *)((int)this + 600);
  iVar6 = 0;
  if (0 < (int)uVar4) {
    piVar7 = (int *)((int)this + 200);
    do {
      iVar3 = (**(code **)(*(int *)*piVar7 + 0x260))();
      if (iVar3 == 0) {
        cVar2 = FUN_10033210(*piVar7);
        if (cVar2 == param_1) {
          piVar7 = *(int **)((int)this + iVar6 * 4 + 200);
          piVar1 = (int *)piVar7[0x3d];
          if (piVar1 != (int *)0x0) {
            uVar4 = FUN_1003cac0(DAT_100a5178,piVar1);
            return uVar4 & 0xffffff00;
          }
          uVar5 = (**(code **)(*piVar7 + 600))();
          return CONCAT31((int3)((uint)uVar5 >> 8),1);
        }
      }
      uVar4 = *(uint *)((int)this + 600);
      iVar6 = iVar6 + 1;
      piVar7 = piVar7 + 1;
    } while (iVar6 < (int)uVar4);
  }
  return uVar4 & 0xffffff00;
}

