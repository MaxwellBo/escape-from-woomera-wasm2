
int __fastcall FUN_100c1860(int *param_1)

{
  byte bVar1;
  int *piVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  undefined3 extraout_var;
  void *this;
  void *extraout_ECX;
  int extraout_ECX_00;
  int extraout_ECX_01;
  byte *pbVar6;
  uint uVar7;
  uint uVar8;
  uint *puVar9;
  longlong lVar10;
  byte *pbStack_408;
  uint uStack_404;
  uint auStack_400 [256];
  
  if (param_1[0xf] != 0) {
    param_1[0xf] = 0;
    if (param_1[0x10] == 0) {
      param_1[0x10] = 1;
    }
    if (param_1[9] == 0) {
      param_1[9] = (int)&DAT_10134d78;
    }
    if (param_1[10] == 0) {
      param_1[10] = (int)&DAT_10134d20;
    }
    if (param_1[0xb] == 0) {
      iVar4 = (**(code **)(*param_1 + 8))(param_1[9],0x4000);
      param_1[0xb] = iVar4;
    }
    FUN_100c23f0((int)param_1);
  }
switchD_100c19b9_caseD_f:
  pbVar6 = (byte *)param_1[0xe];
  *pbVar6 = *(byte *)(param_1 + 0xc);
  uVar7 = param_1[0x10];
  pbStack_408 = pbVar6;
LAB_100c18d5:
  do {
    bVar1 = (&DAT_100f75b8)[(uint)*pbVar6 * 4];
    uStack_404 = (uint)bVar1;
    iVar4 = uVar7 * 2;
    if (*(short *)(&DAT_100f74f4 + iVar4) != 0) {
      param_1[0x12] = uVar7;
      param_1[0x13] = (int)pbVar6;
    }
    if ((int)*(short *)(&DAT_100f7d64 + ((int)*(short *)(&DAT_100f7a68 + iVar4) + (uint)bVar1) * 2)
        != uVar7) {
      do {
        uVar7 = (uint)*(short *)(&DAT_100f7b30 + iVar4);
        if (0x61 < (int)uVar7) {
          uStack_404 = (uint)(byte)(&DAT_100f79b8)[uStack_404 * 4];
        }
        iVar4 = uVar7 * 2;
      } while ((int)*(short *)(&DAT_100f7d64 +
                              ((int)*(short *)(&DAT_100f7a68 + iVar4) + uStack_404) * 2) != uVar7);
    }
    pbVar6 = pbVar6 + 1;
    uVar8 = (uint)*(short *)(&DAT_100f7bf8 +
                            ((int)*(short *)(&DAT_100f7a68 + uVar7 * 2) + uStack_404) * 2);
    uVar7 = uVar8;
  } while (*(short *)(&DAT_100f7a68 + uVar8 * 2) != 0x89);
LAB_100c197f:
  iVar5 = (int)*(short *)(&DAT_100f74f4 + uVar8 * 2);
  if (iVar5 == 0) {
    iVar4 = param_1[0x12];
    pbVar6 = (byte *)param_1[0x13];
    iVar5 = (int)*(short *)(&DAT_100f74f4 + iVar4 * 2);
  }
  param_1[1] = (int)pbStack_408;
  param_1[2] = (int)pbVar6 - (int)pbStack_408;
  this = (void *)CONCAT31((int3)((uint)iVar4 >> 8),*pbVar6);
  *(byte *)(param_1 + 0xc) = *pbVar6;
  *pbVar6 = 0;
  param_1[0xe] = (int)pbVar6;
  do {
    switch(iVar5) {
    case 0:
      goto switchD_100c19b9_caseD_0;
    case 1:
      return 0x102;
    case 2:
      return 0x103;
    case 3:
      return 0x104;
    case 4:
      return 0x105;
    case 5:
      return 0x106;
    case 6:
      return 0x107;
    case 7:
      return 0x108;
    case 8:
      return 0x109;
    case 9:
      return 0x10a;
    case 10:
      return 0x10b;
    case 0xb:
      *(int *)param_1[5] = param_1[1];
      return 0x10d;
    case 0xc:
      FUN_100c8388(this,(byte *)param_1[1]);
      lVar10 = __ftol();
      *(int *)param_1[5] = (int)lVar10;
      return 0x10e;
    case 0xd:
      puVar9 = auStack_400;
      uVar7 = FUN_100c22b0(param_1);
      goto joined_r0x100c1c5e;
    case 0xe:
      *(undefined4 *)param_1[5] = 1;
      uVar7 = FUN_100c22b0(param_1);
      if (uVar7 != 0) {
        while (uVar7 == 0x23) {
          *(int *)param_1[5] = *(int *)param_1[5] + 1;
          uVar7 = FUN_100c22b0(param_1);
          if (uVar7 == 0) {
            return 0x10c;
          }
        }
        FUN_100c2220(param_1,(char)uVar7,param_1[1]);
      }
      return 0x10c;
    case 0xf:
      goto switchD_100c19b9_caseD_f;
    case 0x10:
      DAT_10132464 = DAT_10132464 + 1;
      goto switchD_100c19b9_caseD_f;
    case 0x11:
      return (int)*(char *)param_1[1];
    case 0x12:
      uVar7 = FUN_100c22b0(param_1);
      goto joined_r0x100c1ae7;
    case 0x13:
      (**(code **)(*param_1 + 0x20))(param_1[1],param_1[2]);
      goto switchD_100c19b9_caseD_f;
    case 0x14:
      iVar4 = param_1[1];
      *pbVar6 = *(byte *)(param_1 + 0xc);
      piVar2 = (int *)param_1[0xb];
      if (piVar2[9] == 0) {
        param_1[0xd] = piVar2[4];
        *piVar2 = param_1[9];
        *(undefined4 *)(param_1[0xb] + 0x24) = 1;
      }
      if ((uint)param_1[0xe] <= (uint)(param_1[0xd] + *(int *)(param_1[0xb] + 4))) {
        param_1[0xe] = (int)(pbVar6 + param_1[1] + (-1 - iVar4));
        uVar8 = FUN_100c20a0((int)param_1);
        uVar7 = FUN_100c2170(param_1,uVar8);
        pbStack_408 = (byte *)param_1[1];
        if (uVar7 != 0) {
          pbVar6 = (byte *)(param_1[0xe] + 1);
          param_1[0xe] = (int)pbVar6;
          goto LAB_100c18d5;
        }
        pbVar6 = (byte *)param_1[0xe];
        iVar4 = extraout_ECX_01;
        goto LAB_100c197f;
      }
      cVar3 = FUN_100c1f20(param_1);
      iVar5 = CONCAT31(extraout_var,cVar3);
      if (iVar5 == 0) {
        param_1[0xe] = (int)(pbVar6 + param_1[1] + (-1 - iVar4));
        uVar7 = FUN_100c20a0((int)param_1);
        pbStack_408 = (byte *)param_1[1];
        pbVar6 = (byte *)param_1[0xe];
        goto LAB_100c18d5;
      }
      if (iVar5 != 1) {
        if (iVar5 != 2) goto switchD_100c19b9_caseD_f;
        param_1[0xe] = *(int *)(param_1[0xb] + 4) + param_1[0xd];
        uVar8 = FUN_100c20a0((int)param_1);
        pbVar6 = (byte *)param_1[0xe];
        pbStack_408 = (byte *)param_1[1];
        iVar4 = extraout_ECX_00;
        goto LAB_100c197f;
      }
      param_1[0x11] = 0;
      iVar4 = FUN_100c27b0();
      if (iVar4 == 0) {
        if (param_1[0x11] == 0) {
          (**(code **)(*param_1 + 0x10))(param_1[9]);
        }
        goto switchD_100c19b9_caseD_f;
      }
      param_1[0xe] = param_1[1];
      iVar5 = (param_1[0x10] + -1) / 2 + 0x15;
      this = extraout_ECX;
      break;
    case 0x15:
      return 0;
    default:
      (**(code **)(*param_1 + 0x24))(s_fatal_flex_scanner_internal_erro_1011c4e8);
      goto switchD_100c19b9_caseD_f;
    }
  } while( true );
joined_r0x100c1ae7:
  if (uVar7 == 0) goto switchD_100c19b9_caseD_f;
  if (uVar7 == 10) {
    DAT_10132464 = DAT_10132464 + 1;
  }
  else if (uVar7 == 0x2a) {
    uVar7 = FUN_100c22b0(param_1);
    if (uVar7 == 0x2f) goto switchD_100c19b9_caseD_f;
    FUN_100c2220(param_1,(char)uVar7,param_1[1]);
  }
  uVar7 = FUN_100c22b0(param_1);
  goto joined_r0x100c1ae7;
joined_r0x100c1c5e:
  if (uVar7 == 0) goto LAB_100c1c95;
  if (uVar7 == 10) goto LAB_100c1c81;
  if (uVar7 == 0x5d) goto LAB_100c1cc7;
  if ((uVar7 != 0x20) && (uVar7 != 9)) {
    FUN_100c2220(param_1,(char)uVar7,param_1[1]);
    goto LAB_100c1c95;
  }
  uVar7 = FUN_100c22b0(param_1);
  goto joined_r0x100c1c5e;
LAB_100c1c81:
  DAT_10132464 = DAT_10132464 + 1;
  goto LAB_100c1cc7;
switchD_100c19b9_caseD_0:
  iVar4 = CONCAT31((int3)((uint)this >> 8),*(byte *)(param_1 + 0xc));
  *pbVar6 = *(byte *)(param_1 + 0xc);
  pbVar6 = (byte *)param_1[0x13];
  uVar8 = param_1[0x12];
  goto LAB_100c197f;
LAB_100c1c95:
  uVar7 = FUN_100c22b0(param_1);
  while (uVar7 != 0) {
    if (uVar7 == 10) goto LAB_100c1c81;
    if (uVar7 == 0x5b) {
      FUN_100c2220(param_1,0x5b,param_1[1]);
      break;
    }
    *(char *)puVar9 = (char)uVar7;
    puVar9 = (uint *)((int)puVar9 + 1);
    uVar7 = FUN_100c22b0(param_1);
  }
LAB_100c1cc7:
  *(undefined1 *)puVar9 = 0;
  puVar9 = FUN_100d9c84(auStack_400);
  *(uint **)param_1[5] = puVar9;
  return 0x10f;
}

