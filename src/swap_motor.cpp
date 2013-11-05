#include "swap_motor.h"

namespace FSM_examples
{
  //----------------------------------------------------------------------------
  const std::string & swap_motor::get_class_name(void)const
    {
      return m_class_name;
    }
  //----------------------------------------------------------------------------
  swap_situation & swap_motor::run(const swap_situation & p_situation,
				   const swap_transition & p_transition)
    {
      std::string l_content = p_situation.to_string();
      assert(p_transition.get_source() < l_content.size());
      assert(p_transition.get_destination() < l_content.size());
      assert(p_transition.get_source() < p_transition.get_destination());
      std::string l_new_content = l_content;
      l_new_content[p_transition.get_destination()] = l_content[p_transition.get_source()];
      l_new_content[p_transition.get_source()] = l_content[p_transition.get_destination()];
      swap_situation & l_result = *(new swap_situation(l_new_content));
      return l_result;
    }
  
  const std::string swap_motor::m_class_name = "swap_motor";
}
//EOF
