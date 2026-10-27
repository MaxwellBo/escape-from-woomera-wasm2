
undefined4 __cdecl HUD_GetHullBounds(int param_1)

{
  undefined4 uVar1;
  
                    /* 0x18b90  484  HUD_GetHullBounds */
  uVar1 = 0;
  if (((param_1 == 0) || (param_1 == 1)) || (param_1 == 2)) {
    uVar1 = 1;
  }
  return uVar1;
}

