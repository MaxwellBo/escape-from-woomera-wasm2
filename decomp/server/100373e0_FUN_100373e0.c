
void __thiscall
FUN_100373e0(void *param_1,undefined4 param_2,float param_3,undefined4 param_4,undefined4 param_5,
            undefined4 param_6,int *param_7,uint param_8)

{
  void *this;
  int iVar1;
  float10 fVar2;
  char *in_stack_ffffffe4;
  int *in_stack_ffffffe8;
  void *pvVar3;
  int *piVar4;
  uint uVar5;
  
  pvVar3 = (void *)0x100373ee;
  iVar1 = (*DAT_10121f70)();
  piVar4 = param_7;
  if (iVar1 != 0) {
    if (*(int *)((int)param_1 + 200) == 6) {
      FUN_100b06a0(param_7 + 5);
      pvVar3 = (void *)0x3f333333;
      fVar2 = (float10)(*DAT_10121f74)();
      param_7 = (int *)(float)fVar2;
      in_stack_ffffffe8 = (int *)0x1;
      in_stack_ffffffe4 = (char *)0x0;
      iVar1 = (*DAT_10121f70)();
      if (iVar1 == 0) {
        in_stack_ffffffe4 = s_buttons_spark5_wav_10104a74;
      }
      else {
        if (iVar1 != 1) goto LAB_100374a2;
        in_stack_ffffffe4 = s_buttons_spark6_wav_10104a60;
      }
      pvVar3 = (void *)0x3f4ccccd;
      this = *(void **)(*(int *)((int)param_1 + 4) + 0x208);
      in_stack_ffffffe8 = param_7;
      FUN_10094b20(this,this,2,in_stack_ffffffe4,param_7,0x3f4ccccd,0,100);
    }
    else if (*(int *)((int)param_1 + 200) == 7) {
      (*DAT_10121f74)();
      pvVar3 = (void *)0x1003742f;
      FUN_100b06f0(piVar4 + 5);
    }
  }
LAB_100374a2:
  if (*(int *)((int)param_1 + 0xf4) != 0) {
    iVar1 = *(int *)(*(int *)((int)param_1 + 0xf8) + 4);
    *(int *)(iVar1 + 8) = piVar4[5];
    *(int *)(iVar1 + 0xc) = piVar4[6];
    *(int *)(iVar1 + 0x10) = piVar4[7];
    iVar1 = *(int *)(*(int *)((int)param_1 + 0xf8) + 4);
    *(undefined4 *)(iVar1 + 0x20) = param_4;
    *(undefined4 *)(iVar1 + 0x24) = param_5;
    *(undefined4 *)(iVar1 + 0x28) = param_6;
    in_stack_ffffffe8 = *(int **)((int)param_1 + 0xf8);
    in_stack_ffffffe4 = (char *)(*(int *)(DAT_10122044 + 0x98) + *(int *)((int)param_1 + 0xf4));
    pvVar3 = param_1;
    FUN_10098c10((uint *)in_stack_ffffffe4,in_stack_ffffffe8,param_1,3,0);
  }
  uVar5 = param_8;
  FUN_10003850(&stack0xffffffe4,&param_4);
  FUN_10020300(param_1,param_2,param_3,(float)in_stack_ffffffe4,(float)in_stack_ffffffe8,
               (float)pvVar3,(int)piVar4,uVar5);
  return;
}

