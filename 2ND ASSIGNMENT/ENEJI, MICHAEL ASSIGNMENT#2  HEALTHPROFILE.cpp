/*
 * HealthProfile.cpp
 * HealthProfile member-function definitions. This file contains
 * implementations of the member functions prototyped in HealthProfile.h
 *
 * Stub file for Programming Assignment #2
 *
 * Name:        [ ENEJI, MICHAEL ODEY ]
 * Matric No:   [ PDS/2013/0721]
 * Department:  [ COMPUTER SCIENCE ]
 *
 */

#include <iostream>
#include <string>           // uses C++ string class
#include <math.h>           // uses C++ math class
#include <iomanip>          // used iomanip class to format output text
#include "HealthProfile.h"  // used to include functions of the class
using namespace std;

// constructor initializes patient information
HealthProfile::HealthProfile( string firstName, string lastName, string gender, int month,
                             int day, int year, int weight, double height, int today,
                             int thisMonth, int thisYear)
{
    void set_FirstName(string firstName);      // call set function to initialize firstName
    void set_LastName(string lastName );        // call set function to initialize lastName
    void set_Gender(string gender );            // call set function to initialize gender
    void set_Month(int month );              // call set function to initialize month
    void set_Day(int day );                  // call set function to initialize day
    void set_Year(int year );                // call set function to initialize year
    void set_Weight(int weight );            // call set function to initialize weight
    void set_Height(double height );            // call set function to initialize height
    void set_Age(int today, int thisMonth, int thisYear);  // call set function to calculate age
}

// funtion to print object information
void HealthProfile::getInformation()
{
    cout << "\n\nHEALTH PROFILE FOR - " << getfirstName() << " " << getlastName() << endl;
    cout << "First Name: " << setw(17) << getfirstName() << endl;
    cout << "Last Name: " << setw(19) << getlastName() << endl;
    cout << "Gender: " << setw(20) << getgender() << endl;
    cout << "Date of Birth: " << setw(10) << gettoday() << "/" << getmonth() << "/" << getyear() << endl;
    cout << "Weight (in kilograms): " << setw(3) << getweight() << endl;
    cout << "Height (in meters): " << setw(10) << getheight() << endl;
    cout << "Age: " << setw(21) << getAge() << " year(s)" << endl;
    cout << "Body Mass Index (BMI): " << setw(8) << getBMI() << endl;
    cout << "Maximum Heart Rate: " << setw(7) << getMaximumHeartRate() << endl;
    cout << "Target Heart Rate: " << setw(11) << getTargetHeartRate() << endl;
    cout << "\nBMI VALUES CHART" << endl;
    cout << "Underweight:   less than 18.5" << endl;
    cout << "Normal:        between 18.5 and 24.9" << endl;;
    cout << "Overweight:    between 25 and 29.9" << endl;
    cout << "Obesse:         30 or greater" << endl;
}

// implementaion details for functions in HealthProfileStub.h


void set_firstName(string firstName)
{
	HealthProfile.firstName=firstName;
}
void set_lastName(string lastName)
{
	HealthProfile.lastName=lastName;
}
void set_gender(string gender)
{
	HealthProfile.gender=gender;
}
void set_day(int day)
{
	HealthProfile.day=day;
}
void set_month(int month)
{
	HealthProfile.month=month;
}
void set_year(int year)
{
	HealthProfile.year=year;
}
void set_weight(int weight)
{
	HealthProfile.weight=weight;
}
void set_height(double height)
{
	HealthProfile.height=height;
}

void set_Age(int today, int thisMonth, int thisYear)
{
	Age = thisYear - year;
}

string get_firstName()
{
	return firstName;
}

string get_lastName()
{
	return lastName;
}

string get_gender()
{
	return gender;
}

int get_day()
{
	return day;
}

int get_month()
{
	return month;
}

int get_year()
{
	return year;
}

int get_weight()
{
	return weight;
}

double get_height()
{
	return height;
}

int get_Age()
{
	return thisYear - Age;
}

double get_BMI()
{
	return weight/(height*height);
}

int get_MaximumHeartRate()
{
	return 220 - Age;
}

double get_TargetHeartRate()
{
	return MaximumHeartRate*50/100;
}

double get_TargetHeartRate()
{
	return MaximumHeartRate*85/100;
}



int Age() // Calculate Patient's age;
{
int month;
int day;
int year;
 
cout << "Enter month of birth (in form mm)\n" << endl;
cin >> month;
 
cout << "Enter day of birth (in form dd )\n" << endl;
cin >> day;
 
cout << "Enter year of birth (in form yyyy)\n" << endl;
cin >> year;
 
return HealthProfile.thisYear - year;
}
 
int MaximumHeartRate // Calculate Maximum Heart Rate
{
return 220 - age;
}
 
int TargetHeartRate // Calculate Target Heart Rate 50% of maximum heart rate
{
int TargetHeartRate;
TargetHeartRate = MaximumHeartRate/100(50);
 
return TargetHeartRate;
}

int TargetHeartRate // calculate Target Heart Rate 85% of maximum heart rate 
{
int TargetHeartRate;
TargetHeartRate = MaximumHeartRate/100(85);
}


double BMI() // calculate BMI
{
 
double height;
int weight;

BMI = weight/height*height;
 
return BMI;
 
}




// Implementation for the constructor and getInformation function has already been provided

