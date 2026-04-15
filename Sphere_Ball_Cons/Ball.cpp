#include <iostream>
#include "Ball.h"
#include "Sphere.h"

using namespace std;

Ball::Ball() : Sphere() 
{
	setName("FootBall");
}

Ball::Ball(double initialRadius, const string initialName) : Sphere(initialRadius)
{
	setName(initialName);
}
void Ball::getName(string currentName) const
{
	currentName = theName;
}
void Ball::setName(const string newName)
{
	theName = newName;
}
void Ball::resetBall(double newRadius, const string newName)
{
	setRadius(newRadius);
	setName(newName);
}
void Ball::displayStatistics() const
{
	cout << "Object Name = " << theName << ":";
	Sphere::displayStatistics();
}