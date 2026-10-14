
void __thiscall FUN_1000a3c0(void *this,float param_1)

{
  float10 fVar1;
  
  fVar1 = FUN_10018f40();
  *(float *)((int)this + 0x54) = (float)(fVar1 + (float10)param_1);
  *(float *)(*(int *)((int)this + 4) + 0x104) = (float)(fVar1 + (float10)param_1);
  return;
}

