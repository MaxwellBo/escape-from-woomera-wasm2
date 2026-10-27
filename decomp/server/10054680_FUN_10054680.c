
void __fastcall FUN_10054680(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  longlong lVar4;
  int local_4;
  
  local_4 = *(int *)(param_1 + 0x364) * 0x20;
  if (0xff < local_4) {
    local_4 = 0xff;
  }
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 0x364)) {
    piVar3 = (int *)(param_1 + 0x344);
    do {
      iVar1 = *(int *)(*piVar3 + 4);
      lVar4 = __ftol();
      if ((int)lVar4 != 0xff) {
        *(float *)(iVar1 + 0x14c) = (float)local_4;
      }
      iVar2 = iVar2 + 1;
      piVar3 = piVar3 + 1;
    } while (iVar2 < *(int *)(param_1 + 0x364));
  }
  return;
}

