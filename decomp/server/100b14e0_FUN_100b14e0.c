
void __thiscall FUN_100b14e0(void *param_1,byte *param_2,char *param_3)

{
  char cVar1;
  uint uVar2;
  char *pcVar3;
  
  uVar2 = 0xffffffff;
  pcVar3 = param_3;
  do {
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  FUN_100b1c20(param_1,param_2,~uVar2,(undefined4 *)param_3);
  return;
}

