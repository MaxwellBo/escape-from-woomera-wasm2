
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * __fastcall FUN_10064850(undefined4 *param_1)

{
  int iVar1;
  char *pcVar2;
  undefined1 *puVar3;
  char *pcVar4;
  undefined1 auStack_100 [256];
  
  *param_1 = &PTR_FUN_100ecd18;
  FUN_100b24e0(&DAT_10122758,&DAT_10122070,*(int *)(DAT_10122044 + 0x90));
  FUN_10064970();
  param_1[1] = 0;
  _DAT_10122778 = 0;
  iVar1 = (*DAT_10121fd4)();
  if (iVar1 == 0) {
    pcVar2 = (char *)(*DAT_10121ef0)(s_lservercfgfile_10111b4c);
    if ((pcVar2 != (char *)0x0) && (*pcVar2 != '\0')) {
      (*DAT_10121efc)(1,s_Executing_listen_server_config_f_10111b24);
      puVar3 = auStack_100;
      pcVar4 = s_exec__s_10111b5c;
      FUN_100c8506(puVar3,(byte *)s_exec__s_10111b5c);
      (*DAT_10121ea4)(auStack_100,puVar3,pcVar4,pcVar2);
    }
  }
  else {
    pcVar2 = (char *)(*DAT_10121ef0)(s_servercfgfile_10111b90);
    if ((pcVar2 != (char *)0x0) && (*pcVar2 != '\0')) {
      (*DAT_10121efc)(1,s_Executing_dedicated_server_confi_10111b68);
      puVar3 = auStack_100;
      pcVar4 = s_exec__s_10111b5c;
      FUN_100c8506(puVar3,(byte *)s_exec__s_10111b5c);
      (*DAT_10121ea4)(auStack_100,puVar3,pcVar4,pcVar2);
      return param_1;
    }
  }
  return param_1;
}

