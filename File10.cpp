/*Input two numbers and an operator (+, -, *, /) and print the result.*/
#include<iostream>
using namespace std;
int main()
{
    int num1 ,num2;
    char op ;
    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;
    cout << "Enter the operator: ";
    cin >> op ;
    if( op == '+')
{
    cout <<num1 <<" + " <<num2 <<" = "<< num1+num2;
}
 else if( op == '-')
{
    cout <<num1 <<" - " <<num2 <<" = "<< num1-num2;
}
 else if( op == '*')
{
    cout <<num1 <<" * " <<num2 <<" = "<< num1*num2;
}
 else if( op == '/')
{
    cout <<num1 <<" / " <<num2 <<" = "<< num1/num2;
} 

}