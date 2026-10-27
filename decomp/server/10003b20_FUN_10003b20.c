
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_10003b20(void *param_1,int *param_2)

{
  byte bVar1;
  void *this;
  float *pfVar2;
  undefined4 *puVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  byte *pbVar7;
  void *this_00;
  void *this_01;
  void *this_02;
  void *this_03;
  byte *pbVar8;
  bool bVar9;
  longlong lVar10;
  undefined4 uVar11;
  float fVar12;
  undefined4 uVar13;
  float fVar14;
  undefined4 uVar15;
  float fVar16;
  undefined4 uVar17;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float fStack_2c;
  float fStack_28;
  undefined4 auStack_24 [3];
  undefined1 auStack_18 [12];
  undefined4 auStack_c [3];
  
  switch(*param_2) {
  case 1:
  case 2:
  case 3:
  case 4:
  case 5:
    iVar5 = *(int *)((int)param_1 + 4);
    if ((*(byte *)((int)param_1 + 0x15c) & 0x10) == 0) {
      fStack_54 = *(float *)(iVar5 + 0x50);
      fStack_50 = *(float *)(iVar5 + 0x54);
      fStack_4c = *(float *)(iVar5 + 0x58);
      FUN_100af210(&fStack_54);
      fStack_6c = *(float *)(DAT_10122044 + 0x28);
      fStack_68 = *(float *)(DAT_10122044 + 0x2c);
      fStack_34 = *(float *)(DAT_10122044 + 0x30);
    }
    else {
      fStack_6c = *(float *)((int)param_1 + 0x2a8) - *(float *)(iVar5 + 8);
      fStack_68 = *(float *)((int)param_1 + 0x2ac) - *(float *)(iVar5 + 0xc);
      fStack_64 = *(float *)((int)param_1 + 0x2b0) - *(float *)(iVar5 + 0x10);
      fStack_54 = fStack_6c;
      fStack_50 = fStack_68;
      fStack_4c = fStack_64;
      pfVar2 = (float *)FUN_100ae830(auStack_24,&fStack_6c);
      fStack_54 = *pfVar2;
      fStack_50 = pfVar2[1];
      fStack_4c = pfVar2[2];
      fVar12 = SQRT(fStack_6c * fStack_6c + fStack_68 * fStack_68 + fStack_64 * fStack_64);
      if (fVar12 == _DAT_100dd5f8) {
        fVar16 = 1.0;
        fVar14 = 0.0;
        fVar12 = 0.0;
      }
      else {
        fVar12 = _DAT_100dd618 / fVar12;
        fVar16 = fStack_64 * fVar12;
        fVar14 = fStack_68 * fVar12;
        fVar12 = fStack_6c * fVar12;
      }
      FUN_10001d60(&fStack_3c,fVar12,fVar14,fVar16);
      fStack_6c = fStack_3c;
      fStack_68 = fStack_38;
    }
    *(undefined4 *)(*(int *)((int)param_1 + 4) + 0x118) = 2;
    if (_DAT_100ddaec < fStack_54) {
      fStack_54 = fStack_54 - _DAT_100ddae8;
    }
    fStack_64 = fStack_34;
    FUN_100083f0(param_1,0,fStack_54);
    FUN_10008450(param_1,0,&fStack_60,auStack_18);
    fStack_2c = fStack_68 * _DAT_100ddac8;
    fStack_28 = fStack_64 * _DAT_100ddac8;
    fStack_60 = fStack_6c * _DAT_100ddac8 + fStack_60;
    fStack_5c = fStack_2c + fStack_5c;
    fStack_58 = fStack_28 + fStack_58;
    fStack_48 = fStack_60;
    fStack_44 = fStack_5c;
    fStack_40 = fStack_58;
    (*DAT_10121ec0)();
    (*DAT_10121ec8)();
    (*DAT_10121edc)(fStack_60);
    (*DAT_10121edc)(fStack_5c);
    (*DAT_10121edc)(fStack_58);
    (*DAT_10121ed0)(DAT_10121c3c);
    (*DAT_10121ec8)(6);
    (*DAT_10121ec8)(0x80);
    (*DAT_10121ec4)();
    uVar17 = *(undefined4 *)(*(int *)((int)param_1 + 4) + 0x208);
    puVar3 = (undefined4 *)FUN_100ae830(auStack_c,&fStack_6c);
    piVar4 = (int *)FUN_1001a1f0(0x10101a7c,&fStack_60,puVar3,uVar17);
    FUN_100af200(piVar4[1] + 0x50);
    iVar5 = piVar4[1];
    fStack_48 = *(float *)(DAT_10122044 + 0x28) * _DAT_100ddae4;
    fStack_44 = *(float *)(DAT_10122044 + 0x2c) * _DAT_100ddae4;
    fStack_40 = *(float *)(DAT_10122044 + 0x30) * _DAT_100ddae4;
    *(float *)(iVar5 + 0x20) = fStack_48;
    *(float *)(iVar5 + 0x24) = fStack_44;
    *(float *)(iVar5 + 0x28) = fStack_40;
    iVar5 = (**(code **)(*piVar4 + 0x74))();
    *(undefined4 *)(iVar5 + 0x304) = *(undefined4 *)((int)param_1 + 0x304);
    *(undefined4 *)(iVar5 + 0x300) = *(undefined4 *)((int)param_1 + 0x300);
    if ((*(byte *)((int)param_1 + 0x2a0) & 1) != 0) {
      *(uint *)(iVar5 + 0x2a0) = *(uint *)(iVar5 + 0x2a0) | 1;
    }
    if (iVar5 != 0) {
      iVar6 = *(int *)((int)param_1 + 0x2fc);
      if ((iVar6 != 0) && (*(int *)(iVar6 + 0x328) == 1)) {
        if (*(int *)(iVar6 + 0x324) == 5) {
LAB_10003ec5:
          *(undefined4 *)(iVar5 + 0x160) = *(undefined4 *)((int)param_1 + 0x168);
          *(undefined4 *)(iVar5 + 0x164) = *(undefined4 *)((int)param_1 + 0x16c);
          return;
        }
        if (*(int *)(iVar6 + 0x324) != 0) {
          pbVar8 = (byte *)(*(int *)(iVar6 + 0x31c) + *(int *)(DAT_10122044 + 0x98));
          pbVar7 = (byte *)(*(int *)(iVar6 + 0x318) + *(int *)(DAT_10122044 + 0x98));
          do {
            bVar1 = *pbVar7;
            bVar9 = bVar1 < *pbVar8;
            if (bVar1 != *pbVar8) {
LAB_10003ebc:
              iVar6 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
              goto LAB_10003ec1;
            }
            if (bVar1 == 0) break;
            bVar1 = pbVar7[1];
            bVar9 = bVar1 < pbVar8[1];
            if (bVar1 != pbVar8[1]) goto LAB_10003ebc;
            pbVar7 = pbVar7 + 2;
            pbVar8 = pbVar8 + 2;
          } while (bVar1 != 0);
          iVar6 = 0;
LAB_10003ec1:
          if (iVar6 != 0) goto LAB_10003ec5;
        }
      }
      *(undefined4 *)(iVar5 + 0x160) = *(undefined4 *)((int)param_1 + 0x160);
      *(undefined4 *)(iVar5 + 0x164) = *(undefined4 *)((int)param_1 + 0x164);
      return;
    }
    break;
  default:
    FUN_10060620(param_1,param_2);
    break;
  case 10:
    iVar5 = (*DAT_10121f70)();
    if (iVar5 == 0) {
      FUN_10094b20(*(void **)((int)param_1 + 4),
                   *(undefined4 *)((int)*(void **)((int)param_1 + 4) + 0x208),4,
                   s_player_pl_ladder2_wav_10101a4c,0x3f800000,0x3f4ccccd,0,0x46);
      return;
    }
    if (iVar5 == 1) {
      FUN_10094b20(this_00,*(undefined4 *)(*(int *)((int)param_1 + 4) + 0x208),4,
                   s_player_pl_ladder4_wav_10101a64,0x3f800000,0x3f4ccccd,0,0x46);
      return;
    }
    break;
  case 0xb:
    iVar5 = (*DAT_10121f70)();
    if (iVar5 == 0) {
      FUN_10094b20(this_01,*(undefined4 *)(*(int *)((int)param_1 + 4) + 0x208),4,
                   s_player_pl_ladder1_wav_10101a1c,0x3f800000,0x3f4ccccd,0,0x46);
      return;
    }
    if (iVar5 == 1) {
      this = *(void **)(*(int *)((int)param_1 + 4) + 0x208);
      FUN_10094b20(this,this,4,s_player_pl_ladder3_wav_10101a34,0x3f800000,0x3f4ccccd,0,0x46);
      return;
    }
    break;
  case 0xc:
    uVar17 = 0x80;
    lVar10 = __ftol();
    piVar4 = FUN_1001fef0(param_1,100.0,(int)lVar10,uVar17);
    if (piVar4 != (int *)0x0) {
      *(undefined4 *)(piVar4[1] + 0x6c) = 0xc1c80000;
      *(undefined4 *)(piVar4[1] + 0x68) = 0x41000000;
      iVar5 = (**(code **)(*piVar4 + 0xcc))();
      if (iVar5 != 0) {
        fStack_2c = *(float *)(DAT_10122044 + 0x44) * _DAT_100dd640;
        fStack_28 = *(float *)(DAT_10122044 + 0x48) * _DAT_100dd640;
        iVar5 = piVar4[1];
        fStack_48 = *(float *)(DAT_10122044 + 0x40) * _DAT_100dd640 + *(float *)(iVar5 + 0x20);
        fStack_44 = fStack_2c + *(float *)(iVar5 + 0x24);
        fStack_40 = fStack_28 + *(float *)(iVar5 + 0x28);
        *(float *)(iVar5 + 0x20) = fStack_48;
        *(float *)(iVar5 + 0x24) = fStack_44;
        *(float *)(iVar5 + 0x28) = fStack_40;
      }
      uVar17 = *(undefined4 *)(*(int *)((int)param_1 + 4) + 0x208);
      iVar5 = (*DAT_10121f70)();
      iVar5 = iVar5 + 100;
      uVar15 = 0;
      uVar13 = 0x3f4ccccd;
      uVar11 = 0x3f800000;
      iVar6 = (*DAT_10121f70)(0);
      FUN_10094b20(this_02,uVar17,1,(&PTR_s_zombie_claw_strike1_wav_101013d0)[iVar6],uVar11,uVar13,
                   uVar15,iVar5);
      FUN_10008450(param_1,0,&fStack_54,auStack_18);
      (**(code **)(*piVar4 + 0x6c))();
      FUN_10003850(&stack0xffffff70,&fStack_54);
      FUN_100b2c80();
      return;
    }
    goto LAB_1000425b;
  case 0xd:
    uVar17 = 0x80;
    lVar10 = __ftol();
    piVar4 = FUN_1001fef0(param_1,100.0,(int)lVar10,uVar17);
    if (piVar4 != (int *)0x0) {
      *(undefined4 *)(piVar4[1] + 0x6c) = 0x41c80000;
      *(undefined4 *)(piVar4[1] + 0x68) = 0x41000000;
      iVar5 = (**(code **)(*piVar4 + 0xcc))();
      if (iVar5 != 0) {
        fStack_2c = *(float *)(DAT_10122044 + 0x44) * _DAT_100ddae0;
        fStack_28 = *(float *)(DAT_10122044 + 0x48) * _DAT_100ddae0;
        iVar5 = piVar4[1];
        fStack_48 = *(float *)(DAT_10122044 + 0x40) * _DAT_100ddae0 + *(float *)(iVar5 + 0x20);
        fStack_44 = fStack_2c + *(float *)(iVar5 + 0x24);
        fStack_40 = fStack_28 + *(float *)(iVar5 + 0x28);
        *(float *)(iVar5 + 0x20) = fStack_48;
        *(float *)(iVar5 + 0x24) = fStack_44;
        *(float *)(iVar5 + 0x28) = fStack_40;
      }
      uVar17 = *(undefined4 *)(*(int *)((int)param_1 + 4) + 0x208);
      iVar5 = (*DAT_10121f70)();
      iVar5 = iVar5 + 100;
      uVar15 = 0;
      uVar13 = 0x3f4ccccd;
      uVar11 = 0x3f800000;
      iVar6 = (*DAT_10121f70)(0);
      FUN_10094b20(this_03,uVar17,1,(&PTR_s_zombie_claw_strike1_wav_101013d0)[iVar6],uVar11,uVar13,
                   uVar15,iVar5);
      FUN_10008450(param_1,0,&fStack_54,auStack_18);
      (**(code **)(*piVar4 + 0x6c))();
      FUN_10003850(&stack0xffffff70,&fStack_54);
      FUN_100b2c80();
      return;
    }
LAB_1000425b:
    uVar17 = *(undefined4 *)(*(int *)((int)param_1 + 4) + 0x208);
    iVar5 = (*DAT_10121f70)();
    iVar5 = iVar5 + 100;
    uVar15 = 0;
    uVar13 = 0x3f4ccccd;
    uVar11 = 0x3f800000;
    iVar6 = (*DAT_10121f70)(0);
    FUN_10094b20((&PTR_s_zombie_claw_miss1_wav_101013dc)[iVar6],uVar17,1,
                 (&PTR_s_zombie_claw_miss1_wav_101013dc)[iVar6],uVar11,uVar13,uVar15,iVar5);
    return;
  }
  return;
}

