/*Write a program to check whether a given number is even or odd.*/
#include<iostream>
using namespace std;
int main()
{
 int n ;
 cout << "Enter a Number: ";
 cin >> n ;
 if (n%2 == 0)
 cout <<n<< " is a even number ";
 else 
 cout << n << " is a odd number ";
}