/*  LOOT

A load order optimisation tool for Oblivion, Skyrim, Fallout 3 and
Fallout: New Vegas.

Copyright (C) 2014-2017    WrinklyNinja

This file is part of LOOT.

LOOT is free software: you can redistribute
it and/or modify it under the terms of the GNU General Public License
as published by the Free Software Foundation, either version 3 of
the License, or (at your option) any later version.

LOOT is distributed in the hope that it will
be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with LOOT.  If not, see
<https://www.gnu.org/licenses/>.
*/

#ifndef LOOT_GUI_QUERY_OPEN_README_QUERY
#define LOOT_GUI_QUERY_OPEN_README_QUERY

#include "gui/cef/query/query.h"
#include "gui/helpers.h"
#include "gui/state/loot_paths.h"

namespace loot {
class OpenReadmeQuery : public Query {
public:
  std::string executeLogic() {
    auto logger = getLogger();
    if (logger) {
      logger->info("Opening LOOT's readme.");
    }
    OpenInDefaultApplication(LootPaths::getReadmePath());

    return "";
  }
};
}

#endif
