
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_10093c70(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  longlong lVar5;
  float fStack_8;
  int iStack_4;
  
  iVar1 = (*DAT_10121e4c)(*(undefined4 *)(param_1[1] + 0x208));
  if (iVar1 != 0) {
    iVar2 = (*DAT_10121f20)(iVar1);
    if (iVar2 != 0) {
      iVar2 = iVar1 + 0x80;
      iStack_4 = iVar2;
      if (iVar2 == 0) {
        iVar3 = (*DAT_10121e5c)();
        if (iVar3 != 0) {
          iVar2 = iVar3 + 0x80;
        }
      }
      iVar3 = *(int *)(iVar2 + 0x208);
      if ((iVar3 == 0) || (puVar4 = *(undefined4 **)(iVar3 + 0x7c), puVar4 == (undefined4 *)0x0)) {
        puVar4 = (undefined4 *)(*DAT_10121f04)(iVar3,0x69c);
        if (puVar4 == (undefined4 *)0x0) {
          puVar4 = (undefined4 *)0x0;
        }
        else {
          FUN_1001d7d0(puVar4);
          *puVar4 = &PTR_FUN_100e0904;
        }
        puVar4[1] = iVar2;
      }
      if (puVar4[0xce] != 0) {
        iVar2 = (*DAT_10121f20)(puVar4[0xce]);
        if ((iVar2 != 0) && (puVar4[0xce] == *(int *)(param_1[1] + 0x208))) {
          if (((float)puVar4[0xcf] != _DAT_100dd5f8) && ((float)puVar4[0xd0] != _DAT_100dd5f8)) {
            iVar1 = FUN_10093b10(param_1[1],iStack_4,&fStack_8);
            if (iVar1 != 0) {
              puVar4[0xd0] = fStack_8;
              (**(code **)(*param_1 + 8))(0x3e800000);
              return;
            }
            puVar4[0xd0] = 0;
            puVar4[0xcf] = 0;
          }
          goto LAB_10093d9a;
        }
      }
      iVar2 = FUN_10093b10(param_1[1],iStack_4,&fStack_8);
      if ((iVar2 != 0) &&
         ((fStack_8 < (float)puVar4[0xd0] || ((float)puVar4[0xd0] == _DAT_100dd5f8)))) {
        puVar4[0xce] = *(undefined4 *)(param_1[1] + 0x208);
        puVar4[0xcf] = param_1[0x2f];
        puVar4[0xd0] = fStack_8;
        (*DAT_10121ec0)(1,0x25,0,iVar1);
        lVar5 = __ftol();
        (*DAT_10121ed0)((int)(short)lVar5);
        (*DAT_10121ec4)();
      }
      (**(code **)(*param_1 + 8))(0x3e800000);
      return;
    }
  }
LAB_10093d9a:
  (**(code **)(*param_1 + 8))(0x3f400000);
  return;
}

