#pragma once
#include "Ball.h"

using std::string;

class SmallBall : public Ball
{
public:
	SmallBall();
	SmallBall(double initialRadius, const string initialName, double initialMass);

	double getMass() const;
	void setMass(double newMass);

	double calculateWeight() const;


	void displayStatistics() const;
private:
	double mass;
	const double g = 9.81;
};