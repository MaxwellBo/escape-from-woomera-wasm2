
void __thiscall
FUN_100340d0(void *this,int param_1,char param_2,undefined4 param_3,undefined2 param_4,
            undefined2 param_5,undefined2 param_6,undefined2 param_7)

{
  int iVar1;
  
  iVar1 = FUN_10034150(this,0,param_1);
  *(char *)(iVar1 + 4) = param_2;
  if (param_2 != '\0') {
    *(undefined4 *)(iVar1 + 0x10) = param_3;
    *(undefined2 *)(iVar1 + 6) = param_4;
    *(undefined2 *)(iVar1 + 8) = param_5;
    *(undefined2 *)(iVar1 + 10) = param_6;
    *(undefined2 *)(iVar1 + 0xc) = param_7;
  }
  return;
}

