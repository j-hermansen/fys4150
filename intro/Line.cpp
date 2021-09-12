
#include "Line.h"

// This is how a constructor looks like in practice in the source file
Line::Line(double c0, double c1) {

    //Assign member variables c0_ and c1_ to input variables c0 and c1, respectively.
    c0_ = c0;
    c1_ = c1;
}

double Line::compute_val(double x){

    // Returns the value of a straight line for an input x.
    return c0_ + c1_*x;
}

int main() {
    double x = 2; //Point to evaluate the polynomials in
    double c0 = 1, c1 = 1; //Coefficients of the straight line.
    Line my_line = Line(c0, c1); //Create a Line object called my_line
    double y = my_line.compute_val(x); //Compute y = c0 + c1*x for a given x.
    return 0;
}