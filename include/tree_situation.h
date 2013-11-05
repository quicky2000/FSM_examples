#ifndef _TREE_SITUATION_H_
#define _TREE_SITUATION_H_

#include "FSM_situation.h"
#include "tree_context.h"
#include <map>

namespace FSM_examples
{
  class tree_situation:public FSM_base::FSM_situation<tree_context>
  {
  public:
    tree_situation(void);
    tree_situation(const tree_situation & p_situation);
    ~tree_situation(void);
    // Methods inherited from FSM_situation
    const std::string to_string(void)const;
    void to_string(std::string &)const;
    const std::string get_string_id(void)const;
    void get_string_id(std::string &)const;
    bool is_final(void)const;
    bool less(const FSM_situation_if *p_situation)const;

    // Dedicated method
    void add(const char & p_char);
  private:
    std::string m_content;
  };

}
#endif
//EOF
