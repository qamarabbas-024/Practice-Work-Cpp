#include<iostream>
using namespace std;
int main()
{
    int  num,sum = 0;
    cout << "Enter a Number: ";
    cin >> num ;
    for(int i = 0 ; i <= num;i++)
    {
        sum += i;
    }
    cout << "Sum of all numbers = " << sum ;
}