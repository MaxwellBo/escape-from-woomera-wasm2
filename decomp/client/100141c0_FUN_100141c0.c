
void __thiscall FUN_100141c0(int param_1,int param_2)

{
  char cVar1;
  
  if (param_2 == param_1 + 0x628) {
    cVar1 = FUN_10031580(param_2);
    if (cVar1 != '\0') {
      (*DAT_100a5040)(s_voice_modenable_1_10077b34);
      return;
    }
    (*DAT_100a5040)(s_voice_modenable_0_10077de4);
  }
  return;
}

