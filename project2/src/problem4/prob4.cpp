#include <iostream>
#include <armadillo>

using namespace std;
using namespace arma;

double largestOffDiagonal(arma::Mat<double> matrix, int *row, int *column) {

    double largest;

    std::cout << "Size of matrix:\n" << size(matrix) << "\n";
    for (int i = 0; i < 6; ++i) {
        for (int j = 0; j < 6; ++j) {
            if (j == i) {
                continue;
            }
            if(matrix(i,j) > largest) {
                largest = matrix(i,j);
                *row = i;
                *column = j;
            }
        }
    }

    return largest;


}

int main(int argc, char *argv[]) {

    arma::Mat<double> T = arma::mat(6, 6).randn();
    int *row, *column;

    std::cout << "row before:\n" <<  *row << "\n";
    std::cout << "column before:\n" <<  *column << "\n";

    std::cout << "T:\n" <<  T << "\n";

    std::cout << "Largest:\n" << largestOffDiagonal(T, row, column) << "\n";

    std::cout << "row after:\n" <<  *row << "\n";
    std::cout << "column after:\n" <<  *column << "\n";
}