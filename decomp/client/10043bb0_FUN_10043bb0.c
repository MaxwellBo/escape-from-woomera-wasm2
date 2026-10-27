
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10043bb0(void)

{
  float fVar1;
  float fVar2;
  char *pcVar3;
  int iVar4;
  float10 fVar5;
  longlong lVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  float local_4;
  
  if (DAT_100baf08 != 0) {
    fVar5 = FUN_10044870();
    fVar5 = (fVar5 - (float10)_DAT_100baf14) * (float10)_DAT_10064d40;
    local_4 = (float)fVar5;
    if ((float10)_DAT_10059eb0 < fVar5) {
      local_4 = 1.0;
    }
    fVar1 = (local_4 + _DAT_10059eb0) * _DAT_10059cec *
            ((float)DAT_100a4dd0 - _DAT_1005ace0) * _DAT_10059cec;
    fVar2 = (float)DAT_100a4dd0 * _DAT_10059cec - fVar1;
    FUN_1001d750(0,fVar2 - _DAT_10059eb0,(float)DAT_100a4dcc,fVar2,0,0,0x3f19999a,0x3f800000,0);
    FUN_1001d750(0,(float)DAT_100a4dd0 * _DAT_10059cec - fVar1,(float)DAT_100a4dcc,
                 (float)DAT_100a4dd0 * _DAT_10059cec,0,0,0x3e4ccccd,0x3f800000,0);
    FUN_1001d750(0,(float)DAT_100a4dd0 * _DAT_10059cec,(float)DAT_100a4dcc,
                 (float)DAT_100a4dd0 * _DAT_10059cec + fVar1,0,0,0x3e4ccccd,0x3f800000,0);
    fVar1 = (float)DAT_100a4dd0 * _DAT_10059cec + fVar1;
    FUN_1001d750(0,fVar1,(float)DAT_100a4dcc,fVar1 + _DAT_10059eb0,0,0,0x3f19999a,0x3f800000,0);
    pcVar3 = DAT_100baf04;
    if (DAT_100baf04 == (char *)0x0) {
      pcVar3 = "";
    }
    uVar9 = 0xff;
    uVar8 = 0xff;
    uVar7 = 0xff;
    iVar4 = DAT_100a4dcc + -0x4b;
    lVar6 = __ftol();
    FUN_1001e7d0(0x4b,(int)lVar6,iVar4,pcVar3,uVar7,uVar8,uVar9);
    if (_DAT_10059eb0 <= local_4) {
      FUN_1001e7d0(DAT_100a4dcc + -300,DAT_100a4dd0 + -0x73,DAT_100a4dcc,
                   s_Press_left_mouse_button_to_conti_1007ab7c,0xff,0xff,0xff);
    }
  }
  return;
}

