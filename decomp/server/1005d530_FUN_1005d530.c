
void __thiscall
FUN_1005d530(void *param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4)

{
  *(undefined4 *)((int)param_1 + 0x274) = param_3;
  *(undefined4 *)((int)param_1 + 0x284) = param_2;
  *(undefined4 *)((int)param_1 + 0x26c) = 0x20;
  *(undefined4 *)((int)param_1 + 0x278) = *param_4;
  *(undefined4 *)((int)param_1 + 0x27c) = param_4[1];
  *(undefined4 *)((int)param_1 + 0x280) = param_4[2];
  FUN_1005d300(param_1);
  return;
}

