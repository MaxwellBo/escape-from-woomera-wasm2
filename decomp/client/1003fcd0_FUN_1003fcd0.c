
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_1003fcd0(void)

{
  float10 fVar1;
  float in_stack_00000010;
  float in_stack_00000014;
  float in_stack_00000018;
  float in_stack_0000001c;
  float in_stack_00000020;
  float local_24;
  float fStack_20;
  float fStack_1c;
  undefined1 local_18 [12];
  undefined1 local_c [12];
  
  (*DAT_100a5050)(&stack0x00000004,local_c,&local_24,local_18);
  fVar1 = (float10)in_stack_00000010;
  in_stack_00000010 = -NAN;
  fVar1 = (float10)local_24 * fVar1 +
          (float10)fStack_1c * (float10)in_stack_00000018 +
          (float10)fStack_20 * (float10)in_stack_00000014;
  if ((float10)_DAT_10059a18 <= fVar1) {
    in_stack_00000010 = 1.4013e-45;
  }
  if (fVar1 <= (float10)_DAT_10059a18) {
    fVar1 = -fVar1;
  }
  if (fVar1 < (float10)in_stack_00000020) {
    return ((fVar1 * (float10)in_stack_0000001c) / (float10)in_stack_00000020) *
           (float10)(int)in_stack_00000010;
  }
  return (float10)in_stack_0000001c * (float10)(int)in_stack_00000010;
}

