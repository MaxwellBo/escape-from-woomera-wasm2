
void __fastcall FUN_1001f650(void *param_1)

{
  int iVar1;
  bool bVar2;
  undefined3 extraout_var;
  int local_18;
  undefined4 local_14 [5];
  
  local_18 = 0;
  *(undefined4 *)((int)param_1 + 0x408) = *(undefined4 *)((int)param_1 + 0x428);
  *(undefined4 *)((int)param_1 + 0x40c) = *(undefined4 *)((int)param_1 + 0x42c);
  *(undefined4 *)((int)param_1 + 0x400) = 1;
  *(undefined4 *)((int)param_1 + 0x404) = 0;
  bVar2 = FUN_1001f320(param_1,1,&local_18,local_14);
  if (CONCAT31(extraout_var,bVar2) == 0) {
    (*DAT_100a5094)(s_SendRequest__Unable_to_read_mast_10078a6c);
    return;
  }
  FUN_1001f070((undefined4 *)((int)param_1 + 0x414));
  FUN_1001f070((undefined4 *)((int)param_1 + 0x410));
  FUN_1001f0a0((undefined4 *)((int)param_1 + 0x418));
  *(undefined4 *)((int)param_1 + 0x41c) = 0;
  (*(code *)*DAT_100a5148)();
  (*(code *)DAT_100a5148[4])();
  iVar1 = DAT_100a96cc;
  DAT_100a96cc = DAT_100a96cc + 1;
  (*(code *)DAT_100a5148[2])(iVar1,0,0,0,0x40140000,local_14,FUN_1001ebb0);
  return;
}

