
void __thiscall FUN_100bbd40(void *this,undefined4 *param_1,int *param_2)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  undefined4 *puVar5;
  int *piVar6;
  int *piVar7;
  int *piVar8;
  undefined4 *puVar9;
  int *piVar10;
  undefined4 *puVar11;
  int *local_4;
  
  piVar3 = param_2;
  FUN_100bda90((int *)&param_2);
  piVar8 = (int *)*piVar3;
  local_4 = piVar3;
  if (piVar8 == DAT_1013243c) {
    piVar10 = (int *)piVar3[2];
  }
  else {
    piVar4 = (int *)piVar3[2];
    piVar10 = piVar8;
    if (piVar4 != DAT_1013243c) {
      for (piVar10 = (int *)*piVar4; piVar10 != DAT_1013243c; piVar10 = (int *)*piVar10) {
        piVar4 = piVar10;
      }
      piVar10 = (int *)piVar4[2];
      local_4 = piVar4;
      if (piVar4 != piVar3) {
        piVar8[1] = (int)piVar4;
        *piVar4 = *piVar3;
        if (piVar4 == (int *)piVar3[2]) {
          piVar10[1] = (int)piVar4;
        }
        else {
          piVar10[1] = piVar4[1];
          *(int **)piVar4[1] = piVar10;
          piVar4[2] = piVar3[2];
          *(int **)(piVar3[2] + 4) = piVar4;
        }
        if (*(int **)(*(int *)((int)this + 4) + 4) == piVar3) {
          *(int **)(*(int *)((int)this + 4) + 4) = piVar4;
        }
        else {
          piVar8 = (int *)piVar3[1];
          if ((int *)*piVar8 == piVar3) {
            *piVar8 = (int)piVar4;
          }
          else {
            piVar8[2] = (int)piVar4;
          }
        }
        local_4 = piVar3;
        piVar4[1] = piVar3[1];
        iVar2 = piVar4[0xb];
        piVar4[0xb] = piVar3[0xb];
        piVar3[0xb] = iVar2;
        goto LAB_100bbe73;
      }
    }
  }
  piVar10[1] = local_4[1];
  if (*(int **)(*(int *)((int)this + 4) + 4) == piVar3) {
    *(int **)(*(int *)((int)this + 4) + 4) = piVar10;
  }
  else {
    piVar8 = (int *)piVar3[1];
    if ((int *)*piVar8 == piVar3) {
      *piVar8 = (int)piVar10;
    }
    else {
      piVar8[2] = (int)piVar10;
    }
  }
  piVar8 = *(int **)((int)this + 4);
  if ((int *)*piVar8 == piVar3) {
    if ((int *)piVar3[2] == DAT_1013243c) {
      *piVar8 = piVar3[1];
    }
    else {
      piVar7 = (int *)*piVar10;
      piVar4 = piVar10;
      while (piVar6 = piVar7, piVar6 != DAT_1013243c) {
        piVar4 = piVar6;
        piVar7 = (int *)*piVar6;
      }
      *piVar8 = (int)piVar4;
    }
  }
  if (*(int **)(*(int *)((int)this + 4) + 8) == piVar3) {
    if ((int *)*piVar3 == DAT_1013243c) {
      piVar8 = (int *)piVar3[1];
    }
    else {
      piVar3 = (int *)piVar10[2];
      piVar8 = piVar10;
      while (piVar4 = piVar3, piVar4 != DAT_1013243c) {
        piVar8 = piVar4;
        piVar3 = (int *)piVar4[2];
      }
    }
    *(int **)(*(int *)((int)this + 4) + 8) = piVar8;
  }
