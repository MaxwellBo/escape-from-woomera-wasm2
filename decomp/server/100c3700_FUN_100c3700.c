
undefined4 * __thiscall FUN_100c3700(void *this,undefined4 *param_1,int *param_2)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  byte *pbVar4;
  uint uVar5;
  undefined4 *puVar6;
  int *piVar7;
  int *piVar8;
  bool bVar9;
  int *local_4;
  
  piVar1 = param_2;
  bVar9 = true;
  piVar7 = *(int **)((int)this + 4);
  piVar8 = (int *)piVar7[1];
  local_4 = this;
  if (piVar8 != DAT_10132c78) {
    do {
      piVar7 = piVar8;
      pbVar4 = (byte *)piVar7[4];
      if (pbVar4 == (byte *)0x0) {
        pbVar4 = (byte *)&DAT_100f7058;
      }
      uVar5 = FUN_100be3b0(piVar1,0,piVar1[2],pbVar4,piVar7[5]);
      bVar9 = (int)uVar5 < 0;
      if (bVar9) {
        piVar8 = (int *)*piVar7;
      }
      else {
        piVar8 = (int *)piVar7[2];
      }
    } while (piVar8 != DAT_10132c78);
  }
  if (*(char *)((int)this + 8) != '\0') {
    param_2 = (int *)FUN_100c4140(piVar7,0);
    *param_2 = (int)DAT_10132c78;
    param_2[2] = (int)DAT_10132c78;
    FUN_100c41c0((undefined1 *)(param_2 + 3),(undefined1 *)piVar1);
    *(int *)((int)this + 0xc) = *(int *)((int)this + 0xc) + 1;
    if (((piVar7 == *(int **)((int)this + 4)) || (piVar8 != DAT_10132c78)) ||
       (uVar5 = FUN_100be360(piVar1,(int)(piVar7 + 3)), (int)uVar5 < 0)) {
      *piVar7 = (int)param_2;
      piVar8 = *(int **)((int)this + 4);
      if (piVar7 == piVar8) {
        piVar8[1] = (int)param_2;
        *(int **)(*(int *)((int)this + 4) + 8) = param_2;
      }
      else if (piVar7 == (int *)*piVar8) {
        *piVar8 = (int)param_2;
      }
    }
    else {
      piVar7[2] = (int)param_2;
      if (piVar7 == *(int **)(*(int *)((int)this + 4) + 8)) {
        *(int **)(*(int *)((int)this + 4) + 8) = param_2;
      }
    }
    piVar8 = param_2;
    piVar7 = param_2;
    if (param_2 != *(int **)(*(int *)((int)this + 4) + 4)) {
      do {
        piVar1 = (int *)piVar7[1];
        if (piVar1[8] != 0) break;
        piVar2 = *(int **)piVar1[1];
        if (piVar1 == piVar2) {
          iVar3 = ((undefined4 *)piVar1[1])[2];
          if (*(int *)(iVar3 + 0x20) == 0) {
            piVar1[8] = 1;
            *(undefined4 *)(iVar3 + 0x20) = 1;
            *(undefined4 *)(*(int *)(piVar7[1] + 4) + 0x20) = 0;
            piVar7 = *(int **)(piVar7[1] + 4);
          }
          else {
            if (piVar7 == (int *)piVar1[2]) {
              FUN_100c4080(this,(int)piVar1);
              piVar7 = piVar1;
            }
            *(undefined4 *)(piVar7[1] + 0x20) = 1;
            *(undefined4 *)(*(int *)(piVar7[1] + 4) + 0x20) = 0;
            FUN_100c40e0(this,*(int **)(piVar7[1] + 4));
          }
        }
        else if (piVar2[8] == 0) {
          piVar1[8] = 1;
          piVar2[8] = 1;
          *(undefined4 *)(*(int *)(piVar7[1] + 4) + 0x20) = 0;
          piVar7 = *(int **)(piVar7[1] + 4);
        }
        else {
          if (piVar7 == (int *)*piVar1) {
            FUN_100c40e0(this,piVar1);
            piVar7 = piVar1;
          }
          *(undefined4 *)(piVar7[1] + 0x20) = 1;
          *(undefined4 *)(*(int *)(piVar7[1] + 4) + 0x20) = 0;
          FUN_100c4080(this,*(int *)(piVar7[1] + 4));
        }
      } while (piVar7 != *(int **)(*(int *)((int)this + 4) + 4));
    }
    *(undefined4 *)(*(int *)(*(int *)((int)this + 4) + 4) + 0x20) = 1;
    *param_1 = piVar8;
    *(undefined1 *)(param_1 + 1) = 1;
    return param_1;
  }
  local_4 = piVar7;
  if (bVar9) {
    if (piVar7 == (int *)**(int **)((int)this + 4)) goto LAB_100c3920;
    FUN_100c4160((int *)&local_4);
  }
  uVar5 = FUN_100be360(local_4 + 3,(int)piVar1);
  if (-1 < (int)uVar5) {
    param_2 = (int *)((uint)param_2 & 0xffffff00);
    FUN_100c3df0(param_1,&local_4,(undefined1 *)&param_2);
    return param_1;
  }
LAB_100c3920:
  puVar6 = (undefined4 *)FUN_100c3e10(this,&param_2,(int)piVar8,piVar7,(undefined1 *)piVar1);
  *param_1 = *puVar6;
  *(undefined1 *)(param_1 + 1) = 1;
  return param_1;
}

