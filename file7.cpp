/*Write a program that takes a number and displays the square and cube of the number.*/
#include<iostream>
using namespace std;
#include<cmath>
int main()
{
    int number,square,cube;
    cout << "Enter the number: ";
    cin >> number ;
    square = pow(number,2);
    cube = pow(number,3);
    cout << "Square = " << square <<endl << "Cube = " <<cube ;
}