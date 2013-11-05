#ifndef _COMBIN_TEXT_UI_H_
#define _COMBIN_TEXT_UI_H_

#include "FSM_UI.h"
#include "combin_situation.h"

namespace FSM_examples
{
  class combin_TextUi:public FSM_base::FSM_UI<combin_situation>
  {
  public:
    combin_TextUi(void);
    
    //Methods inherited from interface
    void display_specific_situation(const combin_situation & p_situation);
    const std::string & get_class_name(void)const;
    static FSM_UI_if & create_text_ui(void);
  private:
    static const std::string m_class_name;
  };
}
#endif // _COMBIN_TEXT_UI_H_
//EOF
