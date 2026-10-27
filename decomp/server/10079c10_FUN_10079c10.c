
void __thiscall FUN_10079c10(int *param_1,int param_2,undefined4 param_3,int param_4)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  bool bVar6;
  
  if (param_1[0x67] != 0) {
    if (param_1[0x37] == 0) {
      iVar4 = param_1[0x5f];
    }
    else if (param_1[0x37] == 1) {
      iVar4 = param_1[0x60];
    }
    else {
      iVar4 = 0;
    }
    pcVar5 = s_func_tracktrain_10114240;
    pbVar2 = (byte *)(**(int **)(param_2 + 4) + *(int *)(DAT_10122044 + 0x98));
    do {
      bVar1 = *pbVar2;
      bVar6 = bVar1 < (byte)*pcVar5;
      if (bVar1 != *pcVar5) {
LAB_10079c89:
        iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
        goto LAB_10079c8e;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar2[1];
      bVar6 = bVar1 < (byte)pcVar5[1];
      if (bVar1 != pcVar5[1]) goto LAB_10079c89;
      pbVar2 = pbVar2 + 2;
      pcVar5 = pcVar5 + 2;
    } while (bVar1 != 0);
    iVar3 = 0;
LAB_10079c8e:
    if (iVar3 == 0) {
      iVar4 = FUN_100792d0(param_1,iVar4);
      param_1[0x65] = iVar4;
      if ((iVar4 == 2) && (param_1[0x37] != param_1[0x66])) {
        param_1[0x67] = 0;
        if (param_1[0x37] == 0) {
          (**(code **)(*param_1 + 0x124))();
          return;
        }
        (**(code **)(*param_1 + 0x120))();
        return;
      }
    }
    else {
      if (iVar4 != 0) {
        iVar4 = FUN_10073950(iVar4);
        if ((iVar4 != 0) && (*(int *)(param_1[0x61] + 0xbc) != iVar4)) {
          iVar4 = FUN_1001a140(param_4,param_1[0x66]);
          if (iVar4 != 0) {
            param_1[0x66] = (uint)(param_1[0x66] == 0);
          }
        }
      }
      (**(code **)(*param_1 + 0x130))(param_1[0x66]);
    }
  }
  return;
}

