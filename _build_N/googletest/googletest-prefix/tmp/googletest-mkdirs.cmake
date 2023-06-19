# Distributed under the OSI-approved BSD 3-Clause License.  See accompanying
# file Copyright.txt or https://cmake.org/licensing for details.

cmake_minimum_required(VERSION 3.5)

file(MAKE_DIRECTORY
  "C:/Users/ndima/Desktop/NEW_YARD/dependency_injection_assignment/_build/googletest/googletest-src"
  "C:/Users/ndima/Desktop/NEW_YARD/dependency_injection_assignment/_build/googletest/googletest-build"
  "C:/Users/ndima/Desktop/NEW_YARD/dependency_injection_assignment/_build/googletest/googletest-prefix"
  "C:/Users/ndima/Desktop/NEW_YARD/dependency_injection_assignment/_build/googletest/googletest-prefix/tmp"
  "C:/Users/ndima/Desktop/NEW_YARD/dependency_injection_assignment/_build/googletest/googletest-prefix/src/googletest-stamp"
  "C:/Users/ndima/Desktop/NEW_YARD/dependency_injection_assignment/_build/googletest/googletest-prefix/src"
  "C:/Users/ndima/Desktop/NEW_YARD/dependency_injection_assignment/_build/googletest/googletest-prefix/src/googletest-stamp"
)

set(configSubDirs Debug;Release;MinSizeRel;RelWithDebInfo)
foreach(subDir IN LISTS configSubDirs)
    file(MAKE_DIRECTORY "C:/Users/ndima/Desktop/NEW_YARD/dependency_injection_assignment/_build/googletest/googletest-prefix/src/googletest-stamp/${subDir}")
endforeach()
if(cfgdir)
  file(MAKE_DIRECTORY "C:/Users/ndima/Desktop/NEW_YARD/dependency_injection_assignment/_build/googletest/googletest-prefix/src/googletest-stamp${cfgdir}") # cfgdir has leading slash
endif()
