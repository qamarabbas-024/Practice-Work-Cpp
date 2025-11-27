/*Write a program to input a number and print its multiplication table using a while loop.*/
#include<iostream>
using namespace std;
int main()
{
    int n ,i = 1;
    cout << "Enter value of n: ";
    cin >> n ;
    while(i<=10)
    {
        cout << n <<" x " << i << " = " << n*i <<endl;
        i++ ; 
    }

}