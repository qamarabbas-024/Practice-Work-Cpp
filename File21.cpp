/*Write a program to input a number and calculate its factorial using a while loop.*/
#include<iostream>
using namespace std;
int main()
{
    int n ,i = 1,factorial = 1;
    cout << "Enter value of n: ";
    cin >> n ;
    while(i<=n)
    {
       factorial = factorial*i;
       i++;
    }
    cout << "factorial of "<< n << " = " << factorial;  
}