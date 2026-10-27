
void __thiscall FUN_1007f800(void *this,int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  
  iVar2 = (*DAT_10121e64)(param_1 - *(int *)(DAT_10122044 + 0x98));
  if (iVar2 != 0) {
    iVar3 = (*DAT_10121f20)(iVar2);
    if (iVar3 != 0) {
      iVar1 = *(int *)((int)this + 4);
      iVar3 = iVar2 + 0x80;
      *(undefined4 *)(iVar2 + 0x88) = *(undefined4 *)(iVar1 + 8);
      *(undefined4 *)(iVar2 + 0x8c) = *(undefined4 *)(iVar1 + 0xc);
      *(undefined4 *)(iVar2 + 0x90) = *(undefined4 *)(iVar1 + 0x10);
      *(uint *)(iVar2 + 0x220) = *(uint *)(iVar2 + 0x220) | 0x40000000;
      FUN_10018b20(iVar2);
      FUN_10018d40(iVar2,*(int *)(*(int *)((int)this + 4) + 0x208));
      if (iVar3 == 0) {
        iVar2 = (*DAT_10121e5c)();
        if (iVar2 != 0) {
          iVar3 = iVar2 + 0x80;
        }
      }
      iVar2 = *(int *)(iVar3 + 0x208);
      if ((iVar2 == 0) || (piVar4 = *(int **)(iVar2 + 0x7c), piVar4 == (int *)0x0)) {
        piVar4 = (int *)(*DAT_10121f04)(iVar2,0xb8);
        if (piVar4 != (int *)0x0) {
          *piVar4 = (int)&PTR_FUN_100dd778;
          piVar4[1] = iVar3;
          (**(code **)(*piVar4 + 0x114))(this);
          return;
        }
        piVar4 = (int *)0x0;
        iRam00000004 = iVar3;
      }
      (**(code **)(*piVar4 + 0x114))(this);
      return;
    }
  }
  (*DAT_10121efc)(1,s_NULL_Ent_in_GiveNamedItem__10114f98);
  return;
}

