#include "SmallBall.h"
#include "Ball.h"
#include <iostream>


using namespace std;


SmallBall::SmallBall() : Ball(), mass(0.0) {}

SmallBall::SmallBall(double initialRadius, const string initialName, double initialMass)
    : Ball(initialRadius, initialName), mass(initialMass) {}

double SmallBall::getMass() const {
    return mass;
}

void SmallBall::setMass(double newMass) {
    if (newMass >= 0) mass = newMass;
}


double SmallBall::calculateWeight() const {
    return mass * g;
}

void SmallBall::displayStatistics() const {
    Ball::displayStatistics();
    cout << "Mass: " << mass << " kg\n"
    << "Weight: " << calculateWeight() << " N\n";
}