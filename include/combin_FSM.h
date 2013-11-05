#ifndef _COMBIN_FSM_H_
#define _COMBIN_FSM_H_

#include "FSM.h"
#include "combin_situation.h"
#include "combin_transition.h"

namespace FSM_examples
{
  class combin_FSM:public FSM_base::FSM<combin_situation,combin_transition>
    {
    private:
      typedef FSM_interfaces::FSM_if FSM_if;
    public:
      // Constructors && Destructors
      combin_FSM(void);
      
      // Methods inherited from FSM
      void configure(void);
      const std::string & get_class_name(void)const;
      static FSM_if & create_FSM(void);

    private:
      static const std::string m_class_name;
    };
}
#endif // _COMBIN_FSM_H_
// EOF
