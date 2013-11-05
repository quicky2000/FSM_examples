#ifndef _SWAP_CONTEXT_H_
#define _SWAP_CONTEXT_H_

#include "FSM_context.h"
#include "swap_transition.h"

namespace FSM_examples
{
  class swap_context:public FSM_base::FSM_context<swap_transition>
  {
  public:

    ~swap_context(void);
    
    // Methods inherited from interface
    const std::string to_string(void)const;
    void to_string(std::string & )const;
    
    // Specific methods
  private:
  };
  
}
#endif
//EOF
