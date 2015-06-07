/*HealthProfile.h
 *HealthProfile class definition. This file represents HealthProfile's public
 * interface without revealing implementations of HealthProfile's member
 * functions, which are defined in HealthProfile.cpp
 *
 * Stub file for Programming Assignment #2
 *
 * Name:        [ EnEJI, MICHAEL ODEY ]
 * Matric No:   [ PDS/2013/0721]
 * Department:  [ COMPUTER SCIENCE
 *
 */

#include <string>           // uses C++ string class 
using namespace std;

// HealthProfile class definition
class HealthProfile
{
    // public interface
public:
    HealthProfile( string, string, string, int, int, int, int, double, int, int, int ); // constructor that initializes patient information
    int get_Age();                   // function to get patients age in years
    double get_BMI();                // function to calculate and return BMI
    int get_MaximumHeartRate();      // function to calculate and return maximum heart rate
    double get_TargetHeartRate();    // function to calculate and return target heart rate
    void get_Information(int);          // function to print object information
    
    //get and set function prototypes of each class attribute
    
   void set_Age(int);
   void set_BMI(double);
   void set_MaximumHeartRate(int);
   void set_TargetHeartRate(double);
   void set_Information();	
	
   string get_firstName();
   string get_lastName();
   string get_gender();
   int get_month();
   int get_day();
   int get_year();
   int get_weight();
   double get_height();
   int get_today();
   int get_thisMonth();
   int get_thisYear();

 
    // Function prototypes for the constructor, getAge(), getBMI(), getMaximumHeartRate()
    // getTargetHeartRate() and getInformation() has alrady been provided
    
    
    // private interface
private:
	
    string firstName;               // variable to hold firstname
    string lastName;                // variable to hold lastname
    string gender;                  // variable to hold gender
    int month;                      // variable to hold month
    int day;                        // variable to hold day
    int year;                       // variable to hold year
    double height;                  // variable to hold height
    int weight;                     // variable to hold weight
    int age;                        // variable to hold age
    
}; // end class HealthProfile

