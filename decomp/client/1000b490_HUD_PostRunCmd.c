
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
HUD_PostRunCmd(int *param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5,
              undefined4 param_6,undefined4 param_7)

{
                    /* 0xb490  492  HUD_PostRunCmd */
  DAT_100a5180 = param_4;
  if ((DAT_100a9584 != 0) && (*(float *)(DAT_100a9584 + 0xc) != _DAT_10059a18)) {
    FUN_1000aae0(param_1,param_2,param_3,(double)CONCAT44(param_6,param_5),param_7);
    DAT_100a9588 = *(undefined4 *)(param_2 + 0x1b4);
    return;
  }
  *(undefined4 *)(param_2 + 0x1b4) = DAT_100a9588;
  DAT_100a9588 = *(undefined4 *)(param_2 + 0x1b4);
  return;
}

