# CMakeList.txt : Top-level CMake project file, do global configuration
# and include sub-projects here.
#
#cmake_minimum_required (VERSION 3.8)

# Enable Hot Reload for MSVC compilers if supported.
#if (POLICY CMP0141)
#  cmake_policy(SET CMP0141 NEW)
#  set(CMAKE_MSVC_DEBUG_INFORMATION_FORMAT "$<IF:$<AND:$<C_COMPILER_ID:MSVC>,$<CXX_COMPILER_ID:MSVC>>,$<$<CONFIG:Debug,RelWithDebInfo>:EditAndContinue>,$<$<CONFIG:Debug,RelWithDebInfo>:ProgramDatabase>>")
#endif()

#project ("CMakeProjectOfMuthu")

# Include sub-projects.
#add_subdirectory ("CMakeProjectOfMuthu")

cmake_minimum_required(VERSION 3.10)
project(CMakeProjectOfMuthu)

set(CMAKE_CXX_STANDARD 17)

# Add main executable
add_executable(${PROJECT_NAME}
    CMakeProjectOfMuthu/main.cpp
    CMakeProjectOfMuthu/CMakeProjectOfMuthu.cpp
)

# --- TEST SETUP ---
# Add GoogleTest from local path
add_subdirectory(external/googletest)

# Add test executable
add_executable(${PROJECT_NAME}_test
    CMakeProjectOfMuthu/test_main.cpp
    CMakeProjectOfMuthu/CMakeProjectOfMuthu.cpp
)

# Link GoogleTest
target_link_libraries(${PROJECT_NAME}_test gtest_main)

enable_testing()
add_test(NAME AddFunctionTest COMMAND ${PROJECT_NAME}_test)

