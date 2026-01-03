/* Write a program that takes a temperature in Celsius
 and converts it to Fahrenheit using formula:
F = (C × 9/5) + 32*/
#include<iostream>
using namespace std;
int main()
{
    float inCelsius ,infahrenheit;
    cout << "Enter temperature in Celsius: ";
    cin >> inCelsius;
    infahrenheit = (inCelsius*9/5)+32;
    cout << inCelsius << " Celsius in Fahrenheit = " << infahrenheit;

}