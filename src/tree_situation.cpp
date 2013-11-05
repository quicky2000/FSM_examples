#include "tree_situation.h"

namespace FSM_examples
{
  //-----------------------------------------------------------------------------
  tree_situation::tree_situation(void):
    m_content("")
  {
    this->set_context(*(new tree_context()));
  }
  //-----------------------------------------------------------------------------
  tree_situation::tree_situation(const tree_situation & p_situation):
    m_content(p_situation.m_content)
  {
    this->set_context(*(new tree_context()));
  }

  //----------------------------------------------------------------------------
  tree_situation::~tree_situation(void)
  {
  }

  //----------------------------------------------------------------------------
  const std::string tree_situation::to_string(void)const
  {
    return m_content;
  }

  //----------------------------------------------------------------------------
  const std::string tree_situation::get_string_id(void)const
  {
    return m_content;
  }

  //----------------------------------------------------------------------------
  void tree_situation::to_string(std::string & p_result)const
  {
    p_result = m_content;
  }

  //----------------------------------------------------------------------------
  void tree_situation::get_string_id(std::string & p_result)const
  {
    p_result = m_content;
  }

  //----------------------------------------------------------------------------
  bool tree_situation::less(const FSM_situation_if *p_situation)const
  {
    const tree_situation * l_situation = dynamic_cast<const tree_situation *>(p_situation);
    assert(l_situation);
    return m_content < l_situation->m_content;
  }

  //----------------------------------------------------------------------------
  bool tree_situation::is_final(void)const
  {
    return 3 == m_content.size();
  }

  //----------------------------------------------------------------------------
  void tree_situation::add(const char & p_char)
  {
    m_content += p_char;
  }
}
//EOF
