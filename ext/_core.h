/*
* This file is part of pydpc.
* 
* Copyright 2016 Christoph Wehmeyer
* 
* pydpc is free software: you can redistribute it and/or modify
* it under the terms of the GNU Lesser General Public License as published by
* the Free Software Foundation, either version 3 of the License, or
* (at your option) any later version.
* 
* This program is distributed in the hope that it will be useful,
* but WITHOUT ANY WARRANTY; without even the implied warranty of
* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
* GNU General Public License for more details.
* 
* You should have received a copy of the GNU Lesser General Public License
* along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef PYDPC_HEADER
#define PYDPC_HEADER

extern void _get_distances(double *points, int npoints, int ndim, double *distances);
extern double _get_kernel_size(double *distances, int npoints, double fraction);
extern void _get_density(double kernel_size, double *distances, int npoints, double *density);
extern void _get_delta_and_neighbour(
    double max_distance, double *distances, int *order, int npoints, double *delta, int *neighbour);

#endif