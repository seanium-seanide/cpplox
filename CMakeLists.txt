cmake_minimum_required(VERSION 3.22)
set(CMAKE_CXX_STANDARD            20)
set(CMAKE_CXX_STANDARD_REQUIRED   YES)
set(CMAKE_CXX_EXTENSIONS          OFF)
project(cpplox)

# Source and include directories
set(SRC_DIR ${CMAKE_CURRENT_SOURCE_DIR}/src)
set(INC_DIR ${CMAKE_CURRENT_SOURCE_DIR}/include)

# Source files
#set(SOURCES
#  ${SRC_DIR}/main.cpp
#  ${SRC_DIR}/Lox.cpp
#  ${SRC_DIR}/Scanner.cpp
#  ${SRC_DIR}/Token.cpp
#  ${SRC_DIR}/ErrorReporter.cpp
#)
file(GLOB_RECURSE SOURCES CONFIGURE_DEPENDS
  ${CMAKE_CURRENT_SOURCE_DIR}/src/*.cpp
)

# Executablie binaryes
add_executable(${PROJECT_NAME} ${SOURCES})
target_include_directories(${PROJECT_NAME} PRIVATE ${INC_DIR})

# Compile flags
if(MSVC)
  target_compile_options(${PROJECT_NAME} PRIVATE /W4 /permissive-)
else()
  target_compile_options(${PROJECT_NAME} PRIVATE -Wall)
endif()

# Output directories
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)

# Link libfmt
find_package(fmt QUIET CONFIG)
if(fmt_FOUND)
  target_link_libraries(${PROJECT_NAME} PRIVATE fmt::fmt)
else()
  target_link_libraries(${PROJECT_NAME} PRIVATE fmt) # Only works if -lfmt is available
endif()
