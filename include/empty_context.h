#ifndef _EMPTY_CONTEXT_H_
#define _EMPTY_CONTEXT_H_

#include "FSM_context.h"

namespace FSM_examples
{
  template <typename T>
  class empty_context:public FSM_context<T>
  {
  public:

    ~empty_context(void);
    
    // Methods inherited from interface
    std::string toString(void)const;
    
    // Specific methods
  private:
  };
  
  //----------------------------------------------------------------------------
  template <typename T>
  empty_context<T>::~empty_context(void)
  {
  }

  //----------------------------------------------------------------------------
  template <typename T>
  std::string empty_context<T>::toString(void)const
  {
    return "";
  }

}
#endif
//EOF
