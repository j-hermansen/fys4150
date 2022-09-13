#include <cmath>
#include <iostream>
#include <fstream>
using namespace std;

double u(int x) {
    return 1 - (1 - exp(-10)) * x - exp(-10 * x);
}

int main() {

    // 1. Array with x-values
    double x[] = {0, 0.2, 0.4, 0.6, 0.8, 1};

    // 2. Calculate u(x) for all x-values in array
    double ux[sizeof(x)/sizeof(x[0])];

    for (int i = 0; i < sizeof(x)/sizeof(x[0]); i++) {
        ux[i] = u(x[i]);
    }

    // 3. Write to file
    ofstream MyFile("../data/data.csv");  // create and open file

    for (int i = 0; i < sizeof(x)/sizeof(x[0]); i++) {
        MyFile << x[i];  // write to file
        MyFile << ",";
        MyFile << ux[i];
        MyFile << "\n";
    }

    MyFile.close();  // close the file
}

