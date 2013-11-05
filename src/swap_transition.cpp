#include "swap_transition.h"
#include <sstream>

namespace FSM_examples
{
  swap_transition::swap_transition(const uint_fast8_t & p_source,
				   const uint_fast8_t & p_destination):
    m_source(p_source),
    m_destination(p_destination)
  {
  }

  // Methods inherited from interface
  
  //----------------------------------------------------------------------------
  const std::string swap_transition::to_string(void)const
  {
    std::stringstream l_stream;
    l_stream << (unsigned int)m_source << " -> " << (unsigned int)m_destination;
    return l_stream.str();
  }
    
  //----------------------------------------------------------------------------
  void swap_transition::to_string(std::string & p_result)const
  {
    std::stringstream l_stream;
    l_stream << (unsigned int)m_source << " -> " << (unsigned int)m_destination;
    p_result = l_stream.str();
  }
  
  //----------------------------------------------------------------------------
  const uint_fast8_t & swap_transition::get_source(void)const
    {
      return m_source;
    }

  //----------------------------------------------------------------------------
  const uint_fast8_t & swap_transition::get_destination(void)const
    {
      return m_destination;
    }

}
//EOF
