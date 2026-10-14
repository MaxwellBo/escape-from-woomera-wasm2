
void __thiscall FUN_10073f30(void *this,float *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  *(float *)this = *param_1;
  *(float *)((int)this + 4) = param_1[1];
  *(float *)((int)this + 8) = param_1[2];
  fVar1 = param_2[2];
  fVar2 = param_2[1];
  fVar3 = *param_2;
  *(undefined4 *)((int)this + 0x10) = 1;
  *(float *)((int)this + 0xc) =
       fVar3 * *(float *)this +
       fVar2 * *(float *)((int)this + 4) + fVar1 * *(float *)((int)this + 8);
  return;
}

