// chapter 17 exer 15.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
/*Two cars start from rest and move with a constant acceleration along a
straight horizontal road for a given time. Write a C++ program that
prompts the user to enter the time the two cars traveled (same for both
cars) and the acceleration for each one of them, and then calculates and
displays the distance between them as well as a message “Car A is first”
or “Car B is first” depending on which car is leading the race. The
required formula is
Assume that the acceleration values entered are different from each
other. Also assume that the user enters valid values*/

#include <iostream>
using namespace std;

int main()
{

	int time;
	double accelerationA, accelerationB, S;

	cout << "enter the time for both cars: " << endl;
	cin >> time;
	cout << "enter the acceleration for each of the cars: " << endl;
	cin >> accelerationA >> accelerationB;

	if (accelerationA > accelerationB) {
		S = (1 / 2.0) * (accelerationA)*pow(time, 2);
		cout << "car A is first: " << S << endl;
	}
	else {
		S = (1 / 2.0) * (accelerationB)*pow(time, 2);
		cout << "car B is first : " << S << endl;
	}
	return 0;
}