
void __thiscall FUN_1001ec70(void *this,int *param_1)

{
  char cVar1;
  undefined4 *puVar2;
  int *piVar3;
  char *pcVar4;
  undefined4 uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  int *piVar10;
  char *pcVar11;
  int *piVar12;
  char *pcVar13;
  longlong lVar14;
  undefined1 local_20 [32];
  
  puVar2 = FUN_1001f020(param_1[1],*(undefined4 **)((int)this + 0x414));
  if (puVar2 != (undefined4 *)0x0) {
    FUN_1001f040((undefined4 *)((int)this + 0x414),puVar2);
    *(int *)((int)this + 0x420) = *(int *)((int)this + 0x420) + -1;
  }
  if ((*param_1 == 0) && (param_1[2] == 4)) {
    pcVar11 = (char *)param_1[10];
    if (pcVar11 != (char *)0x0) {
      uVar6 = 0xffffffff;
      pcVar4 = pcVar11;
      do {
        if (uVar6 == 0) break;
        uVar6 = uVar6 - 1;
        cVar1 = *pcVar4;
        pcVar4 = pcVar4 + 1;
      } while (cVar1 != '\0');
      uVar6 = ~uVar6 + 100;
      __ftol();
      FUN_100499f0(local_20,&DAT_10078a14);
      piVar3 = operator_new(0x20);
      piVar10 = param_1 + 3;
      piVar12 = piVar3;
      for (iVar7 = 5; piVar12 = piVar12 + 1, iVar7 != 0; iVar7 = iVar7 + -1) {
        *piVar12 = *piVar10;
        piVar10 = piVar10 + 1;
      }
      pcVar4 = operator_new(uVar6);
      piVar3[6] = (int)pcVar4;
      lVar14 = __ftol();
      piVar3[7] = (int)lVar14;
      uVar8 = 0xffffffff;
      do {
        pcVar13 = pcVar11;
        if (uVar8 == 0) break;
        uVar8 = uVar8 - 1;
        pcVar13 = pcVar11 + 1;
        cVar1 = *pcVar11;
        pcVar11 = pcVar13;
      } while (cVar1 != '\0');
      uVar8 = ~uVar8;
      pcVar11 = pcVar13 + -uVar8;
      for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
        *(undefined4 *)pcVar4 = *(undefined4 *)pcVar11;
        pcVar11 = pcVar11 + 4;
        pcVar4 = pcVar4 + 4;
      }
      for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
        *pcVar4 = *pcVar11;
        pcVar11 = pcVar11 + 1;
        pcVar4 = pcVar4 + 1;
      }
      puVar2 = (undefined4 *)(DAT_100a5148 + 0x28);
      uVar5 = (**(code **)(DAT_100a5148 + 0x14))(param_1 + 3,uVar6);
      (*(code *)*puVar2)(piVar3[6],s_address_10078a0c,uVar5);
      (**(code **)(DAT_100a5148 + 0x28))(piVar3[6],&DAT_10078a04,local_20,uVar6);
      FUN_1001ee40(this,(undefined4 *)((int)this + 0x418),piVar3);
    }
  }
  return;
}

