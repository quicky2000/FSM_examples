#ifndef _SWAP_SITUATION_ANALYZER_
#define _SWAP_SITUATION_ANALYZER_

#include "FSM_situation_analyzer.h"
#include "swap_situation.h"
#include "swap_transition.h"

namespace FSM_examples
{
  class swap_situation_analyzer: public FSM_base::FSM_situation_analyzer<swap_situation,swap_transition>
    {
    public:
      // Methods inherited from FSM_situation_analyzer
      const std::string & get_class_name(void)const;
      std::vector<const swap_transition*> & get_transitions(swap_situation & p_situation);
      
      // Specific methods
    private:
      static const std::string m_class_name;
    };

}
#endif // _SWAP_SITUATION_ANALYZER_ 
//EOF
