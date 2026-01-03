/*Write a program that asks the user to enter two numbers and displays their sum.*/
#include<iostream>
using namespace std;
int main()
{
 int num1 ,num2 ,sum ;
 cout << "Enter first number: ";
 cin >> num1 ;
 cout << "Enter second number: ";
 cin >> num2;
 sum = num1 + num2 ;
 cout << num1 <<" + " << num2 <<" = " << sum;
}