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
#include "tree_TextUi.h"
#include "tree_situation.h"
#include <iostream>

using namespace std;

namespace FSM_examples
{
  //----------------------------------------------------------------------------
  tree_TextUi::tree_TextUi(void):FSM_UI<tree_situation>()
  {
  }

  //----------------------------------------------------------------------------
  void tree_TextUi::display_specific_situation(const tree_situation & p_situation)
  {
    cout << p_situation.to_string() << endl ;
  }

  //----------------------------------------------------------------------------
  const std::string & tree_TextUi::get_class_name(void)const
  {
    return m_class_name;
  }

  //----------------------------------------------------------------------------
  FSM_interfaces::FSM_UI_if & tree_TextUi::create_text_ui(void)
  {
    return *(new tree_TextUi());
  }

  const std::string tree_TextUi::m_class_name = "tree_TextUi";

}
//EOF
