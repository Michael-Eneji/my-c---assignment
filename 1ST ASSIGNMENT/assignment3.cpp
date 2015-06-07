/*
 *  Question3.cpp
 *
 *  Name:           [ ENEJI, MICHAEL ODEY]
 *  Department:     [ COMPUTER SCIENCE ]
 *  Matric. No:     [ PDS/2013/0721]
 *
 *  Program that prints a box, an oval, an arrow and a diamond
 *
 */
 
 #include <iostream>
using namespace std;

int main()
{
	int fiveinteger;
	int first, second, third, fourth, fifth;
	
	cout << "enter the five integer: ";
	cin >> fiveinteger;
	
	if(fiveinteger < 10000)
	{
		cout << "Re-arrange ";
	}
	
	if(fiveinteger > 9999)
	{
		cout << "Re-arrange ";
	}
	
	first = fiveinteger/10000;
	second = (fiveinteger/1000)%10;
	third = (fiveinteger/100)%10;
	fourth = (fiveinteger/10)%10;
	fifth = fiveinteger%10;
	
	cout << first;
	cout << second << second;
	cout << third << third;
	cout << fourth << fourth;
	cout << fifth << fifth;		

    return 0;
    system("PAUSE");
    
    return 'EXIT_SUCCESS';
}
