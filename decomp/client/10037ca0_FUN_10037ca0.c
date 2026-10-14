
void __thiscall FUN_10037ca0(int param_1,int param_2,char *param_3)

{
  char cVar1;
  int *piVar2;
  int unaff_EBX;
  char *pcVar3;
  longlong lVar4;
  int aiStack_8 [2];
  
  pcVar3 = param_3;
  (**(code **)(**(int **)(*(int *)(param_1 + 0xd0) + 0x24) + 0x70))(param_3);
  piVar2 = (int *)(**(code **)(**(int **)(*(int *)(param_1 + 0xd0) + 0x24) + 0x6c))();
  *(undefined4 *)(param_1 + 0xd8) = 0;
  cVar1 = *pcVar3;
  while (cVar1 != '\0') {
    (**(code **)(*piVar2 + 8))((int)cVar1,&stack0xfffffff4,&param_2,aiStack_8);
    pcVar3 = pcVar3 + 1;
    *(int *)(param_1 + 0xd8) = *(int *)(param_1 + 0xd8) + unaff_EBX + param_2 + aiStack_8[0];
    cVar1 = *pcVar3;
  }
  lVar4 = __ftol();
  *(int *)(param_1 + 0xd8) = (int)lVar4;
  return;
}

