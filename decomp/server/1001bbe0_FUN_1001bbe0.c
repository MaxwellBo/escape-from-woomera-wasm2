
void FUN_1001bbe0(int param_1,undefined4 param_2)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  char *pcVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  byte *pbVar7;
  bool bVar8;
  char acStack_200 [255];
  undefined1 uStack_101;
  undefined1 auStack_100 [256];
  
  if (*(int *)(param_1 + 0x7c) != 0) {
    if ((*(int *)(param_1 + 0x250) != 0) &&
       (*(char *)(*(int *)(DAT_10122044 + 0x98) + *(int *)(param_1 + 0x250)) != '\0')) {
      pbVar2 = (byte *)(*DAT_10121fb4)();
      pbVar7 = (byte *)(*(int *)(DAT_10122044 + 0x98) + *(int *)(param_1 + 0x250));
      do {
        bVar1 = *pbVar7;
        bVar8 = bVar1 < *pbVar2;
        if (bVar1 != *pbVar2) {
LAB_1001bc73:
          iVar3 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
          goto LAB_1001bc78;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar7[1];
        bVar8 = bVar1 < pbVar2[1];
        if (bVar1 != pbVar2[1]) goto LAB_1001bc73;
        pbVar7 = pbVar7 + 2;
        pbVar2 = pbVar2 + 2;
      } while (bVar1 != 0);
      iVar3 = 0;
LAB_1001bc78:
      if (iVar3 != 0) {
        pcVar4 = (char *)(*DAT_10121fb4)();
        _strncpy(acStack_200,pcVar4,0xff);
        uStack_101 = 0;
        pcVar4 = acStack_200;
        if (&stack0x00000000 != (undefined1 *)0x200) {
          do {
            if (*pcVar4 == '\0') break;
            if (*pcVar4 == '%') {
              *pcVar4 = ' ';
            }
            pcVar4 = pcVar4 + 1;
          } while (pcVar4 != (char *)0x0);
        }
        (*DAT_10121f24)();
        (*DAT_10121fbc)();
        (*DAT_10121fb4)(param_2);
        FUN_100c8506(auStack_100,(byte *)s____s_changed_name_to__s_101056e4);
        (*DAT_10121ec0)(2,DAT_101248dc,0);
        uVar5 = (*DAT_10121f24)(param_1);
        (*DAT_10121ec8)(uVar5);
        (*DAT_10121ee0)(auStack_100);
        (*DAT_10121ec4)();
        if (DAT_10121dbc == 0) {
          (*DAT_10121fb4)();
          (*DAT_10121fcc)();
          (*DAT_10121fdc)();
          (*DAT_10121fcc)();
          pcVar4 = s___s<_i><_u><_i>__changed_name_to_10105694;
        }
        else {
          (*DAT_10121fb4)();
          (*DAT_10121fb4)();
          (*DAT_10121fdc)();
          (*DAT_10121fcc)();
          pcVar4 = s___s<_i><_u><_s>__changed_name_to_101056bc;
        }
        FUN_100b0fe0((byte *)pcVar4);
      }
    }
    param_1 = param_1 + 0x80;
    if (param_1 == 0) {
      iVar3 = (*DAT_10121e5c)();
      if (iVar3 != 0) {
        param_1 = iVar3 + 0x80;
      }
    }
    if ((*(int *)(param_1 + 0x208) == 0) || (*(int *)(*(int *)(param_1 + 0x208) + 0x7c) == 0)) {
      puVar6 = (undefined4 *)(*DAT_10121f04)();
      if (puVar6 == (undefined4 *)0x0) {
        puVar6 = (undefined4 *)0x0;
      }
      else {
        FUN_10002f30(puVar6);
        *puVar6 = &PTR_FUN_100e0904;
      }
      puVar6[1] = param_1;
    }
    (**(code **)(*DAT_10121db8 + 100))();
  }
  return;
}

