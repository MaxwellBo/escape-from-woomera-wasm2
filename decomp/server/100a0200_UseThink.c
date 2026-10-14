
/* public: void __thiscall CMultiManager::UseThink(void) */

void __thiscall CMultiManager::UseThink(CMultiManager *this)

{
                    /* 0xa0200  271  ?UseThink@CMultiManager@@QAEXXZ */
  *(code **)(this + 0x74) = ManagerThink;
  *(code **)(this + 0x7c) = ManagerUse;
  (**(code **)(*(int *)this + 0xe4))(this,this,3,0);
  return;
}

