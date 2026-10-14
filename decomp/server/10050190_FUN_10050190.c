
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_10050190(int *param_1)

{
  byte bVar1;
  int iVar2;
  int *piVar3;
  byte *pbVar4;
  byte *pbVar5;
  void *extraout_ECX;
  void *this;
  bool bVar6;
  void *pvVar7;
  char *pcVar8;
  float fStack_10;
  undefined1 auStack_c [12];
  
  iVar2 = (*DAT_10121f70)(0,2);
  if (iVar2 == 0) {
    this = (void *)param_1[1];
    pvVar7 = *(void **)((int)this + 0x208);
    pcVar8 = s_houndeye_he_blast1_wav_1010f29c;
  }
  else if (iVar2 == 1) {
    pvVar7 = *(void **)(param_1[1] + 0x208);
    pcVar8 = s_houndeye_he_blast2_wav_1010f284;
    this = extraout_ECX;
  }
  else {
    if (iVar2 != 2) goto LAB_10050218;
    this = *(void **)(param_1[1] + 0x208);
    pcVar8 = s_houndeye_he_blast3_wav_1010f26c;
    pvVar7 = this;
  }
  FUN_10094b20(this,pvVar7,1,pcVar8,0x3f800000,0x3f4ccccd,0,100);
LAB_10050218:
  (*DAT_10121ec0)(5,0x17,param_1[1] + 8,0);
  (*DAT_10121ec8)(0x15);
  (*DAT_10121edc)(*(undefined4 *)(param_1[1] + 8));
  (*DAT_10121edc)(*(undefined4 *)(param_1[1] + 0xc));
  (*DAT_10121edc)(*(float *)(param_1[1] + 0x10) + _DAT_100dd634);
  (*DAT_10121edc)(*(undefined4 *)(param_1[1] + 8));
  (*DAT_10121edc)(*(undefined4 *)(param_1[1] + 0xc));
  (*DAT_10121edc)(*(float *)(param_1[1] + 0x10) + _DAT_100dd634 + (float)_DAT_100e9860);
  (*DAT_10121ed0)(param_1[0xd0]);
  (*DAT_10121ec8)(0);
  (*DAT_10121ec8)(0);
  (*DAT_10121ec8)(2);
  (*DAT_10121ec8)(0x10);
  (*DAT_10121ec8)(0);
  FUN_100500e0((int)param_1);
  (*DAT_10121ec8)(0xff);
  (*DAT_10121ec8)(0);
  (*DAT_10121ec4)();
  (*DAT_10121ec0)(5,0x17,param_1[1] + 8,0);
  (*DAT_10121ec8)(0x15);
  (*DAT_10121edc)(*(undefined4 *)(param_1[1] + 8));
  (*DAT_10121edc)(*(undefined4 *)(param_1[1] + 0xc));
  (*DAT_10121edc)(*(float *)(param_1[1] + 0x10) + _DAT_100dd634);
  (*DAT_10121edc)(*(undefined4 *)(param_1[1] + 8));
  (*DAT_10121edc)(*(undefined4 *)(param_1[1] + 0xc));
  (*DAT_10121edc)(*(float *)(param_1[1] + 0x10) + _DAT_100dd634 + (float)_DAT_100e9858);
  (*DAT_10121ed0)(param_1[0xd0]);
  (*DAT_10121ec8)(0);
  (*DAT_10121ec8)(0);
  (*DAT_10121ec8)(2);
  (*DAT_10121ec8)(0x10);
  (*DAT_10121ec8)(0);
  FUN_100500e0((int)param_1);
  (*DAT_10121ec8)(0xff);
  (*DAT_10121ec8)(0);
  (*DAT_10121ec4)();
  piVar3 = (int *)FUN_100aeba0(0,param_1[1] + 8,0x43c00000);
  do {
    if (piVar3 == (int *)0x0) {
      return;
    }
    if ((float)((int *)piVar3[1])[0x5b] != _DAT_100dd5f8) {
      pcVar8 = s_monster_houndeye_1010f478;
      pbVar4 = (byte *)(*(int *)(DAT_10122044 + 0x98) + *(int *)piVar3[1]);
      do {
        bVar1 = *pbVar4;
        bVar6 = bVar1 < (byte)*pcVar8;
        if (bVar1 != *pcVar8) {
LAB_1005044b:
          iVar2 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
          goto LAB_10050450;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar4[1];
        bVar6 = bVar1 < (byte)pcVar8[1];
        if (bVar1 != pcVar8[1]) goto LAB_1005044b;
        pbVar4 = pbVar4 + 2;
        pcVar8 = pcVar8 + 2;
      } while (bVar1 != 0);
      iVar2 = 0;
LAB_10050450:
      if (iVar2 != 0) {
        iVar2 = FUN_100965f0((int)param_1);
        if (iVar2 < 2) {
          fStack_10 = DAT_10126ab4;
        }
        else {
          iVar2 = FUN_100965f0((int)param_1);
          fStack_10 = ((float)(iVar2 + -1) * _DAT_100e9854 + _DAT_100dd618) * DAT_10126ab4;
        }
        (**(code **)(*piVar3 + 0xf8))(auStack_c);
        iVar2 = (**(code **)(*param_1 + 0x110))(piVar3);
        if (iVar2 == 0) {
          iVar2 = (**(code **)(*piVar3 + 0xcc))();
          if (iVar2 == 0) {
            pcVar8 = s_func_breakable_1010f468;
            pbVar4 = (byte *)(*(int *)(DAT_10122044 + 0x98) + *(int *)piVar3[1]);
            pbVar5 = pbVar4;
            do {
              bVar1 = *pbVar5;
              bVar6 = bVar1 < (byte)*pcVar8;
              if (bVar1 != *pcVar8) {
LAB_10050559:
                iVar2 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
                goto LAB_1005055e;
              }
              if (bVar1 == 0) break;
              bVar1 = pbVar5[1];
              bVar6 = bVar1 < (byte)pcVar8[1];
              if (bVar1 != pcVar8[1]) goto LAB_10050559;
              pbVar5 = pbVar5 + 2;
              pcVar8 = pcVar8 + 2;
            } while (bVar1 != 0);
            iVar2 = 0;
LAB_1005055e:
            if (iVar2 != 0) {
              pcVar8 = s_func_pushable_1010f458;
              do {
                bVar1 = *pbVar4;
                bVar6 = bVar1 < (byte)*pcVar8;
                if (bVar1 != *pcVar8) {
LAB_10050591:
                  iVar2 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
                  goto LAB_10050596;
                }
                if (bVar1 == 0) break;
                bVar1 = pbVar4[1];
                bVar6 = bVar1 < (byte)pcVar8[1];
                if (bVar1 != pcVar8[1]) goto LAB_10050591;
                pbVar4 = pbVar4 + 2;
                pcVar8 = pcVar8 + 2;
              } while (bVar1 != 0);
              iVar2 = 0;
LAB_10050596:
              if (iVar2 != 0) goto LAB_100505c2;
            }
          }
          else {
            fStack_10 = fStack_10 * (float)_DAT_100dd648;
          }
        }
        if (_DAT_100dd5f8 < fStack_10) {
          (**(code **)(*piVar3 + 0x60))(param_1[1],param_1[1],fStack_10,0x2200);
        }
      }
    }
LAB_100505c2:
    piVar3 = (int *)FUN_100aeba0((int)piVar3,param_1[1] + 8,0x43c00000);
  } while( true );
}

