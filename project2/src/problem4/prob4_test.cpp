
#include <gtest/gtest.h>
#include <iostream>

#include "prob4.cpp"


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

}

// Run tests
//int main(int argc, char** argv) {
//    ::testing::InitGoogleTest(&argc, argv);
//    return RUN_ALL_TESTS();
//}
