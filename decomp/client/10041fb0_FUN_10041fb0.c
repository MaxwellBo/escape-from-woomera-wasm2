
undefined1 * __cdecl FUN_10041fb0(undefined1 *param_1,undefined1 *param_2)

{
  undefined1 *puVar1;
  char cVar2;
  char *pcVar3;
  char *pcVar4;
  undefined1 local_1c [4];
  char *local_18;
  uint local_14;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puVar1 = param_2;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10058198;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_10042610(&DAT_100baee8,&param_2,(int)param_2);
  if (param_2 != DAT_100baeec) {
    puVar1 = param_2 + 0x1c;
    *param_1 = *puVar1;
    FUN_100424b0(param_1,'\0');
    FUN_100422b0(param_1,puVar1,0,DAT_10064d2c);
    ExceptionList = local_c;
    return param_1;
  }
  local_1c[0] = *puVar1;
  FUN_100424b0(local_1c,'\0');
  FUN_100422b0(local_1c,puVar1,0,DAT_10064d2c);
  local_4 = 0;
  if (local_18 != (char *)0x0) {
    if ((local_18[-1] != '\0') && (local_18[-1] != -1)) {
      FUN_100429c0(local_1c,local_14,'\0');
    }
    if ((local_18 != (char *)0x0) && (local_18[-1] = -1, local_18 != (char *)0x0)) {
      pcVar4 = local_18 + local_14;
      if ((local_18[-1] != '\0') && (local_18[-1] != -1)) {
        FUN_100429c0(local_1c,local_14,'\0');
      }
      pcVar3 = local_18;
      if (local_18 != (char *)0x0) {
        local_18[-1] = -1;
      }
      goto joined_r0x100420ba;
    }
  }
  pcVar4 = (char *)0x0;
  pcVar3 = local_18;
joined_r0x100420ba:
  for (; pcVar3 != pcVar4; pcVar3 = pcVar3 + 1) {
    if (*pcVar3 == '_') {
      *pcVar3 = ' ';
    }
  }
  *param_1 = local_1c[0];
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  FUN_100422b0(param_1,local_1c,0,DAT_10064d2c);
  if (local_18 != (char *)0x0) {
    cVar2 = local_18[-1];
    if ((cVar2 != '\0') && (cVar2 != -1)) {
      local_18[-1] = cVar2 + -1;
      ExceptionList = local_c;
      return param_1;
    }
    FUN_10049a73(local_18 + -1);
  }
  ExceptionList = local_c;
  return param_1;
}

