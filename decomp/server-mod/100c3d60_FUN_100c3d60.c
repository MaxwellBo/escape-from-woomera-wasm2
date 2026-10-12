
void FUN_100c3d60(int *param_1)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  
  if (param_1 != DAT_10132c78) {
    do {
      FUN_100c3d60((int *)param_1[2]);
      iVar2 = param_1[4];
      piVar3 = (int *)*param_1;
      if (iVar2 != 0) {
        cVar1 = *(char *)(iVar2 + -1);
        if ((cVar1 == '\0') || (cVar1 == -1)) {
          FUN_100c8ce6((char *)(iVar2 + -1));
        }
        else {
          *(char *)(iVar2 + -1) = cVar1 + -1;
        }
      }
      param_1[4] = 0;
      param_1[5] = 0;
      param_1[6] = 0;
      FUN_100c8ce6((undefined *)param_1);
      param_1 = piVar3;
    } while (piVar3 != DAT_10132c78);
  }
  return;
}

