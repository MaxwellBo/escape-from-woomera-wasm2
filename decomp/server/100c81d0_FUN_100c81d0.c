
void __cdecl FUN_100c81d0(int param_1,int param_2)

{
  char *pcVar1;
  
  if (param_2 == 0x43) {
    FUN_100c4d70(15.0);
  }
  else if (param_2 == 0x3f) {
    FUN_100c4d70(15.0);
  }
  else {
    if (((((param_2 == 0x45) || (param_2 == 0x3d)) || (param_2 == 0x3e)) ||
        ((param_2 == 0x40 || (param_2 == 0x41)))) ||
       ((param_2 == 0x42 || ((param_2 == 0x3c || (param_2 == 0x44)))))) {
      pcVar1 = s_<error>_1011df9c;
      if ((0x3b < param_2) && (param_2 - 0x3cU < 0x16)) {
        pcVar1 = *(char **)(s_Where_do_you_think_you_re_going__1011d618 + param_2 * 4 + 0x24);
      }
      FUN_100c6e60(0,pcVar1,(char *)0x0,(char *)0x0,(char *)0x0,(char *)0x0,(char *)0x0,(char *)0x0,
                   0x43480000);
      return;
    }
    if (param_2 == 0x47) goto LAB_100c8266;
  }
  FUN_100c7430();
LAB_100c8266:
  (*DAT_10121ec0)(1,DAT_10124900,0,*(undefined4 *)(*(int *)(param_1 + 4) + 0x208));
  (*DAT_10121ec8)(param_2);
  (*DAT_10121ec4)();
  return;
}

