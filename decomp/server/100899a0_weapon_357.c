
void __cdecl weapon_357(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  
                    /* 0x899a0  561  weapon_357 */
  if ((param_1 == 0) && (iVar2 = (*DAT_10121e5c)(), iVar2 != 0)) {
    param_1 = iVar2 + 0x80;
  }
  iVar2 = *(int *)(param_1 + 0x208);
  if (((iVar2 == 0) || (iVar1 = iRam00000004, *(int *)(iVar2 + 0x7c) == 0)) &&
     (puVar3 = (undefined4 *)(*DAT_10121f04)(iVar2,300), iVar1 = param_1,
     puVar3 != (undefined4 *)0x0)) {
    *puVar3 = &PTR_FUN_100ef39c;
    puVar3[1] = param_1;
    return;
  }
  iRam00000004 = iVar1;
  return;
}

