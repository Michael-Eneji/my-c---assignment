/*
 *  Question1.cpp
 *
 *  Name:           [ ENEJI, MICHAEL ODEY]
 *  Department:     [ COMPUTER SCIENCE]
 *  Matric. No:     [ PDS/2013/0721 ]
 *
 * a program that reads an integer 
 * and determines and prints whether it’s odd or even.
 *
 */
 
#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int main()
{
	int number1;
	
	cout << "Enter integer: ";
	cin >> number1;
	
	if (number1 % 2 == 0)
	cout << "The integer is even: ";
	if (number1 % 2 != 0)
	cout << "The integer is odd: ";
	
	return 0;
	system("PAUSE");
	return 'EXIT_SUCCESS';
}
