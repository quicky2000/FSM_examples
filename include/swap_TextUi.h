#ifndef _SWAP_TEXT_UI_H_
#define _SWAP_TEXT_UI_H_

#include "FSM_UI.h"
#include "swap_situation.h"

namespace FSM_examples
{
  class swap_TextUi:public FSM_base::FSM_UI<swap_situation>
  {
  public:
    swap_TextUi(void);
    
    //Methods inherited from interface
    void display_specific_situation(const swap_situation & p_situation);
    const std::string & get_class_name(void)const;
    static FSM_UI_if & create_text_ui(void);
  private:
    static const std::string m_class_name;
  };
}
#endif // _SWAP_TEXT_UI_H_
//EOF
