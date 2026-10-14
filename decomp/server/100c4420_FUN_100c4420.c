
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __fastcall FUN_100c4420(int param_1)

{
  float unaff_ESI;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  float fStack_44;
  float fStack_40;
  undefined1 auStack_3c [16];
  float fStack_2c;
  int iStack_c;
  
  FUN_100af200(*(int *)(*(int *)(param_1 + 0xdc) + 4) + 0x74);
  (**(code **)(**(int **)(param_1 + 0xdc) + 0x214))(&fStack_5c);
  fStack_44 = *(float *)(DAT_10122044 + 0x2c) * _DAT_100ddac8;
  fStack_40 = *(float *)(DAT_10122044 + 0x30) * _DAT_100ddac8;
  fStack_54 = unaff_ESI + *(float *)(DAT_10122044 + 0x28) * _DAT_100ddac8;
  fStack_50 = fStack_5c + fStack_44;
  fStack_4c = fStack_58 + fStack_40;
  FUN_100afc60(&stack0xffffffa0,&fStack_54,0,
               *(undefined4 *)(*(int *)(*(int *)(param_1 + 0xdc) + 4) + 0x208),auStack_3c);
  if ((float)_DAT_100dd628 <= fStack_2c) {
    FUN_100afc90(&stack0xffffffa0,&fStack_54,0,3,
                 *(undefined4 *)(*(int *)(*(int *)(param_1 + 0xdc) + 4) + 0x208),auStack_3c);
  }
  if ((float)_DAT_100dd628 <= fStack_2c) {
    return 0;
  }
  if ((iStack_c == 0) && (iStack_c = (*DAT_10121f1c)(0), iStack_c == 0)) {
    return 0;
  }
  return *(undefined4 *)(iStack_c + 0x7c);
}

