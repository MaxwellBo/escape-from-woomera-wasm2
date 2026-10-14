
void __fastcall FUN_10014100(int *param_1)

{
  int iVar1;
  float10 fVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 auStack_c [4];
  undefined1 auStack_8 [8];
  
  if (param_1[0x2f] != 0) {
    (**(code **)(*param_1 + 0x178))(0,0,0,param_1[0x2f]);
    (**(code **)(*param_1 + 0x180))(0,0,param_1[3],param_1[4]);
  }
  (**(code **)(*param_1 + 0xc))(auStack_8,auStack_c);
  uVar4 = 1;
  uVar3 = 0x80;
  (**(code **)(*param_1 + 0x178))(0x80,0x80,0x80,1);
  (**(code **)(*param_1 + 0x184))(0,0,uVar4,uVar3);
  fVar2 = FUN_10013c80((int)(param_1 + 0x6d));
  (**(code **)(param_1[0x6c] + 8))(0,(float)fVar2);
  iVar1 = param_1[0x6c];
  fVar2 = FUN_10013c80((int)(param_1 + 0x116));
  (**(code **)(iVar1 + 8))(1,(float)fVar2);
  return;
}

