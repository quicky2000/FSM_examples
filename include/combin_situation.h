#ifndef _COMBIN_SITUATION_H_
#define _COMBIN_SITUATION_H_

#include "FSM_situation.h"
#include "combin_context.h"
#include <map>

namespace FSM_examples
{
  class combin_situation:public FSM_base::FSM_situation<combin_context>
  {
  public:
    combin_situation(void);
    combin_situation(const combin_situation & p_situation);
    ~combin_situation(void);
    // Methods inherited from FSM_situation
    const std::string to_string(void)const;
    void to_string(std::string &)const;
    const std::string get_string_id(void)const;
    void get_string_id(std::string&)const;


    bool is_final(void)const;

    bool less(const FSM_situation_if *p_situation)const;

    // Dedicated method
    void set(const uint_fast8_t & p_index,const char & p_char);
  private:
    std::string m_content;
  };

}
#endif
//EOF
