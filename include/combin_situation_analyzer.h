#ifndef _COMBIN_SITUATION_ANALYZER_
#define _COMBIN_SITUATION_ANALYZER_

#include "FSM_situation_analyzer.h"
#include "combin_situation.h"
#include "combin_transition.h"

namespace FSM_examples
{
  class combin_situation_analyzer: public FSM_base::FSM_situation_analyzer<combin_situation,combin_transition>
    {
    public:
      // Methods inherited from FSM_situation_analyzer
      const std::string & get_class_name(void)const;
      
      // Specific methods
    private:
      std::vector<const combin_transition*> & get_transitions(combin_situation & p_situation);
      static const std::string m_class_name;
    };

}
#endif /* _COMBIN_SITUATION_ANALYZER_ */
//EOF
