
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_1003b0c0(void *this,undefined4 *param_1,undefined4 *param_2,float param_3)

{
  int iVar1;
  float fVar2;
  undefined4 *puVar3;
  longlong lVar4;
  float in_stack_ffffffb8;
  float fVar5;
  undefined4 *puVar6;
  float in_stack_ffffffc4;
  float fVar7;
  float in_stack_ffffffd0;
  float in_stack_ffffffd4;
  undefined4 in_stack_ffffffd8;
  float fVar8;
  float fVar9;
  int iVar10;
  int iVar11;
  float fVar12;
  
  fVar2 = param_3;
  if (*(float *)((int)this + 0xcc) == _DAT_100dd5f8) {
    FUN_1003ab70(this,param_1);
  }
  else {
    FUN_100af210((float *)(*(int *)((int)this + 4) + 0x50));
    lVar4 = __ftol();
    param_3 = (float)lVar4;
    if (0 < (int)param_3) {
      if (0 < (int)param_3) {
        do {
          iVar11 = *(int *)((int)this + 0x11c);
          if (iVar11 == 1) {
            iVar11 = *(int *)((int)this + 0x120);
            fVar9 = 8.40779e-45;
LAB_1003b16f:
            iVar1 = *(int *)((int)this + 0x130);
LAB_1003b184:
            iVar10 = 1;
            fVar8 = 4096.0;
            puVar3 = (undefined4 *)(&DAT_10121d70 + iVar1 * 0xc);
            fVar7 = 2.597198e-29;
            fVar12 = fVar2;
            FUN_10003850(&stack0xffffffd0,puVar3);
            fVar5 = 2.5972014e-29;
            puVar6 = param_2;
            FUN_10003850(&stack0xffffffc4,param_2);
            FUN_10003850(&stack0xffffffb8,param_1);
            FUN_100204d0(this,1,in_stack_ffffffb8,fVar5,(float)puVar6,in_stack_ffffffc4,fVar7,
                         (float)puVar3,in_stack_ffffffd0,in_stack_ffffffd4,in_stack_ffffffd8,fVar8,
                         fVar9,iVar10,iVar11,fVar12);
          }
          else {
            if (iVar11 == 2) {
              iVar11 = *(int *)((int)this + 0x120);
              fVar9 = 9.80909e-45;
              goto LAB_1003b16f;
            }
            if (iVar11 == 3) {
              iVar1 = *(int *)((int)this + 0x130);
              iVar11 = *(int *)((int)this + 0x120);
              fVar9 = 1.12104e-44;
              goto LAB_1003b184;
            }
          }
          param_3 = (float)((int)param_3 + -1);
        } while (param_3 != 0.0);
      }
      FUN_1003ab70(this,param_1);
      return;
    }
  }
  return;
}

