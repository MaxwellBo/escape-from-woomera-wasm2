
char __fastcall FUN_100c1f20(int *param_1)

{
  int *piVar1;
  byte *pbVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  undefined1 *puVar9;
  char cVar10;
  undefined1 *puVar11;
  
  puVar9 = (undefined1 *)param_1[1];
  puVar11 = *(undefined1 **)(param_1[0xb] + 4);
  if (puVar11 + param_1[0xd] + 1 < (undefined1 *)param_1[0xe]) {
    (**(code **)(*param_1 + 0x24))(s_fatal_flex_scanner_internal_erro_1011c568);
  }
  if (*(int *)(param_1[0xb] + 0x20) == 0) {
    return (param_1[0xe] - param_1[1] != 1) + '\x01';
  }
  iVar8 = (param_1[0xe] - param_1[1]) + -1;
  iVar4 = iVar8;
  if (0 < iVar8) {
    do {
      *puVar11 = *puVar9;
      puVar11 = puVar11 + 1;
      puVar9 = puVar9 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  iVar4 = param_1[0xb];
  if (*(int *)(iVar4 + 0x24) == 2) {
    param_1[0xd] = 0;
  }
  else {
    iVar5 = *(int *)(iVar4 + 0xc) - iVar8;
    while (iVar5 = iVar5 + -1, iVar5 < 1) {
      pbVar2 = *(byte **)(iVar4 + 4);
      iVar5 = param_1[0xe];
      if (*(int *)(iVar4 + 0x14) == 0) {
        *(undefined4 *)(iVar4 + 4) = 0;
      }
      else {
        uVar3 = *(uint *)(iVar4 + 0xc);
        iVar7 = uVar3 * 2;
        if (iVar7 < 1) {
          iVar7 = (uVar3 >> 3) + uVar3;
        }
        *(int *)(iVar4 + 0xc) = iVar7;
        uVar6 = FUN_100c2560(pbVar2,(uint *)(iVar7 + 2));
        *(undefined4 *)(iVar4 + 4) = uVar6;
      }
      if (*(int *)(iVar4 + 4) == 0) {
        (**(code **)(*param_1 + 0x24))(s_fatal_error___scanner_input_buff_1011c53c);
      }
      piVar1 = (int *)(iVar4 + 4);
      iVar4 = param_1[0xb];
      param_1[0xe] = (iVar5 - (int)pbVar2) + *piVar1;
      iVar5 = *(int *)(iVar4 + 0xc) - iVar8;
    }
    if (0x2000 < iVar5) {
      iVar5 = 0x2000;
    }
    iVar4 = (**(code **)(*param_1 + 0x1c))(*(int *)(param_1[0xb] + 4) + iVar8,iVar5);
    param_1[0xd] = iVar4;
    if (iVar4 < 0) {
      (**(code **)(*param_1 + 0x24))(s_input_in_flex_scanner_failed_1011c51c);
    }
  }
  if (param_1[0xd] == 0) {
    if (iVar8 == 0) {
      cVar10 = '\x01';
      (**(code **)(*param_1 + 0x10))(param_1[9]);
    }
    else {
      cVar10 = '\x02';
      *(undefined4 *)(param_1[0xb] + 0x24) = 2;
    }
  }
  else {
    cVar10 = '\0';
  }
  iVar4 = param_1[0xd];
  param_1[0xd] = iVar4 + iVar8;
  *(undefined1 *)(*(int *)(param_1[0xb] + 4) + iVar4 + iVar8) = 0;
  *(undefined1 *)(*(int *)(param_1[0xb] + 4) + 1 + param_1[0xd]) = 0;
  param_1[1] = *(int *)(param_1[0xb] + 4);
  return cVar10;
}

