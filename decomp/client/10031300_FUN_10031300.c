
void __cdecl FUN_10031300(byte *param_1)

{
  int iVar1;
  undefined1 *puVar2;
  undefined1 local_100 [256];
  
  puVar2 = local_100;
  iVar1 = ((0x27f < DAT_100a4dcc) - 1 & 0xfffffec0) + 0x280;
  FUN_100499f0(local_100,param_1);
  (*DAT_100a4ff0)(local_100,puVar2,param_1,iVar1);
  return;
}

