
#include <iostream>
#include <cmath>
#include "penningtrap/PenningTrap.h"

using namespace std;

int main() {

    // Init objects
    Particle particles[] = {
            Particle(0, 0, {0,0,0}, {0,0,0}),
            Particle(0, 0, {0,0,0}, {0,0,0}),
            Particle(0, 0, {0,0,0}, {0,0,0})
    };

    PenningTrap *penningTrap = new PenningTrap(0,0,0,{particles[0], particles[1], particles[2]});
}

/* Constants reference:
    double k_e = 1.38935333 * pow(10, 5);
    double T = 9.64852558 * pow(10, 1);
    double V = 9.64852558 * pow(10, 7);
    double B_0 = T;
    double V_0 = 10 * V;
    double d = pow(10, 4);
 */
