
#include "PenningTrap.h"
#include "../particle/Particle.h"

PenningTrap::PenningTrap(double magneticFieldStrength, double potential, double dimension, std::vector<Particle> particle) {
    magneticFieldStrength_ = magneticFieldStrength;
    potential_ = potential;
    dimension_ = dimension;
    particle_ = particle;
}

arma::vec PenningTrap::externalElectricField(arma::vec point) {
    double k_e = 1.38935333 * pow(10, 5);
    arma::vec electric_field = {0,0,0};

    double q[5] = {0,0,0};
    arma::vec p[5] = {
            {0,0,0},
            {0,0,0},
            {0,0,0}
    };

    // Summing up point charges at all points
    for (int i = 0; i < (sizeof(q)/sizeof(*q)); ++i) {
        electric_field += q[i] * (point - p[i] / pow(abs(point - p[i]), 3));
    }

    electric_field *= k_e;

    return point;

}

arma::vec PenningTrap::externalMagneticField(arma::vec point) {
    // B = (F - qE) / qv
    return point;
}

arma::vec PenningTrap::particleInteractionForce(int p1, int p2) {
    arma::vec p;

    return p;
}

// Setters
void PenningTrap::setMagneticFieldStrength(double magneticFieldStrength) { magneticFieldStrength_ = magneticFieldStrength; }
void PenningTrap::setPotential(double potential) { potential_ = potential; }
void PenningTrap::setDimension(double dimension) { dimension_ = dimension; }
void PenningTrap::setParticle(std::vector<Particle> particle) { particle_ = particle; }

// Getters
double PenningTrap::getMagneticFieldStrength() { return magneticFieldStrength_; }
double PenningTrap::getPotential() { return potential_; }
double PenningTrap::getDimension() { return dimension_; }
std::vector<Particle> PenningTrap::getParticle() { return particle_; }