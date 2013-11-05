#ifndef _COMBIN_TRANSITION_H_
#define _COMBIN_TRANSITION_H_

#include "FSM_transition_if.h"
#include <inttypes.h>

namespace FSM_examples
{
  class combin_transition: public FSM_interfaces::FSM_transition_if
  {
  public:
    combin_transition(const uint_fast8_t & p_index,
		      const char & p_char);

    // Methods inherited from interface
    const std::string to_string(void)const;
    void to_string(std::string &)const;
  
    // Dedicated methods
    const uint_fast8_t & get_index(void)const;
    const char & get_char(void)const;
  private:
    const uint_fast8_t m_index;
    const char m_char;
  };

}
#endif
//EOF
