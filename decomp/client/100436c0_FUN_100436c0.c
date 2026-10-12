
void FUN_100436c0(void)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  iVar2 = DAT_100a4dd0;
  iVar1 = DAT_100a4dcc;
  uVar3 = (*DAT_100a4ff0)(s_sprites_efw_grey_spr_1007ab64);
  iVar4 = (*DAT_100a4ffc)(uVar3,0);
  iVar5 = (*DAT_100a4ff8)(uVar3,0);
  (*DAT_100a5000)(uVar3,0,0,0);
  iVar7 = 0;
  if (0 < iVar1) {
    do {
      iVar6 = 0;
      if (0 < iVar2) {
        do {
          (*DAT_100a5004)(0,iVar7,iVar6,0);
          iVar6 = iVar6 + iVar5;
        } while (iVar6 < iVar2);
      }
      iVar7 = iVar7 + iVar4;
    } while (iVar7 < iVar1);
  }
  return;
}

