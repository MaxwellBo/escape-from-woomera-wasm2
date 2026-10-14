
void __cdecl CL_CameraOffset(undefined4 *param_1)

{
                    /* 0x22970  472  CL_CameraOffset */
  if (DAT_100a97b8 != '\0') {
    DAT_100a9738 = DAT_100a97bc;
    DAT_100a973c = DAT_100a97c0;
    DAT_100a9740 = DAT_100a97c4;
  }
  *param_1 = DAT_100a9738;
  param_1[1] = DAT_100a973c;
  param_1[2] = DAT_100a9740;
  return;
}

