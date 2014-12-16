/********
 *
 * lab3
 * problem 1
 *
 * Write a simple program that convert the temperature in degree Celsius to degree Fahrenheit and vice versa using the basic concept of class and object. Make separate class for Centigrade and Fahrenheit which will have the private member to hold the temperature value and make conversion functions in each class for conversion from one to other. For example you will have function toFahrenheit() in class Celsius that converts to Fahrenheit scale and returns the value. 
 *
 */
// header file for input and output operation
#include <iostream>
// using standard namespace
using namespace std;
#define SUCESS 0
/**
 * Centigrade class that store centigrade values and convert it into ferhenhiet
 */
class Centigrade
{
private:
  float temperature;
public:
  Centigrade(float t){temperature = t;}
  float toFerhenheit()
  {
    return (temperature)/100*180+32;
  }
};

/**
 * Centigrade class that store centigrade values and convert it into ferhenhiet
 */
class Ferhenheit
{
private:
  float temperature;
public:
  Ferhenheit(float t){temperature = t;}
  float toCelcius()
  {
    return (temperature-32)/180*100+0;
  }
};

int main()
{
  float temp;
  int choice;
  cout << "Select temperature unit to change into another"<< endl;
  cout << "1. Celcius" << endl;
  cout << "2. Ferhenheit" << endl;
  cin >> choice;
  if (choice == 1)
    {
      cout << "Enter temperature in celcius" << endl;
      cin >> temp;
      Centigrade C(temp);
      cout << "temperature in Ferhenheit " << C.toFerhenheit();
      
    }
  else if (choice == 2) 
    {
      cout << "Enter temperature in ferhenheit " << endl;
      cin >> temp;
      Ferhenheit F(temp);
      cout << "temperature in Celcius " << F.toCelcius();
      
    }
      
  
   return SUCESS;
}

