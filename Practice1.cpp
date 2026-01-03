/*Write a program to find the maximum of three numbers.*/
#include<iostream>
using namespace std;
int main()
{
    int n1,n2,n3,max ;
    cout << "Enter Three Numbers:";
    cin >> n1 >>n2 >>n3 ;
    max = n1;
    if(n2 > max)
    max = n2 ;
    if (n3 > max)
    max = n3;
    cout << "Max:"<<max;
}