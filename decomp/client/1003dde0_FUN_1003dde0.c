
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_1003dde0(int *param_1)

{
  char cVar1;
  int *piVar2;
  undefined4 unaff_ESI;
  undefined1 *puStack_20;
  undefined1 auStack_18 [4];
  undefined1 auStack_14 [4];
  undefined1 auStack_10 [4];
  undefined1 auStack_c [4];
  undefined1 auStack_8 [4];
  undefined1 auStack_4 [4];
  
  if (param_1[0x2ab] != 0) {
    puStack_20 = (undefined1 *)0x1003ddf8;
    piVar2 = (int *)(**(code **)(*param_1 + 0x14c))();
    puStack_20 = auStack_18;
    (**(code **)(*piVar2 + 0x34))(auStack_14);
    (*(code *)**(undefined4 **)(param_1[0x2ab] + 0xbc))(unaff_ESI,puStack_20,param_1[0x2ab]);
  }
  if (DAT_100b6730 != param_1[0x86]) {
    puStack_20 = (undefined1 *)0x1003de3f;
    FUN_1003cb10((int)param_1);
    if ((int *)param_1[0x2aa] != (int *)0x0) {
      puStack_20 = (undefined1 *)0x1003de51;
      (**(code **)(*(int *)param_1[0x2aa] + 0x210))();
    }
    param_1[0x86] = DAT_100b6730;
  }
  if (DAT_100b6620 != param_1[0x87]) {
    puStack_20 = (undefined1 *)0x1003de73;
    FUN_1003cb10((int)param_1);
    param_1[0x87] = DAT_100b6620;
  }
  if ((DAT_100b6724 != param_1[0x88]) || (DAT_100b672c != param_1[0x89])) {
    puStack_20 = (undefined1 *)0x1003dea5;
    FUN_1003cb40((int)param_1);
  }
  puStack_20 = (undefined1 *)0x1003deb0;
  cVar1 = (**(code **)(*(int *)param_1[0x2ab] + 0x28))();
  if ((cVar1 != '\0') && ((float)param_1[0x84] < DAT_100a3a64)) {
    puStack_20 = (undefined1 *)0x1003ded2;
    FUN_10036510((int *)param_1[0x2ab]);
    param_1[0x84] = (int)(DAT_100a3a64 + (float)_DAT_100599f0);
  }
  puStack_20 = auStack_4;
  (**(code **)(*param_1 + 0x38))(auStack_10,auStack_c,auStack_8);
  FUN_100342e0(&puStack_20);
  return;
}

