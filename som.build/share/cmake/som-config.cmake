################################################################################
#
# SOM: Stochastic Optimization Method for Analytic Continuation
#
# Copyright (C) 2016-2024 Igor Krivenko <igor.s.krivenko@gmail.com>
#
# SOM is free software: you can redistribute it and/or modify it under the
# terms of the GNU General Public License as published by the Free Software
# Foundation, either version 3 of the License, or (at your option) any later
# version.
#
# SOM is distributed in the hope that it will be useful, but WITHOUT ANY
# WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS
# FOR A PARTICULAR PURPOSE. See the GNU General Public License for more
# details.
#
# You should have received a copy of the GNU General Public License along with
# SOM. If not, see <http://www.gnu.org/licenses/>.
#
################################################################################

# This file allows other CMake Projects to find som
# We provide general project information and reestablish the exported CMake Targets

# Multiple inclusion guard
if(NOT som_FOUND)
set(som_FOUND TRUE)
set_property(GLOBAL PROPERTY som_FOUND TRUE)

# Version
set(som_VERSION 2.1.0 CACHE STRING "som version")
set(som_GIT_HASH  CACHE STRING "som git hash")

# Root of the installation
set(som_ROOT /Users/ssr38/anaconda3/envs/triqs CACHE STRING "som root directory")

# Find the target dependencies
function(find_dep)
  get_property(${ARGV0}_FOUND GLOBAL PROPERTY ${ARGV0}_FOUND)
  if(NOT ${ARGV0}_FOUND)
    find_package(${ARGN} REQUIRED HINTS /Users/ssr38/anaconda3/envs/triqs)
  endif()
endfunction()
find_dep(Boost 1.58)
find_dep(MPI)

# Include the exported targets of this project
include(/Users/ssr38/anaconda3/envs/triqs/lib/cmake/som/som-targets.cmake)

message(STATUS "Found som-config.cmake with version 2.1.0, hash = , root = /Users/ssr38/anaconda3/envs/triqs")

# Was the Project built with Documentation?
set(som_WITH_DOCUMENTATION OFF
    CACHE BOOL "Was som build with documentation?")

# Was the Project built with PythonSupport?
set(som_WITH_PYTHON_SUPPORT ON
    CACHE BOOL "Was som build with python support?")
if(ON)
  set(som_MODULE_DIR
      /Users/ssr38/anaconda3/envs/triqs/lib/python3.12/site-packages
      CACHE BOOL "The som python module directory")
endif()

endif()
