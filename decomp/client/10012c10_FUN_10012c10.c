
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_10012c10(void *this,int param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  uint uVar6;
  float10 fVar7;
  undefined4 uStack_220;
  undefined4 uStack_21c;
  undefined4 uStack_218;
  undefined4 uStack_214;
  undefined4 uStack_210;
  undefined4 auStack_20c [3];
  undefined1 auStack_200 [512];
  
  if (**(int **)((int)this + 0x20) != 0) {
    fVar7 = (float10)(*DAT_100a502c)(s_voice_clientdebug_100779dc);
    if (fVar7 != (float10)_DAT_10059a18) {
      FUN_1004a4b6(auStack_200,0x100,(byte *)s_CVoiceStatus__UpdateSpeakerStatu_10077b48);
      (*DAT_100a5068)(auStack_200);
    }
    if (param_1 == -1) {
      *(bool *)((int)this + 0x177f4) = param_2 != 0;
      if (param_2 != 0) {
        (*DAT_100a5040)(s_voice_modenable_1_10077b34);
        FUN_10013420((int)this);
        return;
      }
    }
    else {
      if (param_1 == -2) {
        *(bool *)((int)this + 0x177f5) = param_2 != 0;
        FUN_10013420((int)this);
        return;
      }
      if ((-1 < param_1) && (param_1 < 0x20)) {
        iVar1 = param_1 + -1;
        if (iVar1 < 0) {
          return;
        }
        puVar2 = (undefined4 *)FUN_100133e0(this,iVar1);
        iVar3 = iVar1 >> 5;
        if (param_2 == 0) {
          *(uint *)((int)this + iVar3 * 4 + 0x24) =
               *(uint *)((int)this + iVar3 * 4 + 0x24) & ~(1 << ((byte)iVar1 & 0x1f));
          if (puVar2 != (undefined4 *)0x0) {
            (**(code **)(*(int *)*puVar2 + 0x24))(0);
            puVar2[3] = 0xffffffff;
          }
        }
        else {
          uVar6 = 1 << ((byte)iVar1 & 0x1f);
          iVar3 = iVar3 * 4;
          *(uint *)(iVar3 + 0x24 + (int)this) = *(uint *)(iVar3 + 0x24 + (int)this) | uVar6;
          *(uint *)(iVar3 + 0x2c + (int)this) = *(uint *)(iVar3 + 0x2c + (int)this) | uVar6;
          if ((puVar2 == (undefined4 *)0x0) &&
             (piVar4 = (int *)FUN_10013410(this), piVar4 != (int *)0x0)) {
            uStack_220 = 0;
            uStack_21c = 0;
            uStack_218 = 0;
            uStack_214 = 0;
            uStack_210 = 0;
            (*DAT_100a5044)(param_1,&uStack_220);
            FUN_1004a4b6(auStack_200,0x200,(byte *)s__s_10077b2c);
            (**(code **)(**(int **)((int)this + 0x17734) + 4))(param_1,auStack_20c);
            if ((int *)piVar4[1] != (int *)0x0) {
              (**(code **)(*(int *)piVar4[1] + 300))(uStack_214,uStack_210,auStack_20c[0],100);
              (**(code **)(*(int *)piVar4[1] + 0x40))(**(undefined4 **)((int)this + 0x20));
              iVar3 = *(int *)piVar4[1];
              uVar5 = (**(code **)(**(int **)((int)this + 0x17734) + 0x10))();
              (**(code **)(iVar3 + 0x24))(uVar5);
            }
            if ((int *)*piVar4 != (int *)0x0) {
              (**(code **)(*(int *)*piVar4 + 0x120))(0xff,0xff,0xff,0);
              (**(code **)(*(int *)*piVar4 + 300))(0,0,0,0xff);
              (**(code **)(*(int *)*piVar4 + 0x200))((int *)*piVar4,&stack0xfffffdd8);
            }
            piVar4[3] = iVar1;
            FUN_10013420((int)this);
            return;
          }
        }
      }
    }
    FUN_10013420((int)this);
  }
  return;
}