LAB_100bbe73:
  if (local_4[0xb] == 1) {
    if (piVar10 != *(int **)(*(int *)((int)this + 4) + 4)) {
      do {
        if (piVar10[0xb] != 1) break;
        piVar8 = *(int **)piVar10[1];
        if (piVar10 == piVar8) {
          piVar8 = (int *)((undefined4 *)piVar10[1])[2];
          if (piVar8[0xb] == 0) {
            piVar8[0xb] = 1;
            *(undefined4 *)(piVar10[1] + 0x2c) = 0;
            iVar2 = piVar10[1];
            piVar8 = *(int **)(iVar2 + 8);
            *(int *)(iVar2 + 8) = *piVar8;
            if ((int *)*piVar8 != DAT_1013243c) {
              ((int *)*piVar8)[1] = iVar2;
            }
            piVar8[1] = *(int *)(iVar2 + 4);
            if (iVar2 == *(int *)(*(int *)((int)this + 4) + 4)) {
              *(int **)(*(int *)((int)this + 4) + 4) = piVar8;
            }
            else {
              piVar3 = *(int **)(iVar2 + 4);
              if (iVar2 == *piVar3) {
                *piVar3 = (int)piVar8;
              }
              else {
                piVar3[2] = (int)piVar8;
              }
            }
            *piVar8 = iVar2;
            *(int **)(iVar2 + 4) = piVar8;
            piVar8 = *(int **)(piVar10[1] + 8);
          }
          if ((*(int *)(*piVar8 + 0x2c) != 1) || (*(int *)(piVar8[2] + 0x2c) != 1)) {
            if (*(int *)(piVar8[2] + 0x2c) == 1) {
              *(undefined4 *)(*piVar8 + 0x2c) = 1;
              iVar2 = *piVar8;
              piVar8[0xb] = 0;
              *piVar8 = *(int *)(iVar2 + 8);
              if (*(int **)(iVar2 + 8) != DAT_1013243c) {
                (*(int **)(iVar2 + 8))[1] = (int)piVar8;
              }
              *(int *)(iVar2 + 4) = piVar8[1];
              if (piVar8 == *(int **)(*(int *)((int)this + 4) + 4)) {
                *(int *)(*(int *)((int)this + 4) + 4) = iVar2;
              }
              else {
                piVar3 = (int *)piVar8[1];
                if (piVar8 == (int *)piVar3[2]) {
                  piVar3[2] = iVar2;
                }
                else {
                  *piVar3 = iVar2;
                }
              }
              *(int **)(iVar2 + 8) = piVar8;
              piVar8[1] = iVar2;
              piVar8 = *(int **)(piVar10[1] + 8);
            }
            piVar8[0xb] = *(int *)(piVar10[1] + 0x2c);
            *(undefined4 *)(piVar10[1] + 0x2c) = 1;
            *(undefined4 *)(piVar8[2] + 0x2c) = 1;
            puVar9 = (undefined4 *)piVar10[1];
            puVar11 = (undefined4 *)puVar9[2];
            puVar9[2] = *puVar11;
            if ((int *)*puVar11 != DAT_1013243c) {
              ((int *)*puVar11)[1] = (int)puVar9;
            }
            puVar11[1] = puVar9[1];
            if (puVar9 == *(undefined4 **)(*(int *)((int)this + 4) + 4)) {
              *(undefined4 **)(*(int *)((int)this + 4) + 4) = puVar11;
              *puVar11 = puVar9;
            }
            else {
              piVar8 = (int *)puVar9[1];
              if (puVar9 == (undefined4 *)*piVar8) {
                *piVar8 = (int)puVar11;
                *puVar11 = puVar9;
              }
              else {
                piVar8[2] = (int)puVar11;
                *puVar11 = puVar9;
              }
            }
LAB_100bc0ed:
            puVar9[1] = puVar11;
            break;
          }
        }
        else {
          if (piVar8[0xb] == 0) {
            piVar8[0xb] = 1;
            *(undefined4 *)(piVar10[1] + 0x2c) = 0;
            piVar8 = (int *)piVar10[1];
            iVar2 = *piVar8;
            *piVar8 = *(int *)(iVar2 + 8);
            if (*(int **)(iVar2 + 8) != DAT_1013243c) {
              (*(int **)(iVar2 + 8))[1] = (int)piVar8;
            }
            *(int *)(iVar2 + 4) = piVar8[1];
            if (piVar8 == *(int **)(*(int *)((int)this + 4) + 4)) {
              *(int *)(*(int *)((int)this + 4) + 4) = iVar2;
            }
            else {
              piVar3 = (int *)piVar8[1];
              if (piVar8 == (int *)piVar3[2]) {
                piVar3[2] = iVar2;
              }
              else {
                *piVar3 = iVar2;
              }
            }
            *(int **)(iVar2 + 8) = piVar8;
            piVar8[1] = iVar2;
            piVar8 = *(int **)piVar10[1];
          }
          if ((*(int *)(piVar8[2] + 0x2c) != 1) || (*(int *)(*piVar8 + 0x2c) != 1)) {
            if (*(int *)(*piVar8 + 0x2c) == 1) {
              *(undefined4 *)(piVar8[2] + 0x2c) = 1;
              piVar3 = (int *)piVar8[2];
              piVar8[0xb] = 0;
              piVar8[2] = *piVar3;
              if ((int *)*piVar3 != DAT_1013243c) {
                ((int *)*piVar3)[1] = (int)piVar8;
              }
              piVar3[1] = piVar8[1];
              if (piVar8 == *(int **)(*(int *)((int)this + 4) + 4)) {
                *(int **)(*(int *)((int)this + 4) + 4) = piVar3;
              }
              else {
                piVar4 = (int *)piVar8[1];
                if (piVar8 == (int *)*piVar4) {
                  *piVar4 = (int)piVar3;
                }
                else {
                  piVar4[2] = (int)piVar3;
                }
              }
              *piVar3 = (int)piVar8;
              piVar8[1] = (int)piVar3;
              piVar8 = *(int **)piVar10[1];
            }
            piVar8[0xb] = *(int *)(piVar10[1] + 0x2c);
            *(undefined4 *)(piVar10[1] + 0x2c) = 1;
            *(undefined4 *)(*piVar8 + 0x2c) = 1;
            puVar9 = (undefined4 *)piVar10[1];
            puVar11 = (undefined4 *)*puVar9;
            *puVar9 = puVar11[2];
            if ((int *)puVar11[2] != DAT_1013243c) {
              ((int *)puVar11[2])[1] = (int)puVar9;
            }
            puVar11[1] = puVar9[1];
            if (puVar9 == *(undefined4 **)(*(int *)((int)this + 4) + 4)) {
              *(undefined4 **)(*(int *)((int)this + 4) + 4) = puVar11;
            }
            else {
              puVar5 = (undefined4 *)puVar9[1];
              if (puVar9 == (undefined4 *)puVar5[2]) {
                puVar5[2] = puVar11;
              }
              else {
                *puVar5 = puVar11;
              }
            }
            puVar11[2] = puVar9;
            goto LAB_100bc0ed;
          }
        }
        piVar8[0xb] = 0;
        piVar10 = (int *)piVar10[1];
      } while (piVar10 != *(int **)(*(int *)((int)this + 4) + 4));
    }
    piVar10[0xb] = 1;
  }
  iVar2 = local_4[8];
  if (iVar2 != 0) {
    cVar1 = *(char *)(iVar2 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_100c8ce6((char *)(iVar2 + -1));
    }
    else {
      *(char *)(iVar2 + -1) = cVar1 + -1;
    }
  }
  local_4[8] = 0;
  local_4[9] = 0;
  local_4[10] = 0;
  iVar2 = local_4[4];
  if (iVar2 != 0) {
    cVar1 = *(char *)(iVar2 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_100c8ce6((char *)(iVar2 + -1));
    }
    else {
      *(char *)(iVar2 + -1) = cVar1 + -1;
    }
  }
  local_4[4] = 0;
  local_4[5] = 0;
  local_4[6] = 0;
  FUN_100c8ce6((undefined *)local_4);
  *(int *)((int)this + 0xc) = *(int *)((int)this + 0xc) + -1;
  *param_1 = param_2;
  return;
}

