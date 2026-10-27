
void __fastcall FUN_1006f7a0(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  int iVar8;
  undefined4 *puVar9;
  int local_5c;
  undefined4 local_58 [4];
  undefined4 local_48;
  undefined4 local_44;
  undefined2 local_40;
  undefined1 local_3e;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30 [8];
  undefined4 local_10;
  undefined4 local_c;
  undefined2 local_8;
  undefined2 local_6;
  undefined4 local_4;
  
  iVar8 = 0;
  *(undefined4 *)(*(int *)(param_1 + 0xc) + 0x4c) = 0;
  iVar2 = 1;
  iVar4 = 1;
  local_5c = 1;
  if (1 < *(int *)(param_1 + 0x18)) {
    iVar3 = 0x58;
    do {
      iVar2 = iVar2 + 1;
      *(undefined4 *)(iVar3 + 0x4c + *(int *)(param_1 + 0xc)) = 0xffffffff;
      iVar3 = iVar3 + 0x58;
    } while (iVar2 < *(int *)(param_1 + 0x18));
  }
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 0x18)) {
    do {
      iVar3 = *(int *)(param_1 + 0xc);
      iVar5 = 0;
      if (0 < *(int *)(iVar8 + 0x20 + iVar3)) {
        do {
          piVar1 = (int *)(iVar3 + 0x4c +
                          *(int *)(*(int *)(param_1 + 0x10) + 4 +
                                  (*(int *)(iVar8 + 0x24 + iVar3) + iVar5) * 0x18) * 0x58);
          if (*piVar1 == -1) {
            *piVar1 = local_5c;
            local_5c = local_5c + 1;
          }
          iVar3 = *(int *)(param_1 + 0xc);
          iVar5 = iVar5 + 1;
          iVar4 = local_5c;
        } while (iVar5 < *(int *)(iVar8 + 0x20 + iVar3));
      }
      iVar2 = iVar2 + 1;
      iVar8 = iVar8 + 0x58;
    } while (iVar2 < *(int *)(param_1 + 0x18));
  }
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 0x18)) {
    iVar8 = 0;
    do {
      if (*(int *)(iVar8 + 0x4c + *(int *)(param_1 + 0xc)) == -1) {
        *(int *)(iVar8 + 0x4c + *(int *)(param_1 + 0xc)) = iVar4;
        iVar4 = iVar4 + 1;
      }
      iVar2 = iVar2 + 1;
      iVar8 = iVar8 + 0x58;
    } while (iVar2 < *(int *)(param_1 + 0x18));
  }
  iVar4 = 0;
  if (0 < *(int *)(param_1 + 0x1c)) {
    iVar2 = 0;
    do {
      iVar4 = iVar4 + 1;
      *(undefined4 *)(iVar2 + *(int *)(param_1 + 0x10)) =
           *(undefined4 *)
            (*(int *)(param_1 + 0xc) + 0x4c + *(int *)(iVar2 + *(int *)(param_1 + 0x10)) * 0x58);
      piVar1 = (int *)(iVar2 + 4 + *(int *)(param_1 + 0x10));
      iVar2 = iVar2 + 0x18;
      *piVar1 = *(int *)(*(int *)(param_1 + 0xc) + 0x4c + *piVar1 * 0x58);
    } while (iVar4 < *(int *)(param_1 + 0x1c));
  }
  local_5c = 0;
  if (0 < *(int *)(param_1 + 0x18)) {
    iVar4 = 0;
    do {
      iVar2 = *(int *)(param_1 + 0xc);
      iVar8 = *(int *)(iVar4 + 0x4c + iVar2);
      while (iVar8 != local_5c) {
        puVar7 = (undefined4 *)(iVar2 + iVar8 * 0x58);
        local_58[0] = *puVar7;
        local_58[1] = puVar7[1];
        local_58[2] = puVar7[2];
        local_58[3] = puVar7[3];
        local_48 = puVar7[4];
        local_44 = puVar7[5];
        local_40 = *(undefined2 *)(puVar7 + 6);
        local_3e = *(undefined1 *)((int)puVar7 + 0x1a);
        local_3c = puVar7[7];
        local_38 = puVar7[8];
        local_34 = puVar7[9];
        puVar6 = puVar7 + 10;
        puVar9 = local_30;
        for (iVar8 = 8; iVar8 != 0; iVar8 = iVar8 + -1) {
          *puVar9 = *puVar6;
          puVar6 = puVar6 + 1;
          puVar9 = puVar9 + 1;
        }
        local_10 = puVar7[0x12];
        local_c = puVar7[0x13];
        local_8 = *(undefined2 *)(puVar7 + 0x14);
        local_6 = *(undefined2 *)((int)puVar7 + 0x52);
        local_4 = puVar7[0x15];
        puVar6 = (undefined4 *)(iVar4 + iVar2);
        for (iVar8 = 0x16; iVar8 != 0; iVar8 = iVar8 + -1) {
          *puVar7 = *puVar6;
          puVar6 = puVar6 + 1;
          puVar7 = puVar7 + 1;
        }
        puVar7 = local_58;
        puVar6 = (undefined4 *)(iVar4 + *(int *)(param_1 + 0xc));
        for (iVar2 = 0x16; iVar2 != 0; iVar2 = iVar2 + -1) {
          *puVar6 = *puVar7;
          puVar7 = puVar7 + 1;
          puVar6 = puVar6 + 1;
        }
        iVar2 = *(int *)(param_1 + 0xc);
        iVar8 = *(int *)(iVar4 + 0x4c + iVar2);
      }
      local_5c = local_5c + 1;
      iVar4 = iVar4 + 0x58;
    } while (local_5c < *(int *)(param_1 + 0x18));
  }
  return;
}

