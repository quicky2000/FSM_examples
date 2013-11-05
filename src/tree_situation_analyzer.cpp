#include "tree_situation_analyzer.h"

namespace FSM_examples
{
  //-----------------------------------------------------------------------------
  const std::string & tree_situation_analyzer::get_class_name(void)const
  {
    return m_class_name;
  }

  //-----------------------------------------------------------------------------
  std::vector<const tree_transition*> &  tree_situation_analyzer::get_transitions(tree_situation & p_situation)
  {
    std::vector<const tree_transition*> & l_result = *(new std::vector<const tree_transition*>());
    if(p_situation.to_string().size() < 3)
      {
	for(int l_index = 0 ; l_index < 3 ; ++l_index)
	  {
	    l_result.push_back(new tree_transition('0' + l_index));
	  }
      }
    return l_result;
  }
  const std::string tree_situation_analyzer::m_class_name = "tree_situation_analyzer";
}
//EOF
