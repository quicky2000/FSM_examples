#ifndef _TREE_SITUATION_ANALYZER_
#define _TREE_SITUATION_ANALYZER_

#include "FSM_situation_analyzer.h"
#include "tree_situation.h"
#include "tree_transition.h"

namespace FSM_examples
{
  class tree_situation_analyzer: public FSM_base::FSM_situation_analyzer<tree_situation,tree_transition>
    {
    public:
      // Methods inherited from FSM_situation_analyzer
      const std::string & get_class_name(void)const;
      std::vector<const tree_transition*> & get_transitions(tree_situation & p_situation);
      
      // Specific methods
    private:
      static const std::string m_class_name;
    };

}
#endif /* _TREE_SITUATION_ANALYZER_ */
//EOF
