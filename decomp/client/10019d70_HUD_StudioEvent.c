
void __cdecl HUD_StudioEvent(int param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
                    /* 0x19d70  497  HUD_StudioEvent */
  switch(*(undefined4 *)(param_1 + 4)) {
  case 0x1389:
    puVar1 = (undefined4 *)((int)DAT_100a513c + 0x4c);
    uVar2 = FUN_100499e5(DAT_100a513c,(byte *)(param_1 + 0xc));
    (*(code *)*puVar1)(param_2 + 0xb60,uVar2);
    return;
  case 0x138a:
    uVar4 = 100;
    uVar3 = 0xffffff9c;
    puVar1 = (undefined4 *)((int)DAT_100a513c + 0x84);
    uVar2 = FUN_100499e5(DAT_100a513c,(byte *)(param_1 + 0xc));
    (*(code *)*puVar1)(param_2 + 0xb60,uVar2,uVar3,uVar4);
    return;
  case 0x138c:
    (*DAT_100a50ec)(param_1 + 0xc,0x3f800000,param_2 + 0xb60);
    break;
  case 0x1393:
    puVar1 = (undefined4 *)((int)DAT_100a513c + 0x4c);
    uVar2 = FUN_100499e5(DAT_100a513c,(byte *)(param_1 + 0xc));
    (*(code *)*puVar1)(param_2 + 0xb6c,uVar2);
    return;
  case 0x139d:
    puVar1 = (undefined4 *)((int)DAT_100a513c + 0x4c);
    uVar2 = FUN_100499e5(DAT_100a513c,(byte *)(param_1 + 0xc));
    (*(code *)*puVar1)(param_2 + 0xb78,uVar2);
    return;
  case 0x13a7:
    puVar1 = (undefined4 *)((int)DAT_100a513c + 0x4c);
    uVar2 = FUN_100499e5(DAT_100a513c,(byte *)(param_1 + 0xc));
    (*(code *)*puVar1)(param_2 + 0xb84,uVar2);
    return;
  }
  return;
}

