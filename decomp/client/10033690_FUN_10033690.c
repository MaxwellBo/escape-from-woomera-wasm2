
void __fastcall FUN_10033690(int *param_1)

{
  char cVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined1 *puStack_18;
  undefined1 auStack_8 [4];
  undefined1 auStack_4 [4];
  
  puVar3 = auStack_8;
  puStack_18 = auStack_4;
  (**(code **)(*param_1 + 0xe8))(puVar3);
  (**(code **)(*param_1 + 0x21c))(&stack0xffffffec,&puStack_18);
  (**(code **)(*param_1 + 0x17c))(6);
  uVar6 = 0;
  uVar5 = 0;
  puVar4 = puStack_18;
  (**(code **)(*param_1 + 0x184))(0,0,puVar3,puStack_18);
  cVar1 = (**(code **)(*param_1 + 0x204))();
  if (cVar1 != '\0') {
    (**(code **)(*param_1 + 0x17c))(4);
    uVar2 = 0;
    (**(code **)(*param_1 + 0x180))(0,uVar6,puVar3,uVar5);
    (**(code **)(*param_1 + 0x17c))(3);
    (**(code **)(*param_1 + 0x184))(0,uVar6,puVar3,uVar2);
    return;
  }
  (**(code **)(*param_1 + 0x17c))(4);
  uVar2 = 0;
  (**(code **)(*param_1 + 0x180))(uVar6,0,uVar5,puVar4);
  (**(code **)(*param_1 + 0x17c))(3);
  (**(code **)(*param_1 + 0x184))(uVar2,0,uVar6,puVar4);
  return;
}

