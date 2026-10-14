
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * __thiscall FUN_1009af10(void *this,int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  char *pcVar5;
  uint uVar6;
  int *piVar7;
  float local_60;
  int *local_5c;
  float local_50;
  float local_4c;
  float local_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  undefined1 auStack_38 [16];
  float fStack_28;
  
  piVar7 = (int *)0x0;
  iVar4 = *(int *)((int)this + 4);
  local_5c = (int *)0x0;
  local_60 = 1e+07;
  local_50 = *(float *)(iVar4 + 8);
  local_4c = *(float *)(iVar4 + 0xc);
  local_48 = *(float *)(iVar4 + 0xd8);
  uVar6 = (-(uint)(param_1 != 0) & 0xfffffffe) + 2;
  if (-1 < (int)uVar6) {
    do {
      if (param_1 == 0) {
        iVar4 = (**(code **)(*(int *)this + 0x234))(uVar6);
        pcVar5 = (&PTR_s_monster_barney_101179f8)[iVar4];
      }
      else {
        pcVar5 = s_player_10101c54;
      }
      if (pcVar5 != (char *)0x0) {
        for (piVar7 = (int *)FUN_100aec40((int)piVar7,pcVar5); piVar7 != (int *)0x0;
            piVar7 = (int *)FUN_100aec40((int)piVar7,pcVar5)) {
          if ((((piVar7 != this) && (iVar4 = (**(code **)(*piVar7 + 0xb8))(), iVar4 != 0)) &&
              (iVar4 = (**(code **)(*piVar7 + 0x74))(), iVar4 != 0)) &&
             ((*(int *)(iVar4 + 0x1d8) != 6 && (*(int *)(iVar4 + 0x1d8) != 5)))) {
            fStack_44 = *(float *)(piVar7[1] + 8);
            fStack_40 = *(float *)(piVar7[1] + 0xc);
            fStack_3c = *(float *)(piVar7[1] + 0xd8);
            if ((SQRT((local_50 - fStack_44) * (local_50 - fStack_44) +
                      (local_4c - fStack_40) * (local_4c - fStack_40) +
                      (local_48 - fStack_3c) * (local_48 - fStack_3c)) < local_60) &&
               (FUN_100afc60(&local_50,&fStack_44,1,*(undefined4 *)(*(int *)((int)this + 4) + 0x208)
                             ,auStack_38), fStack_28 == (float)_DAT_100dd628)) {
              fVar1 = local_50 - fStack_44;
              fVar3 = local_4c - fStack_40;
              fVar2 = local_48 - fStack_3c;
              if (SQRT(fVar1 * fVar1 + fVar3 * fVar3 + fVar2 * fVar2) < (float)_DAT_100f2370) {
                local_60 = SQRT(fVar1 * fVar1 + fVar3 * fVar3 + fVar2 * fVar2);
                local_5c = piVar7;
              }
            }
          }
        }
      }
      uVar6 = uVar6 - 1;
    } while (uVar6 < 0x80000000);
    return local_5c;
  }
  return (int *)0x0;
}

