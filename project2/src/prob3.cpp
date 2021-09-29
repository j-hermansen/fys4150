#include <iostream>
#include <armadillo>

using namespace std;
using namespace arma;


int main() {


    // Setup tridiagonal matrix
    int N = 6;
    int trig[N];

    arma::Mat<double> T = arma::mat(N, N);


    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            if (i == j) {
                T(i,j) = 3;
            } else if ((i+1) == j) {
                T(i,j) = 1;
            } else if ((i-1) == j) {
                T(i,j) = 1;
            }
        }
    }

    std::cout << "T:\n" <<  T << "\n";

    // Solve Av = bv (where b is lambda)
    vec eigval;
    mat eigvec;

    eig_sym(eigval, eigvec, T);

    std::cout << "Eigval:\n" << eigval << "\n";
    std::cout << "Eigvec:\n" << eigvec << "\n";

    // Solve Av = bv analytically
}