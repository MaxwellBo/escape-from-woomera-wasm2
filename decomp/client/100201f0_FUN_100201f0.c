
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FUN_100201f0(void *this,char param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 *puVar2;
  
  if (param_1 == '\0') {
    DAT_100b6620 = 0;
    DAT_100b6730 = 0;
    DAT_100bcdcc = 0;
    *(undefined4 *)((int)this + 0x18) = 0;
    *(undefined4 *)((int)this + 0x14) = 0;
    *(undefined4 *)((int)this + 0xcac) = 0;
    *(undefined4 *)((int)this + 0xca8) = 0;
    *(undefined4 *)((int)this + 0x950) = 0;
    *(undefined4 *)((int)this + 0xc9c) = 0;
    puVar2 = (undefined4 *)((int)this + 0x150);
    for (iVar1 = 0x200; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = 0;
      puVar2 = puVar2 + 1;
    }
    FUN_10020530(this,2,0);
    FUN_10020870((int)this);
    FUN_10020db0((int)this);
    FUN_1001fc00();
    return;
  }
  if (param_1 != '\x02') {
    (*DAT_100a5094)(s_CHudSpectator__DirectorEvent__un_10078bdc);
    return;
  }
  if (DAT_100b6724 == 4) {
    DAT_100b672c = param_2;
    *(undefined4 *)((int)this + 0x950) = param_2;
    DAT_100b6728 = param_3;
  }
  *(undefined4 *)((int)this + 0xca8) = param_2;
  *(undefined4 *)((int)this + 0xcac) = param_3;
  _DAT_100bcddc = param_4;
  return;
}

