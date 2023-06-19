# CMake generated Testfile for 
# Source directory: C:/Users/ndima/Desktop/NEW_YARD/dependency_injection_assignment/dependency_injection/test
# Build directory: C:/Users/ndima/Desktop/NEW_YARD/dependency_injection_assignment/_build/test
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
if(CTEST_CONFIGURATION_TYPE MATCHES "^([Dd][Ee][Bb][Uu][Gg])$")
  add_test(test_dependency_injection "C:/Users/ndima/Desktop/NEW_YARD/dependency_injection_assignment/_build/bin/Debug/test_dependency_injection.exe" "--gtest_color=yes")
  set_tests_properties(test_dependency_injection PROPERTIES  _BACKTRACE_TRIPLES "C:/Users/ndima/Desktop/NEW_YARD/dependency_injection_assignment/dependency_injection/test/CMakeLists.txt;27;add_test;C:/Users/ndima/Desktop/NEW_YARD/dependency_injection_assignment/dependency_injection/test/CMakeLists.txt;0;")
elseif(CTEST_CONFIGURATION_TYPE MATCHES "^([Rr][Ee][Ll][Ee][Aa][Ss][Ee])$")
  add_test(test_dependency_injection "C:/Users/ndima/Desktop/NEW_YARD/dependency_injection_assignment/_build/bin/Release/test_dependency_injection.exe" "--gtest_color=yes")
  set_tests_properties(test_dependency_injection PROPERTIES  _BACKTRACE_TRIPLES "C:/Users/ndima/Desktop/NEW_YARD/dependency_injection_assignment/dependency_injection/test/CMakeLists.txt;27;add_test;C:/Users/ndima/Desktop/NEW_YARD/dependency_injection_assignment/dependency_injection/test/CMakeLists.txt;0;")
elseif(CTEST_CONFIGURATION_TYPE MATCHES "^([Mm][Ii][Nn][Ss][Ii][Zz][Ee][Rr][Ee][Ll])$")
  add_test(test_dependency_injection "C:/Users/ndima/Desktop/NEW_YARD/dependency_injection_assignment/_build/bin/MinSizeRel/test_dependency_injection.exe" "--gtest_color=yes")
  set_tests_properties(test_dependency_injection PROPERTIES  _BACKTRACE_TRIPLES "C:/Users/ndima/Desktop/NEW_YARD/dependency_injection_assignment/dependency_injection/test/CMakeLists.txt;27;add_test;C:/Users/ndima/Desktop/NEW_YARD/dependency_injection_assignment/dependency_injection/test/CMakeLists.txt;0;")
elseif(CTEST_CONFIGURATION_TYPE MATCHES "^([Rr][Ee][Ll][Ww][Ii][Tt][Hh][Dd][Ee][Bb][Ii][Nn][Ff][Oo])$")
  add_test(test_dependency_injection "C:/Users/ndima/Desktop/NEW_YARD/dependency_injection_assignment/_build/bin/RelWithDebInfo/test_dependency_injection.exe" "--gtest_color=yes")
  set_tests_properties(test_dependency_injection PROPERTIES  _BACKTRACE_TRIPLES "C:/Users/ndima/Desktop/NEW_YARD/dependency_injection_assignment/dependency_injection/test/CMakeLists.txt;27;add_test;C:/Users/ndima/Desktop/NEW_YARD/dependency_injection_assignment/dependency_injection/test/CMakeLists.txt;0;")
else()
  add_test(test_dependency_injection NOT_AVAILABLE)
endif()
