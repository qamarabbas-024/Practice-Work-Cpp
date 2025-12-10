#include<iostream>
using namespace std;
int main()
{
    int number[5] = {4,6,5,4,3};
    int sum = 0;
    for(int i = 0 ; i<5;i++)
    {
        sum +=number[i] ;
    }
    cout << "Sum = "<<sum;    
}