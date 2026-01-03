/* Write a program that asks the user for the radius of a circle and calculates the area.
(Use formula: Area = 3.14 × radius × radius)*/
#include<iostream>
using namespace std;
int main()
{
    float radius, area;
    cout << "Enter radius: ";
    cin >> radius;
    area = 3.14 * radius * radius;
    cout << "Area of Circle = " << area ;

}