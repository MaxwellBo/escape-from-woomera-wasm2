
void IN_ActivateMouse(void)

{
                    /* 0x23e30  505  IN_ActivateMouse */
  if (DAT_100a9998 != 0) {
    if (DAT_100a9a04 != 0) {
      DAT_100a9aac = SystemParametersInfoA(4,0,&DAT_100792b4,0);
    }
    DAT_100a9abc = 1;
  }
  return;
}

