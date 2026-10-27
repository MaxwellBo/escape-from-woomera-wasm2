
undefined4 __thiscall FUN_100609d0(void *this,float param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  int *piVar6;
  int local_28 [10];
  
  iVar2 = FUN_1006c3e0(&DAT_10122780,(float *)(*(int *)((int)this + 4) + 8),(int)this);
  iVar3 = FUN_1006c3e0(&DAT_10122780,&param_1,(int)this);
  if (iVar2 == -1) {
    return 0;
  }
  if (iVar3 != -1) {
    iVar4 = FUN_1006ba70((int)this);
    iVar4 = FUN_1006bcd0(&DAT_10122780,local_28,iVar2,iVar3,iVar4,*(uint *)((int)this + 0x2b8));
    if (iVar4 != 0) {
      if (7 < iVar4) {
        iVar4 = 8;
      }
      if (0 < iVar4) {
        piVar6 = local_28;
        puVar5 = (undefined4 *)((int)this + 0x1f8);
        iVar2 = iVar4;
        do {
          iVar3 = *piVar6;
          piVar6 = piVar6 + 1;
          puVar1 = (undefined4 *)(DAT_1012278c + iVar3 * 0x58);
          iVar2 = iVar2 + -1;
          puVar5[-3] = *puVar1;
          puVar5[-2] = puVar1[1];
          puVar5[-1] = puVar1[2];
          *puVar5 = 0x20;
          puVar5 = puVar5 + 4;
        } while (iVar2 != 0);
      }
      if (iVar4 < 8) {
        *(float *)((int)this + iVar4 * 0x10 + 0x1ec) = param_1;
        *(undefined4 *)((int)this + iVar4 * 0x10 + 0x1f0) = param_2;
        *(undefined4 *)((int)this + iVar4 * 0x10 + 500) = param_3;
        *(uint *)((int)this + iVar4 * 0x10 + 0x1f8) =
             *(uint *)((int)this + iVar4 * 0x10 + 0x1f8) | 0x80;
      }
      return 1;
    }
    (*DAT_10121efc)(2,s_No_Path_from__d_to__d__10111434,iVar2,iVar3);
    return 0;
  }
  return 0;
}

