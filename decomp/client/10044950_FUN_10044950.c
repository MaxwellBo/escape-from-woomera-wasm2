
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_10044950(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  byte bVar1;
  char cVar2;
  float fVar3;
  uint uVar4;
  int iVar5;
  char *_Source;
  void *this;
  int iVar6;
  uint uVar7;
  byte *pbVar8;
  uint uVar9;
  byte *pbVar10;
  float fStack_44;
  float fStack_40;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined1 auStack_2c [4];
  int iStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined1 auStack_1c [4];
  char *pcStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  void *pvStack_c;
  code *pcStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  pcStack_8 = FUN_10058218;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_10026030(param_3,param_2);
  DAT_100bc48c = FUN_10026090();
  uVar9 = 0;
  uVar7 = DAT_100bc48c * 0x30;
  if (uVar7 != 0) {
    do {
      uVar4 = FUN_10026090();
      *(char *)((int)&DAT_100bb728 + uVar9) = (char)uVar4;
      uVar9 = uVar9 + 1;
    } while (uVar9 < uVar7);
  }
  DAT_100bc490 = 0;
  DAT_100bc38c = 0;
  if ((DAT_100bc48c != 0) && (iVar6 = 0, 0 < (int)DAT_100bc48c)) {
    pbVar8 = &DAT_100bb72c;
    do {
      uStack_38 = *(undefined4 *)(pbVar8 + 0x20);
      uStack_34 = *(undefined4 *)(pbVar8 + 0x24);
      uStack_30 = *(undefined4 *)(pbVar8 + 0x28);
      iVar5 = (**(code **)(DAT_100a5138 + 0x30))(&uStack_38,&fStack_44);
      if (iVar5 != 1) {
        fVar3 = (float)DAT_100a4dcc;
        fStack_44 = (fStack_44 + _DAT_10059eb0) * fVar3 * _DAT_10059cec;
        fStack_40 = (_DAT_10059eb0 - fStack_40) * (float)DAT_100a4dd0 * _DAT_10059cec;
        if (((((_DAT_10064f44 < fStack_44) && (_DAT_10064f44 < fStack_40)) &&
             (fStack_44 < fVar3 - _DAT_10064f44)) &&
            ((fStack_40 < (float)DAT_100a4dd0 - _DAT_10064f44 &&
             (DAT_100bc490 = 1, *(int *)(pbVar8 + -4) == 0)))) &&
           (uVar7 = FUN_10056910(this,pbVar8,(byte *)s_Detainee_1007ab2c), uVar7 != 0)) {
          uVar7 = 0xffffffff;
          param_2._0_1_ = SUB41(fVar3,0);
          pbVar10 = pbVar8;
          do {
            if (uVar7 == 0) break;
            uVar7 = uVar7 - 1;
            bVar1 = *pbVar10;
            pbVar10 = pbVar10 + 1;
          } while (bVar1 != 0);
          auStack_2c[0] = (undefined1)param_2;
          iStack_28 = 0;
          uStack_24 = 0;
          uStack_20 = 0;
          FUN_10042900(auStack_2c,(undefined4 *)pbVar8,~uVar7 - 1);
          uStack_4 = 0;
          FUN_10041fb0(auStack_1c,auStack_2c);
          uStack_4 = 0xffffffff;
          if (iStack_28 != 0) {
            cVar2 = *(char *)(iStack_28 + -1);
            if ((cVar2 == '\0') || (cVar2 == -1)) {
              FUN_10049a73((char *)(iStack_28 + -1));
            }
            else {
              *(char *)(iStack_28 + -1) = cVar2 + -1;
            }
          }
          iStack_28 = 0;
          uStack_24 = 0;
          uStack_20 = 0;
          _Source = pcStack_18;
          if (pcStack_18 == (char *)0x0) {
            _Source = "";
          }
          _strncpy(&DAT_100bc38c,_Source,0xff);
          DAT_100bc48b = 0;
          if (pcStack_18 != (char *)0x0) {
            cVar2 = pcStack_18[-1];
            if ((cVar2 == '\0') || (cVar2 == -1)) {
              FUN_10049a73(pcStack_18 + -1);
            }
            else {
              pcStack_18[-1] = cVar2 + -1;
            }
          }
          pcStack_18 = (char *)0x0;
          uStack_14 = 0;
          uStack_10 = 0;
        }
      }
      iVar6 = iVar6 + 1;
      pbVar8 = pbVar8 + 0x30;
    } while (iVar6 < (int)DAT_100bc48c);
  }
  ExceptionList = pvStack_c;
  return 1;
}

