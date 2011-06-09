//
// libxmlmmm
// Copyright 2008 - 2009 Sean Farell
//
// This file is part of libqgl.
//
// libxmlmmm is free software: you can redistribute it and/or modify
// it under the terms of the GNU Lesser General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
//
// libxmlmmm is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU Lesser General Public License
// along with libxmlmmm. If not, see <http://www.gnu.org/licenses/>.
//

#ifndef _LIBXMLMM_DEFINES_H_INCLUDED_
#define _LIBXMLMM_DEFINES_H_INCLUDED_

#ifdef _WIN32
# ifdef BUILDING_LIBXMLMM
#  define LIBXMLMM_EXPORT __declspec(dllexport)
# else
#  define LIBXMLMM_EXPORT 
# endif // BUILDING_LIBXMLMM
#else
# define LIBXMLMM_EXPORT 
#endif

#endif // _LIBXMLMM_DEFINES_H_INCLUDED_
