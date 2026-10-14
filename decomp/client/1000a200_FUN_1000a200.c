
void __cdecl FUN_1000a200(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined1 auStack_2c [28];
  int iStack_10;
  
  iVar1 = DAT_100873c0 * 0x2a4;
  puVar3 = (undefined4 *)(&DAT_100807f8 + iVar1);
  for (iVar2 = 0xa9; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  param_1[1] = (int)(&DAT_100807f8 + iVar1);
  DAT_100873c0 = DAT_100873c0 + 1;
  (**(code **)(*param_1 + 0x2c))();
  (**(code **)(*param_1 + 0x28))();
  if (param_2 != 0) {
    param_1[0x37] = param_2;
    (**(code **)(*param_1 + 0x124))(auStack_2c);
    (&DAT_1007ff28)[iStack_10] = param_1;
  }
  return;
}

