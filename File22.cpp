/*Write a program to input 10 numbers, calculate the sum, and print the result using a while loop.*/
#include<iostream>
using namespace std;
int main()
{
    int num,sum = 0,i = 1;
    cout << "Enter 10 Numbers"<<endl;
    while(i<=10)
    {
     cin >> num;
     sum += num;
     i++;
    }
   cout << "Sum of all numbera = "<<sum;
}