
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_10018330(void *this,int param_1,char *param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 *puVar2;
  longlong lVar3;
  
  if (param_1 == 3) {
    if ((DAT_100a4dd0 + -100 <
         (DAT_100a3a38 + 5) * *(int *)((int)this + 0xc4) + 0x20 + DAT_100a3a38 * 2) ||
       (0xb < *(int *)((int)this + 0xc4))) {
      *(undefined4 *)((int)this + 0xc4) = 0;
    }
    puVar2 = (undefined4 *)(*(int *)((int)this + 0xc4) * 0x10 + (int)this);
    *(int *)((int)this + 0xc4) = *(int *)((int)this + 0xc4) + 1;
    iVar1 = FUN_1001c090(&DAT_100a3a40,param_2);
    if (iVar1 != -1) {
      puVar2[3] = iVar1;
      *puVar2 = 3;
      puVar2[2] = param_3;
      (*DAT_100a502c)(s_hud_drawhistory_time_10077e78);
      lVar3 = __ftol();
      _DAT_10077fec = (int)lVar3;
      puVar2[1] = (float)_DAT_10077fec + DAT_100a3a64;
    }
  }
  return;
}

