
int * __cdecl FUN_10043ac0(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  float10 fVar5;
  undefined4 in_stack_00000014;
  undefined4 in_stack_00000018;
  undefined4 in_stack_0000001c;
  
  iVar2 = (*DAT_10121e5c)();
  if (iVar2 == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = iVar2 + 0x80;
  }
  iVar1 = *(int *)(iVar2 + 0x208);
  if ((iVar1 == 0) || (piVar3 = *(int **)(iVar1 + 0x7c), piVar3 == (int *)0x0)) {
    piVar3 = (int *)(*DAT_10121f04)(iVar1,0x30c);
    if (piVar3 == (int *)0x0) {
      piVar3 = (int *)0x0;
    }
    else {
      FUN_10002f30(piVar3);
      *piVar3 = (int)&PTR_FUN_100e5cb4;
    }
    piVar3[1] = iVar2;
  }
  (**(code **)(*piVar3 + 0x28))();
  *(undefined4 *)(piVar3[1] + 0x11c) = 0x3f000000;
  FUN_100afe10((int)piVar3,&stack0x00000008);
  iVar2 = piVar3[1];
  *(undefined4 *)(iVar2 + 0x20) = in_stack_00000014;
  *(undefined4 *)(iVar2 + 0x24) = in_stack_00000018;
  *(undefined4 *)(iVar2 + 0x28) = in_stack_0000001c;
  puVar4 = (undefined4 *)FUN_100ae830(&stack0x00000014,piVar3[1] + 0x20);
  iVar2 = piVar3[1];
  *(undefined4 *)(iVar2 + 0x50) = *puVar4;
  *(undefined4 *)(iVar2 + 0x54) = puVar4[1];
  *(undefined4 *)(iVar2 + 0x58) = puVar4[2];
  *(undefined4 *)(piVar3[1] + 0x198) = *(undefined4 *)(param_1 + 0x208);
  piVar3[0x1d] = (int)CGrenade::DangerSoundThink;
  (**(code **)(*piVar3 + 8))(0);
  fVar5 = (float10)(*DAT_10121f74)(0xc2c80000,0xc3fa0000);
  *(float *)(piVar3[1] + 0x5c) = (float)fVar5;
  piVar3[0x1e] = (int)CGrenade::ExplodeTouch;
  *(undefined4 *)(piVar3[1] + 0x1e0) = DAT_10126b28;
  return piVar3;
}

