#ifndef _COMBIN_CONTEXT_H_
#define _COMBIN_CONTEXT_H_

#include "FSM_context.h"
#include "combin_transition.h"

namespace FSM_examples
{
  class combin_context:public FSM_base::FSM_context<combin_transition>
  {
  public:

    ~combin_context(void);
    
    // Methods inherited from interface
    const std::string to_string(void)const;
    void to_string(std::string &)const;
    
    // Specific methods
  private:
  };
  
}
#endif
//EOF
