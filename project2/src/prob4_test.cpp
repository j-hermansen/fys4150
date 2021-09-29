
#include <gtest/gtest.h>
#include <iostream>

#include "prob4.cpp"

// Google Test test cases are created using a C++ preprocessor macro
// Here, a "test suite" name and a specific "test name" are provided.
TEST(largestOffDiagonal, test_name) {

// Test matrix A
arma::Mat<double> A = arma::mat(6, 6);

// Fill matrix A with values from assigment
mat(0,0) = 1;
mat(0,0) = 0;
mat(0,0) = 0;
mat(0,0) = 0.5;

mat(0,0) = 0;
mat(0,0) = 1;
mat(0,0) = -0.7;
mat(0,0) = 0;

mat(0,0) = 0;
mat(0,0) = -0.7;
mat(0,0) = 1;
mat(0,0) = 0;

mat(0,0) = 0.5;
mat(0,0) = 0;
mat(0,0) = 0;
mat(0,0) = 1;


// TODO: test code -> remove
std::cout << "Hello world!" << std::endl;
// Google Test will also provide macros for assertions.
ASSERT_EQ(1+1, 2);
}

// Google Test can be run manually from the main() function
// or, it can be linked to the gtest_main library for an already
// set-up main() function primed to accept Google Test test cases.
//int main(int argc, char** argv) {
//    ::testing::InitGoogleTest(&argc, argv);
//    return RUN_ALL_TESTS();
//}
