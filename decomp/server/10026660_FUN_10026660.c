
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_10026660(int param_1,int *param_2,int param_3,float param_4)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  bool bVar4;
  bool bVar5;
  int *piVar6;
  float fVar7;
  uint uVar8;
  void *this;
  
  fVar7 = param_4;
  piVar6 = param_2;
  param_4 = 0.5;
  if (fVar7 == 0.0) {
    param_4 = 3.0;
  }
  if (param_3 == 0) {
    piVar1 = param_2 + 2;
    if ((*piVar1 == 0) || (*DAT_10122044 <= (float)param_2[6])) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (((param_2[3] == 0) || (*(char *)((int)param_2 + 0x21) != '\0')) ||
       (*DAT_10122044 <= (float)param_2[7])) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    if ((!bVar4) || (param_2 = (int *)0x3e800000, !bVar5)) {
      param_2 = (int *)0x3f800000;
    }
    if (bVar4) {
      FUN_10094b20(*(void **)(param_1 + 0x208),*(void **)(param_1 + 0x208),3,
                   (char *)((int)DAT_10122044[0x26] + *piVar1),param_2,0x3f4ccccd,0,100);
      piVar6[6] = (int)(param_4 + *DAT_10122044);
    }
    if (!bVar5) {
      return;
    }
    uVar3 = piVar6[5];
    uVar8 = FUN_10094630(*(undefined4 *)(param_1 + 0x208),
                         (byte *)((int)DAT_10122044[0x26] + piVar6[3]));
    piVar6[5] = uVar8;
    piVar6[4] = 0;
    *(bool *)((int)piVar6 + 0x21) = uVar3 == uVar8;
  }
  else {
    iVar2 = *param_2;
    if ((iVar2 == 0) || (*DAT_10122044 <= (float)param_2[6])) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (((param_2[1] == 0) || ((char)param_2[8] != '\0')) || (*DAT_10122044 <= (float)param_2[7])) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    if ((!bVar4) || (param_2 = (int *)0x3e800000, !bVar5)) {
      param_2 = (int *)0x3f800000;
    }
    if (bVar4) {
      this = (void *)((int)DAT_10122044[0x26] + iVar2);
      FUN_10094b20(this,*(undefined4 *)(param_1 + 0x208),3,this,param_2,0x3f4ccccd,0,100);
      piVar6[6] = (int)(param_4 + *DAT_10122044);
    }
    if (!bVar5) {
      return;
    }
    uVar3 = piVar6[4];
    uVar8 = FUN_10094630(*(undefined4 *)(param_1 + 0x208),
                         (byte *)((int)DAT_10122044[0x26] + piVar6[1]));
    piVar6[4] = uVar8;
    piVar6[5] = 0;
    *(bool *)(piVar6 + 8) = uVar3 == uVar8;
  }
  piVar6[7] = (int)(*DAT_10122044 + _DAT_100dd620);
  return;
}

