
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_1003ab70(void *this,undefined4 *param_1)

{
  int *piVar1;
  float10 fVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  if (*(float *)((int)this + 0xcc) != _DAT_100dd5f8) {
    if (*(int *)((int)this + 0x114) != 0) {
      piVar1 = FUN_1002ca80((int)DAT_10122044[0x26] + *(int *)((int)this + 0x114),param_1,1);
      fVar2 = (float10)(*DAT_10121f74)(0x41700000,0x41a00000);
      piVar1[0x1d] = (int)CSprite::AnimateUntilDead;
      *(float *)(piVar1[1] + 0x138) = (float)fVar2;
      *(float *)(piVar1[1] + 0x1e4) =
           (float)((float10)(float)piVar1[0x2f] / fVar2 + (float10)*DAT_10122044);
      (**(code **)(*piVar1 + 8))(0);
      lVar3 = __ftol();
      lVar4 = __ftol();
      lVar5 = __ftol();
      *(undefined4 *)(piVar1[1] + 0x148) = 4;
      *(float *)(piVar1[1] + 0x150) = (float)(int)lVar5;
      *(float *)(piVar1[1] + 0x154) = (float)(int)lVar4;
      *(float *)(piVar1[1] + 0x158) = (float)(int)lVar3;
      *(undefined4 *)(piVar1[1] + 0x14c) = 0x437f0000;
      *(undefined4 *)(piVar1[1] + 0x15c) = 0;
      fVar2 = (float10)(*DAT_10121f74)(0x42200000,0x42a00000);
      *(float *)(piVar1[1] + 0x28) = (float)fVar2;
      *(undefined4 *)(piVar1[1] + 0x144) = *(undefined4 *)((int)this + 0x110);
    }
    if (*(int *)((int)this + 0x118) != 0) {
      piVar1 = FUN_1002ca80((int)DAT_10122044[0x26] + *(int *)((int)this + 0x118),param_1,1);
      piVar1[0x1d] = (int)CSprite::AnimateUntilDead;
      *(undefined4 *)(piVar1[1] + 0x138) = 0x42700000;
      *(float *)(piVar1[1] + 0x1e4) = (float)piVar1[0x2f] * _DAT_100e4920 + *DAT_10122044;
      (**(code **)(*piVar1 + 8))(0);
      *(undefined4 *)(piVar1[1] + 0x148) = 5;
      *(undefined4 *)(piVar1[1] + 0x150) = 0x437f0000;
      *(undefined4 *)(piVar1[1] + 0x154) = 0x437f0000;
      *(undefined4 *)(piVar1[1] + 0x158) = 0x437f0000;
      *(undefined4 *)(piVar1[1] + 0x14c) = 0x437f0000;
      *(undefined4 *)(piVar1[1] + 0x15c) = 0xe;
      *(undefined4 *)(piVar1[1] + 0x144) = *(undefined4 *)((int)this + 0x110);
      (**(code **)(*piVar1 + 0x10))((float)piVar1[0x15] + (float)_DAT_100dfb80);
    }
    if (*(int *)((int)this + 0x144) != 0) {
      FUN_10098c10((uint *)((int)DAT_10122044[0x26] + *(int *)((int)this + 0x144)),
                   *(int **)((int)this + 0x140),this,3,0);
    }
    FUN_10098bd0(this,this,3,0);
    *(float *)((int)this + 0xcc) = *DAT_10122044;
    return;
  }
  *(float *)((int)this + 0xcc) = *DAT_10122044;
  return;
}

