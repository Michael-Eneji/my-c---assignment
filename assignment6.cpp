/*
 *  Question6.cpp
 *
 *  Name:           [ ENEJI, MICHAEL ODEY]
 *  Department:     [ COMPUTER SCIENCE ]
 *  Matric. No:     [ PDS/2013/0721 ]
 *
 *  Body Mass Index (BMI) calculator application that reads
 *  the user’s weight in kilograms and height in meters,
 *  calculates and display the user’s body mass index
 */
 
 #include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
	int weight;
	int height;
	int BMI;
	cout << "Enter your weight(kg): " <<endl;
	cin >> weight;
	
	cout << "Enter your height(m): " <<endl;
	cin >> height;
	
	BMI = weight / pow( height, 2);
	
	cout << setprecision(2) << fixed << "Your BMI is: " <<BMI <<endl;
	
	if (BMI <= 18.5)
	cout << "You are under-weight." <<endl;
	else
	if ((BMI > 18.5) && (BMI < 24.9))
	cout << "Your weight is in the normal range. =)" <<endl;
	else
	if ((BMI > 25) && (BMI < 29.9))
	cout << "You are over-weight." <<endl;
	else
	cout << "You are Obese." <<endl;

	return 0;
	system("PAUSE");
	
	return 'EXIT_SUCCESS'; 	
}
