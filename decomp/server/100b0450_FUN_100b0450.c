
/* WARNING: Removing unreachable block (ram,0x100b048f) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_100b0450(int param_1,int param_2)

{
  int *piVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  
  if (param_2 < 0) {
    return;
  }
  iVar4 = (&DAT_1011bb7c)[param_2 * 2];
  if (iVar4 < 0) {
    return;
  }
  if (*(float *)(param_1 + 0x10) == (float)_DAT_100dd628) {
    return;
  }
  if (*(int *)(param_1 + 0x30) == 0) {
    sVar2 = 0;
  }
  else {
    piVar1 = *(int **)(*(int *)(param_1 + 0x30) + 0x7c);
    if ((piVar1 != (int *)0x0) && (iVar3 = (**(code **)(*piVar1 + 0xbc))(), iVar3 == 0)) {
      return;
    }
    sVar2 = (*DAT_10121f24)(*(undefined4 *)(param_1 + 0x30));
  }
  uVar5 = 0x68;
  if (sVar2 == 0) {
    uVar5 = 0x74;
    if (iVar4 < 0x100) goto LAB_100b04fc;
    uVar5 = 0x75;
  }
  else {
    if (iVar4 < 0x100) goto LAB_100b04fc;
    uVar5 = 0x76;
  }
  iVar4 = iVar4 + -0x100;
LAB_100b04fc:
  (*DAT_10121ec0)(0,0x17,0,0);
  (*DAT_10121ec8)(uVar5);
  (*DAT_10121edc)(*(undefined4 *)(param_1 + 0x14));
  (*DAT_10121edc)(*(undefined4 *)(param_1 + 0x18));
  (*DAT_10121edc)(*(undefined4 *)(param_1 + 0x1c));
  (*DAT_10121ec8)(iVar4);
  if (sVar2 != 0) {
    (*DAT_10121ed0)((int)sVar2);
  }
  (*DAT_10121ec4)();
  return;
}

