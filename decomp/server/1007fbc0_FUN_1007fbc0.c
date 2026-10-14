
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_1007fbc0(int *param_1)

{
  int iVar1;
  float fVar2;
  uint uVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  void *this;
  bool bVar7;
  undefined4 uVar8;
  int iStack_d8;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  float fStack_a4;
  float fStack_a0;
  float fStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  float fStack_60;
  undefined4 auStack_5c [3];
  float afStack_50 [3];
  float afStack_44 [3];
  undefined1 auStack_38 [16];
  float fStack_28;
  
  FUN_1007d380((int)param_1);
  uVar8 = *(undefined4 *)(param_1[1] + 0x184);
  switch(uVar8) {
  case 99:
    bVar7 = DAT_10124898 == 0;
    if (bVar7) {
      DAT_10124898 = (*DAT_10121f34)(&DAT_10114fe4,1);
    }
    (*DAT_10121ec0)(1,DAT_10124898,0,*(undefined4 *)(param_1[1] + 0x208));
    (*DAT_10121ec8)(bVar7);
    (*DAT_10121ec4)();
    if (!bVar7) {
      DAT_10124898 = 0;
    }
    break;
  case 100:
    uVar3 = FUN_1007fa20((int)param_1);
    if (uVar3 == 0) {
      FUN_1007fa30((int)param_1);
    }
    else {
      FUN_1007fae0((int)param_1);
    }
    break;
  default:
    FUN_10080190(param_1,uVar8);
    break;
  case 0xc9:
    if ((float)param_1[0x196] <= *DAT_10122044) {
      FUN_100af200(param_1[1] + 0x74);
      iVar4 = param_1[1];
      fStack_68 = *(float *)(iVar4 + 0x174) + *(float *)(iVar4 + 8) +
                  DAT_10122044[10] * _DAT_100ddaf4;
      fStack_64 = *(float *)(iVar4 + 0x178) + *(float *)(iVar4 + 0xc) +
                  DAT_10122044[0xb] * _DAT_100ddaf4;
      fStack_60 = *(float *)(iVar4 + 0x17c) + *(float *)(iVar4 + 0x10) +
                  DAT_10122044[0xc] * _DAT_100ddaf4;
      fStack_9c = *(float *)(iVar4 + 0x17c) + *(float *)(iVar4 + 0x10);
      fStack_a0 = *(float *)(iVar4 + 0x178) + *(float *)(iVar4 + 0xc);
      fStack_a4 = *(float *)(iVar4 + 8) + *(float *)(iVar4 + 0x174);
      FUN_100afc60(&fStack_a4,&fStack_68,1,*(undefined4 *)(iVar4 + 0x208),auStack_38);
      if (fStack_28 != (float)_DAT_100dd628) {
        param_1[0x196] = (int)(_DAT_10109704 + *DAT_10122044);
        iVar4 = (*DAT_10121e5c)();
        if (iVar4 == 0) {
          iVar4 = 0;
        }
        else {
          iVar4 = iVar4 + 0x80;
        }
        iVar1 = *(int *)(iVar4 + 0x208);
        if ((iVar1 == 0) || (this = *(void **)(iVar1 + 0x7c), this == (void *)0x0)) {
          puVar5 = (undefined4 *)(*DAT_10121f04)(iVar1,0xb8);
          if (puVar5 != (undefined4 *)0x0) {
            FUN_10002f30(puVar5);
            *puVar5 = &PTR_FUN_100ee948;
            puVar5[1] = iVar4;
            FUN_1007f4d0(puVar5,param_1[1]);
            break;
          }
          this = (void *)0x0;
          iRam00000004 = iVar4;
        }
        FUN_1007f4d0(this,param_1[1]);
      }
    }
    break;
  case 0xcc:
    FUN_1007fb80(param_1);
    break;
  case 0xcf:
    iStack_d8 = 1;
    do {
      (*DAT_10121efc)(1,s_Creating_mad_scientist_entity_10114fc4);
      uStack_7c = *(undefined4 *)(param_1[1] + 0x78);
      uStack_80 = 0;
      uStack_78 = 0;
      FUN_100af200(&uStack_80);
      iVar4 = param_1[1];
      fVar2 = (float)iStack_d8;
      fStack_84 = DAT_10122044[0xc] * _DAT_100ddb10 * fVar2 + *(float *)(iVar4 + 0x10);
      fStack_88 = DAT_10122044[0xb] * _DAT_100ddb10 * fVar2 + *(float *)(iVar4 + 0xc);
      fStack_8c = DAT_10122044[10] * _DAT_100ddb10 * fVar2 + *(float *)(iVar4 + 8);
      FUN_1001a1f0(0x10114fb4,&fStack_8c,(undefined4 *)(iVar4 + 0x50),0);
      iStack_d8 = iStack_d8 + 1;
    } while (iStack_d8 < 0xb);
    break;
  case 0xd2:
    _DAT_10132cc8 = 0;
    (*DAT_10121efc)(1,s_Creating_mad_scientist_entity_10114fc4);
    uStack_b8 = *(undefined4 *)(param_1[1] + 0x78);
    uStack_bc = 0;
    uStack_b4 = 0;
    FUN_100af200(&uStack_bc);
    iVar4 = param_1[1];
    fStack_6c = DAT_10122044[0xc] * _DAT_100ddaf4 + *(float *)(iVar4 + 0x10);
    fStack_70 = DAT_10122044[0xb] * _DAT_100ddaf4 + *(float *)(iVar4 + 0xc);
    fStack_74 = DAT_10122044[10] * _DAT_100ddaf4 + *(float *)(iVar4 + 8);
    FUN_1001a1f0(0x10114fb4,&fStack_74,(undefined4 *)(iVar4 + 0x50),0);
    break;
  case 0xd3:
    _DAT_10132cc8 = 1;
    (*DAT_10121efc)(1,s_Creating_mad_scientist_entity_10114fc4);
    uStack_ac = *(undefined4 *)(param_1[1] + 0x78);
    uStack_b0 = 0;
    uStack_a8 = 0;
    FUN_100af200(&uStack_b0);
    iVar4 = param_1[1];
    FUN_10001d60(auStack_5c,DAT_10122044[10] * _DAT_100ddaf4 + *(float *)(iVar4 + 8),
                 DAT_10122044[0xb] * _DAT_100ddaf4 + *(float *)(iVar4 + 0xc),
                 DAT_10122044[0xc] * _DAT_100ddaf4 + *(float *)(iVar4 + 0x10));
    FUN_1001a1f0(0x10114fb4,auStack_5c,(undefined4 *)(param_1[1] + 0x50),0);
    break;
  case 0xd4:
    _DAT_10132cc8 = 2;
    (*DAT_10121efc)(1,s_Creating_mad_scientist_entity_10114fc4);
    uStack_94 = *(undefined4 *)(param_1[1] + 0x78);
    uStack_98 = 0;
    uStack_90 = 0;
    FUN_100af200(&uStack_98);
    FUN_10001d60(afStack_50,DAT_10122044[10] * _DAT_100ddaf4,DAT_10122044[0xb] * _DAT_100ddaf4,
                 DAT_10122044[0xc] * _DAT_100ddaf4);
    uVar8 = 0;
    puVar5 = (undefined4 *)(param_1[1] + 0x50);
    puVar6 = (undefined4 *)FUN_1000b550((void *)(param_1[1] + 8),afStack_44,afStack_50);
    FUN_1001a1f0(0x10114fb4,puVar6,puVar5,uVar8);
  }
  *(undefined4 *)(param_1[1] + 0x184) = 0;
  return;
}

