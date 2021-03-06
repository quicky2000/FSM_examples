/*    This file is part of FSM_framework
      The aim of this software is to provided generic facilities for FSM analyzis
      Copyright (C) 2013  Julien Thevenon ( julien_thevenon at yahoo.fr )

      This program is free software: you can redistribute it and/or modify
      it under the terms of the GNU General Public License as published by
      the Free Software Foundation, either version 3 of the License, or
      (at your option) any later version.

      This program is distributed in the hope that it will be useful,
      but WITHOUT ANY WARRANTY; without even the implied warranty of
      MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
      GNU General Public License for more details.

      You should have received a copy of the GNU General Public License
      along with this program.  If not, see <http://www.gnu.org/licenses/>
*/
#include "tree_motor.h"

namespace FSM_examples
{
  //----------------------------------------------------------------------------
  const std::string & tree_motor::get_class_name(void)const
    {
      return m_class_name;
    }
  //----------------------------------------------------------------------------
  tree_situation & tree_motor::run(const tree_situation & p_situation,
                                   const tree_transition & p_transition)
    {
      tree_situation & l_result = *(new tree_situation(p_situation));
      l_result.add(p_transition.get_char());
      return l_result;
    }
  //----------------------------------------------------------------------------
  void tree_motor::apply(tree_situation & p_situation,
                         const tree_transition & p_transition)
  {
    p_situation.add(p_transition.get_char());
  }

  //----------------------------------------------------------------------------
  void tree_motor::revert_transition(tree_situation &  p_situation)
  {
    p_situation.remove_last();
  }

  const std::string tree_motor::m_class_name = "tree_motor";
}
//EOF
