
void __thiscall FUN_1003f890(void *this,undefined4 param_1,float param_2)

{
  undefined4 uVar1;
  int iVar2;
  void *this_00;
  float10 fVar3;
  int in_stack_00000018;
  uint in_stack_0000001c;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  (*DAT_10121efc)();
  iVar2 = (**(code **)(*(int *)this + 0xb8))();
  if (iVar2 == 0) {
    FUN_10003850(&stack0xffffffe0,(undefined4 *)&stack0x0000000c);
    FUN_100203e0(this,param_1,param_2);
    return;
  }
  if (((in_stack_0000001c & 0x800441) != 0) && (*(float *)((int)this + 0x328) < *DAT_10122044)) {
    uVar7 = 100;
    uVar6 = 0;
    uVar5 = 0x3f4ccccd;
    uVar1 = *(undefined4 *)(*(int *)((int)this + 4) + 0x208);
    uVar4 = 0x3f800000;
    iVar2 = (*DAT_10121f70)(0);
    FUN_10094b20(this_00,uVar1,2,(&PTR_s_garg_gar_pain1_wav_1010ccdc)[iVar2],uVar4,uVar5,uVar6,uVar7
                );
    fVar3 = (float10)(*DAT_10121f74)(0x40200000,0x40800000);
    *(float *)((int)this + 0x328) = (float)(fVar3 + (float10)*DAT_10122044);
  }
  if ((in_stack_0000001c & 0x800441) != 0) goto LAB_1003f9c5;
  if (*(float *)(*(int *)((int)this + 4) + 0x1e4) == *DAT_10122044) {
    iVar2 = (*DAT_10121f70)();
    if (iVar2 < 0x14) goto LAB_1003f989;
  }
  else {
LAB_1003f989:
    (*DAT_10121f74)();
    FUN_100b06f0((undefined4 *)(in_stack_00000018 + 0x14));
    *(float *)(*(int *)((int)this + 4) + 0x1e4) = *DAT_10122044;
  }
  param_2 = 0.0;
LAB_1003f9c5:
  FUN_10003850(&stack0xffffffe0,(undefined4 *)&stack0x0000000c);
  FUN_100203e0(this,param_1,param_2);
  return;
}

