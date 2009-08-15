/************************************************************************
 *                                                                      *
 *  FreeSynd - a remake of the classic Bullfrog game "Syndicate".       *
 *                                                                      *
 *   Copyright (C) 2005  Stuart Binge  <skbinge@gmail.com>              *
 *   Copyright (C) 2005  Joost Peters  <joostp@users.sourceforge.net>   *
 *   Copyright (C) 2006  Trent Waddington <qg@biodome.org>              *
 *   Copyright (C) 2006  Tarjei Knapstad <tarjei.knapstad@gmail.com>    *
 *                                                                      *
 *    This program is free software;  you can redistribute it and / or  *
 *  modify it  under the  terms of the  GNU General  Public License as  *
 *  published by the Free Software Foundation; either version 2 of the  *
 *  License, or (at your option) any later version.                     *
 *                                                                      *
 *    This program is  distributed in the hope that it will be useful,  *
 *  but WITHOUT  ANY WARRANTY;  without even  the implied  warranty of  *
 *  MERCHANTABILITY  or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU  *
 *  General Public License for more details.                            *
 *                                                                      *
 *    You can view the GNU  General Public License, online, at the GNU  *
 *  project's  web  site;  see <http://www.gnu.org/licenses/gpl.html>.  *
 *  The full text of the license is also included in the file COPYING.  *
 *                                                                      *
 ************************************************************************/

#ifndef MOD_H
#define MOD_H

#include <string>

/*!
 * Mod class.
 */
class Mod {
public:
    Mod(const char *mod_name, int mod_cost, const char *mod_desc, int mod_slot,
            int mod_icon, int mod_iconF = 0);

    const char *name() { return name_.c_str(); }
    int cost() { return cost_; }
    const char *desc() { return desc_.c_str(); }
    int slot() { return slot_; }
    int icon(bool isMale) { return isMale ? icon_ : icon_f_; }

    void drawInfo(int x, int y);

protected:
    std::string name_, desc_;
    int cost_, slot_, icon_, icon_f_;
};

#endif
