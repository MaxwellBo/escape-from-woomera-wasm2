
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_1001eb40(int *param_1)

{
  bool bVar1;
  int iVar2;
  float10 fVar3;
  
  bVar1 = false;
  iVar2 = (**(code **)(*param_1 + 0x208))();
  if (iVar2 == 0) {
    iVar2 = (**(code **)(*param_1 + 0x20c))();
    if ((iVar2 == 0) ||
       (fVar3 = (float10)(*DAT_10121eec)(s_violence_agibs_10105ff4), fVar3 != (float10)_DAT_100dd5f8
       )) goto LAB_1001eb9d;
  }
  else {
    fVar3 = (float10)(*DAT_10121eec)(s_violence_hgibs_10106004);
    if (fVar3 != (float10)_DAT_100dd5f8) goto LAB_1001eb9d;
  }
  bVar1 = true;
LAB_1001eb9d:
  *(undefined4 *)(param_1[1] + 0x16c) = 0;
  *(undefined4 *)(param_1[1] + 0x10c) = 0;
  if (bVar1) {
    (**(code **)(*param_1 + 0x210))();
  }
  else {
    *(undefined4 *)(param_1[1] + 0x118) = 0x80;
    (**(code **)(*param_1 + 0x200))();
  }
  *(undefined4 *)(param_1[1] + 0x170) = 2;
  FUN_10061070(param_1);
  if (*(float *)(param_1[1] + 0x160) < _DAT_100e0ec0) {
    *(undefined4 *)(param_1[1] + 0x160) = 0;
  }
  iVar2 = (**(code **)(*param_1 + 0x124))();
  if ((iVar2 != 0) && (!bVar1)) {
    FUN_100b0ef0((int)param_1);
  }
  return;
}

