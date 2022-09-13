#include <iostream>
#include <string>
#include <fstream>

int main() {
    // Set a filename
    std::string filename = "output.txt";

    // Create and open the output file. Or, technically, create
    // an "output file stream" (type std::ofstream) and connect
    // it to our filename.
    std::ofstream ofile;
    ofile.open(filename);  // Use: ofile.open(filename, std::ofstream::app); for appending to existing file

    // Send some text to this output file
    ofile << "Some output text" << std::endl;
  
    // Close the output file
    ofile.close();

    // All is well. Exit program with return code 0.
    return 0;
}