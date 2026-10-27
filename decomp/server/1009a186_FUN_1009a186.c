
/* WARNING: Instruction at (ram,0x1009a14d) overlaps instruction at (ram,0x1009a14c)
    */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_1009a186(int param_1,uint *param_2)

{
  undefined4 *puVar1;
  uint *puVar2;
  uint *puVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  bool bVar7;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  int iVar8;
  undefined3 extraout_var_01;
  uint uVar9;
  int *this;
  uint unaff_EBX;
  undefined4 *unaff_ESI;
  int *unaff_EDI;
  undefined2 in_DS;
  float10 fVar10;
  longlong lVar11;
  int *unaff_retaddr;
  
  puVar1 = (undefined4 *)segment(in_DS,0x1009);
  puVar2 = (uint *)*puVar1;
  if (param_1 == 0) {
    unaff_ESI[0x72] = fRam00000000 + _DAT_100de4ac;
    if ((unaff_ESI[0x57] & unaff_EBX) != 0) {
      return;
    }
    unaff_ESI[0x78] = 4;
    unaff_EDI = unaff_retaddr;
code_r0x1009a14c:
    *(char *)((int)unaff_EDI + 0x5e) = *(char *)((int)unaff_EDI + 0x5e) + (char)unaff_EBX;
    return;
  }
  *puVar2 = *puVar2 | (uint)param_2;
  *puVar2 = *puVar2 | (uint)param_2;
  *puVar2 = *puVar2 | (uint)param_2;
  *puVar2 = *puVar2 | (uint)param_2;
  LOCK();
  uVar9 = *(uint *)((int)unaff_EDI + -0x605ceff7);
  *(uint *)((int)unaff_EDI + -0x605ceff7) = unaff_EBX;
  UNLOCK();
  *puVar2 = *puVar2 | (uint)param_2;
  unaff_EBX = uVar9;
  if ((int)*puVar2 < 0) goto code_r0x1009a14c;
  *puVar2 = *puVar2 | (uint)param_2;
  *param_2 = *param_2 | (uint)puVar2;
  if ((int)*param_2 < 0) {
    unaff_ESI[0x57] = unaff_ESI[0x57] | uVar9;
    return;
  }
  *param_2 = *param_2 | (uint)puVar2;
  puVar3 = (uint *)*unaff_ESI;
  *puVar3 = *puVar3 | (uint)puVar2;
  if (*puVar3 == 0) {
    return;
  }
  *puVar3 = *puVar3 | (uint)puVar2;
  cRam0d0d0d0d = cRam0d0d0d0d + (byte)param_1;
  uVar9 = CONCAT31((int3)((uint)param_1 >> 8),(byte)param_1 | (byte)*puVar2);
  this = (int *)(uVar9 | *(uint *)((int)puVar2 + uVar9));
  switch(*unaff_retaddr) {
  case 0x5b:
    iVar8 = FUN_1009bcc0((int)this);
    if (iVar8 != 0) {
      bVar7 = FUN_10019450((uint *)(this + 0xdf));
      if (CONCAT31(extraout_var_00,bVar7) != 0) {
        iVar8 = FUN_10019460((uint *)(this + 0xdf));
        FUN_1009b420(this,(float *)(*(int *)(iVar8 + 4) + 8));
        goto LAB_1009a4c1;
      }
    }
    FUN_1009b420(this,(float *)(this[1] + 8));
    FUN_1009b350(this);
    iVar8 = (*DAT_10121f70)(0,this[0xc3] * 0x14);
    if (iVar8 == 0) {
      FUN_1009b4c0(this);
    }
LAB_1009a4c1:
    FUN_10005140(this,unaff_retaddr);
    if (this[0x78] != 4) {
      return;
    }
    FUN_1009b420(this,(float *)(this[1] + 8));
    return;
  default:
    iVar8 = FUN_1009bcc0((int)this);
    if (iVar8 != 0) {
      bVar7 = FUN_10019450((uint *)(this + 0xdf));
      if (CONCAT31(extraout_var_01,bVar7) != 0) {
        iVar8 = FUN_10019460((uint *)(this + 0xdf));
        FUN_1009b420(this,(float *)(*(int *)(iVar8 + 4) + 8));
        FUN_10005140(this,unaff_retaddr);
        return;
      }
    }
    FUN_10008360(this,0,0.0);
    FUN_10005140(this,unaff_retaddr);
    return;
  case 0x5f:
    fVar5 = (float)this[0xa4] - *(float *)(this[1] + 8);
    fVar6 = (float)this[0xa5] - *(float *)(this[1] + 0xc);
    if ((SQRT(fVar5 * fVar5 + fVar6 * fVar6) <= (float)unaff_retaddr[1]) && (this[0x9b] != 0)) {
      return;
    }
    if ((this[0x57] & 0x40000000U) == 0) {
      this[0x78] = 4;
    }
    FUN_1005d290((int)this);
    return;
  case 0x66:
  case 0x67:
    if (((this[0x76] != 1) || (iVar8 = (**(code **)(*this + 0x98))(), iVar8 != 0)) ||
       (iVar8 = FUN_1009bcc0((int)this), iVar8 != 0)) {
LAB_1009a2f2:
      this[0x57] = this[0x57] | 0x40000000;
      return;
    }
    iVar8 = (*DAT_10121f28)(1);
    if (iVar8 != 0) {
      FUN_1009b420(this,(float *)(iVar8 + 0x88));
    }
    if (*unaff_retaddr == 0x67) {
      fVar5 = *(float *)(iVar8 + 0x88) - *(float *)(this[1] + 8);
      fVar6 = *(float *)(iVar8 + 0x8c) - *(float *)(this[1] + 0xc);
      if (_DAT_100ddaf4 < SQRT(fVar5 * fVar5 + fVar6 * fVar6)) {
        this[0x57] = this[0x57] | 0x40000000;
      }
      FUN_100af200(iVar8 + 0xd0);
      fVar10 = FUN_100b1010((float *)(iVar8 + 0x88),(float *)(this[1] + 8),DAT_10122044 + 10);
      if (fVar10 < (float10)(float)this[0x70]) {
        this[0x57] = this[0x57] | 0x40000000;
      }
    }
    if (*DAT_10122044 <= (float)this[0x71]) {
      return;
    }
    break;
  case 0x68:
    iVar8 = (**(code **)(*this + 0x98))();
    if ((iVar8 == 0) && (iVar8 = FUN_1009bcc0((int)this), iVar8 != 0)) {
      bVar7 = FUN_10019450((uint *)(this + 0xdf));
      if (CONCAT31(extraout_var,bVar7) != 0) {
        iVar8 = FUN_10019460((uint *)(this + 0xdf));
        FUN_1009b420(this,(float *)(*(int *)(iVar8 + 4) + 8));
        return;
      }
    }
    break;
  case 0x6a:
    iVar8 = (*DAT_10121f28)(1);
    if (iVar8 == 0) goto LAB_1009a2f2;
    FUN_10060260(this,*(float *)(iVar8 + 0x88),*(float *)(iVar8 + 0x8c),*(float *)(iVar8 + 0x90));
    iVar4 = *this;
    lVar11 = __ftol();
    (**(code **)(iVar4 + 0x128))((int)lVar11);
    FUN_1009b420(this,(float *)(iVar8 + 0x88));
    if (*DAT_10122044 <= (float)this[0x71]) {
      return;
    }
    fVar10 = FUN_10060350((int)this);
    if ((float10)_DAT_100dd63c <= fVar10) {
      return;
    }
  }
  if ((this[0x57] & 0x40000000U) != 0) {
    return;
  }
  this[0x78] = 4;
  return;
}

