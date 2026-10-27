
void __cdecl FUN_100af6e0(int *param_1,undefined4 *param_2,char *param_3)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  char *pcVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  char acStack_200 [511];
  undefined1 uStack_1;
  
  if (param_1 != (int *)0x0) {
    iVar2 = (**(code **)(*param_1 + 0xd0))();
    if (iVar2 != 0) {
      (*DAT_10121ec0)(1,0x17,0,*(undefined4 *)(param_1[1] + 0x208));
      (*DAT_10121ec8)(0x1d);
      (*DAT_10121ec8)(param_2[9] & 0xff);
      uVar5 = *param_2;
      uVar6 = 0x46000000;
      iVar2 = FUN_100af8c0();
      (*DAT_10121ed0)((int)(short)iVar2,uVar5,uVar6);
      uVar5 = param_2[1];
      uVar6 = 0x46000000;
      iVar2 = FUN_100af8c0();
      (*DAT_10121ed0)((int)(short)iVar2,uVar5,uVar6);
      (*DAT_10121ec8)(param_2[2]);
      (*DAT_10121ec8)(*(undefined1 *)(param_2 + 3));
      (*DAT_10121ec8)(*(undefined1 *)((int)param_2 + 0xd));
      (*DAT_10121ec8)(*(undefined1 *)((int)param_2 + 0xe));
      (*DAT_10121ec8)(*(undefined1 *)((int)param_2 + 0xf));
      (*DAT_10121ec8)(*(undefined1 *)(param_2 + 4));
      (*DAT_10121ec8)(*(undefined1 *)((int)param_2 + 0x11));
      (*DAT_10121ec8)(*(undefined1 *)((int)param_2 + 0x12));
      (*DAT_10121ec8)(*(undefined1 *)((int)param_2 + 0x13));
      uVar5 = param_2[5];
      uVar6 = 0x43800000;
      uVar3 = FUN_100af4d0();
      (*DAT_10121ed0)(uVar3 & 0xffff,uVar5,uVar6);
      uVar5 = param_2[6];
      uVar6 = 0x43800000;
      uVar3 = FUN_100af4d0();
      (*DAT_10121ed0)(uVar3 & 0xffff,uVar5,uVar6);
      uVar5 = param_2[7];
      uVar6 = 0x43800000;
      uVar3 = FUN_100af4d0();
      (*DAT_10121ed0)(uVar3 & 0xffff,uVar5,uVar6);
      if (param_2[2] == 2) {
        uVar5 = param_2[8];
        uVar6 = 0x43800000;
        uVar3 = FUN_100af4d0();
        (*DAT_10121ed0)(uVar3 & 0xffff,uVar5,uVar6);
      }
      uVar3 = 0xffffffff;
      pcVar4 = param_3;
      do {
        if (uVar3 == 0) break;
        uVar3 = uVar3 - 1;
        cVar1 = *pcVar4;
        pcVar4 = pcVar4 + 1;
      } while (cVar1 != '\0');
      if (~uVar3 - 1 < 0x200) {
        (*DAT_10121ee0)(param_3);
        (*DAT_10121ec4)();
        return;
      }
      _strncpy(acStack_200,param_3,0x1ff);
      uStack_1 = 0;
      (*DAT_10121ee0)(acStack_200);
      (*DAT_10121ec4)();
    }
  }
  return;
}

