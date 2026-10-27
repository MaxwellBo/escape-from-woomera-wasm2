
int * __thiscall FUN_100bb360(void *this,int *param_1,int *param_2)

{
  int *piVar1;
  char cVar2;
  int *piVar3;
  undefined *puVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  int *this_00;
  int *piVar8;
  int *piVar9;
  
  piVar3 = *(int **)((int)this + 8);
  this_00 = param_1;
  if (param_2 != piVar3) {
    piVar8 = param_1 + 5;
    piVar9 = param_2 + 4;
    do {
      FUN_100ba9a0(this_00,piVar9 + -4,0,DAT_100f7054);
      if (piVar8 + -1 != piVar9) {
        puVar4 = (undefined *)*piVar8;
        if (puVar4 == *(undefined **)(((int)param_2 - (int)param_1) + (int)piVar8)) {
          if ((char)*piVar9 != '\0') {
            *(undefined1 *)(piVar8 + -1) = 1;
          }
        }
        else {
          if (((char)piVar8[-1] != '\0') && (puVar4 != (undefined *)0x0)) {
            FUN_100bb820((int)puVar4);
            FUN_100c8ce6(puVar4);
          }
          *(char *)(piVar8 + -1) = (char)*piVar9;
        }
        iVar5 = *(int *)(((int)param_2 - (int)param_1) + (int)piVar8);
        *(char *)piVar9 = '\0';
        *piVar8 = iVar5;
      }
      this_00 = this_00 + 6;
      piVar8 = piVar8 + 6;
      piVar1 = piVar9 + 2;
      piVar9 = piVar9 + 6;
    } while (piVar1 != piVar3);
  }
  piVar3 = *(int **)((int)this + 8);
  if (this_00 == piVar3) {
    *(int **)((int)this + 8) = this_00;
    return param_1;
  }
  piVar8 = this_00 + 1;
  do {
    if (((char)piVar8[3] != '\0') && (puVar4 = (undefined *)piVar8[4], puVar4 != (undefined *)0x0))
    {
      puVar6 = (undefined4 *)FUN_100ba7d0((int)puVar4);
      puVar7 = (undefined4 *)FUN_100ba7e0((int)puVar4);
      if (puVar6 != puVar7) {
        do {
          if ((undefined4 *)*puVar6 != (undefined4 *)0x0) {
            FUN_100bb920((undefined4 *)*puVar6,1);
          }
          puVar6 = puVar6 + 1;
          puVar7 = (undefined4 *)FUN_100ba7e0((int)puVar4);
        } while (puVar6 != puVar7);
      }
      FUN_100bccf0((int)puVar4);
      FUN_100c8ce6(puVar4);
    }
    iVar5 = *piVar8;
    if (iVar5 != 0) {
      cVar2 = *(char *)(iVar5 + -1);
      if ((cVar2 == '\0') || (cVar2 == -1)) {
        FUN_100c8ce6((char *)(iVar5 + -1));
      }
      else {
        *(char *)(iVar5 + -1) = cVar2 + -1;
      }
    }
    *piVar8 = 0;
    piVar8[1] = 0;
    piVar8[2] = 0;
    piVar9 = piVar8 + 5;
    piVar8 = piVar8 + 6;
  } while (piVar9 != piVar3);
  *(int **)((int)this + 8) = this_00;
  return param_1;
}

