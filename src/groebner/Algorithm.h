/*
4ti2 -- A software package for algebraic, geometric and combinatorial
problems on linear spaces.

Copyright (C) 2006 4ti2 team.
Main author(s): Peter Malkin.

This program is free software; you can redistribute it and/or
modify it under the terms of the GNU General Public License
as published by the Free Software Foundation; either version 2
of the License, or (at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program; if not, write to the Free Software
Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301, USA. 
*/

#ifndef _4ti2_groebner__Algorithm_
#define _4ti2_groebner__Algorithm_

#include "groebner/BinomialSet.h"
#include <string>

namespace _4ti2_
{

class Generation;

class Algorithm
{
public:
    Algorithm();
    virtual ~Algorithm();

    virtual bool algorithm(BinomialSet& bs) = 0;

    void set_generation(Generation* _gen);
    const std::string& get_name() const;

protected:
    std::string name;
    Generation* gen;

    Statistics stats;
};

} // namespace _4ti2_

#endif
