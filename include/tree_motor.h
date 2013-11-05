#ifndef _TREE_MOTOR_H_
#define _TREE_MOTOR_H_

#include "FSM_motor.h"
#include "tree_situation.h"
#include "tree_transition.h"

namespace FSM_examples
{
  class tree_motor:public FSM_base::FSM_motor<tree_situation,tree_transition>
    {
    public:
      // Methods inherited from FSM_motor
      const std::string & get_class_name(void)const;
      tree_situation & run(const tree_situation & p_situation,
                           const tree_transition & p_transition);
    private:
      static const std::string m_class_name;
    };
}
#endif // _TREE_MOTOR_H_
//EOF
