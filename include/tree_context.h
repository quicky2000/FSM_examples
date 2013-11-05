#ifndef _TREE_CONTEXT_H_
#define _TREE_CONTEXT_H_

#include "FSM_context.h"
#include "tree_transition.h"

namespace FSM_examples
{
  class tree_context:public FSM_base::FSM_context<tree_transition>
  {
  public:

    ~tree_context(void);
    
    // Methods inherited from interface
    const std::string to_string(void)const;
    void to_string(std::string &)const;
    
    // Specific methods
  private:
  };
  
}
#endif
//EOF
