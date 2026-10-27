
uint __fastcall FUN_100c22b0(int *param_1)

{
  byte bVar1;
  char *pcVar2;
  char cVar3;
  undefined3 extraout_var;
  int iVar4;
  
  *(char *)param_1[0xe] = (char)param_1[0xc];
  pcVar2 = (char *)param_1[0xe];
  cVar3 = *pcVar2;
  do {
    if (cVar3 != '\0') {
LAB_100c2341:
      bVar1 = *(byte *)param_1[0xe];
      *(byte *)param_1[0xe] = 0;
      iVar4 = param_1[0xe];
      param_1[0xe] = iVar4 + 1;
      *(undefined1 *)(param_1 + 0xc) = *(undefined1 *)(iVar4 + 1);
      return (uint)bVar1;
    }
    if (pcVar2 < (char *)(*(int *)(param_1[0xb] + 4) + param_1[0xd])) {
      *(undefined1 *)param_1[0xe] = 0;
      goto LAB_100c2341;
    }
    param_1[1] = (int)pcVar2;
    param_1[0xe] = (int)(pcVar2 + 1);
    cVar3 = FUN_100c1f20(param_1);
    iVar4 = CONCAT31(extraout_var,cVar3);
    if (iVar4 == 0) {
      param_1[0xe] = param_1[1];
      goto LAB_100c2341;
    }
    if (iVar4 != 1) {
      if (iVar4 == 2) {
        (**(code **)(*param_1 + 0x24))(s_unexpected_last_match_in_yyinput_1011c5c0);
      }
      goto LAB_100c2341;
    }
    iVar4 = FUN_100c27b0();
    if (iVar4 != 0) {
      param_1[0xe] = param_1[1];
      return 0xffffffff;
    }
    if (param_1[0x11] == 0) {
      (**(code **)(*param_1 + 0x10))(param_1[9]);
    }
    *(char *)param_1[0xe] = (char)param_1[0xc];
    pcVar2 = (char *)param_1[0xe];
    cVar3 = *pcVar2;
  } while( true );
}

