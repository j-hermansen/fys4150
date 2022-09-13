#include <iostream>
#include <fstream>
using namespace std;

double[] matrice_calculation(int n) {
    // 1. create arrays for vector a, b, c, g, and v
    double a[n-1];
    double b[n];
    double c[n-1];
    double g[n];
    double v[n];

    for (int i = 0; i < (n-1); i++) {
        // 2. subtract first element of vector b from first element of vector a
        // 3. assign this new value to first element of vector a
        a[i] = a[i] - b[i];

        // 4. subtract first element of vector c from second element of vector b
        // 5. assign this new value to second element of vector b
        b[i+1] = b[i+1] - c[i];

        // 6. subtract first element of vector g from second element of vector g
        // 7. assign this new value to second element of vector g
        g[i+1] = g[i+1] - g[i+1];
    }
    // 8. jump to next element in vector a, vector b,  vector c, and  vector g, and repeat steps 2-7 until you reach last element in vector a

    // 9. find value of last element in vector v by dividing last element of vector g with last element of vector b
    v[n-1] = g[n-1] / b[n-1];

    // 10. divide last element of vector b with last element of vector b
    b[n-1] = b[n-1] / b[n-1];

    // 11. divide last element of vector g with last element of vector b
    g[n-1] = g[n-1] / b[n-1];


    for (int i = n-1; i > 1; i--) {
        // 12. jump to the previous element in vector b, subtract last element of vector c times last element of vector b and divide by previous element in vector b (itself)
        b[i-2] = b[i-2] - ( (c[i-1] * b[i-1]) / b[i-2]);

        // 13. jump to the last element in vector c, subtract last element of vector c times last element of vector b and divide by previous element in vector b
        c[i-1] = c[i-1] - ( (c[i-1] * b[i-1]) / b[i-2]);

        // 14. jump to the previous element in vector g, subtract last element of vector c, times last element of vector g and divide by previous element in vector b
        g[i-2] = g[i-2] - ( (c[i-1] * g[i-1]) / b[i-2]);
    }
    // 15. jump to the previous element in vector b, vector c, and vector g,  and repeat steps 12-14 until you reach first element in vector b



    // Write solution v to file (v^T)
    ofstream MyFile("tridiagonal-matrix-solution.txt");  // create and open file

    MyFile << "v^T = ( ";
    for (int i = 0; i < sizeof(v)/sizeof(v[0]); i++) {
        MyFile << v[i];  // write to file
        MyFile << " ";
    }
    MyFile << " )";

    MyFile.close();  // close the file

}

int main() {
    int n = 6;  // TODO: n can be taken as program argument

    matrice_calculation(n);
}