
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c4af0(int *param_1)

{
  byte bVar1;
  float fVar2;
  int *piVar3;
  int iVar4;
  byte *pbVar5;
  float unaff_EBX;
  int *piVar6;
  char *pcVar7;
  bool bVar8;
  float10 fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fStack_74;
  float fStack_70;
  float fStack_68;
  float fStack_64;
  undefined1 auStack_60 [12];
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined1 auStack_48 [4];
  float fStack_44;
  float fStack_40;
  undefined1 auStack_3c [16];
  float fStack_2c;
  int iStack_c;
  
  FUN_100af200(param_1[1] + 0x74);
  (**(code **)(*param_1 + 0x214))(&fStack_74);
  piVar3 = (int *)FUN_100aeba0(0,&stack0xffffff88,0x42c00000);
  if (piVar3 == (int *)0x0) {
    return;
  }
  do {
    if (piVar3 != param_1) {
      iVar4 = piVar3[1];
      fVar10 = *(float *)(iVar4 + 8) - unaff_EBX;
      fStack_68 = *(float *)(iVar4 + 0xc) - fStack_74;
      fStack_64 = *(float *)(iVar4 + 0x10) - fStack_70;
      fVar2 = SQRT(fVar10 * fVar10 + fStack_68 * fStack_68 + fStack_64 * fStack_64);
      if (fVar2 == _DAT_100dd5f8) {
        fVar12 = 1.0;
        fVar11 = 0.0;
        fVar10 = 0.0;
      }
      else {
        fVar2 = _DAT_100dd618 / fVar2;
        fVar12 = fStack_64 * fVar2;
        fVar11 = fStack_68 * fVar2;
        fVar10 = fVar10 * fVar2;
      }
      FUN_10001d60(auStack_60,fVar10,fVar11,fVar12);
      fVar9 = (float10)FUN_100c9190();
      if (fVar9 < (float10)_DAT_100f915c) {
        fStack_44 = fStack_74;
        iVar4 = piVar3[1];
        fStack_40 = fStack_70;
        uStack_54 = *(undefined4 *)(iVar4 + 8);
        uStack_50 = *(undefined4 *)(iVar4 + 0xc);
        uStack_4c = *(undefined4 *)(iVar4 + 0x10);
        FUN_100afc60(auStack_48,&uStack_54,0,*(undefined4 *)(param_1[1] + 0x208),auStack_3c);
        if (_DAT_100f9158 <= fStack_2c) {
          (**(code **)(*piVar3 + 0x114))(param_1);
          return;
        }
        iVar4 = iStack_c;
        if ((iStack_c == 0) && (iVar4 = (*DAT_10121f1c)(0), iVar4 == 0)) {
          piVar6 = (int *)0x0;
        }
        else {
          piVar6 = *(int **)(iVar4 + 0x7c);
        }
        pcVar7 = s_efw_Marker_1011c9ac;
        pbVar5 = (byte *)(*(int *)piVar6[1] + *(int *)(DAT_10122044 + 0x98));
        do {
          bVar1 = *pbVar5;
          bVar8 = bVar1 < (byte)*pcVar7;
          if (bVar1 != *pcVar7) {
LAB_100c4cb7:
            iVar4 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
            goto LAB_100c4cbc;
          }
          if (bVar1 == 0) break;
          bVar1 = pbVar5[1];
          bVar8 = bVar1 < (byte)pcVar7[1];
          if (bVar1 != pcVar7[1]) goto LAB_100c4cb7;
          pbVar5 = pbVar5 + 2;
          pcVar7 = pcVar7 + 2;
        } while (bVar1 != 0);
        iVar4 = 0;
LAB_100c4cbc:
        if (iVar4 == 0) {
          (**(code **)(*piVar6 + 0x114))(param_1);
          return;
        }
      }
    }
    piVar3 = (int *)FUN_100aeba0((int)piVar3,&stack0xffffff88,0x42c00000);
    if (piVar3 == (int *)0x0) {
      return;
    }
  } while( true );
}

