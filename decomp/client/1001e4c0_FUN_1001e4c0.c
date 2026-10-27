
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_1001e4c0(float param_1)

{
  float fVar1;
  float fVar2;
  char cVar3;
  int iVar4;
  float fVar5;
  float *pfVar6;
  float *pfVar7;
  longlong lVar8;
  float fStack_78;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  float afStack_58 [4];
  undefined1 local_48 [16];
  undefined1 uStack_38;
  undefined1 uStack_37;
  undefined1 uStack_36;
  undefined1 uStack_35;
  undefined1 uStack_34;
  undefined1 uStack_33;
  undefined1 uStack_32;
  undefined1 uStack_31;
  float afStack_30 [12];
  
  (*DAT_100a511c)(local_48);
  if (_DAT_10059a18 <= param_1) {
    if (_DAT_10059eb0 < param_1) {
      param_1 = 1.0;
    }
  }
  else {
    param_1 = 0.0;
  }
  fVar5 = (_DAT_100a95ac - _DAT_10078960) / _DAT_10078964;
  fVar5 = fVar5 + fVar5;
  iVar4 = FUN_10047670(3);
  if (iVar4 == 0) {
    pfVar6 = (float *)&DAT_10078890;
  }
  else if (iVar4 == 1) {
    pfVar6 = (float *)&DAT_10078890;
  }
  else {
    if (iVar4 != 2) goto LAB_1001e573;
    pfVar6 = (float *)&DAT_100788f0;
  }
  pfVar7 = afStack_30;
  for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
    *pfVar7 = *pfVar6;
    pfVar6 = pfVar6 + 1;
    pfVar7 = pfVar7 + 1;
  }
LAB_1001e573:
  pfVar6 = (float *)FUN_1001d9e0(afStack_58,afStack_30,fVar5 + fVar5);
  fStack_68 = *pfVar6;
  fStack_64 = pfVar6[1];
  fStack_60 = pfVar6[2];
  fStack_5c = pfVar6[3];
  pfVar6 = (float *)FUN_1001d960(afStack_58,_DAT_10059eb0 - param_1,&fStack_68,
                                 (float *)&DAT_10078950);
  fStack_78 = *pfVar6;
  fStack_74 = pfVar6[1];
  fStack_70 = pfVar6[2];
  fStack_6c = pfVar6[3];
  if (_DAT_100a95ac < _DAT_1007896c + _DAT_10078968) {
    fVar1 = (_DAT_100a95ac - _DAT_10078968) / _DAT_1007896c;
    fVar2 = _DAT_10059a18;
    if ((_DAT_10059a18 <= fVar1) && (fVar2 = fVar1, _DAT_10059eb0 < fVar1)) {
      fVar2 = _DAT_10059eb0;
    }
    pfVar6 = (float *)FUN_1001d960(afStack_58,fVar2,(float *)&DAT_10078940,&fStack_78);
    fStack_78 = *pfVar6;
    fStack_74 = pfVar6[1];
    fStack_70 = pfVar6[2];
    fStack_6c = pfVar6[3];
  }
  lVar8 = __ftol();
  uStack_38 = (undefined1)lVar8;
  lVar8 = __ftol();
  uStack_37 = (undefined1)lVar8;
  lVar8 = __ftol();
  uStack_36 = (undefined1)lVar8;
  lVar8 = __ftol();
  uStack_35 = (undefined1)lVar8;
  uStack_34 = 5;
  uStack_33 = 0;
  uStack_32 = 0;
  uStack_31 = 0;
  cVar3 = FUN_10046990();
  if (cVar3 != '\0') {
    FUN_10046550();
    lVar8 = __ftol();
    uStack_38 = (undefined1)lVar8;
    lVar8 = __ftol();
    uStack_37 = (undefined1)lVar8;
    lVar8 = __ftol();
    uStack_36 = (undefined1)lVar8;
    fVar5 = (float)(CONCAT12(uStack_33,CONCAT11(uStack_34,uStack_35)) & 0xff);
    lVar8 = __ftol();
    uStack_35 = (undefined1)lVar8;
  }
  (*DAT_100a5120)(local_48,param_1,fVar5);
  return;
}

