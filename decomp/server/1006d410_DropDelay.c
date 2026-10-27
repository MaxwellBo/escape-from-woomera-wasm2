
/* public: void __thiscall CTestHull::DropDelay(void) */

void __thiscall CTestHull::DropDelay(CTestHull *this)

{
  undefined4 uStack0000000c;
  undefined4 uStack00000010;
  
                    /* 0x6d410  82  ?DropDelay@CTestHull@@QAEXXZ */
  FUN_100af940(4,s_Node_Graph_out_of_Date__Rebuildi_10112ca0,0,0,0,0);
  FUN_100afe10((int)this,DAT_1012278c);
  *(code **)(this + 0x74) = CallBuildNodeGraph;
  uStack00000010 = 0x3f800000;
  uStack0000000c = 0x1006d449;
  (**(code **)(*(int *)this + 8))();
  return;
}

