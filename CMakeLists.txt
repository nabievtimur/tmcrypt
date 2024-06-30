cmake_minimum_required(VERSION 3.0.0)
project(tncrypt)

add_subdirectory(modules/Unity)

set(TN_INCLUDE modules/Unity/src include src)

# set(TN_MAGMA_MODULE tn_magma)
#set(TN_MAGMA_MODULE_SOURCE src/primitives/tn_magma.c)
#add_library(${TN_MAGMA_MODULE} MODULE ${TN_MAGMA_MODULE_SOURCE})
#target_include_directories(tn_magma src)
#target_include_directories(${TN_MAGMA_MODULE} ${TN_INCLUDE})

set(TN_LIB tncrypto)
set(TN_LIB_SOURCE
    src/tn_types.c)
add_library(${TN_LIB} STATIC ${TN_LIB_SOURCE})
target_include_directories(${TN_LIB} PUBLIC ${TN_INCLUDE})

# TEST_APPLICATION
set(TN_TEST tn_test)
set(TN_TEST_SOURCES
    test/tn_test.c
    src/primitives/tn_magma.c)
add_executable(${TN_TEST} ${TN_TEST_SOURCES})
target_include_directories(${TN_TEST} PUBLIC ${TN_INCLUDE})
target_link_libraries(${TN_TEST} unity)
target_compile_definitions(${TN_TEST} PUBLIC TN_TEST)
