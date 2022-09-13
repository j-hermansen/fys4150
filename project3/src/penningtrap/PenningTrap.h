
#ifndef FYS4150_PENNINGTRAP_H
#define FYS4150_PENNINGTRAP_H

#include <vector>
#include "../particle/Particle.h"


class PenningTrap {

    private:
        double magneticFieldStrength_;
        double potential_;
        double dimension_;
        std::vector<Particle> particle_;

    public:
        PenningTrap(double magneticFieldStrength, double potential, double dimension, std::vector<Particle> particle);

    public:
        arma::vec externalElectricField(arma::vec point);
        arma::vec externalMagneticField(arma::vec point);
        arma::vec particleInteractionForce(int p1, int p2);

        void forwardEuler(double dt);
        void rungeKutta4(double dt);

        // Setters
        void setMagneticFieldStrength(double magneticFieldStrength);
        void setPotential(double potential);
        void setDimension(double dimension);
        void setParticle(std::vector<Particle> particle);

        // Getters
        double getMagneticFieldStrength();
        double getPotential();
        double getDimension();
        std::vector<Particle> getParticle();

};

#endif