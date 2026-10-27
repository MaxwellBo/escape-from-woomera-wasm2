
undefined4 __cdecl HUD_Key_Event(int param_1,int param_2,byte *param_3)

{
  undefined4 uVar1;
  
                    /* 0x22d00  488  HUD_Key_Event */
  if (DAT_100a5178 != (void *)0x0) {
    uVar1 = FUN_1003df40(DAT_100a5178,param_1,param_2,param_3);
    return uVar1;
  }
  return 1;
}

