#include <cmath>
#include <iostream>
#include <fstream>
using namespace std;

double u(int x) {
    return 1 - (1 - exp(-10)) * x - exp(-10 * x);
}

int main() {

    // 1. Array with x-values
    int x[] = {2,3,4,5,6,7};

    // 2. Calculate u(x) for all x-values in array
    double ux[sizeof(x)/sizeof(x[0])];

    for (int i = 0; i < sizeof(x)/sizeof(x[0]); i++) {
        ux[i] = u(x[i]);
    }

    // 3. Write to file
    ofstream MyFile("data.txt");  // create and open file

    for (int i = 0; i < sizeof(x)/sizeof(x[0]); i++) {
        MyFile << x[i];  // write to file
        MyFile << ",";
        MyFile << ux[i];
        MyFile << "\n";
    }

    MyFile.close();  // close the file
}

