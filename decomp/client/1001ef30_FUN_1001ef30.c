
void __fastcall FUN_1001ef30(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  if ((((*(int *)(param_1 + 0x400) != 0) && (*(int *)(param_1 + 0x404) == 0)) &&
      (*(int *)(param_1 + 0x424) != 0)) &&
     ((*(int *)(param_1 + 0x420) < 0x15 && (*(int *)(param_1 + 0x410) != 0)))) {
    do {
      puVar1 = *(undefined4 **)(param_1 + 0x410);
      if (puVar1 == (undefined4 *)0x0) {
        return;
      }
      *(undefined4 *)(param_1 + 0x410) = *puVar1;
      puVar1[6] = DAT_100a96cc;
      iVar2 = DAT_100a96cc;
      DAT_100a96cc = DAT_100a96cc + 1;
      (**(code **)(DAT_100a5148 + 8))(iVar2,4,0,0,0x40000000,puVar1 + 1,FUN_1001ebd0);
      *(int *)(param_1 + 0x420) = *(int *)(param_1 + 0x420) + 1;
      *puVar1 = *(undefined4 *)(param_1 + 0x414);
      *(undefined4 **)(param_1 + 0x414) = puVar1;
    } while (*(int *)(param_1 + 0x420) < 0x15);
  }
  return;
}

