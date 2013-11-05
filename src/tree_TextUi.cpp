#include "tree_TextUi.h"
#include "tree_situation.h"
#include <iostream>

using namespace std;

namespace FSM_examples
{
  //----------------------------------------------------------------------------
  tree_TextUi::tree_TextUi(void):FSM_UI<tree_situation>()
  {
  }

  //----------------------------------------------------------------------------
  void tree_TextUi::display_specific_situation(const tree_situation & p_situation)
  {
    cout << p_situation.to_string() << endl ;
  }

  //----------------------------------------------------------------------------
  const std::string & tree_TextUi::get_class_name(void)const
  {
    return m_class_name;
  }

  //----------------------------------------------------------------------------
  FSM_interfaces::FSM_UI_if & tree_TextUi::create_text_ui(void)
  {
    return *(new tree_TextUi());
  }

  const std::string tree_TextUi::m_class_name = "tree_TextUi";

}
//EOF
