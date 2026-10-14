
void __thiscall FUN_1006f6a0(void *this,int param_1)

{
  int *piVar1;
  undefined4 uVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 *puVar9;
  int iVar10;
  
  iVar5 = param_1 / 2;
  if (DAT_1011285c < param_1 / 2) {
    iVar5 = DAT_1011285c;
  }
  iVar10 = 1;
  piVar3 = (int *)((int)this + 0x207c);
  iVar6 = 0;
  do {
    if (DAT_101125a0 != 0) {
      piVar4 = &DAT_101125a0;
      iVar7 = DAT_101125a0;
      do {
        if ((((piVar4 == &DAT_101125a0) || (iVar8 = iVar7, param_1 % *piVar4 != 0)) &&
            (iVar8 = *piVar4, iVar7 <= iVar10)) && (iVar10 <= iVar8)) {
          if (iVar8 - iVar10 < iVar10 - iVar7) {
            *piVar3 = iVar8;
          }
          else {
            *piVar3 = iVar7;
          }
          iVar6 = iVar6 + 1;
          piVar3 = piVar3 + 1;
          break;
        }
        piVar1 = piVar4 + 1;
        piVar4 = piVar4 + 1;
        iVar7 = iVar8;
      } while (*piVar1 != 0);
    }
    iVar10 = iVar10 + ((int)(iVar5 + (iVar5 >> 0x1f & 0xfU)) >> 4);
    if (0xf < iVar6) {
      iVar5 = 8;
      piVar3 = (int *)((int)this + 0x207c);
      do {
        *piVar3 = param_1 - *piVar3;
        piVar3 = piVar3 + 2;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
      iVar5 = 0xf;
      puVar9 = (undefined4 *)((int)this + 0x20b8);
      do {
        iVar6 = (*DAT_10121f70)(0,iVar5);
        uVar2 = *(undefined4 *)((int)this + iVar6 * 4 + 0x207c);
        *(undefined4 *)((int)this + iVar6 * 4 + 0x207c) = *puVar9;
        *puVar9 = uVar2;
        puVar9 = puVar9 + -1;
        iVar5 = iVar5 + -1;
      } while (0 < iVar5);
      return;
    }
  } while( true );
}

