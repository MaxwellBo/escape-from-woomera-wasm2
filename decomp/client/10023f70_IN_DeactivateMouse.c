
void IN_DeactivateMouse(void)

{
  if (DAT_100a9998 != 0) {
    if (DAT_100a9aac != 0) {
      SystemParametersInfoA(4,0,&DAT_100a9a2c,0);
    }
    DAT_100a9abc = 0;
  }
  return;
}

