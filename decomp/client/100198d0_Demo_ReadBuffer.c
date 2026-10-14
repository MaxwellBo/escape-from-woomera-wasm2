
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl Demo_ReadBuffer(undefined4 param_1,int *param_2)

{
                    /* 0x198d0  476  Demo_ReadBuffer */
  if (*param_2 == 0) {
    _DAT_100a54b8 = param_2[1];
    if (param_2[1] != 0) {
      _DAT_100a54bc = param_2[2];
      _DAT_100a54ac = param_2[3];
      _DAT_100a54b0 = param_2[4];
      _DAT_100a54b4 = param_2[5];
      _DAT_100a54a0 = param_2[6];
      _DAT_100a54a4 = param_2[7];
      _DAT_100a54a8 = param_2[8];
    }
    return;
  }
  if (*param_2 != 1) {
    (*DAT_100a5094)(s_Unknown_demo_buffer_type__skippi_10078508);
    return;
  }
  _DAT_100a549c = param_2[1];
  return;
}

