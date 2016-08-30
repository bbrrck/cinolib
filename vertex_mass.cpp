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
#include <cinolib/vertex_mass.h>

namespace cinolib
{

template<class Mesh>
CINO_INLINE
Eigen::SparseMatrix<double> mass_matrix(const Mesh & m)
{
    typedef Eigen::Triplet<double> Entry;

    std::vector<Entry>  entries;
    for(int vid=0; vid<m.num_vertices(); ++vid)
    {
        entries.push_back(Entry(vid, vid, m.vertex_mass(vid)));
    }

    Eigen::SparseMatrix<double> M(m.num_vertices(), m.num_vertices());
    M.setFromTriplets(entries.begin(), entries.end());

    return M;
}


}
