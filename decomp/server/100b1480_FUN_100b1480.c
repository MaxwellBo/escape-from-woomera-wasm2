
void __thiscall FUN_100b1480(void *this,byte *param_1,float *param_2,float param_3)

{
  float fVar1;
  
  fVar1 = param_3;
  FUN_100b1c50(this,param_1,(int)param_3 * 4);
  if (0 < (int)fVar1) {
    do {
      param_3 = *param_2;
      if (*(int *)this != 0) {
        param_3 = param_3 - *(float *)(*(int *)this + 0x550);
      }
      FUN_100b1ca0(this,&param_3,4);
      param_2 = param_2 + 1;
      fVar1 = (float)((int)fVar1 + -1);
    } while (fVar1 != 0.0);
  }
  return;
}

