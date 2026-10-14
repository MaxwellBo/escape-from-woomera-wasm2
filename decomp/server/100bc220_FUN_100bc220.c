
void __thiscall FUN_100bc220(void *this,undefined4 *param_1,uint *param_2)

{
  int *piVar1;
  uint *puVar2;
  uint *puVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  uint *puVar7;
  undefined4 *puVar8;
  uint *puVar9;
  bool bVar10;
  int *local_4;
  
  puVar9 = param_2;
  bVar10 = true;
  piVar1 = *(int **)((int)this + 4);
  piVar5 = piVar1;
  piVar6 = (int *)piVar1[1];
  while (piVar6 != DAT_10132444) {
    bVar10 = *param_2 < (uint)piVar6[3];
    piVar5 = piVar6;
    if (bVar10) {
      piVar6 = (int *)*piVar6;
    }
    else {
      piVar6 = (int *)piVar6[2];
    }
  }
  if (*(char *)((int)this + 8) == '\0') {
    local_4 = piVar5;
    if (bVar10) {
      if (piVar5 == (int *)*piVar1) {
        puVar8 = (undefined4 *)FUN_100bd460(this,&param_2,(int)piVar6,piVar5,param_2);
        *param_1 = *puVar8;
        *(undefined1 *)(param_1 + 1) = 1;
        return;
      }
      FUN_100bdae0((int *)&local_4);
    }
    if ((uint)local_4[3] < *puVar9) {
      puVar8 = (undefined4 *)FUN_100bd460(this,&param_2,(int)piVar6,piVar5,puVar9);
      *param_1 = *puVar8;
      *(undefined1 *)(param_1 + 1) = 1;
      return;
    }
    *param_1 = local_4;
    *(undefined1 *)(param_1 + 1) = 0;
    return;
  }
  local_4 = this;
  param_2 = (uint *)FUN_100bd790(piVar5,0);
  *param_2 = (uint)DAT_10132444;
  param_2[2] = (uint)DAT_10132444;
  FUN_100be130(param_2 + 3,puVar9);
  puVar7 = param_2;
  *(int *)((int)this + 0xc) = *(int *)((int)this + 0xc) + 1;
  if (((piVar5 == *(int **)((int)this + 4)) || (piVar6 != DAT_10132444)) ||
     (*puVar9 < (uint)piVar5[3])) {
    *piVar5 = (int)param_2;
    piVar1 = *(int **)((int)this + 4);
    if (piVar5 == piVar1) {
      piVar1[1] = (int)param_2;
      *(uint **)(*(int *)((int)this + 4) + 8) = param_2;
    }
    else if (piVar5 == (int *)*piVar1) {
      *piVar1 = (int)param_2;
    }
  }
  else {
    piVar5[2] = (int)param_2;
    if (piVar5 == *(int **)(*(int *)((int)this + 4) + 8)) {
      *(uint **)(*(int *)((int)this + 4) + 8) = param_2;
    }
  }
  puVar9 = param_2;
  if (param_2 != *(uint **)(*(int *)((int)this + 4) + 4)) {
    do {
      puVar2 = (uint *)puVar9[1];
      if (puVar2[9] != 0) break;
      puVar3 = *(uint **)puVar2[1];
      if (puVar2 == puVar3) {
        iVar4 = ((undefined4 *)puVar2[1])[2];
        if (*(int *)(iVar4 + 0x24) == 0) {
          puVar2[9] = 1;
          *(undefined4 *)(iVar4 + 0x24) = 1;
          *(undefined4 *)(*(int *)(puVar9[1] + 4) + 0x24) = 0;
          puVar9 = *(uint **)(puVar9[1] + 4);
        }
        else {
          if (puVar9 == (uint *)puVar2[2]) {
            FUN_100bd6d0(this,(int)puVar2);
            puVar9 = puVar2;
          }
          *(undefined4 *)(puVar9[1] + 0x24) = 1;
          *(undefined4 *)(*(int *)(puVar9[1] + 4) + 0x24) = 0;
          FUN_100bd730(this,*(int **)(puVar9[1] + 4));
        }
      }
      else if (puVar3[9] == 0) {
        puVar2[9] = 1;
        puVar3[9] = 1;
        *(undefined4 *)(*(int *)(puVar9[1] + 4) + 0x24) = 0;
        puVar9 = *(uint **)(puVar9[1] + 4);
      }
      else {
        if (puVar9 == (uint *)*puVar2) {
          FUN_100bd730(this,(int *)puVar2);
          puVar9 = puVar2;
        }
        *(undefined4 *)(puVar9[1] + 0x24) = 1;
        *(undefined4 *)(*(int *)(puVar9[1] + 4) + 0x24) = 0;
        FUN_100bd6d0(this,*(int *)(puVar9[1] + 4));
      }
    } while (puVar9 != *(uint **)(*(int *)((int)this + 4) + 4));
  }
  *(undefined4 *)(*(int *)(*(int *)((int)this + 4) + 4) + 0x24) = 1;
  *param_1 = puVar7;
  *(undefined1 *)(param_1 + 1) = 1;
  return;
}

