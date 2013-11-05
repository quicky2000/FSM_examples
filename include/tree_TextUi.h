#ifndef _TREE_TEXT_UI_H_
#define _TREE_TEXT_UI_H_

#include "FSM_UI.h"
#include "tree_situation.h"

namespace FSM_examples
{
  class tree_TextUi:public FSM_base::FSM_UI<tree_situation>
  {
  public:
    tree_TextUi(void);
    
    //Methods inherited from interface
    void display_specific_situation(const tree_situation & p_situation);
    const std::string & get_class_name(void)const;
    static FSM_UI_if & create_text_ui(void);
  private:
    static const std::string m_class_name;
  };
}
#endif // _TREE_TEXT_UI_H_
//EOF
