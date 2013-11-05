#include "swap_FSM.h"
#include "swap_motor.h"
#include "swap_situation_analyzer.h"

#include <iostream>

namespace FSM_examples
{
  //-----------------------------------------------------------------------------
  swap_FSM::swap_FSM(void):FSM_base::FSM<swap_situation,swap_transition>("swap",*(new swap_motor()), *(new swap_situation_analyzer()))
  {
    set_situation(*(new swap_situation()));
  }
  
  //-----------------------------------------------------------------------------
  void swap_FSM::configure(void)
  {
  }
  
  //-----------------------------------------------------------------------------
  const std::string & swap_FSM::get_class_name(void)const
  {
    return m_class_name;
  }

  //-----------------------------------------------------------------------------
  FSM_interfaces::FSM_if & swap_FSM::create_FSM(void)
  {
    return *(new swap_FSM());
  }

  const std::string swap_FSM::m_class_name = "Not implemented";
}
//EOF
