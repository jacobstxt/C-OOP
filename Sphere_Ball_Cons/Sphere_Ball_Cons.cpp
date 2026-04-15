#include <iostream>
#include <windows.h>
#include "Sphere.h" 
#include "Ball.h"

using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	Sphere unitSphere;
	unitSphere.displayStatistics();

	Sphere mySphere(5.1);
	cout << "d =" << mySphere.getDiameter() << endl;
	mySphere.displayStatistics();
	mySphere.setRadius(4.2);
	cout << "d=" << mySphere.getDiameter() << endl;
	mySphere.displayStatistics();


	Ball myBall; 
	myBall.resetBall(30.5, "My_Footbol");
	myBall.displayStatistics();

	Sphere* spherePtr1 = &mySphere; // створюємо об’єкт класу Sphere через вказівник
	spherePtr1->displayStatistics();

	Sphere* spherePtr2 = &myBall; // ініціюємо об’єкт класу Sphere через посилання &myBall
	spherePtr2->displayStatistics();

}

