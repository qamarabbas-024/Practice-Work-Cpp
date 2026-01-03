/*Write a program that takes the base and height of a triangle and
 calculates the area using formula:
Area = 0.5 × base × height*/
#include<iostream>
using namespace std;
int main()
{
    float base ,height,area ;
    cout << "Enter Value of Base and Height: ";
    cin >>base >> height;
    area = 0.5*base*height;
    cout << "Area = " << area;
}