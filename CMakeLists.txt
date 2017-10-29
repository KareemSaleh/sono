cmake_minimum_required(VERSION 3.8)
project(Sono)

# Use our modified FindSDL2* modules
set(CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} "${Sono_SOURCE_DIR}/cmake")
# Set an output directory for our binaries
set(BIN_DIR ${Sono_SOURCE_DIR}/bin)

# Set the standard to C++11
set(CMAKE_CXX_STANDARD 11)

# Look up SDL2 and add the include directory to our include path
find_package(SDL2 REQUIRED)
find_package(SDL2_image REQUIRED)
include_directories(${SDL2_INCLUDE_DIR} ${SDL2_IMAGE_INCLUDE_DIR} include)

# Ensure engine library is built and linked to dependecies
add_library(Sono SHARED src/main.cpp)
target_link_libraries(Sono ${SDL2_LIBRARY} ${SDL2_IMAGE_LIBRARY})

# Subdirectory for testing app to fool around with the engine
add_subdirectory(test)

install(TARGETS Sono RUNTIME DESTINATION ${BIN_DIR})
