
void __cdecl FUN_100b6da0(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  
  iVar2 = (*DAT_10121e5c)();
  if (iVar2 == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = iVar2 + 0x80;
  }
  iVar1 = *(int *)(iVar2 + 0x208);
  if ((iVar1 == 0) || (puVar3 = *(undefined4 **)(iVar1 + 0x7c), puVar3 == (undefined4 *)0x0)) {
    puVar3 = (undefined4 *)(*DAT_10121f04)(iVar1,0xb8);
    if (puVar3 == (undefined4 *)0x0) {
      puVar3 = (undefined4 *)0x0;
    }
    else {
      *puVar3 = &PTR_FUN_100f6784;
    }
    puVar3[1] = iVar2;
  }
  iVar2 = puVar3[1];
  *(undefined4 *)(iVar2 + 8) = *param_2;
  *(undefined4 *)(iVar2 + 0xc) = param_2[1];
  *(undefined4 *)(iVar2 + 0x10) = param_2[2];
  *(int *)puVar3[1] = (int)s_xen_ttrigger_1011c1e0 - *(int *)(DAT_10122044 + 0x98);
  *(undefined4 *)(puVar3[1] + 0x10c) = 1;
  *(undefined4 *)(puVar3[1] + 0x108) = 0;
  *(undefined4 *)(puVar3[1] + 0x198) = param_1;
  return;
}

