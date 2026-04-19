#include <iostream>
#include <windows.h>
#include "Sphere.h" 
#include "Ball.h"
#include "SmallBall.h"


using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

	cout << "\n=== Unit Sphere ===\n";
	Sphere unitSphere;
	unitSphere.displayStatistics();

	cout << "\n=== My Sphere (radius 5.1) ===\n";
	Sphere mySphere(5.1);
	cout << "d = " << mySphere.getDiameter() << endl;
	mySphere.displayStatistics();

	cout << "\n=== My Sphere (radius changed to 4.2) ===\n";
	mySphere.setRadius(4.2);
	cout << "d = " << mySphere.getDiameter() << endl;
	mySphere.displayStatistics();

	cout << "\n=== My Ball ===\n";
	Ball myBall;
	myBall.resetBall(30.5, "My_Football");
	myBall.displayStatistics();

	cout << "\n=== Sphere Pointer 1 (points to mySphere) ===\n";
	Sphere* spherePtr1 = &mySphere;
	spherePtr1->displayStatistics();

	cout << "\n=== Sphere Pointer 2 (points to myBall) ===\n";
	Sphere* spherePtr2 = &myBall;
	spherePtr2->displayStatistics();

	cout << "\n=== Small Ball ===\n";
	SmallBall mySmallBall(2.5, "My_SmallBall", 0.5);
	mySmallBall.displayStatistics();

}

