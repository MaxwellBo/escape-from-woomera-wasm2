
void FUN_10031971(void)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined2 in_SS;
  int iStack_4;
  
  iStack_4 = CONCAT22(iStack_4._2_2_,in_SS);
  if ((iStack_4 == 0) && (iVar2 = (*DAT_10121e5c)(0x86100316), iVar2 != 0)) {
    iStack_4 = iVar2 + 0x80;
  }
  iVar2 = *(int *)(iStack_4 + 0x208);
  if (((iVar2 == 0) || (iVar1 = iRam00000004, *(int *)(iVar2 + 0x7c) == 0)) &&
     (puVar3 = (undefined4 *)(*DAT_10121f04)(iVar2,0xb8), iVar1 = iStack_4,
     puVar3 != (undefined4 *)0x0)) {
    *puVar3 = &PTR_FUN_100e3590;
    puVar3[1] = iStack_4;
    return;
  }
  iRam00000004 = iVar1;
  return;
}

