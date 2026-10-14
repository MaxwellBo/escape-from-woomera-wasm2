
void __cdecl IN_MouseEvent(uint param_1)

{
  uint uVar1;
  int iVar2;
  
                    /* 0x23fa0  508  IN_MouseEvent */
  if ((DAT_100a97b4 == 0) && (DAT_100a9ad0 == 0)) {
    iVar2 = 0;
    if (0 < DAT_100a9ab4) {
      do {
        uVar1 = 1 << ((byte)iVar2 & 0x1f);
        if (((uVar1 & param_1) != 0) && ((DAT_100a9ab0 & uVar1) == 0)) {
          (*DAT_100a50b0)(iVar2 + 0xf1,1);
        }
        if (((uVar1 & param_1) == 0) && ((DAT_100a9ab0 & uVar1) != 0)) {
          (*DAT_100a50b0)(iVar2 + 0xf1,0);
        }
        iVar2 = iVar2 + 1;
      } while (iVar2 < DAT_100a9ab4);
    }
    DAT_100a9ab0 = param_1;
  }
  return;
}

