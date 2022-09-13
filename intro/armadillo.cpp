/**
 * Armadillo
 *
 * Compile: Run with '-larmadillo'
 */

#include <armadillo>

int main() {

    int n = m = 10;
    int i = j =  2;

    /***************/
    /*** VECTORS ***/
    /***************/
    arma::vec x = arma::vec(n);             // Initialize vector but don't fill.
    arma::vec y = arma::vec(n).fill(2.);    // Declare and fill with 2's.
    arma::vec z = arma::vec(n).randu();     // Declare and will with random uniform values.

    double x_i = x(i);                      // Extract element i of x and assign it to x_i.

    x(i) = 1.1;                             // Change value of element


    /****************/
    /*** MATRICES ***/
    /****************/
    arma::mat A = arma::mat(n, m);          // Initialize but don't fill
    arma::mat B = arma::mat(n, m).fill(0.); // Declare and fill with zeros.
    arma::mat C = arma::mat(n, m).randn();  // Declare and fill with random values from the normal distribution.

    double A_ij = A(i,j);                   // Assign element (i,j) of the matrix A to A_ij.

    arma::vec col_vec = A.col(j); +         // Extract column j of A and assign it to col_vec.


    /************************************/
    /*** SAVE VECTOR/MATRICES TO FILE ***/
    /************************************/
    std::string filename = "matrice.txt";

    A.save(filename);

    B = arma::mat()                         // Initialize an arma::mat variable
    B.load(filename)                        // Load content of arma::mat A stored earlier into arma::mat B.







}