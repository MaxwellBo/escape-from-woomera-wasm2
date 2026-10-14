
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_1003dcc0(int param_1)

{
  int iVar1;
  char cVar2;
  undefined *puVar3;
  App *pAVar4;
  int *piVar5;
  undefined4 uVar6;
  
  if (*(int *)(param_1 + 0xaa0) == 0) {
    cVar2 = (**(code **)(**(int **)(param_1 + 0xaa4) + 0x28))();
    if (cVar2 == '\0') {
      cVar2 = (**(code **)(**(int **)(param_1 + 0x884) + 0x28))();
      if (cVar2 == '\0') {
        puVar3 = FUN_10012170();
        cVar2 = FUN_100133d0((int)puVar3);
        if ((cVar2 == '\0') &&
           ((*(int *)(param_1 + 0x208) == 0 || (*(float *)(DAT_100a3aa4 + 0xc) == _DAT_10059a18))))
        {
          FUN_10023f80();
          DAT_100a9ad0 = 0;
          pAVar4 = vgui::App::getInstance();
          piVar5 = (int *)(**(code **)(*(int *)pAVar4 + 0x54))();
          pAVar4 = vgui::App::getInstance();
          iVar1 = *(int *)pAVar4;
          uVar6 = (**(code **)(*piVar5 + 0x14))(1);
          (**(code **)(iVar1 + 0x8c))(uVar6);
          return;
        }
      }
    }
  }
  DAT_100a9ad0 = 1;
  pAVar4 = vgui::App::getInstance();
  piVar5 = (int *)(**(code **)(*(int *)pAVar4 + 0x54))();
  pAVar4 = vgui::App::getInstance();
  iVar1 = *(int *)pAVar4;
  uVar6 = (**(code **)(*piVar5 + 0x14))(2);
  (**(code **)(iVar1 + 0x8c))(uVar6);
  return;
}

