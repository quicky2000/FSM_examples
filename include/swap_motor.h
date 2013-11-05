#ifndef _SWAP_MOTOR_H_
#define _SWAP_MOTOR_H_

#include "FSM_motor.h"
#include "swap_situation.h"
#include "swap_transition.h"

namespace FSM_examples
{
  class swap_motor:public FSM_base::FSM_motor<swap_situation,swap_transition>
    {
    public:
      // Methods inherited from FSM_motor
      const std::string & get_class_name(void)const;
      swap_situation & run(const swap_situation & p_situation,
			   const swap_transition & p_transition);
    private:
      static const std::string m_class_name;
    };
}
#endif
//EOF
