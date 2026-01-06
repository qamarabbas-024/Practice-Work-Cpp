#include<iostream>
using namespace std;
int EorO(int x)
{
    if (x<0)
    cout << "Number is negative";
    else if(x%2 == 0)
    cout << "Even ha bhai";
    else 
    cout << "Odd";
    return x ;
}
int main()
{
    int num ;
    cout << "Enter a number: ";
    cin >> num;
 EorO(num);
 return 0;
}
