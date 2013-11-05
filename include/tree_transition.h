#ifndef _TREE_TRANSITION_H_
#define _TREE_TRANSITION_H_

#include "FSM_transition_if.h"
#include "inttypes.h"

namespace FSM_examples
{
  class tree_transition: public FSM_interfaces::FSM_transition_if
  {
  public:
    tree_transition(const char & p_char);

    // Methods inherited from interface
    const std::string to_string(void)const;
    void to_string(std::string &)const;
  
    // Dedicated methods
    const char & get_char(void)const;
  private:
    const char m_char;
  };

}
#endif
//EOF
