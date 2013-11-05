#include "combin_situation_analyzer.h"

namespace FSM_examples
{
  //-----------------------------------------------------------------------------
  const std::string & combin_situation_analyzer::get_class_name(void)const
  {
    return m_class_name;
  }

  //-----------------------------------------------------------------------------
  std::vector<const combin_transition*> & combin_situation_analyzer::get_transitions(combin_situation & p_situation)
    {
      std::vector<const combin_transition*> & l_result = *(new std::vector<const combin_transition*>());
      std::string l_content = p_situation.to_string();
      for(int l_index = l_content.size() ; l_index >= 0 ; --l_index)
	{
	  if('-' == l_content[l_index])
	    {
	      l_result.push_back(new combin_transition(l_index,'1'));
	      l_result.push_back(new combin_transition(l_index,'2'));
	    }
	}
      return l_result;
    }
  const std::string combin_situation_analyzer::m_class_name = "combin_situation_analyzer";

}
//EOF
