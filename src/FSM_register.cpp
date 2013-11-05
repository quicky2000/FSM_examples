
#include <map>
#include "tree_FSM.h"
#include "swap_FSM.h"
#include "combin_FSM.h"

  //-----------------------------------------------------------------------------
  extern "C"
  {
    void register_fsm(std::map<std::string,FSM_interfaces::FSM_creator_t>  & p_factory)
    {
      register_fsm("swap",FSM_examples::swap_FSM::create_FSM,p_factory);
      register_fsm("tree",FSM_examples::tree_FSM::create_FSM,p_factory);
      register_fsm("combin",FSM_examples::combin_FSM::create_FSM,p_factory);
    }
  }

//EOF
