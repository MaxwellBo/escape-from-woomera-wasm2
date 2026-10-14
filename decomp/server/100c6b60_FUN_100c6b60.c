
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c6b60(void)

{
  undefined1 uVar1;
  int iVar2;
  undefined3 extraout_var;
  int iVar3;
  
  FUN_100c6ad0();
  iVar2 = FUN_100c81b0(0);
  iVar2 = (&DAT_10134444)[iVar2];
  FUN_100c81a0(1,iVar2);
  FUN_100c81a0(2,(uint)(byte)(&DAT_10134474)[iVar2]);
  uVar1 = FUN_100c5b80();
  FUN_100c81a0(3,CONCAT31(extraout_var,uVar1));
  FUN_100c6dd0();
  _DAT_10134878 = _DAT_10134878 + 1;
  FUN_100c6a70();
  FUN_100c6a60();
  iVar2 = FUN_100c6980();
  if (iVar2 != 0) {
    iVar3 = -1;
    if (*(int *)(iVar2 + 0x528) != 0) {
      iVar3 = FUN_100c43b0((byte *)(**(int **)(*(int *)(iVar2 + 0x528) + 4) +
                                   *(int *)(DAT_10122044 + 0x98)));
    }
    FUN_100c81a0(4,iVar3);
  }
  FUN_100c6c10();
  FUN_100c7830();
  FUN_100c7d30();
  return;
}

