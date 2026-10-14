
void __fastcall FUN_10080e20(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = 0;
  piVar2 = (int *)(param_1 + 0x534);
  do {
    if (*piVar2 != piVar2[0x20]) {
      piVar2[0x20] = *piVar2;
      (*DAT_10121ec0)(1,DAT_101248a4,0,*(undefined4 *)(*(int *)(param_1 + 4) + 0x208));
      (*DAT_10121ec8)(iVar3);
      iVar1 = *piVar2;
      if (iVar1 < 0xfe) {
        if (iVar1 < 1) {
          iVar1 = 0;
        }
        else if (0xfd < iVar1) goto LAB_10080e78;
      }
      else {
LAB_10080e78:
        iVar1 = 0xfe;
      }
      (*DAT_10121ec8)(iVar1);
      (*DAT_10121ec4)();
    }
    iVar3 = iVar3 + 1;
    piVar2 = piVar2 + 1;
    if (0x1f < iVar3) {
      return;
    }
  } while( true );
}

