
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_10018290(void *this,int param_1,int param_2,int param_3)

{
  int *piVar1;
  longlong lVar2;
  
  if ((param_1 != 1) || (param_3 != 0)) {
    if ((DAT_100a4dd0 + -100 <
         (DAT_100a3a38 + 5) * *(int *)((int)this + 0xc4) + 0x20 + DAT_100a3a38 * 2) ||
       (0xb < *(int *)((int)this + 0xc4))) {
      *(undefined4 *)((int)this + 0xc4) = 0;
    }
    piVar1 = (int *)(*(int *)((int)this + 0xc4) * 0x10 + (int)this);
    *(int *)((int)this + 0xc4) = *(int *)((int)this + 0xc4) + 1;
    (*DAT_100a502c)(s_hud_drawhistory_time_10077e78);
    lVar2 = __ftol();
    _DAT_10077fec = (int)lVar2;
    *piVar1 = param_1;
    piVar1[3] = param_2;
    piVar1[2] = param_3;
    piVar1[1] = (int)((float)_DAT_10077fec + DAT_100a3a64);
  }
  return;
}

