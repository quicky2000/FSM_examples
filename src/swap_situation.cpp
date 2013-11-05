#include "swap_situation.h"

namespace FSM_examples
{
  //-----------------------------------------------------------------------------
  swap_situation::swap_situation(void):
    m_content("123")
  {
    this->set_context(*(new swap_context()));
  }
  //-----------------------------------------------------------------------------
  swap_situation::swap_situation(const std::string & p_content):
    m_content(p_content)
  {
    this->set_context(*(new swap_context()));
  }

  //----------------------------------------------------------------------------
  swap_situation::~swap_situation(void)
  {
  }

  //----------------------------------------------------------------------------
  const std::string swap_situation::to_string(void)const
  {
    return m_content;
  }

  //----------------------------------------------------------------------------
  void swap_situation::to_string(std::string & p_result)const
  {
    p_result = m_content;
  }

  //----------------------------------------------------------------------------
  const std::string swap_situation::get_string_id(void)const
  {
    return m_content;
  }

  //----------------------------------------------------------------------------
  void swap_situation::get_string_id(std::string & p_result)const
  {
    p_result = m_content;
  }

  //----------------------------------------------------------------------------
  bool swap_situation::less(const FSM_situation_if *p_situation)const
  {
    const swap_situation * l_situation = dynamic_cast<const swap_situation *>(p_situation);
    assert(l_situation);
    return m_content < l_situation->m_content;
  }

  //----------------------------------------------------------------------------
  bool swap_situation::is_final(void)const
  {
    return "312" == m_content;
  }

}
//EOF
