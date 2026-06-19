cmake_minimum_required(VERSION 3.1)
project(StudentRepo VERSION 1.0)
add_executable(StudentRepo src/main.cpp)
add_definitions(-std=c++11)
set(CXX_FLAGS "=Wall")
set(CMAKE__CXX_FLAGS, "${CXX_FLAGS}")

set(CMAKE_BUILD_TYPE Debug)

#add statio libraries to aid applications 
add_subdirectory(libs/mylib)
add_subdirectory(libs/student)
add_subdirectory(libs/course)
add_subdirectory(libs/dept)
add_subdirectory(libs/professor)
add_subdirectory(libs/college)

target_include_directories(StudentRepo PUBLIC libs/mylib)
target_link_libraries(StudentRepo PUBLIC MyLib)

target_include_directories(StudentRepo PUBLIC libs/student)
target_link_libraries(StudentRepo PUBLIC Student)

target_include_directories(StudentRepo PUBLIC libs/course)
target_link_libraries(StudentRepo PUBLIC Course)

target_include_directories(StudentRepo PUBLIC libs/dept)
target_link_libraries(StudentRepo PUBLIC Dept)

target_include_directories(StudentRepo PUBLIC libs/professor)
target_link_libraries(StudentRepo PUBLIC Professor)

target_include_directories(StudentRepo PUBLIC libs/college)
target_link_libraries(StudentRepo PUBLIC College)
