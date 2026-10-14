
void __cdecl monster_nihilanth(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  
                    /* 0x66930  478  monster_nihilanth */
  if ((param_1 == 0) && (iVar2 = (*DAT_10121e5c)(), iVar2 != 0)) {
    param_1 = iVar2 + 0x80;
  }
  iVar2 = *(int *)(param_1 + 0x208);
  if (((iVar2 == 0) || (iVar1 = iRam00000004, *(int *)(iVar2 + 0x7c) == 0)) &&
     (puVar3 = (undefined4 *)(*DAT_10121f04)(iVar2,0x5d4), iVar1 = param_1,
     puVar3 != (undefined4 *)0x0)) {
    FUN_10002dc0(puVar3);
    FUN_10002ec0(puVar3 + 0x7b,0x10,8,FUN_10002f10);
    *puVar3 = &PTR_FUN_100ece18;
    puVar3[1] = param_1;
    return;
  }
  iRam00000004 = iVar1;
  return;
}

