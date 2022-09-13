#ifndef FYS4150_LINE_H
#define FYS4150_LINE_H


/**
 * Class for 
 */
class Line {

    // declaration of variables only accessible from within the class
    protected:
        double c0_, c1_;

    // declaration of constructor, destructor and class methods.
    public:
        Line(double c0, double c1); // Constructor
        virtual ~Line();            // Destructor

        double compute_val(double x);
};


#endif
