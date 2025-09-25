# Distributed under the OSI-approved BSD 3-Clause License.  See accompanying
# file Copyright.txt or https://cmake.org/licensing for details.

cmake_minimum_required(VERSION 3.5)

file(MAKE_DIRECTORY
  "/home/ishaan/eboat_src/build/lely_core_libraries/upstream"
  "/home/ishaan/eboat_src/build/lely_core_libraries/build"
  "/home/ishaan/eboat_src/install/lely_core_libraries"
  "/home/ishaan/eboat_src/build/lely_core_libraries/upstr_lely_core_libraries-prefix/tmp"
  "/home/ishaan/eboat_src/build/lely_core_libraries/upstr_lely_core_libraries-prefix/src/upstr_lely_core_libraries-stamp"
  "/home/ishaan/eboat_src/build/lely_core_libraries/upstr_lely_core_libraries-prefix/src"
  "/home/ishaan/eboat_src/build/lely_core_libraries/upstr_lely_core_libraries-prefix/src/upstr_lely_core_libraries-stamp"
)

set(configSubDirs )
foreach(subDir IN LISTS configSubDirs)
    file(MAKE_DIRECTORY "/home/ishaan/eboat_src/build/lely_core_libraries/upstr_lely_core_libraries-prefix/src/upstr_lely_core_libraries-stamp/${subDir}")
endforeach()
if(cfgdir)
  file(MAKE_DIRECTORY "/home/ishaan/eboat_src/build/lely_core_libraries/upstr_lely_core_libraries-prefix/src/upstr_lely_core_libraries-stamp${cfgdir}") # cfgdir has leading slash
endif()
