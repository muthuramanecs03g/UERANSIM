cmake_minimum_required(VERSION 3.17)

file(GLOB HDR_FILES *.hpp)
file(GLOB SRC_FILES *.cpp)

add_library(rrc ${HDR_FILES} ${SRC_FILES})

target_compile_options(rrc PRIVATE -Wall -Wextra -pedantic -Wno-unused-parameter)

target_link_libraries(rrc utils)
target_link_libraries(rrc asn-rrc)
target_link_libraries(rrc asn-utils)

