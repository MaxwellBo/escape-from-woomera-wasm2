
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_10013350(void *param_1)

{
  float10 fVar1;
  
  fVar1 = (float10)(*DAT_100a502c)(s_voice_clientdebug_100779dc);
  if (fVar1 != (float10)_DAT_10059a18) {
    (*DAT_100a5068)(s_CVoiceStatus__HandleReqStateMsg_10077c9c);
  }
  FUN_10012e90(param_1,'\x01');
  return;
}

