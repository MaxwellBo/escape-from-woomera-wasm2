
void __cdecl FUN_1008d210(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = (*DAT_10121e40)(0,s_classname_101155f8,s_monster_satchel_10115578);
  while( true ) {
    if (iVar1 == 0) {
      return;
    }
    iVar2 = (*DAT_10121f20)(iVar1);
    if (iVar2 == 0) break;
    iVar2 = *(int *)(iVar1 + 0x7c);
    if ((iVar2 != 0) &&
       (*(int *)(*(int *)(iVar2 + 4) + 0x198) == *(int *)(*(int *)(param_1 + 4) + 0x208))) {
      FUN_1008c560(iVar2);
    }
    iVar1 = (*DAT_10121e40)(iVar1,s_classname_101155f8,s_monster_satchel_10115578);
  }
  return;
}

