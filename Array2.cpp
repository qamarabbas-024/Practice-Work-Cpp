/*Write a program to take n integers from the user,
 store them in an array, and calculate the sum of all elements using a for loop.*/
#include<iostream>
using namespace std;
int main()
{
    int n , sum = 0 ;
    cout << "Enter Number Size: ";
    cin >> n;
    int array[n];
    cout << "Enter " << n <<" intergers: ";
for(int i = 0 ; i < n; i++)
{
    cin >> array[i];
}
for(int i = 0;i<n;i++)
{
    sum = sum + array[i];
}
    cout << "Sum of all intergers = " << sum ;
}