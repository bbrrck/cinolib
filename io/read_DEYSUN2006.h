/****************************************************************************
* Italian National Research Council                                         *
* Institute for Applied Mathematics and Information Technologies, Genoa     *
* IMATI-GE / CNR                                                            *
*                                                                           *
* Author: Marco Livesu (marco.livesu@gmail.com)                             *
*                                                                           *
* Copyright(C) 2016                                                         *
* All rights reserved.                                                      *
*                                                                           *
* This file is part of CinoLib                                              *
*                                                                           *
* CinoLib is free software; you can redistribute it and/or modify           *
* it under the terms of the GNU General Public License as published by      *
* the Free Software Foundation; either version 3 of the License, or         *
* (at your option) any later version.                                       *
*                                                                           *
* This program is distributed in the hope that it will be useful,           *
* but WITHOUT ANY WARRANTY; without even the implied warranty of            *
* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the             *
* GNU General Public License (http://www.gnu.org/licenses/gpl.txt)          *
* for more details.                                                         *
****************************************************************************/
#ifndef READ_DEYSUN2006_H
#define READ_DEYSUN2006_H

#include <cinolib/cinolib.h>

#include <vector>

namespace cinolib
{

CINO_INLINE
void read_DeyandSun2006(const char          * filename,
                        std::vector<double> & coords,
                        std::vector<int>    & arcs,
                        std::vector<double> & radius);
}

#ifndef  CINO_STATIC_LIB
#include "read_DEYSUN2006.cpp"
#endif

#endif // READ_DEYSUN2006