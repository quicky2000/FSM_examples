#include "combin_FSM.h"
#include "combin_motor.h"
#include "combin_situation_analyzer.h"

#include <iostream>

namespace FSM_examples
{
  //-----------------------------------------------------------------------------
  combin_FSM::combin_FSM(void):FSM<combin_situation,combin_transition>("combin",*(new combin_motor()), *(new combin_situation_analyzer()))
  {
    set_situation(*(new combin_situation()));
  }
  
  //-----------------------------------------------------------------------------
  void combin_FSM::configure(void)
  {
  }
  
  //-----------------------------------------------------------------------------
  const std::string & combin_FSM::get_class_name(void)const
  {
    return m_class_name;
  }
  
  //-----------------------------------------------------------------------------
  FSM_interfaces::FSM_if & combin_FSM::create_FSM(void)
  {
    return *(new combin_FSM());
  }

  const std::string combin_FSM::m_class_name = "combin_FSM";
}
