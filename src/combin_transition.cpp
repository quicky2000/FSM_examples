#include "combin_transition.h"
#include <sstream>

namespace FSM_examples
{
  combin_transition::combin_transition(const uint_fast8_t & p_index,
				       const char & p_char):
    m_index(p_index),
    m_char(p_char)
  {
  }

  // Methods inherited from interface
  //----------------------------------------------------------------------------
  const std::string combin_transition::to_string(void)const
  {
    std::stringstream l_stream;
    l_stream << "Char = '" << m_char << "' @ " << (unsigned int) m_index;
    return l_stream.str();
  }
  //----------------------------------------------------------------------------
  void combin_transition::to_string(std::string & p_result)const
  {
    std::stringstream l_stream;
    l_stream << "Char = '" << m_char << "' @ " << (unsigned int) m_index;
    p_result = l_stream.str();
  }


  
  //----------------------------------------------------------------------------
  const char & combin_transition::get_char(void)const
    {
      return m_char;
    }

  //----------------------------------------------------------------------------
  const uint_fast8_t & combin_transition::get_index(void)const
    {
      return m_index;
    }

}
//EOF
