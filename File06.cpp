/*Input three numbers and print the largest.*/
#include<iostream>
using namespace std;
int main()
{
    int num1, num2,num3;
    cout << "Enter First Number: ";
    cin >> num1;
    cout << "Enter Second Number: ";
    cin >> num2;
    cout << "Enter Third Number: ";
    cin >>  num3;
    if(num1 > num2 && num1 > num3)
    {
    cout << num1 <<" is greater from "<< num2 << " and " << num3;
    }
    else if (num2>num1 && num2>num3)
    {
     cout << num2 <<" is greater from "<< num1 << " and " << num3;
    }
    else if (num3>num1 && num3>num2)
{
     cout << num3 <<" is greater from "<< num1 << " and " << num2;
}
    else 
    cout<<"All are equal "; 
}