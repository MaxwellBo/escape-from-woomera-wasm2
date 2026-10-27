
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_100057f0(void *this,int *param_1)

{
  uint *puVar1;
  byte bVar2;
  float fVar3;
  int *piVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined4 uVar8;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  undefined3 extraout_var_01;
  undefined3 extraout_var_02;
  undefined4 *puVar9;
  undefined3 extraout_var_03;
  float *pfVar10;
  uint uVar11;
  undefined3 extraout_var_04;
  int iVar12;
  byte *pbVar13;
  int iVar14;
  undefined3 extraout_var_05;
  byte *pbVar15;
  char *pcVar16;
  bool bVar17;
  float10 fVar18;
  longlong lVar19;
  undefined1 auStack_54 [4];
  undefined4 uStack_50;
  undefined1 auStack_48 [4];
  undefined4 uStack_44;
  float fVar20;
  float fVar21;
  float fVar22;
  undefined4 local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  float local_4;
  
  switch(*param_1) {
  case 1:
  case 2:
    *(float *)((int)this + 0x1c4) = (float)param_1[1] + *DAT_10122044;
    return;
  case 3:
  case 0x55:
    goto switchD_1000580b_caseD_3;
  case 4:
    lVar19 = __ftol();
    *(int *)((int)this + 0x1dc) = (int)lVar19;
    break;
  case 5:
  case 6:
    if (*(int *)((int)this + 8) == 0) {
LAB_10005f64:
      if ((*(uint *)((int)this + 0x15c) & 0x40000000) != 0) {
        return;
      }
      *(undefined4 *)((int)this + 0x1e0) = 4;
    }
    else {
      iVar12 = *(int *)(*(int *)((int)this + 8) + 4);
      iVar14 = *(int *)((int)this + 4);
      fVar20 = *(float *)(iVar12 + 8) - *(float *)(iVar14 + 8);
      fVar21 = *(float *)(iVar12 + 0xc) - *(float *)(iVar14 + 0xc);
      fVar22 = *(float *)(iVar12 + 0x10) - *(float *)(iVar14 + 0x10);
      if (SQRT(fVar21 * fVar21 + fVar22 * fVar22 + fVar20 * fVar20) < _DAT_100dd618)
      goto LAB_10005f64;
      iVar14 = (*param_1 != 5) + 3;
      iVar12 = FUN_10008100(this,iVar14);
      if (iVar12 == -1) {
        if ((*(uint *)((int)this + 0x15c) & 0x40000000) != 0) {
          return;
        }
        *(undefined4 *)((int)this + 0x1e0) = 4;
        bVar17 = (*(uint *)((int)this + 0x15c) & 0x40000000) == 0;
        goto LAB_10006983;
      }
      if (*(int *)((int)this + 8) == 0) {
        *(uint *)((int)this + 0x15c) = *(uint *)((int)this + 0x15c) | 0x40000000;
LAB_10005f19:
        uStack_44 = 0x10005f21;
        (*DAT_10121efc)();
        FUN_1005d290((int)this);
        bVar17 = (*(uint *)((int)this + 0x15c) & 0x40000000) == 0;
        goto LAB_10006983;
      }
      iVar12 = *(int *)(*(int *)((int)this + 8) + 4);
      local_24 = *(undefined4 *)(iVar12 + 8);
      local_20 = *(float *)(iVar12 + 0xc);
      local_1c = *(float *)(iVar12 + 0x10);
      uStack_44 = 0x10005eea;
      iVar12 = FUN_1005d4b0(this,iVar14,0x40000000,&local_24);
      if (iVar12 == 0) {
        *(uint *)((int)this + 0x15c) = *(uint *)((int)this + 0x15c) | 0x40000000;
        goto LAB_10005f19;
      }
    }
    bVar17 = (*(uint *)((int)this + 0x15c) & 0x40000000) == 0;
    goto LAB_10006983;
  case 7:
    iVar12 = *(int *)((int)this + 4);
    iVar14 = FUN_10019460((uint *)((int)this + 0x168));
    iVar14 = *(int *)(iVar14 + 4);
    fVar20 = *(float *)(iVar14 + 8) - *(float *)(iVar12 + 8);
    fVar21 = *(float *)(iVar14 + 0xc) - *(float *)(iVar12 + 0xc);
    fVar22 = *(float *)(iVar14 + 0x10) - *(float *)(iVar12 + 0x10);
    if (_DAT_100dd618 <= SQRT(fVar21 * fVar21 + fVar22 * fVar22 + fVar20 * fVar20)) {
      iVar12 = FUN_10019460((uint *)((int)this + 0x168));
      iVar12 = *(int *)(iVar12 + 4);
      *(undefined4 *)((int)this + 0x278) = *(undefined4 *)(iVar12 + 8);
      *(undefined4 *)((int)this + 0x27c) = *(undefined4 *)(iVar12 + 0xc);
      *(undefined4 *)((int)this + 0x280) = *(undefined4 *)(iVar12 + 0x10);
      iVar12 = FUN_1005d500(this,3,0x40000000);
      if (iVar12 != 0) {
        return;
      }
      *(uint *)((int)this + 0x15c) = *(uint *)((int)this + 0x15c) | 0x40000000;
      return;
    }
    break;
  case 8:
    iVar12 = FUN_10019410((uint *)((int)this + 0x160));
    if (iVar12 == 0) goto LAB_10005d15;
    uStack_44 = 0x100060e8;
    iVar14 = FUN_1005e720(this,(float *)(*(int *)(iVar12 + 4) + 8),2,iVar12);
    if (iVar14 == 0) {
      iVar14 = *(int *)this;
      uStack_50 = 0x10006140;
      FUN_10003850(auStack_48,(undefined4 *)(*(int *)(iVar12 + 4) + 0x174));
      FUN_10003850(auStack_54,(undefined4 *)(*(int *)(iVar12 + 4) + 8));
      iVar12 = (**(code **)(iVar14 + 0x1bc))();
      goto joined_r0x10006210;
    }
    break;
  case 9:
    uStack_44 = 0x1000604c;
    iVar12 = FUN_1005e720(this,(float *)((int)this + 0x2a8),0x40,0);
    if (iVar12 == 0) {
      iVar12 = *(int *)this;
      uStack_50 = 0x1000609d;
      FUN_10003850(auStack_48,(undefined4 *)(*(int *)((int)this + 4) + 0x174));
      FUN_10003850(auStack_54,(float *)((int)this + 0x2a8));
      iVar12 = (**(code **)(iVar12 + 0x1bc))();
      goto joined_r0x10006210;
    }
    break;
  case 10:
    FUN_100af200(*(int *)((int)this + 4) + 0x50);
    local_20 = DAT_10122044[0xb] * _DAT_100ddb10;
    local_1c = DAT_10122044[0xc] * _DAT_100ddb10;
    local_18 = *(float *)((int)this + 0x2a8) - DAT_10122044[10] * _DAT_100ddb10;
    local_14 = *(float *)((int)this + 0x2ac) - local_20;
    local_10 = *(float *)((int)this + 0x2b0) - local_1c;
    uStack_44 = 0x100061dc;
    iVar12 = FUN_1005e720(this,&local_18,0x40,0);
    if (iVar12 != 0) break;
    goto LAB_10005d0a;
  default:
    uStack_44 = 0x10006a8f;
    (*DAT_10121efc)();
    return;
  case 0xc:
    uVar8 = FUN_100aec40(0,s_player_10101c54);
    uStack_44 = 0x1000620e;
    iVar12 = FUN_1005e720(this,(float *)((int)this + 0x278),0x40,uVar8);
    goto joined_r0x10006210;
  case 0xd:
    FUN_1005d290((int)this);
    bVar17 = FUN_10019450((uint *)((int)this + 0x168));
    if (CONCAT31(extraout_var_04,bVar17) == 0) goto LAB_10005d0a;
    iVar12 = FUN_1005d500(this,*(undefined4 *)((int)this + 0x284),0x3f800000);
    goto joined_r0x10006210;
  case 0xe:
    FUN_1005d290((int)this);
    if (*(int *)((int)this + 0x2fc) == 0) goto LAB_10005d0a;
    uStack_44 = 0x10006276;
    iVar12 = FUN_1005d4b0(this,*(undefined4 *)((int)this + 0x284),0x3f800000,
                          (undefined4 *)(*(int *)(*(int *)((int)this + 0x2fc) + 4) + 8));
joined_r0x10006210:
    if (iVar12 == 0) {
LAB_10005d0a:
      (*DAT_10121efc)();
      goto LAB_10005d15;
    }
    break;
  case 0xf:
    uStack_44 = 0x100062a1;
    iVar12 = FUN_1005d4b0(this,*(undefined4 *)((int)this + 0x284),0x40000000,
                          (undefined4 *)(DAT_1012278c + *(int *)((int)this + 0x29c) * 0x58));
    if (iVar12 == 0) goto LAB_100062b5;
    bVar17 = (*(uint *)((int)this + 0x15c) & 0x40000000) == 0;
    goto LAB_100065d4;
  case 0x10:
    *(undefined4 *)((int)this + 0x278) = *(undefined4 *)((int)this + 0x290);
    *(undefined4 *)((int)this + 0x27c) = *(undefined4 *)((int)this + 0x294);
    *(undefined4 *)((int)this + 0x280) = *(undefined4 *)((int)this + 0x298);
    uStack_44 = 0x1000630b;
    iVar12 = FUN_1005d4b0(this,*(undefined4 *)((int)this + 0x284),0x40000000,
                          (undefined4 *)((int)this + 0x278));
    if (iVar12 == 0) goto LAB_100062b5;
    bVar17 = (*(uint *)((int)this + 0x15c) & 0x40000000) == 0;
    goto LAB_100065d4;
  case 0x11:
    puVar9 = (undefined4 *)(**(code **)(*(int *)this + 0x1e4))();
    if (puVar9 == (undefined4 *)0x0) {
LAB_100062b5:
      (*DAT_10121efc)();
      *(uint *)((int)this + 0x15c) = *(uint *)((int)this + 0x15c) | 0x40000000;
      return;
    }
    uStack_44 = 0x10006344;
    iVar12 = FUN_1005d4b0(this,*(undefined4 *)((int)this + 0x284),0x40000000,puVar9);
    if (iVar12 == 0) goto LAB_100062b5;
    bVar17 = (*(uint *)((int)this + 0x15c) & 0x40000000) == 0;
    goto LAB_100065d4;
  case 0x12:
    puVar9 = (undefined4 *)(**(code **)(*(int *)this + 0x1e8))();
    if (puVar9 == (undefined4 *)0x0) goto LAB_100062b5;
    uStack_44 = 0x10006380;
    iVar12 = FUN_1005d4b0(this,*(undefined4 *)((int)this + 0x284),0x40000000,puVar9);
    if (iVar12 == 0) goto LAB_100062b5;
    bVar17 = (*(uint *)((int)this + 0x15c) & 0x40000000) == 0;
    goto LAB_100065d4;
  case 0x13:
    iVar12 = FUN_10008100(this,4);
    if (iVar12 == -1) goto LAB_100063df;
LAB_100063ab:
    *(undefined4 *)((int)this + 0x284) = 4;
    goto LAB_10006979;
  case 0x14:
    if (*(int *)(*(int *)((int)this + 4) + 0x108) == 5) {
      *(undefined4 *)((int)this + 0x284) = 5;
    }
    iVar12 = FUN_10008100(this,3);
    if (iVar12 == -1) goto LAB_100063ab;
LAB_100063df:
    *(undefined4 *)((int)this + 0x284) = 3;
    goto LAB_10006979;
  case 0x15:
    FUN_100af200(*(int *)((int)this + 4) + 0x50);
    fVar20 = *(float *)((int)this + 0x1ec) - *(float *)(*(int *)((int)this + 4) + 8);
    fVar5 = *(float *)((int)this + 0x1f0) - *(float *)(*(int *)((int)this + 4) + 0xc);
    fVar3 = SQRT(fVar20 * fVar20 + fVar5 * fVar5);
    fVar21 = _DAT_100dd5f8;
    fVar22 = _DAT_100dd5f8;
    if (fVar3 != _DAT_100dd5f8) {
      fVar3 = _DAT_100dd618 / fVar3;
      fVar21 = fVar20 * fVar3;
      fVar22 = fVar5 * fVar3;
    }
    fVar20 = DAT_10122044[0x10];
    fVar3 = DAT_10122044[0x11];
    fVar7 = SQRT(fVar20 * fVar20 + fVar3 * fVar3);
    fVar5 = _DAT_100dd5f8;
    fVar6 = _DAT_100dd5f8;
    if (fVar7 != _DAT_100dd5f8) {
      fVar7 = _DAT_100dd618 / fVar7;
      fVar5 = fVar7 * fVar3;
      fVar6 = fVar20 * fVar7;
    }
    if (fVar6 * fVar21 + fVar5 * fVar22 <= _DAT_100dd5f8) {
      *(undefined4 *)((int)this + 0x284) = 0xb;
    }
    else {
      *(undefined4 *)((int)this + 0x284) = 0xc;
    }
    break;
  case 0x16:
    *(float *)((int)this + 0x1c8) = *DAT_10122044;
    break;
  case 0x17:
    iVar12 = *(int *)((int)this + 4);
    *(undefined4 *)((int)this + 0x290) = *(undefined4 *)(iVar12 + 8);
    *(undefined4 *)((int)this + 0x294) = *(undefined4 *)(iVar12 + 0xc);
    *(undefined4 *)((int)this + 0x298) = *(undefined4 *)(iVar12 + 0x10);
    break;
  case 0x18:
    *(undefined4 *)((int)this + 0x290) = DAT_10121dd8;
    *(undefined4 *)((int)this + 0x294) = DAT_10121ddc;
    *(undefined4 *)((int)this + 0x298) = DAT_10121de0;
    break;
  case 0x19:
    *(int *)((int)this + 0x1d0) =
         (int)*(short *)(DAT_1012278c + 0x52 + *(int *)((int)this + 0x29c) * 0x58);
    return;
  case 0x1a:
    iVar12 = FUN_10060b00(this);
    *(int *)((int)this + 0x29c) = iVar12;
    uVar11 = *(uint *)((int)this + 0x15c);
    if (iVar12 == -1) goto LAB_10005d1b;
    goto LAB_100065cf;
  case 0x1b:
    *(undefined4 *)((int)this + 0x29c) = 0xffffffff;
    break;
  case 0x1c:
    iVar12 = FUN_1001ea40(this);
    *(int *)((int)this + 0x1d0) = iVar12;
    return;
  case 0x1d:
    goto switchD_1000580b_caseD_1d;
  case 0x1e:
    iVar12 = FUN_1005d2d0((int)this);
    if (iVar12 != 0) goto LAB_10005d0a;
    pfVar10 = (float *)(*(int *)((int)this + 0x270) * 0x10 + 0x1ec + (int)this);
LAB_10005cac:
    fVar20 = *pfVar10;
    fVar21 = pfVar10[1];
    fVar22 = pfVar10[2];
    goto LAB_10005cc1;
  case 0x1f:
    fVar20 = *(float *)((int)this + 0x2a8);
    fVar21 = *(float *)((int)this + 0x2ac);
    fVar22 = *(float *)((int)this + 0x2b0);
LAB_10005cc1:
    uStack_44 = 0x10005cc8;
    FUN_10060260(this,fVar20,fVar21,fVar22);
switchD_1000580b_caseD_1d:
    FUN_10005780(this);
    return;
  case 0x20:
    *(undefined4 *)(*(int *)((int)this + 4) + 0xac) =
         *(undefined4 *)(DAT_1012278c + 0x54 + *(int *)((int)this + 0x29c) * 0x58);
    FUN_10005780(this);
    return;
  case 0x21:
    bVar17 = FUN_10019450((uint *)((int)this + 0x168));
    if (CONCAT31(extraout_var_03,bVar17) != 0) {
      iVar12 = FUN_10019460((uint *)((int)this + 0x168));
      pfVar10 = (float *)(*(int *)(iVar12 + 4) + 8);
      goto LAB_10005cac;
    }
    goto LAB_10005d15;
  case 0x22:
    uStack_44 = 0x10005c7d;
    FUN_10060260(this,*(float *)((int)this + 0x290),*(float *)((int)this + 0x294),
                 *(float *)((int)this + 0x298));
    FUN_10005780(this);
    return;
  case 0x23:
  case 0x28:
    *(undefined4 *)((int)this + 0x1d0) = 0x1c;
    return;
  case 0x24:
  case 0x29:
    *(undefined4 *)((int)this + 0x1d0) = 0x1d;
    return;
  case 0x25:
  case 0x2a:
    *(undefined4 *)((int)this + 0x1d0) = 0x1e;
    return;
  case 0x26:
  case 0x2b:
    *(undefined4 *)((int)this + 0x1d0) = 0x1f;
    return;
  case 0x27:
  case 0x2c:
    *(undefined4 *)((int)this + 0x1d0) = 0x20;
    return;
  case 0x2d:
    *(undefined4 *)((int)this + 0x1d0) = 0x3c;
    return;
  case 0x2e:
    *(undefined4 *)((int)this + 0x1d0) = 0x3d;
    return;
  case 0x38:
    (*DAT_10121efc)();
    break;
  case 0x39:
    (**(code **)(*(int *)this + 0x218))();
    break;
  case 0x3a:
    lVar19 = __ftol();
    *(int *)((int)this + 0x1d0) = (int)lVar19;
    break;
  case 0x3b:
    iVar12 = *(int *)this;
    __ftol();
    iVar12 = (**(code **)(iVar12 + 0x184))();
    if (iVar12 != 0) {
      FUN_10004e70(this,iVar12);
      return;
    }
    goto LAB_10005d15;
  case 0x3c:
    lVar19 = __ftol();
    *(int *)((int)this + 0x2d4) = (int)lVar19;
    break;
  case 0x3d:
    *(undefined4 *)((int)this + 0x2d4) = 0;
    break;
  case 0x3e:
  case 0x3f:
  case 0x40:
    lVar19 = __ftol();
    *(int *)((int)this + 0x1d0) = (int)lVar19;
    return;
  case 0x41:
    (**(code **)(*(int *)this + 0x220))();
    break;
  case 0x42:
    (**(code **)(*(int *)this + 0x21c))();
    break;
  case 0x43:
    (**(code **)(*(int *)this + 0x224))();
    break;
  case 0x44:
    (**(code **)(*(int *)this + 0x218))();
    break;
  case 0x45:
    puVar9 = (undefined4 *)(**(code **)(*(int *)this + 0x1e4))();
    if (puVar9 != (undefined4 *)0x0) {
      iVar12 = *(int *)this;
      (**(code **)(iVar12 + 0x1c8))();
      uStack_50 = 0x10005bf7;
      FUN_10003850(auStack_48,&DAT_10121dd8);
      FUN_10003850(auStack_54,puVar9);
      iVar12 = (**(code **)(iVar12 + 0x1c0))();
LAB_10005c0a:
      if (iVar12 != 0) {
        *(float *)((int)this + 0x1c8) = (float)param_1[1] + *DAT_10122044;
        break;
      }
    }
    goto LAB_10005d15;
  case 0x46:
    bVar17 = FUN_10019450((uint *)((int)this + 0x160));
    if (CONCAT31(extraout_var_02,bVar17) == 0) {
      iVar12 = *(int *)((int)this + 4);
    }
    else {
      iVar12 = FUN_10019460((uint *)((int)this + 0x160));
      iVar12 = *(int *)(iVar12 + 4);
    }
    iVar14 = FUN_100612e0(this,(float *)(iVar12 + 8),(float *)(iVar12 + 0x174));
    if (iVar14 == 0) {
      iVar14 = *(int *)this;
      (**(code **)(iVar14 + 0x1c8))();
      uStack_50 = 0x10005b48;
      FUN_10003850(auStack_48,(float *)(iVar12 + 0x174));
      FUN_10003850(auStack_54,(float *)(iVar12 + 8));
      iVar12 = (**(code **)(iVar14 + 0x1c0))();
      goto LAB_10005c0a;
    }
    *(float *)((int)this + 0x1c8) = (float)param_1[1] + *DAT_10122044;
    break;
  case 0x48:
    bVar17 = FUN_10019450((uint *)((int)this + 0x160));
    if (CONCAT31(extraout_var_01,bVar17) == 0) goto LAB_10005d15;
    iVar12 = *(int *)this;
    (**(code **)(iVar12 + 0x1c8))();
    iVar14 = FUN_10019460((uint *)((int)this + 0x160));
    uStack_50 = 0x10005ad9;
    FUN_10003850(auStack_48,(undefined4 *)(*(int *)(iVar14 + 4) + 0x174));
LAB_10005a68:
    iVar14 = FUN_10019460((uint *)((int)this + 0x160));
    FUN_10003850(auStack_54,(undefined4 *)(*(int *)(iVar14 + 4) + 8));
    iVar12 = (**(code **)(iVar12 + 0x1c0))();
    uVar11 = *(uint *)((int)this + 0x15c);
joined_r0x10005a19:
    if (iVar12 == 0) goto LAB_10005d1b;
    goto LAB_100065cf;
  case 0x49:
    puVar1 = (uint *)((int)this + 0x160);
    bVar17 = FUN_10019450(puVar1);
    if (CONCAT31(extraout_var,bVar17) != 0) {
      iVar12 = *(int *)this;
      iVar14 = FUN_10019460(puVar1);
      uStack_50 = 0x100059f1;
      FUN_10003850(auStack_48,(undefined4 *)(*(int *)(iVar14 + 4) + 0x174));
      iVar14 = FUN_10019460(puVar1);
      FUN_10003850(auStack_54,(undefined4 *)(*(int *)(iVar14 + 4) + 8));
      iVar12 = (**(code **)(iVar12 + 0x1c0))();
      uVar11 = *(uint *)((int)this + 0x15c);
      goto joined_r0x10005a19;
    }
    goto LAB_10005d15;
  case 0x4a:
    bVar17 = FUN_10019450((uint *)((int)this + 0x160));
    if (CONCAT31(extraout_var_00,bVar17) != 0) {
      iVar12 = *(int *)this;
      (**(code **)(iVar12 + 0x1c8))();
      iVar14 = FUN_10019460((uint *)((int)this + 0x160));
      uStack_50 = 0x10005a66;
      FUN_10003850(auStack_48,(undefined4 *)(*(int *)(iVar14 + 4) + 0x174));
      goto LAB_10005a68;
    }
LAB_10005d15:
    uVar11 = *(uint *)((int)this + 0x15c);
LAB_10005d1b:
    *(uint *)((int)this + 0x15c) = uVar11 | 0x40000000;
    return;
  case 0x4b:
    iVar12 = *(int *)this;
    (**(code **)(iVar12 + 0x1c8))();
    uStack_50 = 0x10005b88;
    FUN_10003850(auStack_48,(undefined4 *)(*(int *)((int)this + 4) + 0x174));
    FUN_10003850(auStack_54,(undefined4 *)(*(int *)((int)this + 4) + 8));
    iVar12 = (**(code **)(iVar12 + 0x1c0))();
    if (iVar12 == 0) goto LAB_10005d15;
    *(float *)((int)this + 0x1c8) = (float)param_1[1] + *DAT_10122044;
    break;
  case 0x4c:
    FUN_1005cb50(this,(float)param_1[1]);
    break;
  case 0x4d:
    FUN_1005d290((int)this);
    uVar8 = (**(code **)(*(int *)this + 0x1fc))();
    *(undefined4 *)((int)this + 0x1d0) = uVar8;
    *(undefined4 *)(*(int *)((int)this + 4) + 0x170) = 1;
    return;
  case 0x4e:
    piVar4 = *(int **)((int)this + 0x2fc);
    if ((0 < piVar4[0xd2]) || (*DAT_10122044 < (float)piVar4[0xd3])) {
      pcVar16 = s_scripted_action_10101ba8;
      pbVar13 = (byte *)(*(int *)piVar4[1] + (int)DAT_10122044[0x26]);
      do {
        bVar2 = *pbVar13;
        bVar17 = bVar2 < (byte)*pcVar16;
        if (bVar2 != *pcVar16) {
LAB_10006628:
          iVar12 = (1 - (uint)bVar17) - (uint)(bVar17 != 0);
          goto LAB_1000662d;
        }
        if (bVar2 == 0) break;
        bVar2 = pbVar13[1];
        bVar17 = bVar2 < (byte)pcVar16[1];
        if (bVar2 != pcVar16[1]) goto LAB_10006628;
        pbVar13 = pbVar13 + 2;
        pcVar16 = pcVar16 + 2;
      } while (bVar2 != 0);
      iVar12 = 0;
LAB_1000662d:
      if ((iVar12 == 0) || (piVar4[0xc3] == 0)) {
        *(undefined4 *)((int)this + 0x1d0) = 1;
        return;
      }
      uStack_44 = 0x1000664e;
      (**(code **)(*piVar4 + 0x230))();
      pbVar15 = (byte *)(*(int *)(*(int *)((int)this + 0x2fc) + 0x310) + (int)DAT_10122044[0x26]);
      pbVar13 = (byte *)(*(int *)(*(int *)((int)this + 0x2fc) + 0x30c) + (int)DAT_10122044[0x26]);
      do {
        bVar2 = *pbVar13;
        bVar17 = bVar2 < *pbVar15;
        if (bVar2 != *pbVar15) {
LAB_10006698:
          iVar12 = (1 - (uint)bVar17) - (uint)(bVar17 != 0);
          goto LAB_1000669d;
        }
        if (bVar2 == 0) break;
        bVar2 = pbVar13[1];
        bVar17 = bVar2 < pbVar15[1];
        if (bVar2 != pbVar15[1]) goto LAB_10006698;
        pbVar13 = pbVar13 + 2;
        pbVar15 = pbVar15 + 2;
      } while (bVar2 != 0);
      iVar12 = 0;
LAB_1000669d:
      if (iVar12 != 0) {
        return;
      }
      *(undefined4 *)(*(int *)((int)this + 4) + 0x138) = 0;
      return;
    }
    break;
  case 0x4f:
    piVar4 = *(int **)((int)this + 0x2fc);
    pcVar16 = s_scripted_action_10101ba8;
    pbVar13 = (byte *)(*(int *)piVar4[1] + (int)DAT_10122044[0x26]);
    do {
      bVar2 = *pbVar13;
      bVar17 = bVar2 < (byte)*pcVar16;
      if (bVar2 != *pcVar16) {
LAB_10006716:
        iVar12 = (1 - (uint)bVar17) - (uint)(bVar17 != 0);
        goto LAB_1000671b;
      }
      if (bVar2 == 0) break;
      bVar2 = pbVar13[1];
      bVar17 = bVar2 < (byte)pcVar16[1];
      if (bVar2 != pcVar16[1]) goto LAB_10006716;
      pbVar13 = pbVar13 + 2;
      pcVar16 = pcVar16 + 2;
    } while (bVar2 != 0);
    iVar12 = 0;
LAB_1000671b:
    if (iVar12 != 0) {
      uStack_44 = 0x100067e8;
      (**(code **)(*piVar4 + 0x230))();
      if (*(int *)((int)this + 0xd4) != 0) {
        uStack_44 = 0x100067f9;
        FUN_10004e30((int)this);
      }
      *(undefined4 *)(*(int *)((int)this + 4) + 0x138) = 0x3f800000;
      *(undefined4 *)((int)this + 0x2f8) = 0;
      return;
    }
    switch(piVar4[0xcb]) {
    case 0:
      *(undefined4 *)((int)this + 0x1d0) = 0x1c;
      break;
    case 1:
      *(undefined4 *)((int)this + 0x1d0) = 0x1d;
      break;
    case 2:
      *(undefined4 *)((int)this + 0x1d0) = 0x1e;
      break;
    case 3:
      *(undefined4 *)((int)this + 0x1d0) = 0x1f;
      break;
    case 4:
      *(undefined4 *)((int)this + 0x1d0) = 0x3c;
      break;
    case 5:
      *(undefined4 *)((int)this + 0x1d0) = 0x3d;
      break;
    case 6:
      *(undefined4 *)((int)this + 0x1d0) = 0x20;
      break;
    case 7:
      *(undefined4 *)((int)this + 0x1d0) = 7;
    }
    *(undefined4 *)(*(int *)((int)this + 4) + 0x138) = 0x3f800000;
    *(undefined4 *)(*(int *)((int)this + 4) + 0x108) = 5;
    *(uint *)(*(int *)((int)this + 4) + 0x1a4) =
         *(uint *)(*(int *)((int)this + 4) + 0x1a4) & 0xfffffdff;
    *(undefined4 *)((int)this + 0x2f8) = 0;
    return;
  case 0x50:
    FUN_10090270(*(void **)((int)this + 0x2fc),0);
    break;
  case 0x51:
    iVar12 = *(int *)((int)this + 0x2fc);
    if (iVar12 != 0) {
      if ((*(int *)(iVar12 + 0x324) == 4) || (*(int *)(iVar12 + 0x324) == 6)) {
        if (*(int *)(iVar12 + 0x328) == 0) {
          iVar12 = FUN_10019460((uint *)((int)this + 0x168));
          *(undefined4 *)(*(int *)((int)this + 4) + 0x54) =
               *(undefined4 *)(*(int *)(iVar12 + 4) + 0x54);
        }
        else if (*(int *)(iVar12 + 0x328) == 1) {
          iVar12 = *(int *)((int)this + 4);
          iVar14 = FUN_10019460((uint *)((int)this + 0x168));
          iVar14 = *(int *)(iVar14 + 4);
          local_4 = *(float *)(iVar14 + 0x10) - *(float *)(iVar12 + 0x10);
          local_8 = *(float *)(iVar14 + 0xc) - *(float *)(iVar12 + 0xc);
          local_c = *(float *)(iVar14 + 8) - *(float *)(iVar12 + 8);
          fVar18 = (float10)FUN_100afde0(&local_c);
          *(float *)(*(int *)((int)this + 4) + 0x54) = (float)fVar18;
        }
        *(undefined4 *)(*(int *)((int)this + 4) + 0xac) =
             *(undefined4 *)(*(int *)((int)this + 4) + 0x54);
        iVar12 = *(int *)((int)this + 4);
        *(undefined4 *)(iVar12 + 0x5c) = 0;
        *(undefined4 *)(iVar12 + 0x60) = 0;
        *(undefined4 *)(iVar12 + 100) = 0;
        iVar12 = *(int *)((int)this + 4);
        *(undefined4 *)(iVar12 + 0x20) = 0;
        *(undefined4 *)(iVar12 + 0x24) = 0;
        *(undefined4 *)(iVar12 + 0x28) = 0;
        puVar1 = (uint *)(*(int *)((int)this + 4) + 0x118);
        *puVar1 = *puVar1 | 0x20;
      }
      if (*(int *)(*(int *)((int)this + 0x2fc) + 0x324) != 6) {
        iVar12 = *(int *)((int)this + 4);
        iVar14 = *(int *)(*(int *)((int)this + 8) + 4);
        *(undefined4 *)(iVar12 + 8) = *(undefined4 *)(iVar14 + 8);
        *(undefined4 *)(iVar12 + 0xc) = *(undefined4 *)(iVar14 + 0xc);
        *(undefined4 *)(iVar12 + 0x10) = *(undefined4 *)(iVar14 + 0x10);
      }
    }
LAB_10006979:
    bVar17 = (*(uint *)((int)this + 0x15c) & 0x40000000) == 0;
LAB_10006983:
    if (!bVar17) {
      return;
    }
    *(undefined4 *)((int)this + 0x1e0) = 4;
    return;
  case 0x52:
    iVar12 = *(int *)((int)this + 0x2fc);
    if ((iVar12 != 0) && (*(int *)(iVar12 + 0x324) != 0)) {
      if (*(int *)(iVar12 + 0x328) == 0) {
        fVar18 = FUN_100ae770(*(float *)(*(int *)(iVar12 + 4) + 0x54));
        *(float *)(*(int *)((int)this + 4) + 0xac) = (float)fVar18;
      }
      else if (*(int *)(iVar12 + 0x328) == 1) {
        bVar17 = FUN_10019450((uint *)((int)this + 0x168));
        if (CONCAT31(extraout_var_05,bVar17) == 0) {
          iVar12 = *(int *)(*(int *)((int)this + 0x2fc) + 4);
        }
        else {
          iVar12 = FUN_10019460((uint *)((int)this + 0x168));
          iVar12 = *(int *)(iVar12 + 4);
        }
        uStack_44 = 0x100069f6;
        FUN_10060260(this,*(float *)(iVar12 + 8),*(float *)(iVar12 + 0xc),*(float *)(iVar12 + 0x10))
        ;
      }
    }
    if ((*(uint *)((int)this + 0x15c) & 0x40000000) == 0) {
      *(undefined4 *)((int)this + 0x1e0) = 4;
    }
    *(undefined4 *)((int)this + 0x1d0) = 1;
    FUN_1005d290((int)this);
    return;
  case 0x53:
    FUN_1008fef0(*(void **)((int)this + 0x2fc),this);
    break;
  case 0x54:
    fVar18 = (float10)(*DAT_10121f74)();
    *(float *)((int)this + 0x1c4) = (float)(fVar18 + (float10)*DAT_10122044);
    return;
  case 0x56:
    if (*(int *)((int)this + 0x1d0) == *(int *)((int)this + 0x284)) {
      uVar8 = (**(code **)(*(int *)this + 0x160))();
      *(undefined4 *)((int)this + 0x1d0) = uVar8;
    }
    FUN_1005d290((int)this);
    break;
  case 0x57:
    fVar18 = FUN_100ae770(*(float *)(*(int *)((int)this + 4) + 0x54));
    fVar18 = FUN_100ae770((float)(fVar18 + (float10)(float)param_1[1]));
    *(float *)(*(int *)((int)this + 4) + 0xac) = (float)fVar18;
    FUN_10005780(this);
    return;
  case 0x58:
    fVar18 = FUN_100ae770(*(float *)(*(int *)((int)this + 4) + 0x54));
    fVar18 = FUN_100ae770((float)(fVar18 - (float10)(float)param_1[1]));
    *(float *)(*(int *)((int)this + 4) + 0xac) = (float)fVar18;
    FUN_10005780(this);
    return;
  case 0x59:
    lVar19 = __ftol();
    *(uint *)((int)this + 0x2a0) = *(uint *)((int)this + 0x2a0) | (uint)lVar19;
    break;
  case 0x5a:
    lVar19 = __ftol();
    *(uint *)((int)this + 0x2a0) = *(uint *)((int)this + 0x2a0) & ~(uint)lVar19;
    break;
  case 0x5b:
    iVar12 = FUN_1005d2d0((int)this);
    if (iVar12 == 0) {
      return;
    }
  }
  uVar11 = *(uint *)((int)this + 0x15c);
LAB_100065cf:
  bVar17 = (uVar11 & 0x40000000) == 0;
LAB_100065d4:
  if (bVar17) {
    *(undefined4 *)((int)this + 0x1e0) = 4;
    return;
  }
switchD_1000580b_caseD_3:
  return;
}

