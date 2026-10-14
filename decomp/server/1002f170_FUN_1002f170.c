
float * __thiscall FUN_1002f170(void *this,float *param_1,int *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  float10 fVar6;
  float10 fVar7;
  float10 fVar8;
  
  if ((*(byte *)(*(int *)((int)this + 4) + 0x1a0) & 4) == 0) {
    iVar5 = *(int *)(*(int *)((int)this + 4) + 0x1c8);
    if (iVar5 != 0) {
      FUN_10058750(param_1,(int)this,(int)param_2,(byte *)(*(int *)(DAT_10122044 + 0x98) + iVar5));
      return param_1;
    }
    goto LAB_1002f282;
  }
  if (param_2 == (int *)0x0) {
LAB_1002f1a8:
    iVar5 = (*DAT_10121f28)(1);
  }
  else {
    iVar5 = (**(code **)(*param_2 + 0xcc))();
    if (iVar5 == 0) goto LAB_1002f1a8;
    iVar5 = *(int *)(param_2[1] + 0x208);
  }
  if (iVar5 != 0) {
    fVar6 = (float10)(*DAT_10121f74)(0xc1200000,0x41200000);
    fVar7 = (float10)(*DAT_10121f74)(0xc1200000,0x41200000);
    fVar8 = (float10)(*DAT_10121f74)(0xc1200000,0x41200000);
    fVar1 = *(float *)(iVar5 + 0x1f8);
    fVar2 = *(float *)(iVar5 + 0x8c);
    fVar3 = *(float *)(iVar5 + 0x1fc);
    fVar4 = *(float *)(iVar5 + 0x90);
    *param_1 = (float)((float10)*(float *)(iVar5 + 0x88) + (float10)*(float *)(iVar5 + 500) + fVar8)
    ;
    param_1[1] = fVar1 + fVar2 + (float)fVar7;
    param_1[2] = fVar3 + fVar4 + (float)fVar6;
    return param_1;
  }
LAB_1002f282:
  iVar5 = *(int *)((int)this + 4);
  *param_1 = *(float *)(iVar5 + 8);
  param_1[1] = *(float *)(iVar5 + 0xc);
  param_1[2] = *(float *)(iVar5 + 0x10);
  return param_1;
}

