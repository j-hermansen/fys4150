
#ifndef FYS4150_PARTICLE_H
#define FYS4150_PARTICLE_H

#include <armadillo>

class Particle {

    private:
        double charge_;
        double mass_;
        arma::vec position_;
        arma::vec velocity_;

    public:
        Particle(double charge, double mass, arma::vec position, arma::vec velocity);

    public:

        // Setters
        void setCharge(double charge);
        void setMass(double mass);
        void setPosition(arma::vec position);
        void setVelocity(arma::vec velocity);

        // Getters
        double getCharge();
        double getMass();
        arma::vec getPosition();
        arma::vec getVelocity();

};

#endif
