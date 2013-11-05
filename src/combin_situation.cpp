#include "combin_situation.h"

namespace FSM_examples
{
  //-----------------------------------------------------------------------------
  combin_situation::combin_situation(void):
    m_content("---")
  {
    this->set_context(*(new combin_context()));
  }
  //-----------------------------------------------------------------------------
  combin_situation::combin_situation(const combin_situation & p_situation):
    m_content(p_situation.m_content)
  {
    this->set_context(*(new combin_context()));
  }

  //----------------------------------------------------------------------------
  combin_situation::~combin_situation(void)
  {
  }

  //----------------------------------------------------------------------------
  const std::string combin_situation::to_string(void)const
  {
    return m_content;
  }

  //----------------------------------------------------------------------------
  void combin_situation::to_string(std::string & p_result)const
  {
    p_result = m_content;
  }

  //----------------------------------------------------------------------------
  const std::string combin_situation::get_string_id() const
  {
    return m_content;
  }

  //----------------------------------------------------------------------------
  void combin_situation::get_string_id(std::string & p_result)const
  {
    p_result = m_content;
  }


  //----------------------------------------------------------------------------
  bool combin_situation::less(const FSM_situation_if *p_situation)const
  {
    const combin_situation * l_situation = dynamic_cast<const combin_situation *>(p_situation);
    assert(l_situation);
    return m_content < l_situation->m_content;
  }

  //----------------------------------------------------------------------------
  bool combin_situation::is_final(void)const
  {
    return false ; //std::string::npos == m_content.find('-');
  }

  //----------------------------------------------------------------------------
  void combin_situation::set(const uint_fast8_t & p_index,
			     const char & p_char)
  {
    assert(p_index < m_content.size());
    assert('-' == m_content[p_index]);
    m_content[p_index] = p_char;
  }
}
//EOF
