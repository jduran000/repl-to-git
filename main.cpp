//Week 2 Project; Convert user input from Celsius to Fahrenheit
#include <iostream>
using namespace std;

float myTempC;
float myTempF;

int main() 
{
  // Prompt user for temperature to convert Celsius to Fahrenheit
  cout << "Enter your own temperature in ° C:" << endl;
  cin >> myTempC;
  myTempF = (myTempC * 9/5) + 32;
  cout << myTempC << "° C is " << myTempF << "° F ";

  cout << "All done!" << endl;
}