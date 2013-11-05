#include "tree_FSM.h"
#include "tree_motor.h"
#include "tree_situation_analyzer.h"

#include <iostream>

namespace FSM_examples
{
  //-----------------------------------------------------------------------------
  tree_FSM::tree_FSM(void):FSM<tree_situation,tree_transition>("tree",*(new tree_motor()), *(new tree_situation_analyzer()))
  {
    set_situation(*(new tree_situation()));
  }
  
  //-----------------------------------------------------------------------------
  void tree_FSM::configure(void)
  {
  }
  
  //-----------------------------------------------------------------------------
  const std::string & tree_FSM::get_class_name(void)const
  {
    return m_class_name;
  }
  
 //-----------------------------------------------------------------------------
  FSM_interfaces::FSM_if & tree_FSM::create_FSM(void)
  {
    return *(new tree_FSM());
  }
  const std::string tree_FSM::m_class_name = "tree_FSM";
}
