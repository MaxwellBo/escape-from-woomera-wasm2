
int __fastcall FUN_10062180(int *param_1)

{
  bool bVar1;
  uint uVar2;
  float *pfVar3;
  undefined3 extraout_var;
  float fVar4;
  float fVar5;
  float fVar6;
  
  uVar2 = FUN_10004f10((int)param_1);
  switch(param_1[0x76]) {
  case 1:
    if ((uVar2 & 0x10000) != 0) {
      param_1[0x77] = 2;
      return param_1[0x77];
    }
    if ((uVar2 & 0x100) == 0) {
      if ((uVar2 & 0x200) == 0) {
        if ((uVar2 & 0x20000) == 0) {
          bVar1 = (uVar2 & 0x40040) == 0;
        }
        else {
          pfVar3 = (float *)(**(code **)(*param_1 + 0x1e4))();
          if (pfVar3 == (float *)0x0) break;
          FUN_10060260(param_1,*pfVar3,pfVar3[1],pfVar3[2]);
          bVar1 = ((uint)pfVar3[3] & 0x21) == 0;
        }
        if (!bVar1) {
          param_1[0x77] = 3;
          return param_1[0x77];
        }
        break;
      }
      fVar4 = (float)param_1[0xaa];
      fVar5 = (float)param_1[0xab];
      fVar6 = (float)param_1[0xac];
    }
    else {
      fVar4 = (float)param_1[0xaa];
      fVar5 = (float)param_1[0xab];
      fVar6 = (float)param_1[0xac];
    }
    FUN_10060260(param_1,fVar4,fVar5,fVar6);
    param_1[0x77] = 3;
    return param_1[0x77];
  case 2:
    bVar1 = FUN_10019450((uint *)(param_1 + 0x58));
    if (CONCAT31(extraout_var,bVar1) == 0) {
      param_1[0x77] = 3;
      (*DAT_10121efc)(2,s____Combat_state_with_no_enemy__10111660);
      return param_1[0x77];
    }
    break;
  case 3:
    if ((uVar2 & 0x10010) != 0) {
      param_1[0x77] = 2;
      return param_1[0x77];
    }
    if ((uVar2 & 0x20000) != 0) {
      param_1[0x77] = 3;
      pfVar3 = (float *)(**(code **)(*param_1 + 0x1e4))();
      if (pfVar3 != (float *)0x0) {
        FUN_10060260(param_1,*pfVar3,pfVar3[1],pfVar3[2]);
        return param_1[0x77];
      }
    }
    break;
  case 6:
    if ((uVar2 & 0x40000300) != 0) {
      FUN_1008ffc0((int)param_1);
      return param_1[0x77];
    }
    break;
  case 8:
    param_1[0x77] = 8;
  }
  return param_1[0x77];
}

