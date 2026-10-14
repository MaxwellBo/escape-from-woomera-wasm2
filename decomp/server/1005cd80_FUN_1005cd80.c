
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_1005cd80(int *param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  int *piVar5;
  uint uVar6;
  float fStack_1ac;
  float fStack_1a8;
  float fStack_1a4;
  int iStack_1a0;
  float fStack_19c;
  float fStack_198;
  float fStack_194;
  int aiStack_190 [100];
  
  uVar6 = 0;
  iVar2 = param_1[1];
  param_1[3] = 0;
  param_1[0x57] = param_1[0x57] & 0xff9fffe1;
  if ((*(byte *)(iVar2 + 0x1a0) & 0x10) == 0) {
    fStack_1ac = (float)param_2;
    fStack_194 = fStack_1ac + *(float *)(iVar2 + 0x10);
    fStack_198 = fStack_1ac + *(float *)(iVar2 + 0xc);
    fStack_19c = fStack_1ac + *(float *)(iVar2 + 8);
    fStack_1a4 = *(float *)(iVar2 + 0x10) - fStack_1ac;
    fStack_1a8 = *(float *)(iVar2 + 0xc) - fStack_1ac;
    fStack_1ac = *(float *)(iVar2 + 8) - fStack_1ac;
    iStack_1a0 = FUN_100ae980(aiStack_190,100,&fStack_1ac,&fStack_19c,0x28);
    if (0 < iStack_1a0) {
      piVar5 = aiStack_190;
      do {
        piVar1 = (int *)*piVar5;
        if (((((piVar1 != param_1) && ((*(byte *)(piVar1[1] + 0x1a0) & 0x10) == 0)) &&
             (_DAT_100dd5f8 < *(float *)(piVar1[1] + 0x160))) &&
            ((iVar2 = (**(code **)(*param_1 + 0x130))(piVar1), iVar2 != 0 &&
             (iVar2 = (**(code **)(*param_1 + 0x14c))(piVar1), iVar2 != 0)))) &&
           (((*(byte *)(piVar1[1] + 0x1a4) & 0x80) == 0 &&
            (iVar2 = (**(code **)(*param_1 + 0x110))(piVar1), iVar2 != 0)))) {
          iVar2 = (**(code **)(*piVar1 + 0xcc))();
          if (iVar2 != 0) {
            if ((*(byte *)(param_1[1] + 0x1a0) & 1) != 0) {
              piVar3 = (int *)(**(code **)(*piVar1 + 0x74))();
              if ((piVar1 != (int *)0x0) &&
                 (iVar2 = (**(code **)(*piVar3 + 0x14c))(param_1), iVar2 == 0))
              goto switchD_1005cf1b_caseD_fffffffe;
              *(uint *)(param_1[1] + 0x1a0) = *(uint *)(param_1[1] + 0x1a0) & 0xfffffffe;
            }
            uVar6 = uVar6 | 0x200000;
          }
          piVar1[3] = param_1[3];
          param_1[3] = (int)piVar1;
          piVar3 = (int *)FUN_10019410((uint *)(param_1 + 0x58));
          if (piVar1 == piVar3) {
            uVar6 = uVar6 | 0x10;
          }
          uVar4 = (**(code **)(*param_1 + 0x130))(piVar1);
          switch(uVar4) {
          default:
            (*DAT_10121efc)(2,s__s_can_t_assess__s_101111d4,
                            *(int *)param_1[1] + *(int *)(DAT_10122044 + 0x98),
                            *(int *)piVar1[1] + *(int *)(DAT_10122044 + 0x98));
            break;
          case 1:
            uVar6 = uVar6 | 8;
            break;
          case 2:
            uVar6 = uVar6 | 2;
            break;
          case 3:
            uVar6 = uVar6 | 0x400000;
            break;
          case 0xfffffffe:
            break;
          case 0xffffffff:
            uVar6 = uVar6 | 4;
          }
        }
switchD_1005cf1b_caseD_fffffffe:
        piVar5 = piVar5 + 1;
        iStack_1a0 = iStack_1a0 + -1;
        if (iStack_1a0 == 0) {
          param_1[0x57] = param_1[0x57] | uVar6;
          return;
        }
      } while( true );
    }
  }
  param_1[0x57] = param_1[0x57];
  return;
}

