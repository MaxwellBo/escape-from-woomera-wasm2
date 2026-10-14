
int __thiscall FUN_1006c400(void *this,float *param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  float *pfVar7;
  float fVar8;
  float fVar9;
  int local_8;
  void *pvStack_4;
  
  if ((*(int *)this == 0) || (*(int *)((int)this + 4) == 0)) {
    (*DAT_10121efc)();
    return -1;
  }
  (*DAT_10121f60)();
  fVar8 = 1.68156e-44;
  piVar6 = &local_8;
  pfVar7 = param_1;
  (*DAT_10121f64)();
  uVar2 = (*DAT_10121f6c)(local_8);
  iVar3 = (uVar2 & 0x7f) * 0x10;
  pvStack_4 = (void *)(iVar3 + (int)this);
  if (((*(float *)(iVar3 + 0x187c + (int)this) == *param_1) &&
      (*(float *)((int)pvStack_4 + 0x1880) == param_1[1])) &&
     (*(float *)((int)pvStack_4 + 0x1884) == param_1[2])) {
    return (int)*(short *)((int)pvStack_4 + 0x1888);
  }
  iVar3 = *(int *)((int)this + 0x1860) + 1;
  *(int *)((int)this + 0x1860) = iVar3;
  if (iVar3 == 0) {
    iVar3 = 0;
    if (0 < *(int *)((int)this + 0x18)) {
      iVar4 = 0;
      do {
        iVar3 = iVar3 + 1;
        *(undefined4 *)(*(int *)((int)this + 0x24) + 0xc + iVar4) = 0;
        iVar4 = iVar4 + 0x10;
      } while (iVar3 < *(int *)((int)this + 0x18));
    }
    *(int *)((int)this + 0x1860) = *(int *)((int)this + 0x1860) + 1;
  }
  *(undefined4 *)((int)this + 0x182c) = 0xffffffff;
  *(undefined4 *)((int)this + 0x1828) = 0x497423f0;
  *(undefined4 *)((int)this + 0x1830) = 0;
  *(undefined4 *)((int)this + 0x183c) = 0xff;
  *(undefined4 *)((int)this + 0x1834) = 0;
  *(undefined4 *)((int)this + 0x1840) = 0xff;
  *(undefined4 *)((int)this + 0x1838) = 0;
  *(undefined4 *)((int)this + 0x1844) = 0xff;
  *(undefined4 *)((int)this + 0x1848) = 0;
  *(undefined4 *)((int)this + 0x1854) = 0xff;
  *(undefined4 *)((int)this + 0x184c) = 0;
  *(undefined4 *)((int)this + 0x1858) = 0xff;
  *(undefined4 *)((int)this + 0x1850) = 0;
  *(undefined4 *)((int)this + 0x185c) = 0xff;
  local_8 = 0x7f;
  piVar5 = (int *)((int)this + 0xe24);
  do {
    iVar3 = piVar5[-0x300];
    if (iVar3 <= *piVar5) {
      iVar4 = iVar3 << 4;
      do {
        fVar9 = *(float *)(*(int *)((int)this + 0x24) + iVar4);
        iVar1 = *(int *)((int)this + 0xc) + (int)fVar9 * 0x58;
        if ((*(uint *)(iVar1 + 0x1c) & param_2) != 0) {
          if (*(int *)((int)this + 0x1858) < (int)(uint)*(byte *)(iVar1 + 0x19)) break;
          if (((*(int *)((int)this + 0x184c) <= (int)(uint)*(byte *)(iVar1 + 0x19)) &&
              (*(int *)((int)this + 0x1850) <= (int)(uint)*(byte *)(iVar1 + 0x1a))) &&
             ((int)(uint)*(byte *)(iVar1 + 0x1a) <= *(int *)((int)this + 0x185c))) {
            FUN_10003850(&stack0xffffffd8,param_1);
            FUN_1006c040(this,(float)piVar6,(float)pfVar7,fVar8,fVar9);
          }
        }
        iVar3 = iVar3 + 1;
        iVar4 = iVar4 + 0x10;
      } while (iVar3 <= *piVar5);
    }
    local_8 = local_8 + -1;
    piVar5 = piVar5 + -1;
  } while (*(int *)((int)this + 0x1830) <= local_8);
  local_8 = *(int *)((int)this + 0x1834);
  if (local_8 < 0x81) {
    local_8 = 0x80;
  }
  if (local_8 <= *(int *)((int)this + 0x1840)) {
    piVar5 = (int *)((int)this + local_8 * 4 + 0x1028);
    do {
      iVar3 = piVar5[-0x300];
      if (iVar3 <= *piVar5) {
        iVar4 = iVar3 << 4;
        do {
          fVar9 = *(float *)(iVar4 + 4 + *(int *)((int)this + 0x24));
          iVar1 = *(int *)((int)this + 0xc) + (int)fVar9 * 0x58;
          if ((*(uint *)(iVar1 + 0x1c) & param_2) != 0) {
            if (*(int *)((int)this + 0x185c) < (int)(uint)*(byte *)(iVar1 + 0x1a)) break;
            if (((*(int *)((int)this + 0x1850) <= (int)(uint)*(byte *)(iVar1 + 0x1a)) &&
                (*(int *)((int)this + 0x1848) <= (int)(uint)*(byte *)(iVar1 + 0x18))) &&
               ((int)(uint)*(byte *)(iVar1 + 0x18) <= *(int *)((int)this + 0x1854))) {
              FUN_10003850(&stack0xffffffd8,param_1);
              FUN_1006c040(this,(float)piVar6,(float)pfVar7,fVar8,fVar9);
            }
          }
          iVar3 = iVar3 + 1;
          iVar4 = iVar4 + 0x10;
        } while (iVar3 <= *piVar5);
      }
      local_8 = local_8 + 1;
      piVar5 = piVar5 + 1;
    } while (local_8 <= *(int *)((int)this + 0x1840));
  }
  local_8 = *(int *)((int)this + 0x1844);
  if (0x7e < local_8) {
    local_8 = 0x7f;
  }
  if (*(int *)((int)this + 0x1838) <= local_8) {
    piVar5 = (int *)((int)this + local_8 * 4 + 0x1428);
    do {
      iVar3 = piVar5[-0x300];
      if (iVar3 <= *piVar5) {
        iVar4 = iVar3 << 4;
        do {
          fVar9 = *(float *)(iVar4 + 8 + *(int *)((int)this + 0x24));
          iVar1 = *(int *)((int)this + 0xc) + (int)fVar9 * 0x58;
          if ((*(uint *)(iVar1 + 0x1c) & param_2) != 0) {
            if (*(int *)((int)this + 0x1854) < (int)(uint)*(byte *)(iVar1 + 0x18)) break;
            if (((*(int *)((int)this + 0x1848) <= (int)(uint)*(byte *)(iVar1 + 0x18)) &&
                (*(int *)((int)this + 0x184c) <= (int)(uint)*(byte *)(iVar1 + 0x19))) &&
               ((int)(uint)*(byte *)(iVar1 + 0x19) <= *(int *)((int)this + 0x1858))) {
              FUN_10003850(&stack0xffffffd8,param_1);
              FUN_1006c040(this,(float)piVar6,(float)pfVar7,fVar8,fVar9);
            }
          }
          iVar3 = iVar3 + 1;
          iVar4 = iVar4 + 0x10;
        } while (iVar3 <= *piVar5);
      }
      local_8 = local_8 + -1;
      piVar5 = piVar5 + -1;
    } while (*(int *)((int)this + 0x1838) <= local_8);
  }
  local_8 = *(int *)((int)this + 0x1830);
  if (local_8 < 0x81) {
    local_8 = 0x80;
  }
  if (local_8 <= *(int *)((int)this + 0x183c)) {
    piVar5 = (int *)((int)this + local_8 * 4 + 0xc28);
    do {
      iVar3 = piVar5[-0x300];
      if (iVar3 <= *piVar5) {
        iVar4 = iVar3 << 4;
        do {
          fVar9 = *(float *)(iVar4 + *(int *)((int)this + 0x24));
          iVar1 = *(int *)((int)this + 0xc) + (int)fVar9 * 0x58;
          if ((*(uint *)(iVar1 + 0x1c) & param_2) != 0) {
            if (*(int *)((int)this + 0x1858) < (int)(uint)*(byte *)(iVar1 + 0x19)) break;
            if (((*(int *)((int)this + 0x184c) <= (int)(uint)*(byte *)(iVar1 + 0x19)) &&
                (*(int *)((int)this + 0x1850) <= (int)(uint)*(byte *)(iVar1 + 0x1a))) &&
               ((int)(uint)*(byte *)(iVar1 + 0x1a) <= *(int *)((int)this + 0x185c))) {
              FUN_10003850(&stack0xffffffd8,param_1);
              FUN_1006c040(this,(float)piVar6,(float)pfVar7,fVar8,fVar9);
            }
          }
          iVar3 = iVar3 + 1;
          iVar4 = iVar4 + 0x10;
        } while (iVar3 <= *piVar5);
      }
      local_8 = local_8 + 1;
      piVar5 = piVar5 + 1;
    } while (local_8 <= *(int *)((int)this + 0x183c));
  }
  local_8 = *(int *)((int)this + 0x1840);
  if (0x7e < local_8) {
    local_8 = 0x7f;
  }
  if (*(int *)((int)this + 0x1834) <= local_8) {
    piVar5 = (int *)((int)this + local_8 * 4 + 0x1028);
    do {
      iVar3 = piVar5[-0x300];
      if (iVar3 <= *piVar5) {
        iVar4 = iVar3 << 4;
        do {
          fVar9 = *(float *)(iVar4 + 4 + *(int *)((int)this + 0x24));
          iVar1 = *(int *)((int)this + 0xc) + (int)fVar9 * 0x58;
          if ((*(uint *)(iVar1 + 0x1c) & param_2) != 0) {
            if (*(int *)((int)this + 0x185c) < (int)(uint)*(byte *)(iVar1 + 0x1a)) break;
            if (((*(int *)((int)this + 0x1850) <= (int)(uint)*(byte *)(iVar1 + 0x1a)) &&
                (*(int *)((int)this + 0x1848) <= (int)(uint)*(byte *)(iVar1 + 0x18))) &&
               ((int)(uint)*(byte *)(iVar1 + 0x18) <= *(int *)((int)this + 0x1854))) {
              FUN_10003850(&stack0xffffffd8,param_1);
              FUN_1006c040(this,(float)piVar6,(float)pfVar7,fVar8,fVar9);
            }
          }
          iVar3 = iVar3 + 1;
          iVar4 = iVar4 + 0x10;
        } while (iVar3 <= *piVar5);
      }
      local_8 = local_8 + -1;
      piVar5 = piVar5 + -1;
    } while (*(int *)((int)this + 0x1834) <= local_8);
  }
  local_8 = *(int *)((int)this + 0x1838);
  if (local_8 < 0x81) {
    local_8 = 0x80;
  }
  if (local_8 <= *(int *)((int)this + 0x1844)) {
    piVar5 = (int *)((int)this + local_8 * 4 + 0x1428);
    do {
      iVar3 = piVar5[-0x300];
      if (iVar3 <= *piVar5) {
        iVar4 = iVar3 << 4;
        do {
          fVar9 = *(float *)(iVar4 + 8 + *(int *)((int)this + 0x24));
          iVar1 = *(int *)((int)this + 0xc) + (int)fVar9 * 0x58;
          if ((*(uint *)(iVar1 + 0x1c) & param_2) != 0) {
            if (*(int *)((int)this + 0x1854) < (int)(uint)*(byte *)(iVar1 + 0x18)) break;
            if (((*(int *)((int)this + 0x1848) <= (int)(uint)*(byte *)(iVar1 + 0x18)) &&
                (*(int *)((int)this + 0x184c) <= (int)(uint)*(byte *)(iVar1 + 0x19))) &&
               ((int)(uint)*(byte *)(iVar1 + 0x19) <= *(int *)((int)this + 0x1858))) {
              FUN_10003850(&stack0xffffffd8,param_1);
              FUN_1006c040(this,(float)piVar6,(float)pfVar7,fVar8,fVar9);
            }
          }
          iVar3 = iVar3 + 1;
          iVar4 = iVar4 + 0x10;
        } while (iVar3 <= *piVar5);
      }
      local_8 = local_8 + 1;
      piVar5 = piVar5 + 1;
    } while (local_8 <= *(int *)((int)this + 0x1844));
  }
  *(float *)((int)pvStack_4 + 0x187c) = *param_1;
  *(float *)((int)pvStack_4 + 0x1880) = param_1[1];
  *(float *)((int)pvStack_4 + 0x1884) = param_1[2];
  *(undefined2 *)((int)pvStack_4 + 0x1888) = *(undefined2 *)((int)this + 0x182c);
  return *(int *)((int)this + 0x182c);
}

