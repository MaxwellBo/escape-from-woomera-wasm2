
void __cdecl FUN_10043fa0(int *param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  CBasePlayerItem *this;
  
  puVar1 = FUN_10043f70(param_2);
  if (puVar1 != (undefined4 *)0x0) {
    FUN_1004a710(puVar1,puVar1 + 2,((int)&DAT_100baf18 + (DAT_100bb720 * 8 - (int)puVar1) >> 3) << 3
                );
    DAT_100bb720 = DAT_100bb720 + -1;
  }
  iVar2 = (**(code **)(*param_1 + 0xcc))();
  if (iVar2 != 0) {
    CBasePlayerItem::AttemptToMaterialize(this);
  }
  return;
}

