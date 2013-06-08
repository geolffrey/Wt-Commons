/***********************************************************************
Copyright (c) 2013 "Marco Gulino <marco.gulino@gmail.com>"

This file is part of Pandorica: https://github.com/GuLinux/Pandorica

Pandorica is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 3 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details (included the COPYING file).

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
***********************************************************************/


#ifndef WHTMLTEMPLATESLOCALIZEDSTRINGS_H
#define WHTMLTEMPLATESLOCALIZEDSTRINGS_H
#include <boost/filesystem/path.hpp>

#include <Wt/WLocalizedStrings>
#include <Wt/WObject>

namespace WtCommons {
  namespace WtCommonsPrivate {
    class WHTMLTemplatesLocalizedStringsPrivate;
  }
class WHTMLTemplatesLocalizedStrings : public Wt::WLocalizedStrings, public Wt::WObject
{

public:
  WHTMLTemplatesLocalizedStrings(const std::string &resourcesDir, Wt::WObject *parent = 0);
  virtual bool resolveKey(const std::string& key, std::string& result);
  virtual ~WHTMLTemplatesLocalizedStrings();
private:
  WtCommons::WtCommonsPrivate::WHTMLTemplatesLocalizedStringsPrivate *const d;
};


}
#endif // WHTMLTEMPLATESLOCALIZEDSTRINGS_H