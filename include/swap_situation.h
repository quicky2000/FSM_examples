#ifndef _SWAP_SITUATION_H_
#define _SWAP_SITUATION_H_

#include "FSM_situation.h"
#include "swap_context.h"
#include <map>

namespace FSM_examples
{
  class swap_situation:public FSM_base::FSM_situation<swap_context>
  {
  public:
    swap_situation(void);
    swap_situation(const std::string & p_content);
    ~swap_situation(void);
    // Methods inherited from FSM_situation
    const std::string to_string(void)const;
    const std::string get_string_id(void)const;
    void to_string(std::string &)const;
    void get_string_id(std::string &)const;
    bool is_final(void)const;
    bool less(const FSM_situation_if *p_situation)const;

    // Dedicated method
  private:
    std::string m_content;
  };

}
#endif // _SWAP_SITUATION_H_
//EOF
