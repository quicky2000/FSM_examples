#ifndef _SWAP_FSM_H_
#define _SWAP_FSM_H_

#include "FSM.h"
#include "swap_situation.h"
#include "swap_transition.h"

namespace FSM_examples
{
  class swap_FSM:public FSM_base::FSM<swap_situation,swap_transition>
    {
    public:
      // Constructors && Destructors
      swap_FSM(void);
      
      // Methods inherited from FSM
      void configure(void);
      const std::string & get_class_name(void)const;
      static FSM_if & create_FSM(void);
      static const std::string m_class_name;
    };
}
#endif // _SWAP_FSM_H_
// EOF
