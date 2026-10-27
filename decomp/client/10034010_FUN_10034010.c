
void __fastcall FUN_10034010(Panel *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iStack_4;
  
  if (param_1[0xbc] != (Panel)0x0) {
    FUN_10033f50(param_1);
  }
  vgui::Panel::paint(param_1);
  iVar4 = 0;
  iStack_4 = 0;
  if (0 < *(int *)(param_1 + 0xc4)) {
    do {
      puVar1 = (undefined4 *)FUN_10034150(param_1,0,iStack_4);
      iVar2 = (**(code **)(*(int *)*puVar1 + 0x1c))();
      iVar4 = iVar4 + iVar2 + *(int *)(param_1 + 0xcc);
      if (*(char *)(puVar1 + 1) != '\0') {
        (**(code **)(*(int *)param_1 + 0x178))
                  ((int)*(short *)((int)puVar1 + 6),(int)*(short *)(puVar1 + 2),
                   (int)*(short *)((int)puVar1 + 10),(int)*(short *)(puVar1 + 3));
        iVar2 = *(int *)param_1;
        uVar3 = (**(code **)(iVar2 + 0x18))(iVar4 - puVar1[4]);
        (**(code **)(iVar2 + 0x180))(0,(iVar4 - puVar1[4]) + -1,uVar3);
      }
      iStack_4 = iStack_4 + 1;
    } while (iStack_4 < *(int *)(param_1 + 0xc4));
  }
  return;
}

