
/* public: __thiscall vgui::Label::Label(void) */

Label * __thiscall vgui::Label::Label(Label *this)

{
                    /* 0x4110  65  ??0Label@vgui@@QAE@XZ */
  vgui::Panel::Panel((Panel *)this,0,0,10,10);
  *(undefined ***)this = &_vftable_;
  vgui::Label::init(this,1,s_,true);
  return this;
}

