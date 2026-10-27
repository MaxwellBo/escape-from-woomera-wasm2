
undefined4 __thiscall FUN_1003df40(void *this,int param_1,int param_2,byte *param_3)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  byte *pbVar5;
  bool bVar6;
  
  if ((((*(int *)((int)this + 0x220) != 0) && (iVar2 = (*DAT_100a5108)(), iVar2 == 0)) &&
      (param_1 != 0)) && ((param_2 == 0xd || (param_2 == 0xa9)))) {
    FUN_1003d2f0(this,(Panel *)0x2);
  }
  if ((*(int *)((int)this + 0xaa0) != 0) && (iVar2 = (*DAT_100a5108)(), iVar2 == 0)) {
    iVar2 = *(int *)(*(int *)((int)this + 0xaa0) + 0xc4);
    if ((iVar2 == 2) || (iVar2 == 3)) {
      if ((param_2 == 0x1b) &&
         (((iVar3 = DAT_100b6730, iVar2 == 2 || (iVar3 = DAT_100b6620, iVar2 == 3)) && (iVar3 != 0))
         )) {
        FUN_1003d4b0((int)this);
        return 0;
      }
      iVar3 = 0x30;
      do {
        if ((param_1 != 0) && (param_2 == iVar3)) {
          FUN_1003df20(this,iVar3 + -0x30);
          return 0;
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < 0x3a);
    }
    if ((param_1 != 0) &&
       ((((param_2 == 0xd || (param_2 == 0xa9)) || ((param_2 == 0x20 || (param_2 == 0x1b)))) &&
        (((iVar2 == 4 || (iVar2 == 5)) || (iVar2 == 6)))))) {
      FUN_1003d4b0((int)this);
      return 0;
    }
    if (param_3 != (byte *)0x0) {
      if (param_1 == 0) {
        return 1;
      }
      pbVar5 = &DAT_1007918c;
      do {
        bVar1 = *param_3;
        bVar6 = bVar1 < *pbVar5;
        if (bVar1 != *pbVar5) {
LAB_1003e081:
          iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
          goto LAB_1003e086;
        }
        if (bVar1 == 0) break;
        bVar1 = param_3[1];
        bVar6 = bVar1 < pbVar5[1];
        if (bVar1 != pbVar5[1]) goto LAB_1003e081;
        param_3 = param_3 + 2;
        pbVar5 = pbVar5 + 2;
      } while (bVar1 != 0);
      iVar3 = 0;
LAB_1003e086:
      if ((iVar3 == 0) && (iVar2 == 2)) {
        (**(code **)(**(int **)((int)this + 0xaa4) + 0x208))(5);
        return 0;
      }
    }
  }
  if ((param_1 != 0) && (*(void **)((int)this + 0x208) != (void *)0x0)) {
    if (param_2 == 0x1b) {
      FUN_1003c9a0(this);
      return 0;
    }
    if ((0x2f < param_2) && (param_2 < 0x3a)) {
      uVar4 = FUN_10038f90(*(void **)((int)this + 0x208),param_2);
      if ((char)uVar4 != '\0') {
        FUN_1003c9a0(this);
      }
      return 0;
    }
  }
  return 1;
}

