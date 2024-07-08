cmake_minimum_required(VERSION 2.8 FATAL_ERROR)
#project(my_gazebo_plugin)

# Find Gazebo
find_package(gazebo REQUIRED)

# Include Gazebo headers
include_directories(${GAZEBO_INCLUDE_DIRS})
link_directories(${GAZEBO_LIBRARY_DIRS})

list(APPEND CMAKE_CXX_FLAGS "${GAZEBO_CXX_FLAGS}")

# Add your plugin source file
add_library(myOffice SHARED script/myOffice.cpp)

# Link the plugin with Gazebo libraries
target_link_libraries(myOffice ${GAZEBO_LIBRARIES})
