
void __thiscall FUN_10042bb0(void *this,undefined4 *param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  undefined4 *puVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  undefined4 *puVar8;
  int *piVar9;
  undefined4 *puVar10;
  int *local_4;
  
  piVar2 = param_2;
  FUN_100433d0((int *)&param_2);
  piVar7 = (int *)*piVar2;
  local_4 = piVar2;
  if (piVar7 == DAT_100baefc) {
    piVar9 = (int *)piVar2[2];
  }
  else {
    piVar3 = (int *)piVar2[2];
    piVar9 = piVar7;
    if (piVar3 != DAT_100baefc) {
      for (piVar9 = (int *)*piVar3; piVar9 != DAT_100baefc; piVar9 = (int *)*piVar9) {
        piVar3 = piVar9;
      }
      piVar9 = (int *)piVar3[2];
      local_4 = piVar3;
      if (piVar3 != piVar2) {
        piVar7[1] = (int)piVar3;
        *piVar3 = *piVar2;
        if (piVar3 == (int *)piVar2[2]) {
          piVar9[1] = (int)piVar3;
        }
        else {
          piVar9[1] = piVar3[1];
          *(int **)piVar3[1] = piVar9;
          piVar3[2] = piVar2[2];
          *(int **)(piVar2[2] + 4) = piVar3;
        }
        if (*(int **)(*(int *)((int)this + 4) + 4) == piVar2) {
          *(int **)(*(int *)((int)this + 4) + 4) = piVar3;
        }
        else {
          piVar7 = (int *)piVar2[1];
          if ((int *)*piVar7 == piVar2) {
            *piVar7 = (int)piVar3;
          }
          else {
            piVar7[2] = (int)piVar3;
          }
        }
        local_4 = piVar2;
        piVar3[1] = piVar2[1];
        iVar1 = piVar3[0xb];
        piVar3[0xb] = piVar2[0xb];
        piVar2[0xb] = iVar1;
        goto LAB_10042cdf;
      }
    }
  }
  piVar9[1] = local_4[1];
  if (*(int **)(*(int *)((int)this + 4) + 4) == piVar2) {
    *(int **)(*(int *)((int)this + 4) + 4) = piVar9;
  }
  else {
    piVar7 = (int *)piVar2[1];
    if ((int *)*piVar7 == piVar2) {
      *piVar7 = (int)piVar9;
    }
    else {
      piVar7[2] = (int)piVar9;
    }
  }
  piVar7 = *(int **)((int)this + 4);
  if ((int *)*piVar7 == piVar2) {
    if ((int *)piVar2[2] == DAT_100baefc) {
      *piVar7 = piVar2[1];
    }
    else {
      piVar6 = (int *)*piVar9;
      piVar3 = piVar9;
      while (piVar5 = piVar6, piVar5 != DAT_100baefc) {
        piVar3 = piVar5;
        piVar6 = (int *)*piVar5;
      }
      *piVar7 = (int)piVar3;
    }
  }
  if (*(int **)(*(int *)((int)this + 4) + 8) == piVar2) {
    if ((int *)*piVar2 == DAT_100baefc) {
      piVar7 = (int *)piVar2[1];
    }
    else {
      piVar2 = (int *)piVar9[2];
      piVar7 = piVar9;
      while (piVar3 = piVar2, piVar3 != DAT_100baefc) {
        piVar7 = piVar3;
        piVar2 = (int *)piVar3[2];
      }
    }
    *(int **)(*(int *)((int)this + 4) + 8) = piVar7;
  }
LAB_10042cdf:
  if (local_4[0xb] == 1) {
    if (piVar9 != *(int **)(*(int *)((int)this + 4) + 4)) {
      do {
        if (piVar9[0xb] != 1) break;
        piVar7 = *(int **)piVar9[1];
        if (piVar9 == piVar7) {
          piVar7 = (int *)((undefined4 *)piVar9[1])[2];
          if (piVar7[0xb] == 0) {
            piVar7[0xb] = 1;
            *(undefined4 *)(piVar9[1] + 0x2c) = 0;
            iVar1 = piVar9[1];
            piVar7 = *(int **)(iVar1 + 8);
            *(int *)(iVar1 + 8) = *piVar7;
            if ((int *)*piVar7 != DAT_100baefc) {
              ((int *)*piVar7)[1] = iVar1;
            }
            piVar7[1] = *(int *)(iVar1 + 4);
            if (iVar1 == *(int *)(*(int *)((int)this + 4) + 4)) {
              *(int **)(*(int *)((int)this + 4) + 4) = piVar7;
            }
            else {
              piVar2 = *(int **)(iVar1 + 4);
              if (iVar1 == *piVar2) {
                *piVar2 = (int)piVar7;
              }
              else {
                piVar2[2] = (int)piVar7;
              }
            }
            *piVar7 = iVar1;
            *(int **)(iVar1 + 4) = piVar7;
            piVar7 = *(int **)(piVar9[1] + 8);
          }
          if ((*(int *)(*piVar7 + 0x2c) != 1) || (*(int *)(piVar7[2] + 0x2c) != 1)) {
            if (*(int *)(piVar7[2] + 0x2c) == 1) {
              *(undefined4 *)(*piVar7 + 0x2c) = 1;
              iVar1 = *piVar7;
              piVar7[0xb] = 0;
              *piVar7 = *(int *)(iVar1 + 8);
              if (*(int **)(iVar1 + 8) != DAT_100baefc) {
                (*(int **)(iVar1 + 8))[1] = (int)piVar7;
              }
              *(int *)(iVar1 + 4) = piVar7[1];
              if (piVar7 == *(int **)(*(int *)((int)this + 4) + 4)) {
                *(int *)(*(int *)((int)this + 4) + 4) = iVar1;
              }
              else {
                piVar2 = (int *)piVar7[1];
                if (piVar7 == (int *)piVar2[2]) {
                  piVar2[2] = iVar1;
                }
                else {
                  *piVar2 = iVar1;
                }
              }
              *(int **)(iVar1 + 8) = piVar7;
              piVar7[1] = iVar1;
              piVar7 = *(int **)(piVar9[1] + 8);
            }
            piVar7[0xb] = *(int *)(piVar9[1] + 0x2c);
            *(undefined4 *)(piVar9[1] + 0x2c) = 1;
            *(undefined4 *)(piVar7[2] + 0x2c) = 1;
            puVar8 = (undefined4 *)piVar9[1];
            puVar10 = (undefined4 *)puVar8[2];
            puVar8[2] = *puVar10;
            if ((int *)*puVar10 != DAT_100baefc) {
              ((int *)*puVar10)[1] = (int)puVar8;
            }
            puVar10[1] = puVar8[1];
            if (puVar8 == *(undefined4 **)(*(int *)((int)this + 4) + 4)) {
              *(undefined4 **)(*(int *)((int)this + 4) + 4) = puVar10;
              *puVar10 = puVar8;
            }
            else {
              piVar7 = (int *)puVar8[1];
              if (puVar8 == (undefined4 *)*piVar7) {
                *piVar7 = (int)puVar10;
                *puVar10 = puVar8;
              }
              else {
                piVar7[2] = (int)puVar10;
                *puVar10 = puVar8;
              }
            }
LAB_10042f53:
            puVar8[1] = puVar10;
            break;
          }
        }
        else {
          if (piVar7[0xb] == 0) {
            piVar7[0xb] = 1;
            *(undefined4 *)(piVar9[1] + 0x2c) = 0;
            piVar7 = (int *)piVar9[1];
            iVar1 = *piVar7;
            *piVar7 = *(int *)(iVar1 + 8);
            if (*(int **)(iVar1 + 8) != DAT_100baefc) {
              (*(int **)(iVar1 + 8))[1] = (int)piVar7;
            }
            *(int *)(iVar1 + 4) = piVar7[1];
            if (piVar7 == *(int **)(*(int *)((int)this + 4) + 4)) {
              *(int *)(*(int *)((int)this + 4) + 4) = iVar1;
            }
            else {
              piVar2 = (int *)piVar7[1];
              if (piVar7 == (int *)piVar2[2]) {
                piVar2[2] = iVar1;
              }
              else {
                *piVar2 = iVar1;
              }
            }
            *(int **)(iVar1 + 8) = piVar7;
            piVar7[1] = iVar1;
            piVar7 = *(int **)piVar9[1];
          }
          if ((*(int *)(piVar7[2] + 0x2c) != 1) || (*(int *)(*piVar7 + 0x2c) != 1)) {
            if (*(int *)(*piVar7 + 0x2c) == 1) {
              *(undefined4 *)(piVar7[2] + 0x2c) = 1;
              piVar2 = (int *)piVar7[2];
              piVar7[0xb] = 0;
              piVar7[2] = *piVar2;
              if ((int *)*piVar2 != DAT_100baefc) {
                ((int *)*piVar2)[1] = (int)piVar7;
              }
              piVar2[1] = piVar7[1];
              if (piVar7 == *(int **)(*(int *)((int)this + 4) + 4)) {
                *(int **)(*(int *)((int)this + 4) + 4) = piVar2;
              }
              else {
                piVar3 = (int *)piVar7[1];
                if (piVar7 == (int *)*piVar3) {
                  *piVar3 = (int)piVar2;
                }
                else {
                  piVar3[2] = (int)piVar2;
                }
              }
              *piVar2 = (int)piVar7;
              piVar7[1] = (int)piVar2;
              piVar7 = *(int **)piVar9[1];
            }
            piVar7[0xb] = *(int *)(piVar9[1] + 0x2c);
            *(undefined4 *)(piVar9[1] + 0x2c) = 1;
            *(undefined4 *)(*piVar7 + 0x2c) = 1;
            puVar8 = (undefined4 *)piVar9[1];
            puVar10 = (undefined4 *)*puVar8;
            *puVar8 = puVar10[2];
            if ((int *)puVar10[2] != DAT_100baefc) {
              ((int *)puVar10[2])[1] = (int)puVar8;
            }
            puVar10[1] = puVar8[1];
            if (puVar8 == *(undefined4 **)(*(int *)((int)this + 4) + 4)) {
              *(undefined4 **)(*(int *)((int)this + 4) + 4) = puVar10;
            }
            else {
              puVar4 = (undefined4 *)puVar8[1];
              if (puVar8 == (undefined4 *)puVar4[2]) {
                puVar4[2] = puVar10;
              }
              else {
                *puVar4 = puVar10;
              }
            }
            puVar10[2] = puVar8;
            goto LAB_10042f53;
          }
        }
        piVar7[0xb] = 0;
        piVar9 = (int *)piVar9[1];
      } while (piVar9 != *(int **)(*(int *)((int)this + 4) + 4));
    }
    piVar9[0xb] = 1;
  }
  FUN_10042240((int)(local_4 + 3));
  FUN_10049a73((undefined *)local_4);
  *(int *)((int)this + 0xc) = *(int *)((int)this + 0xc) + -1;
  *param_1 = param_2;
  return;
}

