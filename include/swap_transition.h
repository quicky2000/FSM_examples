#ifndef _SWAP_TRANSITION_H_
#define _SWAP_TRANSITION_H_

#include "FSM_transition_if.h"
#include "inttypes.h"

namespace FSM_examples
{
  class swap_transition: public FSM_interfaces::FSM_transition_if
  {
  public:
    swap_transition(const uint_fast8_t & p_source, const uint_fast8_t & p_destination);

    // Methods inherited from interface
    const std::string to_string(void)const;
    void to_string(std::string &)const;
  
    // Dedicated methods
    const uint_fast8_t & get_source(void)const;
    const uint_fast8_t & get_destination(void)const;
  private:
    const uint_fast8_t m_source;
    const uint_fast8_t m_destination;
  };

}
#endif // _SWAP_TRANSITION_H_
//EOF
