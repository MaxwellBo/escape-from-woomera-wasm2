
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_1008c2c0(int param_1)

{
  int *piVar1;
  float unaff_ESI;
  float local_5c;
  float fStack_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  float fStack_44;
  float fStack_40;
  undefined1 auStack_3c [20];
  undefined1 auStack_28 [40];
  
  if (*(int *)(param_1 + 0x124) != 0) {
    if (*(int *)(param_1 + 0x120) == 0) {
      piVar1 = FUN_1008b030();
      *(int **)(param_1 + 0x120) = piVar1;
    }
    FUN_100af200(*(int *)(*(int *)(param_1 + 0xdc) + 4) + 0x74);
    (**(code **)(**(int **)(param_1 + 0xdc) + 0x214))(&local_5c);
    fStack_44 = *(float *)(DAT_10122044 + 0x2c) * _DAT_100e185c;
    fStack_40 = *(float *)(DAT_10122044 + 0x30) * _DAT_100e185c;
    fStack_54 = *(float *)(DAT_10122044 + 0x28) * _DAT_100e185c + unaff_ESI;
    fStack_50 = local_5c + fStack_44;
    fStack_4c = fStack_58 + fStack_40;
    FUN_100afc60(&stack0xffffffa0,&fStack_54,0,
                 *(undefined4 *)(*(int *)(*(int *)(param_1 + 0xdc) + 4) + 0x208),auStack_3c);
    FUN_100afe10(*(int *)(param_1 + 0x120),auStack_28);
  }
  return;
}

