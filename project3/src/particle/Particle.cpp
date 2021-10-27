
#include "Particle.h"

Particle::Particle(double charge, double mass, arma::vec position, arma::vec velocity) {
    charge_ = charge;
    mass_ = mass;
    position_ = position;
    velocity_ = velocity;
}

// Setters
void Particle::setCharge(double charge) { charge_ = charge; }
void Particle::setMass(double mass) { mass_ = mass; }
void Particle::setPosition(arma::vec position) { position_ = position; }
void Particle::setVelocity(arma::vec velocity) { velocity_ = velocity; }

// Getters
double Particle::getCharge() { return charge_; }
double Particle::getMass() { return mass_; }
arma::vec Particle::getPosition() { return position_; }
arma::vec Particle::getVelocity() { return velocity_; }
