
void __fastcall FUN_10001340(int param_1)

{
  float fVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  float10 fVar5;
  int local_28;
  int *local_24;
  int local_20;
  float fStack_18;
  float fStack_14;
  float fStack_10;
  float fStack_c;
  float fStack_8;
  float fStack_4;
  
  local_24 = (int *)0x0;
  local_20 = 0;
  fVar1 = *(float *)(param_1 + 0x30c);
  if (0 < *(int *)(param_1 + 0x308)) {
    do {
      local_28 = (*DAT_10121e5c)();
      if (local_28 == 0) {
        local_28 = 0;
      }
      else {
        local_28 = local_28 + 0x80;
      }
      iVar2 = *(int *)(local_28 + 0x208);
      if ((iVar2 == 0) || (piVar4 = *(int **)(iVar2 + 0x7c), piVar4 == (int *)0x0)) {
        piVar4 = (int *)(*DAT_10121f04)(iVar2,0x348);
        if (piVar4 == (int *)0x0) {
          piVar4 = (int *)0x0;
        }
        else {
          FUN_10002dc0(piVar4);
          FUN_10002ec0(piVar4 + 0x7b,0x10,8,FUN_10002f10);
          *piVar4 = (int)&PTR_FUN_100dd17c;
        }
        piVar4[1] = local_28;
      }
      if (local_24 == (int *)0x0) {
        piVar4[0xc2] = (int)piVar4;
        piVar4[0xc3] = 0;
        local_24 = piVar4;
      }
      fVar5 = (float10)(*DAT_10121f74)(-fVar1,fVar1);
      fStack_18 = (float)fVar5;
      fVar5 = (float10)(*DAT_10121f74)(-fVar1,fVar1);
      fStack_14 = (float)fVar5;
      fVar5 = (float10)(*DAT_10121f74)(0,0x41800000);
      iVar2 = *(int *)(param_1 + 4);
      fStack_18 = fStack_18 + *(float *)(iVar2 + 8);
      fStack_14 = fStack_14 + *(float *)(iVar2 + 0xc);
      fStack_10 = (float)fVar5 + *(float *)(iVar2 + 0x10);
      fStack_c = fStack_18;
      fStack_8 = fStack_14;
      fStack_4 = fStack_10;
      FUN_100afe10((int)piVar4,&fStack_18);
      *(undefined4 *)(piVar4[1] + 0x108) = 5;
      FUN_10001810((int)piVar4);
      *(uint *)(piVar4[1] + 0x1a4) = *(uint *)(piVar4[1] + 0x1a4) & 0xfffffdff;
      iVar2 = piVar4[1];
      *(undefined4 *)(iVar2 + 0x20) = DAT_10121dd8;
      *(undefined4 *)(iVar2 + 0x24) = DAT_10121ddc;
      *(undefined4 *)(iVar2 + 0x28) = DAT_10121de0;
      iVar2 = *(int *)(param_1 + 4);
      iVar3 = piVar4[1];
      *(undefined4 *)(iVar3 + 0x50) = *(undefined4 *)(iVar2 + 0x50);
      *(undefined4 *)(iVar3 + 0x54) = *(undefined4 *)(iVar2 + 0x54);
      *(undefined4 *)(iVar3 + 0x58) = *(undefined4 *)(iVar2 + 0x58);
      *(undefined4 *)(piVar4[1] + 0x130) = 0;
      (**(code **)(*piVar4 + 8))(0x3e4ccccd);
      piVar4[0x1d] = (int)CFlockingFlyer::IdleThink;
      if (piVar4 != local_24) {
        FUN_10002ac0(local_24,(int)piVar4);
      }
      local_20 = local_20 + 1;
    } while (local_20 < *(int *)(param_1 + 0x308));
  }
  return;
}

