/*
 * main.cpp
 * HealthProfile program . This file represents HealthProfile's public
 * interface without revealing implementations of HealthProfile's member
 * functions, which are defined in HealthProfile.cpp
 *
 * Stub file for Programming Assignment #2
 *
 * Name:        [ Eneji, Michael Odey ]
 * Matric No:   [ PDS/2013/0721]
 * Department:  [ Computer Science ]
 *
 */

#include <iostream>
#include <string>           // uses C++ string class
#include <iomanip>
using namespace std;

int main()
{
    // Variable declarations
    string firstName;
    string lastName;
    string gender;
    int month;
    int day;
    int year;
    double height;
    int weight;
    int today;
    int thisMonth;
    int thisYear;
    
    // Prompt for patient information
    cout << "Welcome to our program to computerize healthcare records\n";
    cout << "please fill-in your information as requested. Thank you\n";
    cout << "\nKindly enter todays day, month and year using numeric representations only\n";
    cout << "e.g. 03, 05, 2015 indicating 3rd of May, 2015, else software would break\n";
    
    // code to receve input from user here
    cout << "Please enter first name of patient\n "; // collecting first name of patient
    cin >> firstName;
    
    cout << "Please enter last name of patient\n";  // collecting last name of patient
    cin >> lastName;
    
    cout << "Enter gender of patient (male or female)\n";  // collecting gender of patient
    cin >> gender;
    
    cout<< "Enter month of birth (in the form mm)\n";  // collecting birth-month of patient
    cin >> month;
    
    cout << "Enter day of birth (in the form dd)\n";  // collecting birth-day of patient
    cin >> day;
    
    cout << "Enter year of birth (in the form yyyy)\n"; // collecting birth-year of patient
    
    cout << "Enter height of patient in inches\n";  // collecting height of patient in inches
    cin >> height;
    
    cout << "Enter weight of patient in pounds\n";  // collecting weight of patient in pounds
    cin >> weight;
    
    cout << "Enter today's day\n";  // collecting current day
    cin >> today;
    
    cout << "Enter current month\n"; // collecting current month
    cin >> thisMonth;
    
    cout << "Enter current year\n"; // collecting current year
    cin >> thisYear;
    
    // Instantiate an object of class HealthProfile - passing relevant values to the constructor 
   HealthProfile patient(firstName, lastName, gender, day, month, year, height, weight, today, thisYear, thisMonth)  
	// Print information from the object - by calling getInformation() function
   cout << patient.getInformation(); 
int Age;

double BMI;

int MaximumHeartRate;

double TargetHeartRate;

Age = thisYear - year; // calculation of age

BMI = BMI; // BMI calculation

MaximumHeartRate = 220 - Age;  // calculating maximum heart rate of patient

TargetHeartRate = MaximumHeartRate*0.5;  // calculating target heart rate of patient 50%

TargetHeartRate = MaximumHeartRate*0.85; // calculating target heart rate of patient 85%

cout << "The Patient's Age is: " << Age << endl;  // output function to show patient's age

cout << "The Patient's BMI is: " << BMI << endl;  // output function to show patient's BMI

cout << "The Patient's Maximum Heart Rate is: " << MaximumHeartRate << endl;    // output function to show patient's maximum heart rate
 
cout << "The Patient's Target Heart Rate is: " << TargetHeartRate << endl;  // output function to show patient's target heart rate

cout << "thank you" << endl;

return 0;
    
};
