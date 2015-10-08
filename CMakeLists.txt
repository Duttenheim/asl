PROJECT(ASL)

CMAKE_MINIMUM_REQUIRED(VERSION 2.8)

FILE(GLOB compiler_source_files code/*.cc)
FILE(GLOB compiler_header_files code/*.hh)

FILE(GLOB compiler_parser_files grammar/lexer.cc grammar/parser.cc)

IF(UNIX)
SET(CMAKE_CXX_FLAGS "-std=c++11")
ADD_DEFINITIONS(-Dstd=c++11)
ENDIF()

FIND_PACKAGE(FLEX)
FIND_PACKAGE(BISON)
ADD_LIBRARY(parser STATIC ${compiler_parser_files})
TARGET_LINK_LIBRARIES(parser ${FLEX_LIBRARIES})
TARGET_INCLUDE_DIRECTORIES(parser PUBLIC grammar ${CMAKE_CURRENT_SOURCE_DIR})

ADD_EXECUTABLE(compiler ${compiler_source_files} ${compiler_header_files})
TARGET_LINK_LIBRARIES(compiler parser)
