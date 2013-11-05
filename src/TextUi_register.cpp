
#include <map>
#include "tree_TextUi.h"
#include "swap_TextUi.h"
#include "combin_TextUi.h"

  //-----------------------------------------------------------------------------
  extern "C"
  {
    void register_fsm_ui(std::map<std::string,FSM_interfaces::FSM_UI_creator_t> & p_factory)
    {
      register_fsm_ui("tree",FSM_examples::tree_TextUi::create_text_ui,p_factory);
      register_fsm_ui("swap",FSM_examples::swap_TextUi::create_text_ui,p_factory);
      register_fsm_ui("combin",FSM_examples::combin_TextUi::create_text_ui,p_factory);
    }
  }

//EOF
