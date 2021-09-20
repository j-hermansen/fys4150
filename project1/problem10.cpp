
#include <time.h>
#include "problem7.h"

int main () {

    int timing_array[10];


    for (int i = 0; i < 10; i++) {
        clock_t t1 = clock();
        matrice_calculation(10);
        clock_t t2 = clock();
        double duration_seconds = ((double) (t2 - t1)) / CLOCKS_PER_SEC;

        timing_array[i] = duration_seconds;
    }

    // Write times to a file
    ofstream MyFile("time-general-algorithm.txt");  // create and open file

    MyFile << "| Attempt | Time |";
    MyFile << "| ------- | ---- |";

    MyFile << "v^T = ( ";
    for (int i = 0; i < sizeof(timing_array)/sizeof(timing_array[0]); i++) {
        // write time to file
        MyFile << "| ";
        MyFile << i;
        MyFile << " | ";
        MyFile << timing_array[i];
        MyFile << " |";
        MyFile << "\n";
    }

    MyFile.close();  // close the file



}