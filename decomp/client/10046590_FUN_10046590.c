
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10046590(void)

{
  char cVar1;
  float fVar2;
  float fVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  uint uVar7;
  int iVar8;
  char *pcVar9;
  float10 fVar10;
  float fStack_18;
  float fStack_14;
  float fStack_10;
  float fStack_8;
  float fStack_4;
  
  piVar6 = DAT_100bc350;
  piVar5 = DAT_100bc330;
  piVar4 = DAT_100bc32c;
  if (DAT_100bc338 == '\0') {
    if (DAT_100bc490 != 0) {
      FUN_1001d750((float)(DAT_100a4dcc / 2 + -0x78),(float)(DAT_100a4dd0 + -0x19),
                   (float)(DAT_100a4dcc / 2 + 0x78),(float)DAT_100a4dd0,0,0,0,0x3f800000,0);
      FUN_1001e7d0(DAT_100a4dcc / 2 + -0x73,DAT_100a4dd0 + -0x14,DAT_100a4dcc,
                   s_Click_left_mouse_button_to_inter_1007aed0,0xff,0xff,0xff);
      if (DAT_100bc38c != '\0') {
        uVar7 = 0xffffffff;
        pcVar9 = &DAT_100bc38c;
        do {
          if (uVar7 == 0) break;
          uVar7 = uVar7 - 1;
          cVar1 = *pcVar9;
          pcVar9 = pcVar9 + 1;
        } while (cVar1 != '\0');
        iVar8 = ~uVar7 - 1;
        FUN_1001d750((float)((DAT_100a4dcc + iVar8 * -7) / 2 + -5),(float)(DAT_100a4dd0 + -0x2d),
                     (float)((DAT_100a4dcc + iVar8 * 7) / 2 + 5),(float)(DAT_100a4dd0 + -0x19),0,0,0
                     ,0x3f800000,0);
        FUN_1001e7d0((DAT_100a4dcc + iVar8 * -7) / 2,DAT_100a4dd0 + -0x28,DAT_100a4dcc,&DAT_100bc38c
                     ,0xff,0xff,0xff);
      }
    }
  }
  else {
    for (; piVar4 != piVar5; piVar4 = piVar4 + 1) {
      (**(code **)(*(int *)*piVar4 + 8))((int *)*piVar4 == piVar6);
    }
    if ((DAT_100bc32c == (int *)0x0) || (((int)DAT_100bc330 - (int)DAT_100bc32c & 0xfffffffcU) == 0)
       ) {
      FUN_1001e7d0(DAT_100a4dcc / 2 + -0x4b,DAT_100a4dd0 / 2 + -100,DAT_100a4dcc,
                   s_No_interactive_objects_1007aef4,0xff,0x7f,0x7f);
    }
    (**(code **)(DAT_100a5138 + 4))(0);
  }
  fVar10 = FUN_10044870();
  if (fVar10 < (float10)_DAT_100bc388) {
    DAT_100bc384 = 0;
    return;
  }
  if (fVar10 - (float10)_DAT_100bc388 <= (float10)_DAT_10059ea0) {
    if (DAT_100bc384 != '\0') {
      fVar2 = (float)(fVar10 - (float10)_DAT_100bc388) * _DAT_10064d40;
      fVar3 = _DAT_10059a18;
      if ((_DAT_10059a18 <= fVar2) && (fVar3 = fVar2, _DAT_10059eb0 < fVar2)) {
        fVar3 = _DAT_10059eb0;
      }
      fVar3 = _DAT_10059eb0 - fVar3;
      fVar2 = _DAT_10059eb0 - fVar3 * fVar3 * fVar3;
      fStack_8 = (_DAT_100bc370 - DAT_100bc364) * fVar2;
      fStack_4 = (_DAT_100bc374 - _DAT_100bc368) * fVar2;
      fStack_18 = (_DAT_100bc36c - DAT_100bc360) * fVar2 + DAT_100bc360;
      fStack_14 = DAT_100bc364 + fStack_8;
      fStack_10 = _DAT_100bc368 + fStack_4;
      fVar2 = (_DAT_100bc37c - _DAT_100bc378) * fVar2 + _DAT_100bc378;
      fVar2 = fVar2 + fVar2;
      FUN_10044bf0(DAT_100bc380,&fStack_18,fVar2,fVar2);
    }
    return;
  }
  DAT_100bc384 = 0;
  return;
}

