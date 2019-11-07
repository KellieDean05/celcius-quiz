/*
quiz 3.2 celcius temperature 

*/
#include <cstdlib>  // Provides EXIT_SUCCESS
#include <iostream>  // Provides cout, cerr, endl
#include "Input_Validation_Extended.h" // Provides getValidatedInput<T>(), a header File with a Template Class
                              // Extended 2-11-2016 by Dr. McMillan to add validation methods by datatype
#include<string> //for string manipulation
#include<sstream> //for string manipulation and comparison
#include<iomanip>
using namespace std;
int main() 
{
 // Declare and initialze the variables for celsius when fahrenheit is given.
     char selection = '\0';
     double celsius = 0.0;
     double fahrenheit = 0.0;
      //iomanip will set four decimal points. 
    cout << fixed <<setprecision(4);
 while (celsius != 'E')
{
  cout << "\nPlease enter 'F' for Fahrenheit to Celsius conversion or 'E' to exit: " << endl;
  cin >> fahrenheit; //I don't know what I did. 
}
// convert fahrenheit to celsius.
 if(celsius == 'C')
 {
 cout << "\nYou have decided to convert Fahrenheit to Celsius." << endl;
  cout << "\n Please Enter your Fahrenheit temperature: " << endl;
  cin >> fahrenheit;

 cout << "\nOnly 'F' or 'E' can be used. Please Try again. " << endl;
 cin >> celsius;
 } 
 else if (celsius == 'E')
 {
   cout << "Byeeee!" << endl;
 }
  return 0;
 }
