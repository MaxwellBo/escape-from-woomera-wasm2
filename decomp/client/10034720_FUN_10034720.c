
/* WARNING: Type propagation algorithm not settling */

void __fastcall FUN_10034720(int *param_1)

{
  undefined1 *puVar1;
  uint unaff_ESI;
  int *piVar2;
  int unaff_EDI;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  uint uStack_48;
  undefined1 *puStack_44;
  undefined1 *puStack_40;
  undefined1 *puStack_3c;
  undefined1 *puStack_38;
  undefined1 local_24 [4];
  undefined1 local_20 [20];
  undefined1 local_c [4];
  undefined1 local_8 [8];
  
  puStack_3c = local_24;
  puStack_38 = local_20;
  puStack_40 = local_c;
  puStack_44 = local_8;
  uStack_48 = 0x10034744;
  (**(code **)(*param_1 + 0x14))();
  puVar1 = (undefined1 *)0x0;
  iVar4 = 0;
  uStack_48 = unaff_ESI;
  (**(code **)(param_1[0x32] + 0x10))(0,0,unaff_EDI + -0xf);
  uVar3 = 0;
  (**(code **)(param_1[0xa1] + 0x10))(puStack_44 + -0xf,0,0xf,puStack_40);
  uStack_48 = uStack_48 & 0xffffff00;
  iVar5 = 0;
  puStack_40 = (undefined1 *)FUN_10034880((int)param_1);
  piVar2 = (int *)param_1[0x31];
  if (piVar2 != param_1 + 0x2f) {
    do {
      if (iVar5 < param_1[0x61]) {
        (**(code **)(*(int *)*piVar2 + 0x24))(0);
LAB_10034813:
        uStack_48 = CONCAT31(uStack_48._1_3_,1);
      }
      else if (iVar5 < (int)puStack_40) {
        (**(code **)(*(int *)*piVar2 + 0x24))(1);
        (**(code **)(*(int *)*piVar2 + 0xc))(&puStack_38,&uStack_48);
        (**(code **)(*(int *)*piVar2 + 0x10))(0,puVar1,uVar3,iVar4);
        puVar1 = puVar1 + (int)puStack_44;
        if (iVar4 < (int)puVar1) goto LAB_10034813;
      }
      else {
        (**(code **)(*(int *)*piVar2 + 0x24))(0);
      }
      piVar2 = (int *)piVar2[2];
      iVar5 = iVar5 + 1;
    } while (piVar2 != param_1 + 0x2f);
  }
  (**(code **)(param_1[0xa1] + 0x24))(uStack_48);
  (**(code **)(*param_1 + 0x30))();
  return;
}

