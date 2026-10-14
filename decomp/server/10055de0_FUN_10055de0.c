
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_10055de0(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  void *this;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  if (*(float *)(param_1 + 0x334) < *DAT_10122044) {
    uVar6 = 100;
    uVar5 = 0;
    uVar1 = *(undefined4 *)(*(int *)(param_1 + 4) + 0x208);
    uVar4 = 0x3f4ccccd;
    uVar3 = 0x3f800000;
    iVar2 = (*DAT_10121f70)(0,2);
    FUN_10094b20(this,uVar1,2,(&PTR_s_leech_leech_bite1_wav_1010fc00)[iVar2],uVar3,uVar4,uVar5,uVar6
                );
    *(float *)(param_1 + 0x334) = *DAT_10122044 + (float)_DAT_100dd648;
  }
  return;
}

