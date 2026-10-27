
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_10005140(void *this,int *param_1)

{
  float *pfVar1;
  float *pfVar2;
  int iVar3;
  uint uVar4;
  float fVar5;
  int *piVar6;
  float fVar7;
  float fVar8;
  int *piVar9;
  bool bVar10;
  int iVar11;
  undefined3 extraout_var;
  uint *puVar12;
  float10 fVar13;
  longlong lVar14;
  undefined4 *puVar15;
  undefined4 *puVar16;
  float local_3c;
  float local_38;
  float local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  float local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  piVar9 = param_1;
  switch(*param_1) {
  case 1:
  case 0x54:
    bVar10 = *DAT_10122044 < *(float *)((int)this + 0x1c4);
    goto LAB_10005648;
  case 2:
    FUN_10060260(this,*(float *)((int)this + 0x2a8),*(float *)((int)this + 0x2ac),
                 *(float *)((int)this + 0x2b0));
    iVar11 = *(int *)this;
    lVar14 = __ftol();
    (**(code **)(iVar11 + 0x128))((int)lVar14);
    bVar10 = *DAT_10122044 < *(float *)((int)this + 0x1c4);
    goto LAB_10005648;
  case 3:
    iVar11 = (*DAT_10121e4c)(*(undefined4 *)(*(int *)((int)this + 4) + 0x208));
    if (iVar11 == 0) {
      return;
    }
    iVar11 = (*DAT_10121f20)(iVar11);
    break;
  default:
    goto switchD_10005164_caseD_4;
  case 7:
    puVar12 = (uint *)((int)this + 0x168);
    bVar10 = FUN_10019450(puVar12);
    if (CONCAT31(extraout_var,bVar10) == 0) {
      *(uint *)((int)this + 0x15c) = *(uint *)((int)this + 0x15c) | 0x40000000;
      return;
    }
    pfVar2 = (float *)((int)this + 0x278);
    fVar5 = *pfVar2 - *(float *)(*(int *)((int)this + 4) + 8);
    fVar7 = *(float *)((int)this + 0x27c) - *(float *)(*(int *)((int)this + 4) + 0xc);
    piVar6 = (int *)SQRT(fVar5 * fVar5 + fVar7 * fVar7);
    if ((float)piVar6 < (float)param_1[1]) {
LAB_10005387:
      iVar11 = FUN_10019460(puVar12);
      iVar11 = *(int *)(iVar11 + 4);
      *pfVar2 = *(float *)(iVar11 + 8);
      *(undefined4 *)((int)this + 0x27c) = *(undefined4 *)(iVar11 + 0xc);
      *(undefined4 *)((int)this + 0x280) = *(undefined4 *)(iVar11 + 0x10);
      fVar5 = *pfVar2 - *(float *)(*(int *)((int)this + 4) + 8);
      fVar7 = *(float *)((int)this + 0x27c) - *(float *)(*(int *)((int)this + 4) + 0xc);
      param_1 = (int *)SQRT(fVar5 * fVar5 + fVar7 * fVar7);
      FUN_1005d300(this);
    }
    else {
      iVar11 = FUN_10019460(puVar12);
      iVar11 = *(int *)(iVar11 + 4);
      fVar5 = *pfVar2 - *(float *)(iVar11 + 8);
      fVar8 = *(float *)((int)this + 0x27c) - *(float *)(iVar11 + 0xc);
      fVar7 = *(float *)((int)this + 0x280) - *(float *)(iVar11 + 0x10);
      pfVar1 = (float *)(param_1 + 1);
      param_1 = piVar6;
      if (*pfVar1 * (float)_DAT_100dd648 < SQRT(fVar5 * fVar5 + fVar8 * fVar8 + fVar7 * fVar7))
      goto LAB_10005387;
    }
    if ((float)piVar9[1] <= (float)param_1) {
      if (((float)param_1 < _DAT_100ddb04) && (*(int *)((int)this + 0x284) != 3)) {
        *(undefined4 *)((int)this + 0x284) = 3;
        return;
      }
      if ((float)param_1 < _DAT_100ddb00) {
        return;
      }
      if (*(int *)((int)this + 0x284) == 4) {
        return;
      }
      *(undefined4 *)((int)this + 0x284) = 4;
      return;
    }
    uVar4 = *(uint *)((int)this + 0x15c);
joined_r0x10005486:
    if ((uVar4 & 0x40000000) == 0) {
      *(undefined4 *)((int)this + 0x1e0) = 4;
    }
    FUN_1005d290((int)this);
    return;
  case 0x19:
  case 0x3e:
    goto switchD_10005164_caseD_19;
  case 0x1c:
    iVar11 = *(int *)((int)this + 0xd4);
    break;
  case 0x1d:
  case 0x1e:
  case 0x20:
  case 0x21:
  case 0x22:
  case 0x57:
  case 0x58:
    iVar11 = *(int *)this;
    goto LAB_10005176;
  case 0x1f:
    FUN_10060260(this,*(float *)((int)this + 0x2a8),*(float *)((int)this + 0x2ac),
                 *(float *)((int)this + 0x2b0));
    iVar11 = *(int *)this;
LAB_10005176:
    lVar14 = __ftol();
    (**(code **)(iVar11 + 0x128))((int)lVar14);
    iVar11 = FUN_100617e0((int)this);
    break;
  case 0x23:
  case 0x24:
  case 0x25:
  case 0x26:
  case 0x27:
  case 0x2d:
  case 0x2e:
    FUN_10060260(this,*(float *)((int)this + 0x2a8),*(float *)((int)this + 0x2ac),
                 *(float *)((int)this + 0x2b0));
    iVar11 = *(int *)this;
    lVar14 = __ftol();
    (**(code **)(iVar11 + 0x128))((int)lVar14);
  case 0x28:
  case 0x29:
  case 0x2a:
  case 0x2b:
  case 0x2c:
    if (*(int *)((int)this + 0xd4) == 0) {
      return;
    }
    *(undefined4 *)((int)this + 0x1cc) = 0;
    goto LAB_1000564f;
  case 0x3f:
  case 0x40:
    puVar12 = (uint *)((int)this + 0x168);
    if (*param_1 != 0x40) {
      puVar12 = (uint *)((int)this + 0x160);
    }
    iVar11 = FUN_10019410(puVar12);
    if (iVar11 != 0) {
      iVar11 = *(int *)(iVar11 + 4);
      iVar3 = *(int *)((int)this + 4);
      local_34 = *(float *)(iVar11 + 0x10) - *(float *)(iVar3 + 0x10);
      local_38 = *(float *)(iVar11 + 0xc) - *(float *)(iVar3 + 0xc);
      local_3c = *(float *)(iVar11 + 8) - *(float *)(iVar3 + 8);
      fVar13 = (float10)FUN_100afde0(&local_3c);
      *(float *)(*(int *)((int)this + 4) + 0xac) = (float)fVar13;
      iVar11 = *(int *)this;
      lVar14 = __ftol();
      (**(code **)(iVar11 + 0x128))((int)lVar14);
    }
    goto switchD_10005164_caseD_19;
  case 0x4d:
    if (*(int *)((int)this + 0xd4) == 0) {
      return;
    }
    if (*(float *)(*(int *)((int)this + 4) + 0x130) < _DAT_100ddafc) {
      return;
    }
    *(undefined4 *)(*(int *)((int)this + 4) + 0x170) = 2;
    *(undefined4 *)((int)this + 0x74) = 0;
    *(undefined4 *)(*(int *)((int)this + 4) + 0x138) = 0;
    iVar11 = FUN_100619c0((int)this);
    if (iVar11 == 0) {
      iVar11 = *(int *)((int)this + 4);
      puVar16 = &local_30;
      puVar15 = &local_24;
      local_30 = 0x40800000;
      local_2c = 0x40800000;
      local_28 = 0x3f800000;
      local_24 = 0xc0800000;
      local_20 = 0xc0800000;
      local_1c = 0;
    }
    else {
      iVar11 = *(int *)((int)this + 4);
      local_10 = *(float *)(iVar11 + 0xe4) + _DAT_100dd618;
      local_14 = *(undefined4 *)(iVar11 + 0xec);
      local_18 = *(undefined4 *)(iVar11 + 0xe8);
      local_8 = *(undefined4 *)(iVar11 + 0xe0);
      local_4 = *(undefined4 *)(iVar11 + 0xe4);
      local_c = *(undefined4 *)(iVar11 + 0xdc);
      puVar16 = &local_18;
      puVar15 = &local_c;
    }
    FUN_100afdc0(iVar11,puVar15,puVar16);
    iVar11 = (**(code **)(*(int *)this + 0x124))();
    if (iVar11 != 0) {
      CBaseEntity::SUB_StartFadeOut(this);
      return;
    }
    FUN_10095d30(8,(undefined4 *)(*(int *)((int)this + 4) + 8),0x180,30.0);
    return;
  case 0x4e:
    if (0 < *(int *)(*(int *)((int)this + 0x2fc) + 0x348)) {
      return;
    }
    bVar10 = *DAT_10122044 < *(float *)(*(int *)((int)this + 0x2fc) + 0x34c);
LAB_10005648:
    if (bVar10) {
      return;
    }
    goto LAB_1000564f;
  case 0x4f:
    if (*(int *)((int)this + 0xd4) == 0) {
      return;
    }
    iVar11 = *(int *)(*(int *)((int)this + 0x2fc) + 0x33c);
    if (iVar11 < 1) {
      if ((*(uint *)((int)this + 0x15c) & 0x40000000) != 0) {
        return;
      }
      *(undefined4 *)((int)this + 0x1e0) = 4;
      return;
    }
    *(int *)(*(int *)((int)this + 0x2fc) + 0x33c) = iVar11 + -1;
    *(undefined4 *)(*(int *)((int)this + 4) + 0x130) =
         *(undefined4 *)(*(int *)((int)this + 0x2fc) + 0x340);
    FUN_10008190((int)this);
    return;
  case 0x5b:
    if (*(int *)((int)this + 0x26c) != 0) {
      return;
    }
    uVar4 = *(uint *)((int)this + 0x15c);
    goto joined_r0x10005486;
  }
joined_r0x10005215:
  if (iVar11 != 0) {
LAB_1000564f:
    if ((*(uint *)((int)this + 0x15c) & 0x40000000) == 0) {
      *(undefined4 *)((int)this + 0x1e0) = 4;
      return;
    }
  }
switchD_10005164_caseD_4:
  return;
switchD_10005164_caseD_19:
  iVar11 = *(int *)((int)this + 0xd4);
  goto joined_r0x10005215;
}

