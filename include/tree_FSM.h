#ifndef _TREE_FSM_H_
#define _TREE_FSM_H_

#include "FSM.h"
#include "tree_situation.h"
#include "tree_transition.h"

namespace FSM_examples
{
  class tree_FSM:public FSM_base::FSM<tree_situation,tree_transition>
    {
    public:
      // Constructors && Destructors
      tree_FSM(void);
      
      // Methods inherited from FSM
      void configure(void);
      const std::string & get_class_name(void)const;
      static FSM_if & create_FSM(void);
    static const std::string m_class_name;
    };
}
#endif // _TREE_FSM_H_
// EOF
