
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float * __thiscall FUN_10059620(int param_1,float *param_2,int param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  float fVar5;
  int *this;
  float *pfVar6;
  float10 fVar7;
  float10 fVar8;
  float10 fVar9;
  float *unaff_retaddr;
  undefined4 uVar10;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  undefined1 auStack_30 [12];
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  undefined1 auStack_18 [12];
  undefined1 auStack_c [12];
  
  this = (int *)FUN_100af060(0,(byte *)(*(int *)(DAT_10122044 + 0x98) +
                                       *(int *)(*(int *)(param_1 + 4) + 0x1d0)),param_3);
  FUN_10058820(&fStack_48,param_1,param_3,
               (byte *)(*(int *)(DAT_10122044 + 0x98) + *(int *)(*(int *)(param_1 + 4) + 0x1d4)));
  switch(*(undefined4 *)(*(int *)(param_1 + 4) + 0x184)) {
  case 1:
    pfVar6 = (float *)(**(code **)(*this + 0xfc))(auStack_c);
    fVar1 = pfVar6[1];
    fVar2 = pfVar6[2];
    *unaff_retaddr = fStack_4c + *pfVar6;
    unaff_retaddr[1] = fStack_48 + fVar1;
    unaff_retaddr[2] = fStack_44 + fVar2;
    return unaff_retaddr;
  case 2:
    iVar4 = this[1];
    fVar5 = (*(float *)(iVar4 + 0xec) + *(float *)(iVar4 + 0xe0)) * _DAT_100dd614;
    fVar1 = *(float *)(iVar4 + 0xf0);
    fVar2 = *(float *)(iVar4 + 0xc);
    fVar3 = *(float *)(iVar4 + 0x10);
    *param_2 = fStack_48 + *(float *)(iVar4 + 8) +
               (*(float *)(iVar4 + 0xe8) + *(float *)(iVar4 + 0xdc)) * _DAT_100dd614;
    param_2[1] = fStack_44 + fVar2 + fVar5;
    param_2[2] = fStack_40 + fVar3 + fVar1;
    return param_2;
  case 3:
    iVar4 = this[1];
    fVar3 = (*(float *)(iVar4 + 0xec) + *(float *)(iVar4 + 0xe0)) * _DAT_100dd614;
    fVar5 = (*(float *)(iVar4 + 0xf0) + *(float *)(iVar4 + 0xe4)) * _DAT_100dd614;
    fVar1 = *(float *)(iVar4 + 0xc);
    fVar2 = *(float *)(iVar4 + 0x10);
    *param_2 = fStack_48 + *(float *)(iVar4 + 8) +
               (*(float *)(iVar4 + 0xe8) + *(float *)(iVar4 + 0xdc)) * _DAT_100dd614;
    param_2[1] = fStack_44 + fVar1 + fVar3;
    param_2[2] = fStack_40 + fVar2 + fVar5;
    return param_2;
  case 4:
    iVar4 = this[1];
    fVar5 = (*(float *)(iVar4 + 0xec) + *(float *)(iVar4 + 0xe0)) * _DAT_100dd614;
    fVar1 = *(float *)(iVar4 + 0xe4);
    fVar2 = *(float *)(iVar4 + 0xc);
    fVar3 = *(float *)(iVar4 + 0x10);
    *param_2 = fStack_48 + *(float *)(iVar4 + 8) +
               (*(float *)(iVar4 + 0xe8) + *(float *)(iVar4 + 0xdc)) * _DAT_100dd614;
    param_2[1] = fStack_44 + fVar2 + fVar5;
    param_2[2] = fStack_40 + fVar3 + fVar1;
    return param_2;
  case 5:
    uVar10 = 0;
    break;
  case 6:
    uVar10 = 1;
    break;
  case 7:
    uVar10 = 2;
    break;
  case 8:
    FUN_10008450(this,3,&fStack_3c,auStack_18);
    FUN_10001d60(param_2,fStack_3c + fStack_48,fStack_44 + fStack_38,fStack_40 + fStack_34);
    return param_2;
  case 9:
    fVar7 = (float10)(*DAT_10121f74)(*(undefined4 *)(this[1] + 0xe4),*(undefined4 *)(this[1] + 0xf0)
                                    );
    fVar8 = (float10)(*DAT_10121f74)(*(undefined4 *)(this[1] + 0xe0),*(undefined4 *)(this[1] + 0xec)
                                    );
    fVar9 = (float10)(*DAT_10121f74)(*(undefined4 *)(this[1] + 0xdc),*(undefined4 *)(this[1] + 0xe8)
                                    );
    iVar4 = this[1];
    fStack_24 = (float)fVar9;
    fStack_20 = (float)fVar8;
    fStack_1c = (float)fVar7;
    FUN_10001d60(auStack_30,fStack_48 + *(float *)(iVar4 + 8),fStack_44 + *(float *)(iVar4 + 0xc),
                 fStack_40 + *(float *)(iVar4 + 0x10));
    FUN_1000b550(auStack_30,param_2,&fStack_24);
    return param_2;
  default:
    FUN_1000b550(&fStack_48,param_2,(float *)(this[1] + 8));
    return param_2;
  }
  FUN_10008450(this,uVar10,&fStack_3c,auStack_18);
  *param_2 = fStack_3c + fStack_48;
  param_2[1] = fStack_44 + fStack_38;
  param_2[2] = fStack_40 + fStack_34;
  return param_2;
}

