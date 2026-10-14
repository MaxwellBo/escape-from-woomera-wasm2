
/* public: void __thiscall CEnvBeamTrail::StartTrailThink(void) */

void __thiscall CEnvBeamTrail::StartTrailThink(CEnvBeamTrail *this)

{
                    /* 0x30310  223  ?StartTrailThink@CEnvBeamTrail@@QAEXXZ */
  *(uint *)(*(int *)(this + 4) + 0x1a0) = *(uint *)(*(int *)(this + 4) + 0x1a0) | 1;
  (**(code **)(*(int *)this + 0xe4))(this,this,1,0);
  return;
}

