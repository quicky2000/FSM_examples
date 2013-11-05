#include "combin_motor.h"

namespace FSM_examples
{
  //----------------------------------------------------------------------------
  const std::string & combin_motor::get_class_name(void)const
  {
    return m_class_name;
  }
  //----------------------------------------------------------------------------
  combin_situation & combin_motor::run(const combin_situation & p_situation,
				       const combin_transition & p_transition)
  {
    combin_situation & l_result = *(new combin_situation(p_situation));
    l_result.set(p_transition.get_index(),p_transition.get_char());
    return l_result;
  }
  const std::string combin_motor::m_class_name = "combin_motor";
}
//EOF
