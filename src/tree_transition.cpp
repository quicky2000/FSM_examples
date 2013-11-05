#include "tree_transition.h"
#include <sstream>

namespace FSM_examples
{
  tree_transition::tree_transition(const char & p_char):
    m_char(p_char)
  {
  }

  // Methods inherited from interface
  //----------------------------------------------------------------------------
  const std::string tree_transition::to_string(void)const
  {
    std::stringstream l_stream;
    l_stream << "Char = '" << m_char << "'" ;
    return l_stream.str();
  }
  
  //----------------------------------------------------------------------------
  void tree_transition::to_string(std::string & p_result)const
  {
    std::stringstream l_stream;
    l_stream << "Char = '" << m_char << "'" ;
    p_result = l_stream.str();
  }
  
  //----------------------------------------------------------------------------
  const char & tree_transition::get_char(void)const
    {
      return m_char;
    }

}
//EOF
