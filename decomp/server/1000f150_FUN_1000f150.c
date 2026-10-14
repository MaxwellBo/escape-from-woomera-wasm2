
void __thiscall FUN_1000f150(void *this,undefined4 param_1,float param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  void *this_00;
  int in_stack_00000018;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  iVar4 = in_stack_00000018;
  if (*(int *)(in_stack_00000018 + 0x34) == 1) {
    if (*(float *)((int)this + 0x314) < *DAT_10122044) {
      in_stack_00000018 = (*DAT_10121f70)();
      *(float *)((int)this + 0x314) = (float)in_stack_00000018 + *DAT_10122044;
      uVar1 = *(undefined4 *)(*(int *)((int)this + 4) + 0x208);
      uVar3 = (*DAT_10121f70)();
      uVar7 = 0;
      uVar6 = 0x3f4ccccd;
      uVar5 = 0x3f800000;
      iVar4 = (*DAT_10121f70)(0);
      FUN_10094b20(this_00,uVar1,2,(&PTR_s_gonarch_gon_pain2_wav_101034a4)[iVar4],uVar5,uVar6,uVar7,
                   uVar3);
    }
    goto LAB_1000f240;
  }
  if (*(float *)(*(int *)((int)this + 4) + 0x1e4) == *DAT_10122044) {
    iVar2 = (*DAT_10121f70)();
    if (iVar2 < 1) goto LAB_1000f18b;
  }
  else {
LAB_1000f18b:
    (*DAT_10121f74)();
    FUN_100b06f0((undefined4 *)(iVar4 + 0x14));
    *(float *)(*(int *)((int)this + 4) + 0x1e4) = *DAT_10122044;
  }
  param_2 = 0.1;
LAB_1000f240:
  FUN_10003850(&stack0xffffffe0,(undefined4 *)&stack0x0000000c);
  FUN_100203e0(this,param_1,param_2);
  return;
}

