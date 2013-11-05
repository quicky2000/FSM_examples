#include "swap_TextUi.h"
#include "swap_situation.h"
#include <iostream>

using namespace std;

namespace FSM_examples
{
  //----------------------------------------------------------------------------
  swap_TextUi::swap_TextUi(void):FSM_UI<swap_situation>()
  {
  }

  //----------------------------------------------------------------------------
  void swap_TextUi::display_specific_situation(const swap_situation & p_situation)
  {
    cout << p_situation.to_string() << endl ;
  }

  //----------------------------------------------------------------------------
  const std::string & swap_TextUi::get_class_name(void)const
  {
    return m_class_name;
  }


  //----------------------------------------------------------------------------
  FSM_interfaces::FSM_UI_if & swap_TextUi::create_text_ui(void)
  {
    return *(new swap_TextUi());
  }

  const std::string swap_TextUi::m_class_name = "swap_TextUi";
}
//EOF
