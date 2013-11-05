#ifndef _COMBIN_MOTOR_H_
#define _COMBIN_MOTOR_H_

#include "FSM_motor.h"
#include "combin_situation.h"
#include "combin_transition.h"

namespace FSM_examples
{
  class combin_motor:public FSM_base::FSM_motor<combin_situation,combin_transition>
    {
    public:
      // Methods inherited from FSM_motor
      const std::string & get_class_name(void)const;
      combin_situation & run(const combin_situation & p_situation,
			     const combin_transition & p_transition);
      static const std::string m_class_name;
    };
}
#endif
//EOF
