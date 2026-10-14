
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __fastcall FUN_1002cb80(void *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  float10 fVar6;
  longlong lVar7;
  int iStack_10;
  int iStack_c;
  int iStack_8;
  int iStack_4;
  
  if (*(int *)((int)param_1 + 0x234) != 0) {
    iVar3 = 0;
    puVar4 = (undefined4 *)((int)param_1 + 0x238);
    do {
      *puVar4 = &DAT_10078444;
      FUN_1002c910(param_1,iVar3);
      iVar3 = iVar3 + 1;
      puVar4 = puVar4 + 1;
    } while (iVar3 < 2);
    *(undefined4 *)((int)param_1 + 0x234) = 0;
  }
  iVar3 = 0;
  do {
    iStack_4 = iVar3 * 0x80 + 0x114 + (int)param_1;
    (*DAT_100a5064)(iStack_4,&iStack_c,&iStack_10);
    if (DAT_100a4dd0 < 0x1e0) {
      iVar1 = DAT_100a4dd0 + -0x2d;
    }
    else {
      iVar1 = DAT_100a4dd0 + -0x37;
    }
    iVar5 = 5;
    iVar1 = iVar1 - iStack_10 * iVar3;
    if (iVar3 == 1) {
      fVar6 = (float10)(*DAT_100a502c)(s_hud_centerid_10079aa8);
      if (fVar6 != (float10)_DAT_10059a18) {
        iVar2 = DAT_100a4dcc - iStack_c;
        iVar1 = 2;
        if (1 < iVar2) {
          iVar1 = iVar2;
        }
        if (iVar1 / 2 < 0) {
          iVar5 = 0;
        }
        else {
          iVar5 = 2;
          if (1 < iVar2) {
            iVar5 = iVar2;
          }
          iVar5 = iVar5 / 2;
        }
        (*DAT_100a502c)(s_hud_centerid_10079aa8);
        iStack_8 = DAT_100a4dd0 / 2;
        lVar7 = __ftol();
        iVar1 = (int)lVar7;
      }
    }
    puVar4 = *(undefined4 **)((int)param_1 + iVar3 * 4 + 0x238);
    if (puVar4 != (undefined4 *)0x0) {
      (*DAT_100a5060)(*puVar4,puVar4[1],puVar4[2]);
    }
    (*DAT_100a505c)(iVar5,iVar1,iStack_4);
    iVar3 = iVar3 + 1;
  } while (iVar3 < 2);
  return 1;
}

