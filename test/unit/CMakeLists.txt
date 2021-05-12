####################################################################################################
############################              NOA unit testing             #############################
####################################################################################################


# GTest
include(fetch-gtest)
# Compatibility with LibTorch cxx11 ABI
target_compile_definitions(gtest PUBLIC _GLIBCXX_USE_CXX11_ABI=0)

# Test data
include(noa-test-data)

# Source files
set(NOA_TEST_SRC
        noa-test-suite.cc
        test-ghmc-sampler.cc
        test-dcs-calc.cc)

# Main test executables
if (BUILD_NOA_CUDA)
    add_executable(noa_test_suite 
        ${NOA_TEST_SRC} 
        test-ghmc-sampler-cuda.cc
        test-dcs-calc-cuda.cc 
        kernels.cu)
    set_target_properties(noa_test_suite PROPERTIES CUDA_SEPARABLE_COMPILATION ON)
else ()
    add_executable(noa_test_suite ${NOA_TEST_SRC})
endif ()
add_dependencies(noa_test_suite test_data)

# Link libraries
target_link_libraries(noa_test_suite PRIVATE gtest ${PROJECT_NAME})
target_compile_options(noa_test_suite
        PRIVATE -Wall -Wextra -Wpedantic -O3
        $<$<COMPILE_LANGUAGE:CUDA>:--extended-lambda>)


# Set up test
add_test(NAME TEST_${PROJECT_NAME}
        COMMAND noa_test_suite
        WORKING_DIRECTORY ${CMAKE_BINARY_DIR})