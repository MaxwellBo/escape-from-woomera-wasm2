
void __cdecl FUN_10009150(int param_1,undefined4 *param_2,int param_3)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  
  if (param_1 != 0) {
    iVar5 = *(int *)(param_1 + 0x8c);
    if (param_3 <= *(int *)(param_1 + 0x8c)) {
      iVar5 = param_3;
    }
    if (0 < iVar5) {
      puVar4 = (undefined4 *)(*(int *)(param_1 + 0x90) + param_1 + 0x40);
      do {
        iVar3 = 3;
        puVar2 = puVar4;
        do {
          uVar1 = *param_2;
          param_2 = param_2 + 1;
          *puVar2 = uVar1;
          puVar2 = puVar2 + 1;
          iVar3 = iVar3 + -1;
        } while (iVar3 != 0);
        puVar4 = puVar4 + 0x1c;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
    }
    return;
  }
  (*DAT_10121efc)(4,s_Bad_header_in_SetBones__101029d8);
  return;
}

