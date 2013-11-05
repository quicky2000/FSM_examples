#include "combin_TextUi.h"
#include "combin_situation.h"

using namespace std;

namespace FSM_examples
{
  //----------------------------------------------------------------------------
  combin_TextUi::combin_TextUi(void):FSM_UI<combin_situation>()
  {
  }

  //----------------------------------------------------------------------------
  void combin_TextUi::display_specific_situation(const combin_situation & p_situation)
  {
    cout << p_situation.to_string() << endl ;
  }

  //----------------------------------------------------------------------------
  const std::string & combin_TextUi::get_class_name(void)const
  {
    return m_class_name;
  }

  //----------------------------------------------------------------------------
  FSM_interfaces::FSM_UI_if & combin_TextUi::create_text_ui(void)
  {
    return *(new combin_TextUi());
  }
  const std::string combin_TextUi::m_class_name = "combin_TextUi";

}
//EOF
