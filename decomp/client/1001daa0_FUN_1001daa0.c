
void __cdecl FUN_1001daa0(undefined4 param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = 0;
  iVar5 = param_2 + -6;
  do {
    uVar1 = 200;
    uVar2 = 200;
    if (param_3 < iVar4) {
      uVar3 = 10;
    }
    else {
      uVar1 = 0;
      uVar2 = 0;
      uVar3 = 0xff;
    }
    (*DAT_100a501c)(param_1,iVar5,0x1c,6,200,uVar1,uVar2,uVar3);
    iVar4 = iVar4 + 1;
    iVar5 = iVar5 + -0xc;
  } while (iVar4 < 10);
  return;
}

