
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_10065dd0(int param_1)

{
  undefined *puVar1;
  longlong lVar2;
  undefined4 uVar3;
  
  if (DAT_10121dd0 == 0) {
    (*DAT_10121ec0)(2,0x1e,0,0);
    (*DAT_10121ec4)();
    (*DAT_10121eec)(s_mp_chattime_1010c3a0);
    lVar2 = __ftol();
    if ((int)lVar2 < 10) {
      (*DAT_10121ef8)(s_mp_chattime_1010c3a0,&DAT_1010c39c);
    }
    else if (0x78 < (int)lVar2) {
      uVar3 = 0x78;
      puVar1 = FUN_100afb00();
      (*DAT_10121ef8)(s_mp_chattime_1010c3a0,puVar1,uVar3);
    }
    lVar2 = __ftol();
    *(float *)(param_1 + 4) = (float)(int)lVar2 + *DAT_10122044;
    _DAT_10122778 = *DAT_10122044;
    DAT_10121dd0 = 1;
    *(undefined4 *)(param_1 + 8) = 0;
  }
  return;
}

