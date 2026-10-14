
undefined4 * __cdecl FUN_100b7490(int param_1,undefined4 param_2,undefined4 param_3,float *param_4)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  float fStack_c;
  float fStack_8;
  float fStack_4;
  
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
      *puVar3 = &PTR_FUN_100f69b8;
    }
    puVar3[1] = iVar2;
  }
  iVar2 = *(int *)(param_1 + 4);
  fStack_4 = *(float *)(iVar2 + 0x10) + param_4[2];
  fStack_8 = *(float *)(iVar2 + 0xc) + param_4[1];
  fStack_c = *(float *)(iVar2 + 8) + *param_4;
  FUN_100afe10((int)puVar3,&fStack_c);
  (*DAT_10121e10)(*(undefined4 *)(puVar3[1] + 0x208),
                  *(int *)(*(int *)(param_1 + 4) + 0xb8) + *(int *)(DAT_10122044 + 0x98));
  *(undefined4 *)(puVar3[1] + 0x10c) = 2;
  *(int *)puVar3[1] = (int)s_xen_hull_1011c220 - *(int *)(DAT_10122044 + 0x98);
  *(undefined4 *)(puVar3[1] + 0x108) = 0;
  *(undefined4 *)(puVar3[1] + 0x198) = *(undefined4 *)(*(int *)(param_1 + 4) + 0x208);
  FUN_100afdc0(puVar3[1],param_2,param_3);
  *(undefined4 *)(puVar3[1] + 0x14c) = 0;
  *(undefined4 *)(puVar3[1] + 0x148) = 2;
  return puVar3;
}

