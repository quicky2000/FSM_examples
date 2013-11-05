#include "tree_motor.h"

namespace FSM_examples
{
  //----------------------------------------------------------------------------
  const std::string & tree_motor::get_class_name(void)const
    {
      return m_class_name;
    }
  //----------------------------------------------------------------------------
  tree_situation & tree_motor::run(const tree_situation & p_situation,
                                   const tree_transition & p_transition)
    {
      tree_situation & l_result = *(new tree_situation(p_situation));
      l_result.add(p_transition.get_char());
      return l_result;
    }
  const std::string tree_motor::m_class_name = "tree_motor";
}
//EOF
