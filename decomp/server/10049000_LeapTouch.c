
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: void __thiscall CHeadCrab::LeapTouch(class CBaseEntity *) */

void __thiscall CHeadCrab::LeapTouch(CHeadCrab *this,CBaseEntity *param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  float10 fVar5;
  float fVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  
                    /* 0x49000  136  ?LeapTouch@CHeadCrab@@QAEXPAVCBaseEntity@@@Z */
  if (*(float *)(*(int *)(param_1 + 4) + 0x16c) != _DAT_100dd5f8) {
    iVar2 = (**(code **)(*(int *)param_1 + 0x4c))();
    iVar3 = (**(code **)(*(int *)this + 0x4c))();
    if (iVar2 != iVar3) {
      if ((*(uint *)(*(int *)(this + 4) + 0x1a4) & 0x200) == 0) {
        uVar1 = *(undefined4 *)(*(int *)(this + 4) + 0x208);
        uVar4 = (**(code **)(*(int *)this + 0x230))();
        uVar8 = 0;
        uVar7 = 0x40000000;
        fVar5 = (float10)(**(code **)(*(int *)this + 0x234))();
        fVar6 = (float)fVar5;
        iVar2 = (*DAT_10121f70)(0,0);
        FUN_10094b20((&PTR_s_headcrab_hc_headbite_wav_1010dd34)[iVar2],uVar1,1,
                     (&PTR_s_headcrab_hc_headbite_wav_1010dd34)[iVar2],fVar6,uVar7,uVar8,uVar4);
        uVar1 = *(undefined4 *)(this + 4);
        iVar2 = *(int *)param_1;
        fVar5 = (float10)(**(code **)(*(int *)this + 0x22c))(4);
        (**(code **)(iVar2 + 0x60))(uVar1,uVar1,(float)fVar5);
      }
      *(undefined4 *)(this + 0x78) = 0;
    }
  }
  return;
}

